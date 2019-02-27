x = 14 # x variable equal 14 number 
y = 23 # y variable equal 23 number 

print('x = %d y = %d'%(x,y)) #This line print x and y values on screen

temp = x # X value writing in temporary location
x = y # y value writing on X old value in this way now x value is 23
y = temp # temp value writing on y old value in this way now y value is 14

print('x = %d y = %d'%(x,y)) #This line print x and y new values on screen
