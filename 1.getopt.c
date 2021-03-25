/*************************************************************************
	> File Name: 1.getopt.c
	> Author: 
	> Mail: 
	> Created Time: Mon 22 Mar 19:31:58 2021
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc, char **argv){
    int opt;
    while((opt = getopt(argc, argv, "ab:c::")) != -1){
        switch(opt){
            case 'a':
                printf("opt a found!\n");
                 printf("ind = %d\n", optind);
                 break;
            case 'b':
                printf("opt b found!\n");
                printf("ind = %d\n", optind);
                printf("arg for b = %s\n", optarg); 
                break;
            case 'c':
                printf("opt c found!\n");
                printf("ind = %d\n", optind);
                printf("arg for c = %s\n", optarg );
                break;
            default:
                fprintf(stderr, "Usage: %s -a -b barg -c[arg]!\n", argv[0]);
                exit(1);
        }
    }
}
