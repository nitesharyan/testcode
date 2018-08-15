num=int(input())
n=int(input())
a=[int(x) for x in input().strip().split(" ")]
a.sort()                                            #Big-Oh(nlog(n))
i,j=0,(len(a)-1)
count=0
while i<j:                                          #Big-Oh(n)
    if a[i]+a[j]==num:
        count+=1
        if a[i+1]+a[j]==num:
            count+=1
            i+=1
        elif (a[j-1]+a[i])==num:
            count+=1
            j-=1
        i+=1
        j-=1
    elif a[i]+a[j]<num:
        i+=1
    else:
        j-=1
print(count)
                                                    #Big-Oh(nlog(n))
