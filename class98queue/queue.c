#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

queue *qu_create()
{
	queue *sq;
	sq = malloc(sizeof(*sq));
	if(sq == NULL)
		return NULL;
	sq->head = 0;
	sq->tail = 0;

	return sq;
}

int qu_isempty(queue *)
{

}

int qu_enqueue(queue *,datatype *)
{

}

int qu_dequeue(queue *,datatype *)
{

}

void qu_travel(queue *)
{

}

void qu_clear(queue *)
{

}

void qu_destroy(queue *sq)
{
	
}


