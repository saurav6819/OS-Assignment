a=int(input("enter no of processes"))
at,bt,t,w,p=[],[],[],[],[]
awt,att=0,0
for i in range(0,a):
      print("enter arrival time of P[",i,"]")
      x=int(input())
      at.append(x)
for i in range(0,a):
      print("enter burst time of P[",i,"]")
      g=int(input())
      bt.append(g)
for i in range(0,a+1):
    t.append(0)
    w.append(0)
    p.append(0)
print(t)
for i in range(0,a):
    t[i+1]=t[i]+bt[i]
for i in range(0,a):
    w[i]=t[i]-at[i]
    p[i]=t[i+1]-at[i]
    awt=awt+w[i]
    att=att+p[i]
awt=awt/a
att=att/a
print(awt,"\n",att)
for i in range(a):
    print(i," ",w[i]," ",p[i])
    
