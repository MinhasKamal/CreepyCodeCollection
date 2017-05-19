#!/usr/bin/perl
# Developer: Thomas Lang.

use v5.15.6;

my @prim = (sub { return @_ if !@_; my @t = __SUB__->(grep{$_ % @_[0] > 0} @_); unshift @t, shift @_; return @t; })->(2..100);

print "Primes from 2 to 100: ", join(", ", @prim) ,"\n";

