echo "Enter Number:"
read N
rev=0
while [ $N -ne 0 ]
do
        d=$((N%10))
        rev=$(((rev*10)+d))
        N=$((N/10))
done
echo "Reverse Number = $rev"

