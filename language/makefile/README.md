## gcc
```bash
gcc -E hello.c -o hello.i
gcc -S hello.i -o hello.s
gcc -c hello.s -o hello.o
gcc hello.o -O hello
```


## makefile
```
target: dependency target or file
    command1
    command2
```

+ =,  delay align
+ :=, direct align
+ ?=, null align(you can align sucess when var is null)
+ +=, append align

+ $<, first dependency file
+ $^, all dependency file 
+ $@, target
