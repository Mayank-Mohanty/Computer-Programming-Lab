if [ $1 -gt $2 ]
then
	echo "Largest is $1"
elif [ $2 -gt $1 ]
then
	echo "Largest is $2"
else
	echo "$1 and $2 are equal"
fi

