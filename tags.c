#include <stdlib.h>
#include <stdint.h>
#include <string.h>


//s is the tag
struct s
{
	//---snip---
};

struct s v; //instance of struct s
struct s* p; //pointer to struct s


//Names of unions and enums are also tags and not types. 
//They can't be used alone to declare a variable
enum day{pzt,salý,crs,prs,cm};
enum day tomorrow; //OK
day today; // wrong


enum status{ok,fail}; //enumaration
enum status status(void); //function

struct s s; //declare an object s of type struct s


//valid in c
/*This allows you to declare variables of type t instead of
struct s. The tag name in struct,union and enum is optional.*/
typedef struct s
{
	int x;
}t;


typedef struct
{
	int x;

}deneme_s;


struct tnode
{
	int count;
	struct tnode* left;
	struct tnode* right;
};

typedef struct xnode
{
	int count;
	struct xnode* left;
	struct xnode* right;

}xnode;


int main(void) {
	deneme_s deneme;
	deneme.x;

	t deneme2;
	deneme2.x;
	
}
