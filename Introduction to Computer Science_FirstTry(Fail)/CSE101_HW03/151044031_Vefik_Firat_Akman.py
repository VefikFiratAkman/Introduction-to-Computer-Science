#Start of Lİbrary Definition
import math
import sys
#End of Lİbrary Definition

#Created by Vefik Firat Akman
#	151044031_Hw03_Part1

#This program calculate area of circle,equilateral triangle and square
#Also this program can print shape of all three objects

sayi = input('Please select shape type: \nCircle -> Press 1 \nEquilateral Triangle -> Press 2 \nSquare -> Press 3\nPress: ')
#Take user's want

#Start Of Calculate Area of Circle And Print Shape Of Circle
if sayi == 1: 
	r = input('Please enter radius of circle: ')
	print('')
	alan = 3.14 * (r**2) 
	for i in range(-r,r,1):
		for j in range(-r,r,1):
			if(i*i + j*j < (r**2)):
				sys.stdout.write('*')
			else:
				sys.stdout.write(" ")
	
		print('')
		
	print('\nArea of the circle: %0.2f\n' %alan)
#End Of Calculate Area of Circle And Print Shape Of Circle	
	
#Start Of Calculate Area of equilateral triangle And Print Shape Of Circle	
if sayi == 2:
	
	uzunluk = input('Enter length of equilateral triangle: ')
	print('')
	alan = float(((uzunluk**2) * math.sqrt(3)) /4.0) 

	for y in range(1,uzunluk+1,1): 
		for x in range(uzunluk-y): 
			sys.stdout.write(' ')

		for x in range(0,uzunluk): 
			if x == 0: 
				sys.stdout.write('*')
			elif y == uzunluk and x == 0:
				for i in range(0,uzunluk,1):
					sys.stdout.write('x ')

		if y != uzunluk:
			for d in range(0,2*y-3):
				sys.stdout.write(' ')
		else:
			for d in range(0,uzunluk-2):
				sys.stdout.write(' *') 
			sys.stdout.write(' ')
	
		if y!=1: 
			print('*') 
		else:
			print(' ') 
			
	print('\nArea of triangle: %0.2f\n' %alan)
#End Of Calculate Area of equilateral triangle And Print Shape Of Circle	

#Start Of Calculate Area of Square And Print Shape Of Circle		
if sayi == 3:

	uzunluk = input('Enter the lenght of square: ')
	print('')
	alan = (uzunluk**2) 

	for x in range(0,uzunluk,1):
		for y in range(0,uzunluk,1): 
			sys.stdout.write('* ') 
		print('')


	print('\nArea of the square: %0.2f\n' %alan)
#End Of Calculate Area of Square And Print Shape Of Circle
















