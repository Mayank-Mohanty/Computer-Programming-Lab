echo "Enter array elements:"
read -a arr
count=0
for i in "${arr[@]}"
do
    if [ $((i % 2)) -ne 0 ]
    then
        count=$((count + 1))
    fi
done
echo "Number of odd elements = $count"