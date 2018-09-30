def problem(x):
	str_n = str(math.factorial(x))
	count = 0
	for x in str_n:
		count += int(x)
	print(count)
problem(100)