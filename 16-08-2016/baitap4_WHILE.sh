#!/bin/sh
pass="123anh"
echo "Moi ban nhap mat khau: "
read mk;
while [ $mk != $pass ]
do
	echo "Mat khau ban da nhap khong dung !!!"
	echo "Moi ban nhap lai mat khau:"
	read mk
done 




