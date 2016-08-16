#!/bin/sh
echo "Moi ban nhap vao mot so nguyen $1 "
if [ ` expr $1 % 2 ` -eq 0 ]
then
	echo "$1 la so chan"
else
	echo "$1 la so le"
fi
exit 0

