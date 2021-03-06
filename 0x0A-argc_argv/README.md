# 0x0A. C - argc, argv

## Learning Objectives

General

- How to use arguments passed to your program
- What are two prototypes of main that you know of, and in which case do you use one or the other
- How to use \_\_attribute\_\_((unused)) or (void) to compile functions with unused variables or parameters

## Requirements

- All files are created and compiled on Ubuntu 14.04.4 LTS on gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- All files are linted for syntax and style with [Betty](https://github.com/holbertonschool/Betty)

## Tasks

<details>
<summary>View Contents</summary>

### [0. It ain't what they call you, it's what you answer to](./0-whatsmyname.c)

- Write a program that prints its name, followed by a new line.

```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra 0-whatsmyname.c -o mynameis
julien@ubuntu:~/0x0A. argc, argv$ ./mynameis
./mynameis
julien@ubuntu:~/0x0A. argc, argv$ mv mynameis mynewnameis
julien@ubuntu:~/0x0A. argc, argv$ ./mynewnameis
./mynewnameis
```

### [1. Silence is argument carried out by other means](./1-args.c)

- Write a program that prints the number of arguments passed into it.

```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra 1-args.c -o nargs
julien@ubuntu:~/0x0A. argc, argv$ ./nargs
0
julien@ubuntu:~/0x0A. argc, argv$ ./nargs hello
1
julien@ubuntu:~/0x0A. argc, argv$ ./nargs "hello, world"
1
julien@ubuntu:~/0x0A. argc, argv$ ./nargs hello, world
2
```

### [2. The best argument against democracy is a five-minute conversation with the average voter](./2-args.c)

- Write a program that prints all arguments it receives.
  - All arguments should be printed, including the first one
  - Only print one argument per line, ending with a new line

```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra 2-args.c -o args
julien@ubuntu:~/0x0A. argc, argv$ ./args
./args
julien@ubuntu:~/0x0A. argc, argv$ ./args You can do anything, but not everything.
./args
You
can
do
anything,
but
not
everything.
```

### [3. Neither irony nor sarcasm is argument](./3-mul.c)

- Write a program that multiplies two numbers.
  - Your program should print the result of the multiplication, followed by a new line
  - You can assume that the two numbers and result of the multiplication can be stored in an integer
  - If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1

```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra 3-mul.c -o mul
julien@ubuntu:~/0x0A. argc, argv$ ./mul 2 3
6
julien@ubuntu:~/0x0A. argc, argv$ ./mul 2 -3
-6
julien@ubuntu:~/0x0A. argc, argv$ ./mul 2 0
0
julien@ubuntu:~/0x0A. argc, argv$ ./mul 245 3245342
795108790
julien@ubuntu:~/0x0A. argc, argv$ ./mul
Error
```

### [4. To infinity and beyond](./4-add.c)

- Write a program that adds positive numbers.
  - Print the result, followed by a new line
  - If no number is passed to the program, print 0, followed by a new line
  - If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
  - You can assume that numbers and the addition of all the numbers can be stored in an int

```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra 4-add.c -o add
julien@ubuntu:~/0x0A. argc, argv$ ./add 1 1
2
julien@ubuntu:~/0x0A. argc, argv$ ./add 1 10 100 1000
1111
julien@ubuntu:~/0x0A. argc, argv$ ./add 1 2 3 e 4 5
Error
julien@ubuntu:~/0x0A. argc, argv$ ./add
0
```

### [5. Minimal Number of Coins for Change](./100-change.c)

- Write a program that prints the minimum number of coins to make change for an amount of money.
  - Requirements: ./change cents
  - where cents is the amount of cents you need to give back
  - if the number of arguments passed to your program is not exactly 1, print Error, followed by a new line, and return 1
  - you should use atoi to parse the parameter passed to your program
  - If the number passed as the argument is negative, print 0, followed by a new line
  - You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent

```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra 100-change.c -o change
julien@ubuntu:~/0x0A. argc, argv$ ./change
Error
julien@ubuntu:~/0x0A. argc, argv$ ./change 10
1
julien@ubuntu:~/0x0A. argc, argv$ ./change 100
4
julien@ubuntu:~/0x0A. argc, argv$ ./change 101
5
julien@ubuntu:~/0x0A. argc, argv$ ./change 13
3
```

</details>

## Author
* **Robert Deprizio** - [BD20171998](https://github.com/BD20171998)
