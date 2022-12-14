//Цик-цак е број за кој важи дека за секој пар соседни цифри во бројот важи дека едната е помала од 5, а другата е поголема или еднаква на 5. 
//На пример, ако бројот x е составен од цифрите a, b, c и d, тогаш за нив важи:
//a<5, b>=5, c<5, d>=5 или a>=5, b<5, c>=5, d<5
//Пр.  508294, 2638, 81
//Од тастатура се читаат непознат број на цели броеви поголеми од или еднакви на 10 (броевите помали од 10 се игнорираат). 
//Читањето завршува во моментот кога ќе се прочита знак што не е цифра. Да се испечатат сите цик-цак броеви.

#include <stdio.h>
#include <stdlib.h>

int main () {
    int n, temp, a, b, count, t_count, start;

    while (scanf("%d", &n)) {

        if (n >= 10) {

            temp = n;
            a = b = count = t_count = start = 0;

            while (temp >= 10) {

                a = temp%10;
                b = (temp/10)%10;

                if (a == b) {
                    count++;
                    break;
                }

                if (count == 0 && a >= 5 && b < 5) start = 1;

                if (start == 0) {

                    if (count%2 == 0) {
                        if (a < 5 && b >= 5) t_count++;
                    } else {
                        if (a >= 5 && b < 5) t_count++;
                    }

                } else {

                    if (count%2 == 0) {
                        if (a >= 5 && b < 5) t_count++;
                    } else {
                        if (a < 5 && b >= 5) t_count++;
                    }
                }

                count++;
                temp /= 10;
            }

            if (count == t_count) printf("%d\n", n);
        }
    }
}
