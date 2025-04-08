def unique(num):
    nums=str(num)

    return len(set(nums))==len(nums)

num=int(input())

while True:
    num+=1
    if(unique(num)):
        print(num)
        break