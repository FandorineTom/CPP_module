#!/bin/sh
echo VALUE 0
echo
./scalar 0
echo
echo VALUE -100
echo
./scalar -100
echo
echo VALUE -200
echo
./scalar -200
echo
echo VALUE 42
echo
./scalar 42
echo
echo VALUE 42.4242
echo
./scalar 42.4242
echo
echo VALUE 100
echo
./scalar 100
echo
echo VALUE 500
echo
./scalar 500
echo
echo VALUE +2147483647
echo
./scalar +2147483647
echo
echo VALUE +2147483700
echo
./scalar +2147483700
echo
echo VALUE -2147483648
echo
./scalar -2147483648
echo
echo VALUE 5555555555.9999
echo
./scalar 5555555555.9999
echo
echo VALUE 999999999999999999999999999999999999.99999999999
echo
./scalar 9999999999999999999999999999999999999.99999999999
echo
echo VALUE nan
echo
./scalar nan
echo
echo VALUE inf
echo
./scalar inf
echo
echo VALUE -inf
echo
./scalar -inf
echo
echo VALUE ABC
echo
./scalar ABC
