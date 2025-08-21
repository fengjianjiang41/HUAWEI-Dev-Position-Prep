while True:
    try:
        code = input()
        end_num = int(input())
        print(code[:end_num])
    except:
        break