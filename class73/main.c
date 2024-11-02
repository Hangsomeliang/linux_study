#include <stdio.h>
#include <stdlib.h>
#include "sqlist.h"

int main()
{
	sqlist *list;
	datatype arr[] = {12,23,34,45,56};
	int i,err;
	//list = sqlist_create();
	sqlist_create1(&list);
	if(list==NULL)
	{
		fprintf(stderr,"sqlist_create() failed!\n");
		exit(1);
	}
	for(i=0;i<sizeof(arr)/sizeof(*arr);i++)
		if((err = sqlist_insert(list,0,&arr[i])) != 0)
		{
			if(err == -1)
				fprintf(stderr,"The arr is full.\n");
			else if(err == -2)
				fprintf(stderr,"the pos you want to insert is wrong.\n");
			else
				fprintf(stderr,"Error\n");
			exit(1);
		}
	sqlist_display(list);
	
	sqlist_delete(list,1);

	sqlist_display(list);

	sqlist_destroy(list);
	exit(0);
}


