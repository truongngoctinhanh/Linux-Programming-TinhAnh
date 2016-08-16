#!/bin/sh
i=0;
tong=0;
for i in ` seq 1 1510 `
do
	if [ ` expr $i % 2 ` -ne 0 ]
	then
		tong=$(($tong+$i))
	fi
done
echo "Tong cac so le tu 0 den 1510 la $tong"
exit 0 
