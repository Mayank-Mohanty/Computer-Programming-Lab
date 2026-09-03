echo "Enter 1st num: "
read a
echo "Enter 2nd num: "
read b
if [ $a -gt $b ]
then
	echo "$a is larger"
else
	echo "$b is larger"
fi

