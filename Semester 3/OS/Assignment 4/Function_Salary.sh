salary()
{
    basic=$1
    hra=$((basic * 20 / 100))
    da=$((basic * 10 / 100))
    total=$((basic + hra + da))
    echo "Basic Salary = $basic"
    echo "HRA = $hra"
    echo "DA = $da"
    echo "Total Salary = $total"
}
echo "Enter basic salary:"
read basic
salary $basic