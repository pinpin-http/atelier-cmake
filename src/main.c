#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./../include/calculator.h"

int main(int argc, char *argv[]) {
    double r;

    if (argc == 3 && strcmp(argv[1], "car") == 0) {
        r = _car(atof(argv[2]));
    } else if (argc == 4) {
        double a = atof(argv[2]);
        double b = atof(argv[3]);

        if (strcmp(argv[1], "add") == 0) {
            r = _add(a, b);
        } else if (strcmp(argv[1], "sub") == 0) {
            r = _sub(a, b);
        } else if (strcmp(argv[1], "mul") == 0) {
            r = _mul(a, b);
        } else if (strcmp(argv[1], "div") == 0) {
            r = _div(a, b);
        } else {
            fprintf(stderr, "Erreur de parametres\n");
            return 1;
        }
    } else {
        fprintf(stderr, "Usage : %s car nombre | add/sub/mul/div nombre nombre\n", argv[0]);
        return 1;
    }

    printf("%lf\n", r);
    return 0;
}
