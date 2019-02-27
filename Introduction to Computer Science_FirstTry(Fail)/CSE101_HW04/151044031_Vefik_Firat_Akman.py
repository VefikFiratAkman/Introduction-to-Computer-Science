first = input('Enter First Value Please: ')
second = input('Enter Second Value Please: ')
z =1
i = 0
while (z):
	x = first % 10
	first  = first/10
	y = second % 10
	second = second / 10

	if (x == y ):
		i = i+1
	else:
		z = 0
        
print('Number Of Matching Digits: %d' %i)
