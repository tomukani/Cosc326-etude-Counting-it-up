import random as rand
max = 65
print("Enter a filename to make test numbers. The file will be overwritten")
filename = input()
f = open(filename, "w")
for i in range(1, 1000):
    n = int(max * rand.random()) + 1
    k = int(max * rand.random()) + 1
    line = str(n) + ' ' + str(k) + '\n'
    f.write(line)
    
