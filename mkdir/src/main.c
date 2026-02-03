#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

void
printUsage();

int
main(int argc, char **argv) {
    if (argc == 1) {
        printUsage();
        return 0;
    }
    for (int i = 1; i < argc; ++i) {
        mode_t permissions = S_IRWXU | S_IRWXG | S_IRWXO;
        if (mkdir(argv[i], permissions) == -1) {
            fprintf(stderr, "Error to creating a directory: %s\n", strerror(errno));
            return -1;
        }
    }
    return 0;
}

void
printUsage() {
    // TODO: create logic
}
