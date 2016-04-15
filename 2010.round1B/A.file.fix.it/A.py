def gen_dirs(input):
    dirs = set()
    for d in input:
        base = d.split('/')[1:]
        for i in range(1, len(base)+1):
            dirs.add('/' + '/'.join(base[:i]))

    return dirs

ifile = open('A-large-practice.in', 'r')
ofile = open('A-large-practice.out', 'w')

TC = int(ifile.readline())

for tc in range(1, TC+1, 1):
    data = ifile.readline().strip().split(' ')
    [N, M] = [int(i) for i in data]

    have_dirs = []
    for have in range(1, N+1, 1):
        have_dirs.append(ifile.readline().strip())

    want_dirs = []
    for want in range(1, M+1, 1):
        want_dirs.append(ifile.readline().strip())

    all_have_dirs = gen_dirs(have_dirs)
    all_want_dirs = gen_dirs(want_dirs)

    ans = len(all_want_dirs.difference(all_have_dirs))

    print("Case #{0}: {1}".format(tc, ans))
    ofile.write("Case #{0}: {1}\n".format(tc, ans))
