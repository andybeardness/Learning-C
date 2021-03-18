#define МAXSIZE 100 
typedef struct list { 
	Item entries[МAXSIZE]; /* массив элементов              */ 
	int items;             /* количество элементов в списке */
} List;