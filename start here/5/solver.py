obf = "didyouthinkthatitwouldbethateasy?"
key = 2
answer = ""

for i in obf:
    answer += chr((ord(i) ^ key) - 2)

print(answer)
