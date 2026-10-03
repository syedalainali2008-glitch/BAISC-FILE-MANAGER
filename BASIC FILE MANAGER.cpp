file={
    "py":["BASIC SECURITY.py","LODO GAME.py","LUCKYDREW.py"],
    "cpp":["GRADE FINDER.cpp","BASIC BANKING SYSTEM.cpp","BIRTH YEAR FINDER.cpp"],
    'txt':["FILE.txt","DOC.txt"],
    "html":["FILE.html","FRONTEND.html","WEBSITE.html"]
    }
enter=str(input("ENTER YOUR EXTENSION OF FILE:"))
if enter=="py":
    print("THIS IS YOUR FILES:",file.get('py'))
elif enter=="cpp":
    print("THIS IS YOUR FILES:",file.get("cpp"))
elif enter=="txt":
    print("THIS IS YOUR FILES:",file.get("txt"))
elif enter=="html":
    print("THIS IS YOUR FILES:",file.get("html"))
else:
    print("THIS TYPE OF EXTENSION DOES NOT EXIST:",enter)
