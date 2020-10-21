def zigzag(a):
  flag=True 
  for i in range(len(a)-1):
    if(flag==True):
      if(a[i]>a[i+1]):
        a[i],a[i+1]=a[i+1],a[i]
    else:
      if(a[i]<a[i+1]):
        a[i],a[i+1]=a[i+1],a[i]
    flag=1-flag
  return a

if __name__ == "__main__":
  a=list(input())
  ans = zigzag(a)
  print(ans)
