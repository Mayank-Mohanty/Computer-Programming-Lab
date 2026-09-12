echo "Enter Number:"
read N
sum=0
while [ $N -ne 0 ]
do
	d=$((N%10))
	sum=$((sum+d))
	N=$((N/10))
done
echo "Sum Of Digits = $sum"

