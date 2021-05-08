#!/usr/bin/env perl

use strict;
use Cwd 'abs_path';


$ENV{HARNESS_ACTIVE} = 1 if scalar @ARGV && shift eq '-tap';
$ENV{TOP} = abs_path($ENV{TOP}) if exists $ENV{TOP};

if ($^O eq 'MSWin32') {
    # Use system on Windows, exec doesn't work the same there and
    # GNUmake thinks the test has finished too soon.
    my $status = system('./testValues');
    die "Can't run ./testValues: $!\n" if $status == -1;
    exit $status >> 8;
}
else {
    exec './testValues' or die "Can't run ./testValues: $!\n";
}
