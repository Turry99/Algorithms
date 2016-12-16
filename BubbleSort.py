s = [1, 3, 2, 6 ,4, 9, 0, 8]

def bubble(sort_list):
	length = len(sort_list)
	for n in range(0, length - 1):
		det = length - n
		if det == 1:
			break
		for x in range(0, det - 1):
			if sort_list[x] > sort_list[x+1]:
				sort_list[x], sort_list[x+1] = sort_list[x+1], sort_list[x]
	print(sort_list)

bubble(s)