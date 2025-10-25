#include <stdio.h>

int main() {
    struct Person {
        char Name[100];
        int Age;
    };
    enum Teste {
        foo = 0,
        bar,
        tas,
        teste,
    };

    struct Person foo1 = {"gabriel", 18};
    struct Person foo2 = {"richard", 22};

    printf("%s\n", foo1);
    printf("%s\n", foo2);
    
    enum Teste t1 = teste;

    printf("%d\n", t1);
    return 0;
}
