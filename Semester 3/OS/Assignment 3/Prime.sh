echo "Enter Number: "
read N
valid=1
for (( i=2; i<=$N/2; i++))
do
	if [ $((N%i)) -eq 0 ]
	then
		valid=0
		break
	fi
done
if [ $valid -eq 1 ]
then
	echo "Prime Number"
else
	echo "Composite Number"
fi

