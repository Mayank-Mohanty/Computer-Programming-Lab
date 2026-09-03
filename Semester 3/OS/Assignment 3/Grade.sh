echo "Enter Marks: "
read n
if [ $n -ge 90 ]
then
	echo "Grade: O"
elif [ $n -ge 80 ]
then
	echo "Grade: E"
elif [ $n -ge 70 ]
then
	echo "Grade: A"
elif [ $n -ge 60 ]
then
        echo "Grade: B"
elif [ $n -ge 50 ]
then
        echo "Grade: C"
elif [ $n -ge 40 ]
then
        echo "Grade: D"
else
	echo "Grade: U"
fi

