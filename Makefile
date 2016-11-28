
all:	hello1 hello2 crackme01 crackme02 crackme03 shared.so
	strip crackme02 crackme03

shared.so: 
	$(CC) -fPIC -shared shared.c -o shared.so
