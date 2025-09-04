def func():
    try:
        number_list = input().strip().split(' ')
        number_list.reverse()
        print(' '.join(number_list))
    except:
        pass


if __name__ == "__main__":
    func()
