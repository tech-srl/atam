gcc -fno-stack-protector -S overflow1.c
gcc -fno-stack-protector overflow1.c -o overflow1
gcc -fno-stack-protector -S overflow2.c
gcc -fno-stack-protector overflow2.c -o overflow2
gcc -fno-stack-protector -S overflow3.c
gcc -fno-stack-protector overflow3.c -o overflow3
