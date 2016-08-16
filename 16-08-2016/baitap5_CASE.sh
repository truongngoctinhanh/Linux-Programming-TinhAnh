#!/bin/sh
echo " Neu ban sinh nam 1993 thi hien nay ban bao nhieu tuoi"
echo "A. 10	B. 20	C. 23	D. 24"
echo "Hay chon A/B/C/D"
read re
case $re in
	"a" | "b" | "d" | "A" | "B" | "D" )
	echo "Tiec qua, ban da tra loi sai roi"
	;;
	"c" | "C" )
	echo "Xin chuc mung, ban da tra loi dung"
	;;
	* )
	echo "Dap an cua ban khong hop le"
	exit 1
	;;
esac
exit 0
