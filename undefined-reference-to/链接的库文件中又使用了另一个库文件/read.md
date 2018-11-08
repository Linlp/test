 1421  gcc -c test.c 
 1422  gcc -c func.c
 1423  ls
 1424  ar -rc func.a func.o
 1425  ar -rc test.a test.o
 1426  ls
 1427  gcc -o main main.o test.a
 1428  gcc -o main main.o test.a func.a
 1429  ./main 
