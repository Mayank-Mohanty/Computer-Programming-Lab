echo "Enter Number:"
read N
org=$N
sum=0
nod=0
while [ $N -ne 0 ]
do
        nod=$((nod+1))
        N=$((N/10))
done
N=$org
while [ $N -ne 0 ]
do
        d=$((N%10))
        sum=$((sum+(d**nod)))
        N=$((N/10))
done
if [ $org -eq $sum ]
then
	echo "Armstrong Number"
else
	echo "Not Armstrong Number"
fi

