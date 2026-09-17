echo "Enter elements of first array:"
read -a arr1
echo "Enter elements of second array:"
read -a arr2
echo "Element-wise addition:"
for (( i=0; i<${#arr1[@]}; i++ ))
do
    sum=$((arr1[i] + arr2[i]))
    echo -n "$sum "
done