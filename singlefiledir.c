#include<stdlib.h>

#include<string.h>

#include<stdio.h>

struct

{

char dname[10],fname[10][10];

int fcnt;

}dir;

void main()

{

int i,ch;

char f[30];

dir.fcnt = 0;

printf("\nEnter name of directory -- ");

scanf("%s", dir.dname);

while(1)

{

printf("\n\n1. Create File\t2. Delete File\t3. Search File \n 4. Display Files\t5. Exit\nEnter your choice -- ");

scanf("%d",&ch);

switch(ch)

{

case 1: printf("\nEnter the name of the file -- "); 

scanf("%s",dir.fname[dir.fcnt]); dir.fcnt++;

break;

case 2: printf("\nEnter the name of the file -- "); 

scanf("%s",f);

for(i=0;i<dir.fcnt;i++)

{

if(strcmp(f, dir.fname[i])==0)

{

printf("File %s is deleted ",f); 

strcpy(dir.fname[i],dir.fname[dir.fcnt-1]); break; } } 

if(i==dir.fcnt) printf("File %s not found",f); else


dir.fcnt--;

break;

case 3: printf("\nEnter the name of the file -- ");

scanf("%s",f);

for(i=0;i<dir.fcnt;i++)

{

if(strcmp(f, dir.fname[i])==0)

{

printf("File %s is found ", f);

break;

}

}

if(i==dir.fcnt)

printf("File %s not found",f);

break;

case 4: if(dir.fcnt==0)

printf("\nDirectory Empty");

else

{

printf("\nThe Files are -- ");

for(i=0;i<dir.fcnt;i++)

printf("\t%s",dir.fname[i]);

}

break;

default: exit(0);

}

}

}





OUTPUT:

Enter name of directory -- dir

1. Create File 2. Delete File 3. Search File

4. Display Files	5. Exit

Enter your choice -- 1

Enter the name of the file -- f1

1. Create File 2. Delete File 3. Search File

4. Display Files	5. Exit

Enter your choice -- 1

Enter the name of the file -- f2

1. Create File 2. Delete File 3. Search File

4. Display Files	5. Exit

Enter your choice -- 4

The Files are --	f1   f2


1. Create File 2. Delete File 3. Search File

4. Display Files	5. Exit

Enter your choice -- 2

Enter the name of the file -- f1

File f1 is deleted



1. Create File 2. Delete File 3. Search File

4. Display Files	5. Exit

Enter your choice -- 3



Enter the name of the file -- f1

File f1 not found



1. Create File 2. Delete File 3. Search File

4. Display Files	5. Exit

Enter your choice – 5
