echo "Enter Number:"
read N
echo "Enter Digit:"
read val
ctr=0
while [ $N -ne 0 ]
do
        d=$((N%10))
	if [ $d -eq $val ]
	then
		ctr=$((ctr+1))
	fi	
        N=$((N/10))
done
echo "No. Of Occurrence = $ctr"

