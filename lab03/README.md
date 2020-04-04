### Task 2
```
$ gcc -o task2 task2.c
$ ./task2 > child

remove comments

$ gcc -o task2 task2.c
$ ./task2 > parent
$ diff child parent
```

### Task 3
```
$ gcc -o task3 task3.c
$ ./task3 > before

add env

$ gcc -o task3 task3.c
$ ./task3 > after

```

### Task 5
```
$ gcc -o task5 task5.c
$ sudo chown root task5
$ sudo chmod 4755 task5
$ export TASK5=$HOME
$ export LD_LIBRARY_PATH=$HOME
$ export INYEONG="2016015878"
```

### Task 6
```
$ sudo rm /bin/sh
$ sudo ln -s /bin/zsh /bin/sh
$ sudo chown root task6
$ sudo sudo chmod 4755 task6
$ ./task6
```
