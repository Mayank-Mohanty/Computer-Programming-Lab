#1. A data analyst at a marketing company needs a software, and you have been assigned to analyse the customer data Software program lead by him. You notice a bug in the system that the customer IDs in the database are not unique and there are many duplicates. To fix this issue, you decide to increment every digit of the customer ID by a certain number 'n', which will make each customer ID unique. If number exceeds 9 it should restart at 0.
n=int(input("Enter n: "))
inc=int(input("Enter increment value: "))
rev=0
while(n!=0):
    digit=n%10
    digit=(digit+inc)%10
    rev=rev*10+digit
    n//=10
while(rev!=0):
    digit=rev%10
    n=n*10+digit
    rev//=10
print("Answer:",n)

#2. Imagine you're a teacher and you want to motivate your students to learn addition with carry. You decide to conduct a fun exercise where you ask each student to solve a set of addition problems on a worksheet. For each problem they solve correctly with a carry, you reward them with a chocolate. To keep track of the number of carries each student performs, you write a program that takes each addition problem as input, counts the number of carries needed to solve it, and outputs the count for each problem. With this program, you can incentivize your students to learn and practice addition with carry while also keeping track of their progress.
num1=int(input("Enter num1: "))
num2=int(input("Enter num2: "))
count=0
carry=0
while(num1!=0 or num2!=0):
    digit1=num1%10
    digit2=num2%10
    if (digit1+digit2+carry>=10):
        carry=1
        count+=1
    else: carry=0
    num1//=10
    num2//=10
print("Chocolates Rewarded:",count)