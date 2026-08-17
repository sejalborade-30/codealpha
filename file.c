#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<time.h>
#include<sys/stat.h>
#include<sys/types.h>

int main()
{
  char fname[20];
  struct stat buffer;
  int flag;
  

  
  flag=stat(argv[1],&buffer);
  
  if(flag==0)
  { 
     printf("file exist\n");
     printf("inode= %ld",buffer.st_ino);
     printf("\nfile size=%ld",buffer.st_size);
     printf("\n No.of link to file %ld",buffer.st_nlink);
     printf("\nLast modified time: %s",ctime(&buffer.st_atime));
     printf("\n permission for file\n");
     if(buffer.st_mode && W_OK)
     printf("\tWrite");
     if(buffer.st_mode && R_OK)
     printf("\tRead");
     if(buffer.st_mode && X_OK)
     printf("\tExecute");
     if(S_ISDIR(buffer.st_mode))
           printf("\n type of the file s is directory");
           else if(S_ISREG(buffer.st_mode))
           printf("\n type of file is Regular file");
           else
           printf("\n other than directory or regular file...");
    }
    else
      {
         printf("file does not exists");
       }
  }
