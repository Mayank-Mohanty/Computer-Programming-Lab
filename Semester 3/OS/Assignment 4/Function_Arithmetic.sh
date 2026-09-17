calculate()
{
    a=$1
    b=$2
    add=$((a + b))
    sub=$((a - b))
    mul=$((a * b))
    echo "Addition = $add"
    echo "Subtraction = $sub"
    echo "Multiplication = $mul"
}
echo "Enter two numbers:"
read a b
calculate $a $b