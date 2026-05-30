'''
While Loop
for Loop


3 Rules for any loop

1. start.  --> initlization
2. end.    --> condition
3. change. --> step increment/decrement

WAP to display 1 to 10 number

1 2 3 .... 8 9 10.  -->.  1<=i<=10

i=1
i<=10
i=i+1

While Syntax:


initli
while(condition or test expression => True/False):
        st1
        st2
        .
        .
        stn
        step


Note: Once the last statement of while loop is executed
      it will again go back and check the condition
      
n=int(input('Enter n: '))
i=1
while(i<=n):
        print(i,end=' ')
        i=i+1
        
        
10 9 8 7.....3 2 1. --->.   10>=i>=1



i=10
i>=1
i=i-1

n=int(input('Enter n: '))
i=n
while(i>=1):
        print(i,end=' ')
        i=i-1
        
n=int(input('Enter n: ')) #n=10
i=n # i=10
while(i>=1): 
        print(i,end=' ') 
        i=i-1 #i=11 12 13
        
        
for syntax:


for var_name in range(start,end,step):
    st1
    st2
    .
    .
    .
    stn
    
    
range(start,end,step)
range(start,end)
range(end)

Default Values:

start => 0
end => exclusive => end-1
step => +1

we always add step value to start
if start reaches end--> output

print(list(range(1,10,1))) #i=1. i<10. i=i+1
print(list(range(1,10)))
print(list(range(10)))
print(list(range(10,0,-1)))
print(list(range(10,0,1)))

for i in range(1,11,1):
    print(i,end=' ')
    
45 40 35 30.....5


for i in range(45,4,-5):
    print(i,end=' ')
    
3 keywords
  
pass  --> does nothing --> helps to avoid errors
break --> end the loop
continue --> skip an iteration


When will the loop end?
1. when the condition fails / iterations are completed --> naturally
2. executes break --> force



3 Models in Loop:

1. Series generation Model
2. Digit Separation Model
3. Pattern Series

3 Formulas

1. sum of generated values

sum=0 #outside the loop
sum=sum+generated_value #inside the loop

2. product of generated values

pro=1 #outside the loop
pro=pro*generated_value #inside the loop

3. reverse of generated values

rev=0 #outside the loop
rev=rev*10+generated_value #inside the loop

1. Series generation Model

1 to n numbers
n to 1 numbers
even numbers
odd numbers
sum of generated numbers
product | factorial 
AP GP HP ....series
Factors of a Number
Prime Number
prime numbers in an interval
perfect number

6 --> 1 2 3 =>1+2+3=> 6
28 --> 1 2 4 7 14 --> 1+2+4+7+14 => 28


Digit Separation --> only While loop (condition based)

1. sep digits of number
2. sum/pro/count
3. reverse
4. palindrome
5. armstrong
6. harshad
7. digit root
8. base --> base10 --> base 2



n=int(input('Enter n: '))
i=1
sum=0
while(i<=n):
    print(i,end=' ')
    sum=sum+i
    i=i+1
print("Sum:",sum)

n=int(input('Enter n: '))
i=1
fact=1
while(i<=n):
    fact=fact*i
    i=i+1
print("Factorial:",fact)

n=int(input('Enter n: '))
count=0
for i in range(1,n+1):
    if(n%i==0):
        count=count+1
        print(i,end=' ')
print('Count:',count)
if(count==2):
    print(n,"is a prime number")
else:
    print(n,"not a Prime Number")
    
n=int(input('Enter n: '))
sum=0
for i in range(1,n):
    if(n%i==0):
        sum=sum+i
        print(i,end=' ')
print("Sum:",sum)
if(sum==n):
    print("Perfect Number")
else:
    print("Not a Perfect Number")
    
    
n=int(input('Enter n: '))
count=0
sum=0
pro=1
while(n!=0):
    dig=n%10
    print(dig)
    sum=sum+dig
    pro=pro*dig
    n=n//10
    count=count+1
print('Count:',count)
print('Sum:',sum)
print('Pro:',pro)

n=int(input('Enter n: '))
rev=0
dup=n
while(n!=0):
    dig=n%10
    rev=rev*10+dig
    n=n//10
    print(dig,n,rev)
print("Reverse:",rev)
if(rev==dup):
    print("Palindrome")
else:
    print('Not a Palindrome')
    
    
n=13
bin ==>  1101

n=5

* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *

n=int(input('Enter n: '))
for row in range(n): #row loop # outer loop
    for col in range(n): #col loop # innerloop
        if (row<=col and row+col<=n-1
            or row>=col and row+col>=n-1):
            print(" ",end=' ')
        else:
            print('*',end=' ')
    print()

''''''
#1. 1 to n numbers
n=int(input("Enter n: "))
for i in range(1,n+1):
    print(i,end=" ")

#2. n to 1 numbers
n=int(input("Enter n: "))
for i in range(n,0,-1):
    print(i,end=" ")

#3. Odd numbers from 1 to n
n=int(input("Enter n: "))
for i in range(1,n+1,2):
    print(i,end=" ")

#4. Even numbers from 1 to n
n=int(input("Enter n: "))
for i in range(2,n+1,2):
    print(i,end=" ")

#5. Sum of generated numbers
n=int(input("Enter n: "))
sum=0
for i in range(1,n+1):
    sum+=i
print(f"Sum: {sum}")

#6. Product of generated numbers
n=int(input("Enter n: "))
pro=1
for i in range(1,n+1):
    pro*=i
print(f"Product: {pro}")

#7. Factors of a number
n=int(input("Enter n: "))
for i in range(1,n+1):
    if (n%i==0):
        print(i,end=" ")

#8. Prime numbers
n=int(input("Enter n: "))
ctr=0
for i in range(1,n+1):
    if (n%i==0):
        ctr+=1
if (ctr==2): print("Prime Number")
else: print("Not a Prime Number")

#9. Perfect number
n=int(input('Enter n: '))
sum=0
for i in range(1,n):
    if(n%i==0):
        sum+=i
if(sum==n): print("Perfect Number")
else: print("Not a Perfect Number")

# * * * * *
# * * * * *
# * * * * *
# * * * * *
# * * * * *
n=int(input("Enter n: "))
for row in range(1,n+1):
    for col in range(1,n+1):
        print("*",end=" ")
    print()


# *
# * *
# * * *
# * * * *
# * * * * *
n=int(input("Enter n: "))
for row in range(1,n+1):
    for col in range(1,row+1):
        print("*",end=" ")
    print()
    
# 1
# 1 2
# 1 2 3
# 1 2 3 4
# 1 2 3 4 5
n=int(input("Enter n: "))
for row in range(1,n+1):
    for col in range(1,row+1):
        print(col,end=" ")
    print()

# 1
# 2 2
# 3 3 3
# 4 4 4 4
# 5 5 5 5 5
n=int(input("Enter n: "))
for row in range(1,n+1):
    for col in range(1,row+1):
        print(row,end=" ")
    print()

# * * * * *
# * * * *
# * * *
# * *
# *
n=int(input("Enter n: "))
for row in range(1,n+1):
    for col in range(1,n-row+2):
        print("*",end=" ")
    print()

# 1 1 1 1 1
# 2 2 2 2
# 3 3 3
# 4 4
# 5
n=int(input("Enter n: "))
for row in range(1,n+1):
    for col in range(1,n-row+2):
        print(row,end=" ")
    print()

# 1 2 3 4 5
# 1 2 3 4
# 1 2 3
# 1 2
# 1
n=int(input("Enter n: "))
for row in range(1,n+1):
    for col in range(1,n-row+2):
        print(col,end=" ")
    print()

#         *
#       * *
#     * * *
#   * * * *
# * * * * *
n=int(input("Enter n: "))
for row in range(1,n+1):
    for col1 in range(1,n-row+1):
        print(" ",end=" ")
    for col2 in range(1,row+1):
        print("*",end=" ")
    print()
    
#         1
#       1 2
#     1 2 3
#   1 2 3 4
# 1 2 3 4 5
n=int(input("Enter n: "))
for row in range(1,n+1):
    for col1 in range(1,n-row+1):
        print(" ",end=" ")
    for col2 in range(1,row+1):
        print(col2,end=" ")
    print()

#     *
#    * *
#   * * *
#  * * * *
# * * * * *
n=int(input("Enter n: "))
for row in range(1,n+1):
    for col1 in range(1,n-row+1):
        print(" ",end=" ")
    for col2 in range(1,row+1):
        print("  *",end=" ")
    print()

# * * * * * * * * *
#   * * * * * * *
#     * * * * *
#       * * *
#         *
n=int(input("Enter n: "))
for row in range(1,n+1):
    for col1 in range(1,row):
        print(" ",end=" ")
    for col2 in range(1,2*(n-row)+2):
        print("*",end=" ")
    for col3 in range(1,row):
        print(" ",end=" ")
    print()
    
#         *
#       * * *
#     * * * * *
#   * * * * * * *
# * * * * * * * * *
n=int(input("Enter n: "))
for row in range(1,n+1):
    for col1 in range(1,n-row+1):
        print(" ",end=" ")
    for col2 in range(1,2*row):
        print("*",end=" ")
    for col3 in range(1,n-row+1):
        print(" ",end=" ")
    print()

# * * * * *
# *       *
# *       *
# *       *
# * * * * *
n=int(input("Enter n: "))
for row in range(1,n+1):
    for col in range(1,n+1):
        if (row==1 or col==1 or row==n or col==n):
            print("*",end=" ")
        else: print(" ",end=" ")
    print()

# * * * * *
# * *     *
# *   *   *
# *     * *
# * * * * *
n=int(input("Enter n: "))
for row in range(1,n+1):
    for col in range(1,n+1):
        if (row==1 or col==1 or row==n or col==n or row==col):
            print("*",end=" ")
        else: print(" ",end=" ")
    print()

# * * * * *
#   * * * *
#     * * *
#       * *
#         *
n=int(input("Enter n: "))
for row in range(1,n+1):
    for col in range(1,n+1):
        if (row<=col): print("*",end=" ")
        else: print(" ",end=" ")
    print()

# * * * * *
#   * * *
#     *
#   * * * 
# * * * * *
n=int(input("Enter n: "))
for row in range(1,n+1):
    for col in range(1,n+1):
        if ((row<=col and row+col<=n+1) or (row>=col and row+col>=n+1)): print("*",end=" ")
        else: print(" ",end=" ")
    print()

# *       *
# * *   * *
# * * * * *
# * *   * *
# *       *
n=int(input("Enter n: "))
for row in range(1,n+1):
    for col in range(1,n+1):
        if ((row>=col and row+col<=n+1) or (row<=col and row+col>=n+1)): print("*",end=" ")
        else: print(" ",end=" ")
    print()
'''
#     *    
#   * * *  
# * * * * *
#   * * *  
#     *    
n=int(input("Enter n: "))
for row in range(1,n+1):
    for col in range(1,n+1):
        pass
    print()
    
#     *    
#   *   *  
# *       *
#   *   *  
#     *    
n=int(input("Enter n: "))
for row in range(1,n+1):
    for col in range(1,n+1):
        pass
    print()