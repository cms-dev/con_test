a, b = (int(x) for x in open("input.txt").readline().strip().split())
f = open("output.txt", "w")
f.write("%d\n" % (a + b))

