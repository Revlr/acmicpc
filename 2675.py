test_case = int(input())
s=""
p=""

for i in range(test_case):
    inp=input().split(" ")
    repeat=int(inp[0])
    s=inp[1]
    
    for j in range(len(s)):
        p += s[j]*repeat
    print(p)
    p=""
