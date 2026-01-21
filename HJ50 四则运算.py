while True:
    try:
        express = input()
        express.replace("[", "(")
        express.replace("{", "(")
        express.replace("]", ")")
        express.replace("}", ")")
        print(eval(express))
    except:
        break
        
