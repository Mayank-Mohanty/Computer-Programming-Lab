echo "Enter Number:"
read N
org=$N
rev=0
while [ $N -ne 0 ]
do
        d=$((N%10))
        rev=$(((rev*10)+d))
        N=$((N/10))
done
if [ $org -eq $rev ]
then
	echo "Palindrome"
else
	echo "Not Palindrome"
fi

