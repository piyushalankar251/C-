echo -n "Enter the 1st integer : "
read n1
echo -n "Enter the second integer : "
read n2
if [ `expr $n1 % $n2` -eq 0 ]
then
x=`expr $n1 / $n2`
echo "THE 1st NUMBER IS DIVISIBLE BY 2nd NUMBER "
echo "The quotient is $x"
else
	if [ `expr $n2 % 5` -eq 0 ]
	then
	x=`expr $n1 \* $n2`
	echo "THE 2nd INTEGER IS DIVISIBLE BY 5 "
	echo "The prodect is $x"
	else
	x=`expr $n1 + $n2`
	echo "THE NUMBERS DO NOT SATISFY ANY GIVEN CONDITION "
	echo "The addition is $x"
	fi
fi

