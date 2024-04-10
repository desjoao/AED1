pomekons = []
n = int(input())
for i in range (0, n):
    pomekons.append(input())
print(f"Falta(m) {151 - len(set(pomekons))} pomekon(s).") 
