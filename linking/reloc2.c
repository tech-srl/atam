// from https://www.technovelty.org/linux/plt-and-got-the-key-to-code-sharing-and-dynamic-libraries.html
extern int foo;
extern int bar; 
int main() {
    return foo + bar;
}

