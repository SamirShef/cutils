#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <errno.h>
#include <string.h>

int
main(int argc, char **argv) {
    struct dirent **list;
    int n = scandir(".", &list, NULL, alphasort);
    if (n == -1) {
        fprintf(stderr, "Error: %s\n", strerror(errno));
        return 1;
    }
    while (n--) {
        if (list[n]->d_name[0] != '.') {
            printf("%s\n", list[n]->d_name);
        }
        free(list[n]);
    }
    free(list);

    return 0;
}
