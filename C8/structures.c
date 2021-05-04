#include <stdio.h>
#include <string.h>

// Structure is a user defined data type.
// It can contain different data types.

struct address
{
    char name[50];
    char street[100];
    char city[50];
    int no;
}address1; // address2 can be declared here.


typedef struct addresss
{
    char name[50];
    char street[100];
    char city[50];
    int no;
}adr; // It has alias as 'adr'.

int main(){


    struct  address ad2 = {"Home", "Akdeniz", "Istanbul", 42};

    // If we have a pointer to structure, members are accessed using arrow ( -> ) operator.
    struct  address *p = &ad2;
    printf("%s %s %s %d\n",p->name,p->street, p->city, p->no );

    // Another usage.
    strcpy(address1.name , "Company");      // You cannot assign string values directly:
    strcpy(address1.street , "Ordular");    // address1.city = "London"; (error)
    strcpy(address1.city , "Istanbul");     // strcpy(address1.city, "London"=; OK
    address1.no = 21;

    printf("%s %d\n", address1.name, address1.no);

    // typedef provides aliases for types.
    // typede int integer;
    typedef struct address Adr;
    // adr address4; same as struct address address4;

    Adr address3 = {"School", "Ileri", "Ankara", 12};
    printf("%s %s %s %d\n",address3.name,address3.street, address3.city, address3.no );

    return 0;
}