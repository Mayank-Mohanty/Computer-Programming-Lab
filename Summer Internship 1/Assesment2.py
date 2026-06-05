#1. Given a time in -hour AM/PM format, convert it to military (24-hour) time. 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock. 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.
s=input("Enter 12-hour format like this 07:05:45PM : ")
def func(s):
    am_pm=s[-2:]
    time=s[:-2]
    l=time.split(":")
    h=int(l[0])
    if (am_pm=="AM"):
        if (h==12): h=00
    else:
        if (h!=12): h+=12
    if(h>=0 and h<=9): l[0]='0'+str(h)
    else: l[0]=str(h)
    return ":".join(l)        
res=func(s)
print(f"24-hour format: {res}")

#2. We consider two strings to be anagrams of each other if the first string's letters can be rearranged to form the second string. In other words, both strings must contain the same exact letters in the same exact frequency. For example, bacdc and dcbac are anagrams, but bacdc and dcbad are not. Alice is taking a cryptography class and finding anagrams to be very useful. She decides on an encryption scheme involving two large strings where encryption is dependent on the minimum number of character deletions required to make the two strings anagrams. Can you help her find this number? Given two strings,  and , that may not be of the same length, determine the minimum number of character deletions required to make  and  anagrams. Any characters can be deleted from either of the strings.
s1=input("String 1: ")
s2=input("String 2: ")
def makingAnagrams(s1,s2):
    hash1=[0]*26
    hash2=[0]*26
    count=0
    for ch in s1:
        hash1[ord(ch)%97]+=1
    for ch in s2:
        hash2[ord(ch)%97]+=1
    for i in range(26):
        if (hash1[i]!=hash2[i]):
            count+=max(hash1[i],hash2[i])-min(hash1[i],hash2[i])
    return count
res=makingAnagrams(s1,s2)
print(f"Total deletions: {res}")