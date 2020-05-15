## Lab 06

- build
```
$ gcc -m32 -fno-stack-protector -z noexecstack -o retlib retlib.c
```


### Task 3
- build
```
$ gcc -m32 -o task3_exploit task3_exploit.c
```

- execute
```
$ ./task3_exploit
$ ./retlib
$ id
```


### Task 4
- build
```
$ gcc –m32 –z execstack –o retlib retlib.c
```


### Task 5
- build
```
$ gcc –m32 –z noexecstack –fno–stack–protector -o retlib retlib.c
```
