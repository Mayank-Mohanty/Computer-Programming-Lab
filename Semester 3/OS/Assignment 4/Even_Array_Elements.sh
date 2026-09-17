echo "Enter array elements:"
read -a arr
echo "Even elements are:"
for i in "${arr[@]}"
do
    if [ $((i % 2)) -eq 0 ]
    then
        echo -n "$i "
    fi
done