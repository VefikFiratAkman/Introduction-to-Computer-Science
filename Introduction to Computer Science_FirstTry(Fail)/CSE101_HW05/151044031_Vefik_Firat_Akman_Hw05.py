def digit_multiplier(number):
	z = len(str(number))

	result = 1
	while (z):
		x = number % 10
		number  = number / 10
		if(x != 0):
			result = result * x
		
		z = z-1
	
	print('Result is: %d' %result)
	
	return result

if __name__ == '__main__':
    assert digit_multiplier(123405) == 120
    assert digit_multiplier(999) == 729
    assert digit_multiplier(1000) == 1
    assert digit_multiplier(1111) == 1
