while True:
    try:
        count = int(input())
        positive_num = []
        negative_num = []
        nums = list(map(int, input().split()))
        positive_num = list(filter(lambda x: x > 0, nums))
        negative_num = list(filter(lambda x: x < 0, nums))
        average = sum(positive_num) / len(positive_num)
        print(len(negative_num), average)
    except:
        break
