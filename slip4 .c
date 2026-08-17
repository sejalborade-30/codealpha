#include<stdio.h>
#include<dirent.h>
#include<string.h>

int main()
{  
   char filename[100];
   printf("Enter the filename: ");
   scanf("%s,filename);
   
   DIR *dir;
   struct dirent *ent:
   
   dir=opendir(".");
   if(dir==NULL)
   {
      printf("Unable to open directory\n");
      return 1;
    }
    
    while((ent=readdir(dir)) !=NULL)
    {
       if(strcmp(ent->d_name,filename)==0)
       {
          printf("File found\n");
          closedir(dir);
          return 0;
        }
    }
    
    printf("File not found\n");
    closedir(dir);
    return 0;
}
