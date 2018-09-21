import string

def value_in_dict(number):
	return number in num2words1

def number_from_21_to_99(number): 	
	tens  = (number // 10) * 10
	units = number % 10
	# by definition tens and units will be in the dict
	number_str = num2words1[tens] + '-' + num2words1[units]
	return number_str

def number_from_101_to_999(number): 
	hundreds = (number // 100) 
	number_str = ''
	if (number-(hundreds*100))==0:
		number_str = give_me_word(hundreds) + ' hundred'
	else:
		number_str = give_me_word(hundreds) + ' hundred and ' + give_me_word(number-(hundreds*100))
	return number_str
	
def give_me_word(number):
	if value_in_dict(number):
		return num2words1[number]
	else:
		if number < 100:
			#from 21 to 99
			return number_from_21_to_99(number)
		else:
			#from 101 to 999
			return number_from_101_to_999(number)

def problem(number):
	f = open('numbers.txt','w')
	count = 0
	aux = ''
	for x in range(1,number+1):
		aux = give_me_word(x).replace(' ','').replace('-','')
		count += len(aux)
		f.write(aux + '\t' + str(len(aux)) + '\t' + str(count) + '\n')
		print(aux + '\t' + str(count))
	f.close()

num2words1 = {
            1:    'One'      , \
			2:    'Two'      , \
			3:    'Three'    , \
			4:    'Four'     , \
			5:    'Five'     , \
            6:    'Six'      , \
			7:    'Seven'    , \
			8:    'Eight'    , \
			9:    'Nine'     , \
			10:   'Ten'      , \
            11:   'Eleven'   , \
			12:   'Twelve'   , \
			13:   'Thirteen' , \
			14:   'Fourteen' , \
            15:   'Fifteen'  , \
			16:   'Sixteen'  , \
			17:   'Seventeen', \
			18:   'Eighteen' , \
			19:   'Nineteen' , \
            20:   'Twenty'   , \
			30:   'Thirty'   , \
			40:   'Forty'    , \
			50:   'Fifty'    , \
			60:   'Sixty'    , \
			70:   'Seventy'  , \
			80:   'Eighty'   , \
			90:   'Ninety'   , \
            
            1000: 'one thousand'   \
			}

problem(1000)