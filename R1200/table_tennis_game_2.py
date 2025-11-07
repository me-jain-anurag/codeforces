def solve():
  
  k,a,b=map(int,input().split())
  
  if (a<k or b<k) :
    if (a < b) :
       a, b = b, a
    if (a % k != 0):
      print(-1)
    else :
      print(a // k + b // k)
    
  else:
    
    print(a // k + b // k)
    
solve()