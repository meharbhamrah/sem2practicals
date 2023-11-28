#Program to find roots of a quadratic equation
import cmath
a=int(input('Enter the value of a:'))
b=int(input('Enter the value of b:'))
c=int(input('Enter the value of c:'))

#to find a discriminant
d=(b**2)-(4*a*c)
print('The value of discriminant is:',d)

e1=(-b+cmath.sqrt(d))/(2*a)
e2=(-b-cmath.sqrt(d))/(2*a)
print(e1,e2)
    

    
#Program to check whether a number is prime or not


a=int(input('Enter the number that you want to check:'))
if (a>=1):
    for i in range(2,a):
        if(a%i==0):
            print(a,'is not a prime number')
            break
    else:
        print(a,'is a prime number')
else:
    print(a,"is not a prime number")
    
    
    
#Gernerating  prime number till between two intervals; 


a=int(input('Enter the first interval : '))
b=int(input('Enter the second interval : '))

print('The prime number in the given range are:')

for number in range(a, b + 1):
   if (number>1):
         for i in range(2,number):
          if (number%i==0):
            break
         else:
           print(number)
           
           
#Genrating prime numbers till n(any given value)

a=1
b=int(input('Enter the number upto which you want to print prime numberes:'))


for number in range(a, b+1):
   if (number>1):
         for i in range(2,number):
          if (number%i==0):
            break
         else:
           print(number)

# Progarm for  pyramid
rows= int(input("Enter number of you want to print: "))

p=0

for i in range(1, rows+1):
    for space in range(1, (rows-i)+1):
        print(end="  ")
   
    while p!=(2*i-1):
        print("* ", end="")
        p += 1
   
    p= 0
    print()
    
#Program for reverse pyramid
rows = int(input("Enter number of rows: "))

for i in range(rows, 1, -1):
    for space in range(0, rows-i):
        print("  ", end="")
    for j in range(i, 2*i-1):
        print("* ", end="")
    for j in range(1, i-1):
        print("* ", end="")
    print()


#Program to check whether a givne character is letter,number or special character.
char=input('Enter the character that you want to check:')
if(char>='a' and char<='z') or (char>='A' and char<='Z'):
 print('The given character is a letter.')
elif(char>='0') and (char<='9'):
    print('The given character is a number.')
else:
    print('The given character is a special character')
    
#Program to check if the given character is letter then it is uppercase or lowercase

x=input('Enter the letter that you want to check: ')
if(x>='A' and x<='Z'):
    print('The character is an uppercase letter.')
elif(x>='a' and x<='z'):
    print('The character is a lower case letter.')
else:
    print('The given character is not a letter.')
    
#Program to print number in words
number=["","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"]
nty=["","","Twenty","Thirty","Fourty","Fifty","Sixty","Seventy","Eighty","Ninty"]
tens=["Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"]
n=int(input("Enter a number "))
if n>99999:
    print("Cant solve for more than 5 digits")
else:
    d=[0,0,0,0,0]
    i=0
    while n>0:
        d[i]=n%10
        i+=1
        n=n//10
    num=""
    if d[4]!=0:
        if(d[4]==1):
            num+=tens[d[3]]+ " Thousand "
        else:
            num+=nty[d[4]]+" "+number[d[3]]+  " Thousand "
    else:
        if d[3]!=0:
            num+=number[d[3]]+ " Thousand "
    if d[2]!=0:
        num+=number[d[2]]+" Hundred "
    if d[1] != 0:
        if (d[1] == 1):
            num += tens[d[0]]
        else:
            num += nty[d[1]] + " " + number[d[0]]
    else:
        if d[0] != 0:
            num += number[d[0]]
    print(num)


#Program to count frequency of character in a string
x=input('Enter the text in which you want to count: ')
y=input('Enter the letter that you want to count: ')
print(x.count(y))

# #Program to replace a character with another string
x='Ramanujan'
print(x.replace('a','m'))

#Program to remove first occurence of a character from a string
a= input("Enter your text: ")
char = input("Enter the character that you want to delete: ")
result = ' '
for i in range(len(a)):
    if(a[i] == char):
        result= a[0:i] + a[i + 1:len(a)]
        break
print("Entered text       : ",a)
print("Text after removing : ",result)

#Program to remove all occurences of a string
a=input('Enter the text: ')
b=input('Enter the character that you want to remove: ')
print(a.replace(b, ' '))


#Program to swap the first character of two strings
str1 = input("Please Enter First String : ")
str2 =input("Please Enter Second String : ")

a=str1[0:2]

str1=str1.replace(str1[0:2],str2[0:2])

str2=str2.replace(str2[0:2],a)

print("Your first string has become :- ",str1)
print("Your second string has become :- ",str2)



#Function that accepts two strings and returns the indices of all occurences of second stirng in the first string as a list

def fdiff(str1, str2):
    
    if str1 == str2:
        return -1
    else:
        for str1, str2 in zip(str1, str2):
            if str1 != str2:
                return str1


string1 = input("Enter first string:")
string2 = input("Enter second string:")
print(fdiff(string1, string2))
    
a=eval(input('Enter the numbers: '))
if (a%2==0): 
 for i in range(0,1000):
    print(a*a*a)
    break
else:
 print('It is not an even number')

import os
a=open("data.txt","r")
data= a.read()
numofchars=len(data)
numofwords=len(data.split())
numoflines=len(data.splitlines())
print('The number of characters in file are:',numofchars,'\n The number of words in given file are: ',numofwords,'\nThe number of lines in given file are:',numoflines)
