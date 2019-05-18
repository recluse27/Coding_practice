a = int(input())
n = raw_input()
n = n.split(' ')
n = map(int, n)
max = n[0]
maxc = 0
min = n[0]
minc = 0 
c = []
i = 1
while i < len(n):
  if n[i] > max:
    max = n[i]
    maxc += 1
  if n[i] < min:
    min = n[i]
    minc += 1
  i += 1
c.append(str(maxc))
c.append(str(minc))
c = ' '.join(c)
print c