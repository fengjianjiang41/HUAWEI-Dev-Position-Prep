while True:
    try:
        res = {}
        applier_num = int(input())
        appliers_name = input().split()
        votes_num = int(input())
        votes = input().split()
        for x in votes:
            if x not in appliers_name:
                res["Invalid"]= res.get("Invalid", 0) + 1
            else:
                res[x] = res.get(x, 0) +1
        for name in appliers_name:
            print(name,":",res.get(name, 0))
        print("Invalid",":",res.get("Invalid", 0))
    except:
        break
