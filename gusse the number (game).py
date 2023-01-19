import random

y=1
num=['1','2','3','4','5','6','7','8','9','0']
cnum=("".join(random.sample(num,2)))
guess=0
chance=10
while y<=chance:
    print('___________________________________________________________')
    
    print('\nyou have',chance-guess,'chance left\n')
    
    a=(input('Enter number: '))
    if guess==chance:
        print('\ngame over you loss\ncorret number is',cnum,'\nbetter luck next time')
        y=y+100000000000
    elif a=='hii':
        print('hi8')   
    elif int(a)==999:
        print('the number is:',cnum)
        guess=guess-1

    elif int(a)==998:
        print('you got 5 extra guess')
        chance=chance+5
        
    elif int(a)==int(cnum):
        print('You win')
        y=y+1000000000000
        
    elif int(a)>int(cnum):
        print('choose smaller number')
        
    elif int(a)<int(cnum):
        print('choose greater number')
        
    else:
        print('invalid input')
        guess=guess-1
    guess=guess+1

print('\nYour take',guess,'guess for right number')