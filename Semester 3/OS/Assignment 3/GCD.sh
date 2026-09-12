echo "Enter 2 Numbers:"
read a
read b
while [ $b -ne 0 ]
do
	rem=$((a%b))
	a=$b
	b=$rem
done
echo "GCD = $a"

