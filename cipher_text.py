"""
Alphabets are enumerated as A=0, B=1, ..... , Z=25. Consider an encrypted scheme where a charecter with value Ci in the plain text is replaced by Cj where Cj = (Ci + 5)%26. After replacement, the resulting string is shuffled at random to obtain a cipher text.

input: 2 strings (All caps) , 1. The palin text and 2. Shuffled cipher text
output: Yes or No

Your task is to determine whether the input string 2 is the possible ciper text of input string 1. 

"""

x=input()
y=input()
a='ABCDEFGHIJKLMNOPQRSTUVWXYZ'
t=''
for i in x:
  c=a.index(i)
  cj=(c+5)%26
  t=t+a[cj]
if(sorted(y)==sorted(t)):
  print("Yes",end='')
else:
  print("No",end='')
