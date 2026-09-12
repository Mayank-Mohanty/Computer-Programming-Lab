echo "Enter Number:"
read N
fact=1
for (( i=$N; i>0; i--))
do
	fact=$((fact*i))
done
echo "Factorial = $fact"

