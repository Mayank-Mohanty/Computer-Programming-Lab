echo "Enter a num: "
read n
if [ $((n%2)) -eq 0 ]
then
	echo "$n is Even Number"
else
	echo "$n is Odd Number"
fi

