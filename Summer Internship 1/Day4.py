'''
Prime Number
import math
n1=int(input('Enter n1: '))
n2=int(input('Enter n2: '))
for n in range(n1,n2+1):
    if(n==1):
        print(n,"Not a Prime")
    elif(n==2):
        print(n,"Prime")
    else:
        flag=0
        for i in range(2,int(math.sqrt(n))+1):
            if(n%i==0):
                flag=1
                break
        if(flag==0):
            print(n,end=' ')
            
            
n=int(input('Enter n: ')) #n=5
i=2
count=0
while(count<n):#0<5. #1<5
    flag=0
    for j in range(2,int(math.sqrt(i))+1):#
        if i%j==0:
            flag=1
            break
    if flag==0:
        print(i,end=' ')#2 3 5
        count=count+1#count=1 2 3
    i=i+1 #4 5
    
    
n=784 ==> sum=19 ==> sum=10. ==> sum=1

n=int(input('ENter n: '))
sum=0
while(n!=0):
    dig=n%10
    sum=sum+dig
    n=n//10
    if(n==0 and sum>=10): #n=0 sum=1
        n=sum #n=10
        sum=0 #sum=0
print("Sum:",sum,"n:",n)

Function: is something which performs a task

A fn is a block of code which will be executed when
called on


4 parts of a Function


Mandatory

fn definition
fn call

optional

arguments/parameters
return 

def dosomething():
    print("Hello, I am a function and you called me")
    print("Greetings....")
#---------------------------------------------------------------
dosomething()
dosomething()
dosomething()
print('1-1000lines')
dosomething()

def factorial():
    n=int(input('Enter n: '))
    fact=1
    for i in range(1,n+1):
        fact=fact*i
    print("Factorial:",fact)
#-----------------------------------------------------------
factorial()



def factorial(n):#parameters # formal arguments # du[licates]
    print("Fn: n:",n)
    n=0
    print("Fn n:",n)
#----------------------------------------------------------------------
n=int(input('Enter n: '))
factorial(n,20) #arguments. # actual arguments # org values
print('Main: n:',n)

def factorial():
    n=int(input('Enter n: '))
    fact=1
    for i in range(1,n+1):
        fact=fact*i
    print("Factorial:",fact)
    return fact,i,"python"
#-----------------------------------------------------------
print(factorial())


def cal(a,b,op):
    if op=='+':
        return a+b
    if op=='-':
        return a-b
    if op=='*':
        return a*b
#------------------------------
print(cal(5,3,'-'))

def factorial():
    n=int(input('Enter n: '))
    global fact
    fact=1
    for i in range(1,n+1):
        fact=fact*i
    print("Factorial:",fact)
#-----------------------------------------------------------
factorial()
print(fact)

WAP to generate n to 1 numbers:
def gen(n):
    if n==0: #base case
        return
    print(n,end=' ')
    gen(n-1) #recursive case
#---------------------------------------------
n=int(input('Enter n: '))
gen(n)

WAP to gen 1 to n numbers

def gen(n):
    if n==0: #base case
        return
    gen(n-1) #recursive case
    print(n,end=' ')
#---------------------------------------------
n=int(input('Enter n: '))
gen(n)

def fact(n):
    if n==0: return 1
    return n*fact(n-1)
#---------------------------------------------
n=int(input('Enter n: '))
print("factorial:",fact(n))#5*4*3*2*1*1


def sum_n(n):
    if n==0: return 0
    return n+sum_n(n-1)
#---------------------------------------------
n=int(input('Enter n: '))
print("Sum of N:",sum_n(n))#5*4*3*2*1*1

f(0)=0
f(1)=1
f(2)=f(1)+f(0)=1
f(3)=f(2)+f(1)=2
.
.
f(n)=f(n-1)+f(n-2)

0   1   2   3   4   5   6   7   8   9   10  11  12
0   1   1   2   3   5   8   13  21  34  55  89  144

def fib(n,dp):
    if n<len(dp):
        return dp[n]
    else:
        dp.append(fib(n-1,dp)+fib(n-2,dp))
        return dp[n]
#-----------------------------------------
dp=[0,1]
n=int(input('Enter n: '))
print("nth Term:",fib(n,dp))

n=int(input('ENter n: '))
f0=0
f1=1
print(f0,f1,end=' ')
for _ in range(2,n+1):
    f2=f0+f1
    print(f2,end=' ')
    f0=f1
    f1=f2
'''
#1. Prime numbers in interval
import math
n1=int(input("Enter n1: "))
n2=int(input("Enter n2: "))
for n in range(n1,n2+1):
    if (n==1): continue
    else:
        flag=0
        for i in range(2,int(math.sqrt(n))+1):
            if (n%i==0):
                flag=1
                break
        if (flag==0): print(n,end=" ")

#2.Recursive factorial
def factorial(n):
    if (n==0): return 1
    else: return n*factorial(n-1)
#-----------------------------------------
n=int(input("Enter num: "))
print(factorial(n))