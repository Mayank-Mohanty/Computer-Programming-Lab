echo "Enter two numbers:"
read a b
res=1
for (( i=1; i<=b; i++ ))
do
    res=$((res*a))
done
echo "$a^$b = $res"