

int n, m = map(int, raw_input().split(' '))
used_ex = [False] * n
used_sm = [False] * m

strengths_ex = map(int, raw_input().split(' '))
strengths_sm = map(int, raw_input().split(' '))

count = 0

def lineups(s_ex, s_sm, size, team_ex = False):
  global count, strengths_sm, strengths_ex
  if s_ex == s_sm:
    count += 1
    return
  if team_ex:
    for i in range(size):
      if not used_ex[i]:
        used_ex[i] = True
        s_ex += strengths_ex[i]
        lineups(s_ex, s_ex)