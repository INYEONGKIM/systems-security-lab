## TASK 2
- build
```
$ gcc -m32 -z execstack -fno-stack-protector -g task2_stack.c -o task2_stack
$ gcc -o task2_exploit -m32 task2_exploit.c
```

- execute
```
$ sudo chown root task2_stack
$ sudo chmod 4755 task2_stack
$ ./task2_exploit
$ ./task2_stack
$ # id
```

## TASK 3
- build
```
$ gcc -o task3_exploit -m32 task3_exploit.c
```

- execute
```
$ sudo chown root task3_stack
$ sudo chmod 4755 task3_stack
$ ./task3_exploit
$ ./task2_stack
$ $ id
```
