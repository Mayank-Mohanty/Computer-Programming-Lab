'''
WAP to calculate sum of n natural numbers
WAP to calculate area and perimeter of a rectangle
WAP to convert days into years, weeks, days
WAP to convert seconds into hrs:mins:secs
WAP to swap 2 numbers in 5 ways
WAP to separate last digit & second last digit


n=int(input('Enter n: '))
sum=n*(n+1)//2
print("Sum of n natural numbers is:",sum)

l=int(input('Enter l: '))
b=int(input('Enter b: '))
area=l*b
perimeter=2*(l+b) 
print("Area:",area)
print('Perimeter:',perimeter)


n=int(input('Enter n: '))
years=n//3600
weeks=(n%3600)//60
days=(n%3600)%60
print(years,weeks,days)


n=int(input('Enter n: '))
print('Last:',n%10)
print((n//10)%10)
print((n//100)%10)
print((n//1000)%10)
print((n//10000)%10)


Conditional Statements / DCS

simple if.        : 1 outcome
if else           : 2 outcomes
if elif......else : 2 or more than 2

syntax:

if(condition or test expression => true/false):
            st1
            st2
            .
            .
            stn

syntax:

if(condition or test expression => true/false):
            st1
            st2
            .
            .
            stn
else:
        st1
        st2
        st3
        .
        .
        stn

else:
1. else is optional
2. else will not check any condition
3. else is the default case
   (if none of the st above are true by default else will be executed)



WAP to check if the given is even or not
WAP to check biggest of 2
WAp to check biggest of 3
WAp to print leap year or not
WAp to take veh & wheels and come up with tw & fw

n=int(input('Enter n: '))
if(n%2==0):
        print('Even Number')
        print('2nd line of if')
else:
    print('odd number')
    print('2nd st of else')
print('program ended')


a=int(input('Enter a: '))
b=int(input('Enter b: '))
if(a>b):
    print('A is big')
elif(a==b):
    print(' a and b are same')
elif(b>a):
    print('B is Big')
    
    n=int(input('Enter n: '))
if("n%2"):
        print('Even Number')
        print('2nd line of if')
else:
    print('odd number')
    print('2nd st of else')
print('program ended')


n=int(input('Enter n: '))
if(n%2==0):print('Even Number'); print('2nd if st')
else:print('odd number')

n=int(input('Enter n: '))
print('Even Number') if (n%2==0) else print('odd number')

v=int(input('Enter veh: '))
w=int(input('Enter whe: '))
if(w>=2 and w>v and w%2==0):
    fw=(w-2*v)//2
    tw=v-fw
    print(tw,fw)
else:
    print('Invalid input')
'''
#1. WAP to calc sum of n natural numbers
n=int(input("Enter n: "))
sum=n*(n+1)//2
print("Sum: ",sum)

#2. WAP to calc area and perimeter of a rectangle
l=int(input("Enter length: "))
b=int(input("Enter breadth: "))
area=l*b
perimeter=2*(l+b)
print(f"Area: {area} Perimeter: {perimeter}")

#3. WAP to convert days into years,weeks,days
n=int(input("Enter days: "))
y=n//365
w=(n%365)//7
d=(n%365)%7
print(f"Years: {y} Weeks: {w} Days: {d}")

#4. WAP to convert seconds into hrs:mins:secs
n=int(input("Enter secs: "))
h=n//3600
m=(n%3600)//60
s=(n%3600)%60
print(h,m,s,sep=":")

#5. WAP to swap numbers in 5 ways
a=int(input("Enter a: "))
b=int(input("Enter b: "))

temp=a
a=b
b=temp
print(f"a: {a} b: {b}")

a,b=b,a
print(f"a: {a} b: {b}")

a=a+b
b=a-b
a=a-b
print(f"a: {a} b: {b}")

a=a*b
b=a//b
a=a//b
print(f"a: {a} b: {b}")

a=a^b
b=a^b
a=a^b
print(f"a: {a} b: {b}")

#6. WAP to separate last and second last digit of a number
n=int(input("Enter n: "))
l=n%10
sl=(n//10)%10
print(f"Last: {l} Second Last: {sl}")

#7. WAP to check biggest of 3
a=int(input("Enter a: "))
b=int(input("Enter b: "))
c=int(input("Enter c: "))
if (a>b and a>c): print("A is greatest")
elif (b>a and b>c): print("B is greatest")
elif (a==b and b==c): print("A,B,C are equal")
else: print("C is greatest")

#8. WAP to check biggest of 2
a=int(input("Enter a: "))
b=int(input("Enter b: "))
if (a==b): print("A,B are equal")
elif (a>b): print("A is bigger")
else: print("B is bigger")

#9. WAP to check even or not
n=int(input("Enter n: "))
if (n%2==0): print("Even")
else: print("Odd")

#10. WAP to check leap year or not
y=int(input("Enter year: "))
if ((y%4==0 and y%100!=0) or (y%400==0)): print("Leap Year")
else: print("Not a leap year")

#11. WAP where V and W is given, find TW and FW
V=int(input("Enter vehicles: "))
W=int(input("Enter Wheels: "))
FW=(W-2*V)//2
TW=V-FW
print(f"Two Wheeler: {TW} Four Wheeler: {FW}")