//Од тастатура се читаат 2 позитивни цели броеви. Доколку се внесе барем еден негативен број или 0 треба да се печати „Invalid input“.
//Треба да се определи дали помалиот број “е парен еквивалент” од поголемиот број.
//Еден број “е парен еквивалент” на друг број, ако и само ако неговите цифри се наоѓаат на парните позиции од другиот број, во истиот редослед. 
//Соодветно да се испечатат пораки „PAREN“ и „NE“.
//Позициите треба да се сметаат оддесно-налево (најмалку значајната цифра е на позиција 1)

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, temp, parni = 0, cifri = 0;

    scanf("%d%d", &a, &b);

    if (a > 0 && b > 0) {

        if (b > a) {
            temp = b;
            b = a;
            a = temp;
        }

        a /= 10;

        while (a != 0 || b != 0) {

            cifri++;
            if (a%10 == b%10) parni++;

            a /= 100;
            b /= 10;
        }

        if (parni == cifri) printf("PAREN");
        else printf("NE");

    } else {

        printf("Invalid input");
    }
}