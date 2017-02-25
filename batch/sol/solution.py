import sys

a, b = (int(x) for x in sys.stdin.readline().strip().split())
sys.stdout.write("%d\n" % (a + b))

