def read_file(filename):		
	F = open(filename,'r')
	num_lines = sum(1 for line in F)
	F.close()
	F = open(filename,'r')	
	L = []
	for x in range(0,num_lines):
		N = F.readline()
		content = N.split(" ")
		for x in range(0,len(content)):
			content[x] = int(content[x].replace('\n',''))
		while len(content)!=num_lines:
			content.append(0)
		L.append(content)	
	F.close()
	return L
	
def write_pyramid(pyramid):
	f = open('pyramid.txt','w')
	for x in pyramid:
		aux = ''
		for y in x:
			aux += ' ' + str(y)
		f.write(aux + '\n')
	f.close()	
	
def problem(filename):
	pyramid = read_file(filename)
	
	Levels = sorted([x for x in range(0,len(pyramid)-1)], reverse=True)
	for level in Levels:
		for x in range(0,len(pyramid[level])):
			if pyramid[level][x]!=0:
				sum_1 = pyramid[level][x] + pyramid[level+1][x]
				sum_2 = pyramid[level][x] + pyramid[level+1][x+1]
				if sum_1 > sum_2:
					pyramid[level][x] = sum_1
				else:
					pyramid[level][x] = sum_2

	print(pyramid[0][0])
	write_pyramid(pyramid)
problem('p067_triangle.txt')