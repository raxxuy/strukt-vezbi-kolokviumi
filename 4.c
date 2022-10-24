//Од стандарден влез се читаат знаци се додека не се прочита извичник. Во вака внесениот текст се скриени цели броеви (помали од 100). 
//Да се напише програма што ќе ги прочита сите знаци и на излез ќе го испечати збирот на сите броеви скриени во текстот./

#include <stdio.h>
#include <stdlib.h>

int main() {
    int temp = 0, zbir = 0;
    char ch;

    while ((ch = getchar()) != '!') {

        if (ch >= 48 && ch <= 57) {

            temp *= 10;
            temp += ch - 48;

        } else {

            zbir += temp;
            temp = 0;
        }
    }

    printf("%d", zbir + temp);
}