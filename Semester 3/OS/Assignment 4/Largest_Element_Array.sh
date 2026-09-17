echo "Enter array elements:"
read -a arr
largest=${arr[0]}
for i in "${arr[@]}"
do
    if [ $i -gt $largest ]
    then
        largest=$i
    fi
done
echo "Largest element = $largest"