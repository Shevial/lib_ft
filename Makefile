cc -c *.c 
ar rcs libmylib.a *.o 

cc main.c libmylib.a 