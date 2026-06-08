#1. Infix to Postfix Expression
def priority(ch):
    if (ch in '+-'): return 1
    elif (ch in '*/'): return 2
    elif (ch in '^'): return 3
#-----------------------------------------------------
s=input("Enter Infix Expression: ")
stack=[]
postfix=""    
for ch in s:
    if (ch=='('): stack.append(ch)
    elif (ch==')'):
        while (stack!=[] and stack[-1]!='('):
            postfix+=stack.pop()
        stack.pop()
    elif (ch in '+-*/^'):
        while (stack!=[] and stack[-1]!='(' and priority(stack[-1])>=priority(ch)):
            postfix+=stack.pop()
        stack.append(ch)
    else: postfix+=ch
while (stack!=[]):
    postfix+=stack.pop()
print(f"Postfix Expression: {postfix}")