// from https://www.technovelty.org/linux/plt-and-got-the-key-to-code-sharing-and-dynamic-libraries.html
extern int foo;

int function() {
    return foo;
}