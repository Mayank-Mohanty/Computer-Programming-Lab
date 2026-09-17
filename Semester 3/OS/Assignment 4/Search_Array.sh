echo "Enter array elements:"
read -a arr
echo "Enter number to search:"
read num
found=0
for i in "${arr[@]}"
do
    if [ "$i" -eq "$num" ]
    then
        found=1
        break
    fi
done
if [ $found -eq 1 ]
then
    echo "Number found"
else
    echo "Number not found"
fi