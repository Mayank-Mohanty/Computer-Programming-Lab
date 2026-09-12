echo "Enter 2 Operands: "
read a
read b
echo "Enter Operator: "
read op
case $op in
	'+')
		echo "$((a+b))"
		;;
	'-')
		echo "$((a-b))"
		;;
	'*')
		echo "$((a*b))"
		;;
	'/')
		echo "$((a/b))"
		;;
	'%')
		echo "$((a%b))"
		;;
	*)
		echo "Invalid Operator"
		;;
esac

