#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int 
main(int argc,char *argv[]){
    if(argc<=1){
        fprintf(2,"error:Please input the time  ");
    }
    else if(argc==2){
        int time=atoi(argv[1]);
        if(time<=0){
            fprintf(2,"error:Invalid time");
        }
        else{
            sleep(time);
            exit(0);
        }
    }
    else{
        fprintf(2,"error:Please only  input one time value");
    }
    exit(1);
}
