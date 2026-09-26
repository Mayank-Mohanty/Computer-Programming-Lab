echo "Enter rows and columns:"
read r c
echo "Enter Matrix A:"
for ((i=0;i<r;i++))
do
    for ((j=0;j<c;j++))
    do
        read A[$i,$j]
    done
done
echo "Enter Matrix B:"
for ((i=0;i<r;i++))
do
    for ((j=0;j<c;j++))
    do
        read B[$i,$j]
    done
done
echo
echo "Matrix A:"
for ((i=0;i<r;i++))
do
    for ((j=0;j<c;j++))
    do
        echo -n "${A[$i,$j]} "
    done
    echo
done
echo
echo "Matrix B:"
for ((i=0;i<r;i++))
do
    for ((j=0;j<c;j++))
    do
        echo -n "${B[$i,$j]} "
    done
    echo
done
while true
do
    echo
    echo "MENU:"
    echo "1. Addition"
    echo "2. Subtraction"
    echo "3. Multiplication"
    echo "4. Exit"
    read -p "Enter choice: " ch
    case $ch in
    1)
        echo "Addition:"
        for ((i=0;i<r;i++))
        do
            for ((j=0;j<c;j++))
            do
                echo -n "$((A[$i,$j] + B[$i,$j])) "
            done
            echo
        done
        ;;
    2)
        echo "Subtraction:"
        for ((i=0;i<r;i++))
        do
            for ((j=0;j<c;j++))
            do
                echo -n "$((A[$i,$j] - B[$i,$j])) "
            done
            echo
        done
        ;;
    3)
        echo "Multiplication:"
        for ((i=0;i<r;i++))
        do
            for ((j=0;j<c;j++))
            do
                sum=0
                for ((k=0;k<c;k++))
                do
                    sum=$((sum + A[$i,$k] * B[$k,$j]))
                done
                echo -n "$sum "
            done
            echo
        done
        ;;
    4)
        exit
        ;;
    *)
        echo "Invalid choice"
        ;;
    esac
done