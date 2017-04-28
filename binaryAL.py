"""
A binary search on a ordered list
"""

lista = list(range(0,200))

iterations = 0

guess = 20
min = 0
max = len(lista) - 1

while True:
    curPos = int((min+max)/2)
    if curPos == guess:
        break
    elif curPos < guess:
        min = curPos
        iterations += 1
    elif curPos > guess:
        max = curPos
        iterations += 1
    print(curPos)

print("You got it. The number was {} and it only took {} tries".format(guess, iterations))
