echo "Enter N:"
read N
for (( i=1; i<=$N; i++))
do
	if [ $((i%2)) -eq 0 ]
        then
		echo "$i"
	fi
done

