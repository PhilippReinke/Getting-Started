/*
Compile this script as follows
### linux
gcc -shared -Wl,-soname,testlib -o testlib.so -fPIC testlib.c
### mac
gcc -shared -Wl,-install_name,testlib.so -o testlib.so -fPIC testlib.c
### here is a sublime build script (SOforCTYPES.sublime-build)
{
    "cmd": ["bash", "-c", "gcc -shared -Wl,-soname,${file_base_name} -o ${file_base_name}.so -fPIC ${file_base_name}.c"],
    "shell": true,
    "working_dir": "${file_path}",
    "selector": "source.c",
}
*/
#include <stdio.h>

// prototypes
void myprint(void);
int add(int, int);
int fib(int);

void myprint()
{
	printf("Hello world.\n");
}

int add(int a, int b)
{
	return a+b;
}

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}