echo "Enter a string:"
read str
echo "Enter character:"
read key
count=0
for (( i=0; i<=${#str}-1; i++ ))
do
	if [ "${str:i:1}" = "$key" ]
	then
		count=$((count+1))
	fi
done
echo "No. of occurence: $count"

