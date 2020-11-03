#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    char name[2047]; //made not too big size of printed info, you may change it
    FILE * fp;
    bool append = false;

    read(fileno(stdin), name, sizeof(name));

    for (int i = 1; i < argc; i++){
        if(strncmp("-a", argv[i], sizeof("-a")) == 0){
            append = true;
            continue;
        }
        fp = fopen(argv[i],append ? "a":"w");
        fprintf(fp, "%s", name);
        fclose(fp);

        if (append){
            append = false;
        }
    }

    puts(name);

    return 0;
}