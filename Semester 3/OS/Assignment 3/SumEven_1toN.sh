echo "Enter N:"
read N
sum=0
for (( i=1; i<=$N; i++))
do
        if [ $((i%2)) -eq 0 ]
        then
                sum=$((sum+i))
        fi
done
echo "Sum = $sum"

