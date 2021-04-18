import sys
[H, W] = list(map(int, sys.stdin.readline().split()))
heights = list(map(int, sys.stdin.readline().split()))

map = []
for height in heights:
    col = list([1 if i < height else 0 for i in range(H)])
    map.append(col)
MAX_HEIGHT = max(heights)
print(MAX_HEIGHT)

result = 0
for h in range(MAX_HEIGHT):
    is_start = False
    is_space = False
    temp = 0
    for w in range(W):
        if map[w][h] == 1 and not is_start:
            is_start = True
        
        if map[w][h] == 0 and is_start:
            is_space = True
            temp += 1

        if map[w][h] == 1 and is_space:
            result += temp
            temp = 0
            is_space = False
        print(h, w, map[w][h], temp, result)


print(map)
print(result)

# MIN = 500
# MAX1 = 1
# MAX2 = 1

# result = 0
# block_list = []
# for height in heights:
#     if height > MAX1:
#         MAX1  = height
#     if height < MIN:
#         MIN = height
#     if MAX2 < height:
#         MAX2 = height
        
#     if MIN < MAX2:
         
#     if :
#         result += MAX - MIN
#     else:
#         MIN = 500