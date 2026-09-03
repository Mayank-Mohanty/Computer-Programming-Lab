echo "Enter A: "
read a
echo "Enter B: "
read b
a=$(($a+$b))
b=$(($a-$b))
a=$(($a-$b))
echo "A=$a  B=$b"

