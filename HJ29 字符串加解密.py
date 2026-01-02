while True:
    try:
        plain=input()
        password=input()
        pw=''
        pl=''
        for ch in plain:
            if ch.isupper():
                pw+='a' if ch=='Z' else chr(ord(ch)+1).lower()
            elif ch.islower():
                pw+='A' if ch=='z' else chr(ord(ch)+1).upper()
            elif ch.isnumeric():
                pw+='0' if ch=='9' else str(int(ch)+1)
            elif ch.isascii():
                pw+=ch
        for ch in password:
            if ch.isupper():
                pl+='z' if ch=='A' else chr(ord(ch)-1).lower()
            elif ch.islower():
                pl+='Z' if ch=='a' else chr(ord(ch)-1).upper()
            elif ch.isnumeric():
                pl+='9' if ch=='0' else str(int(ch)-1)
            elif ch.isascii():
                pl+=ch
        print(pw)
        print(pl)
        
    except:
        break
