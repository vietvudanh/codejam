import math

ifile = open('C.t.in', 'r')
ofile = open('C.t.out', 'w')
TC = int(ifile.readline())

origin = math.sqrt(5) + 3

for tc in xrange(1, TC, 1):
    n = int(ifile.readline())
    ans = int(origin ** n) % 100
    ofile.write("Case #%d: %d\n" % (tc, ans))
