 1375  gcc -c test.c
 1376  ls
 1377  ar -rc test.a test.o
 1378  ls
 1379  gcc -c main.c
 1380  ls
 1381  gcc  -o main main.c
 1382  gcc  -o main main.c test.a
 1383  ls
 1384  ./main 
 1385  ls
 1386  history 
