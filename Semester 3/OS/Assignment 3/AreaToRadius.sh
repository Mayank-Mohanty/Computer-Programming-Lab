echo "Enter Side Of Square: "
read s
area=$((s*s))
r=$(echo "scale=2; sqrt($area/3.14)" | bc -l)
echo "Radius Of Circle = $r"

