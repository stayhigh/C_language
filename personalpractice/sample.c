#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>
#include <errno.h>
#include <time.h>
#include <stdarg.h> //for va_list
#define ABCD 2


enum Action{stop, sit, stand, walk, run};

/* va_list */ 
double average(int num,...)
{
    va_list valist;
    double sum = 0.0;
    int i;

    /* initialize valist for num number of arguments */
    va_start(valist, num);

    /* access all the arguments assigned to valist */
    for (i = 0; i < num; i++)
    {
        sum += va_arg(valist, int);
    }
    /* clean memory reserved for valist */
    va_end(valist);

    return sum/num;
}

/* define replacement */
#define FUNCTION(name, a) int fun_##name(int x) { return (a)*x;}
FUNCTION(quadruple, 4)
FUNCTION(double, 2)
/* return array from function in C*/
int * getRandom( )
{
    static int  r[10];
    int i;
    /* set the seed */
    srand( (unsigned)time( NULL ) );
    for ( i = 0; i < 10; ++i)
    {
        r[i] = rand();
        printf( "r[%d] = %d\n", i, r[i]);

    }
    return r;
}

/* structures */
struct Books {
    char  title[50];
    char  author[50];
    char  subject[100];
    int   book_id;
} book;  

/* typedef the struct Books to Type name Book */
typedef struct Books Book;

/* struct as function parameter */
void printBook( struct Books book ){
    printf( "Book title : %s\n", book.title);
    printf( "Book author : %s\n", book.author);
    printf( "Book subject : %s\n", book.subject);
    printf( "Book book_id : %d\n", book.book_id);
};

/* struct pointer as function parameter */
void printBookByPtr( struct Books *book ){
    printf( "Book title : %s\n", book->title); // the same as (&book).title
    printf( "Book author : %s\n", book->author);
    printf( "Book subject : %s\n", book->subject);
    printf( "Book book_id : %d\n", book->book_id);
};

/* define simple structure */
struct
{
    unsigned int widthValidated;
    unsigned int heightValidated;
} status1; // sizeof(status1) is  8

/* define a structure with bit fields */
struct
{
    unsigned int widthValidated : 1;
    unsigned int heightValidated : 1;
} status2; // sizeof(status2) is 4

/* a good example for bit-field */
struct packed_struct {
    unsigned int f1:1;
    unsigned int f2:1;
    unsigned int f3:1;
    unsigned int f4:1;
    unsigned int type:4;
    unsigned int my_int:9;
} pack;

/* age for 3 fields */
struct
{
  unsigned int age : 3;
} Age;

/* union allow different data types in the same memory location */
 
union Data
{
    int i;
    float f;
    char  str[20];
};

/* function forms */
void myFunc1(int *param){ }    // pointer
void myFunc2(int param[10]){ } // sized array
void myFunc3(int param[]){ }   // unsized array

double getAverage(double arr[], int size) {
    int index;
    double sum;
    double result;
    for (index = 0; index < size; index++){
        sum += arr[index];
    }
    result = sum / size;
    return result;
}

double getAverageByPtr(double *target, int size){
    int index;
    double sum;
    double result;
    for (index = 0; index < size; index++){
        sum += *(target + index);
    }
    result = sum / size;
    return result;
}


void find_str(char const* str, char const* substr) 
{
    char* pos = strstr(str, substr);
    if(pos) {
        printf("-> pos address:%x\n", (unsigned int) pos);
        printf("-> str address:%x\n", (unsigned int) str);
        printf("found the string '%s' in '%s' at position: %ld\n", substr, str, pos - str);
    } else {
        printf("the string '%s' was not found in '%s'\n", substr, str);
    }
}
 

/* self-defined show_errno function */
void show_errno(void)
{
    if(errno==EDOM)   printf("domain error");
    if(errno==EILSEQ) printf("illegal sequence");    
    if(errno==ERANGE) printf("pole or range error");
    if(errno==0)      printf("no error");
    printf(" occurred\n");
}

/* function at program exit */
void func_at_exit(void){
    printf("function at exit\n");
}

void subfunc(void); // It is necessary to do declaration before using it

 
 
int main(int argc, char *argv[])
{
    /* show input args numbers and its args*/
    printf("you have input args number is %d\n", argc);
    int i; 
    for (i = 0; i < argc; i++ ){
        printf("arg %d is %s\n",i, argv[i]  );
    }

    /* show conditionally*/
    printf("__STDC_VERSION__: %ld\n", __STDC_VERSION__);
    printf("__STDC_HOSTED__ : %d\n", __STDC_HOSTED__ );

    /* enumeration */
    enum Action action = stop;
    action = stand;
    printf("-> action is %d\n", action + 2);

    /*convert enum names into string */
#define FOREACH_FRUIT(FRUIT) \
    FRUIT(apple)   \
    FRUIT(orange)  \
    FRUIT(grape)   \
    FRUIT(banana)  \

#define GENERATE_ENUM(ENUM) ENUM,
#define GENERATE_STRING(STRING) #STRING,

    enum FRUIT_ENUM {
        FOREACH_FRUIT(GENERATE_ENUM)
    };

    static const char *FRUIT_STRING[] = {
        FOREACH_FRUIT(GENERATE_STRING)
    };

    printf("enum apple as a string: %s\n",FRUIT_STRING[apple]);


    /* get average */
    double balance[10] = {11.0,12.0,13.0,14.0,15.0,16.0,17.0,18.0,19.0,20.0};
    double aver_balance;
    printf("getAverage(balance): %f\n", getAverage(balance, 10));

    /* get average from ptr as a parameter*/
    double *balanceptr = balance;
    printf("getAverageByPtr(balanceptr): %f\n", getAverage(balanceptr, 10));

    /* structure declarations */
    struct Books Book1;        /* Declare Book1 of type Book */
    struct Books Book2;        /* Declare Book2 of type Book */

    /* book 1 specification */
    strcpy( Book1.title, "C Programming");
    strcpy( Book1.author, "Nuha Ali"); 
    strcpy( Book1.subject, "C Programming Tutorial");
    Book1.book_id = 6495407;

    /* book 2 specification */
    strcpy( Book2.title, "Telecom Billing");
    strcpy( Book2.author, "Zara Ali");
    strcpy( Book2.subject, "Telecom Billing Tutorial");
    Book2.book_id = 6495700;

    /* print Book1 info */
    printf( "Book 1 title : %s\n", Book1.title);
    printf( "Book 1 author : %s\n", Book1.author);
    printf( "Book 1 subject : %s\n", Book1.subject);
    printf( "Book 1 book_id : %d\n", Book1.book_id);

    /* print Book2 info */
    printf( "Book 2 title : %s\n", Book2.title);
    printf( "Book 2 author : %s\n", Book2.author);
    printf( "Book 2 subject : %s\n", Book2.subject);
    printf( "Book 2 book_id : %d\n", Book2.book_id);

    /* print Book information with func */
    printBook(Book1);
    printBook(Book2);

    /* struct pointer should assign a address value, noted the '&' operator */
    struct Books *struct_pointer_book1;
    struct Books *struct_pointer_book2;
    struct_pointer_book1 = &Book1;
    struct_pointer_book2 = &Book2;
    printBookByPtr(struct_pointer_book1);
    printBookByPtr(struct_pointer_book2);

    /* bit field example */
    status1.widthValidated = 1;
    status1.heightValidated = 1;
    status2.widthValidated = 0;
    status2.heightValidated = 0;

    /* struct Age range from 0 to 7 (3 bits) */
    Age.age = 0;
    Age.age = 7;


    /* union data manipulation */
    union Data data;        
    data.i = 10;
    data.f = 220.5;
    strcpy( data.str, "C Programming");

    /* union got corrupted because final value 
     * assigned to the variable has occupied the memory location */
    printf( "data.i : %d\n", data.i);
    printf( "data.f : %f\n", data.f);
    printf( "data.str : %s\n", data.str);

    /* multiple dimension array declaration */
    int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}};
    int b[3][4] = {  
        {0, 1, 2, 3} ,   /*  initializers for row indexed by 0 */
        {4, 5, 6, 7} ,   /*  initializers for row indexed by 1 */
        {8, 9, 10, 11}   /*  initializers for row indexed by 2 */
    };
    int c[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

    /* pointer points the array returned from getRandom() */
    int index_arr;
    int *p;
    p = getRandom();
    for ( index_arr = 0; index_arr < 10; index_arr++ ) {
        printf( "*(p + %d) : %d\n", index_arr, *(p + index_arr));
    }
         
    /* pointer comparison */
    {
        const int MAX = 3;
        int index = 0;
        int *ptr;
        int var[] = {10, 100, 200};
        ptr = var; //the same as 'ptr = &var[0];'
        while ( ptr <= &var[MAX - 1] )
        {
            printf("Address of var[%d] = %x\n", index, (unsigned int) ptr );
            printf("Value of var[%d] = %d\n", index , *ptr );
            /* point to the previous location */
            ptr++;
            index++;
        }
    }


    {
        /* array of pointer assignment */
        int val1 = 1;
        int val2 = 2;
        int val3 = 3;
        int each;
        const int size = 3;
        int valueArr[size];
        int *ptrArray[size];
        for ( each = 0; each < size; each++ ){
            printf("assign> ptrArray[%d] = &valueArr[%d]\n",each,each);
            ptrArray[each] = &valueArr[each];
        }
    }

    {
        /*input & output*/
        //char str[100];
        //printf( "Enter a value :");
        //gets( str );
        //printf( "\nYou entered: ");
        //puts( str );
    }

    /* array of pointers */
    char *names[] = {
        "Zara Ali",
        "Hina Ali",
        "Nuha Ali",
        "Sara Ali",
    };

    /* subfunc call in main */
    subfunc();

    /* average with va_list*/
    printf("Average of 2, 3, 4, 5 = %f\n", average(4, 2,3,4,5));
    printf("Average of 5, 10, 15 = %f\n", average(3, 5,10,15));

    { /* sizeof() shows length with null character,  strlen() won't */
        const char str[] = "How many characters does this string contain?";
        printf("without null character: %zu\n", strlen(str));
        printf("with null character: %zu\n", sizeof(str));
    }

    {
        char name[100];
        strcpy(name, "Zara Ali");
        /* allocate memory dynamically */
        int strlen_required = strlen("Zara Ali");
        char *description = malloc( strlen_required * sizeof(char) );
        if( description == NULL )
        {
            fprintf(stderr, "Error - unable to allocate required memory\n");
        }
        else
        {
            strcpy( description, "Zara ali a DPS student in class 10th");
        }
        printf("Name = %s\n", name );
        printf("Description: %s\n", description );

        /* suppose you want to store bigger description */
        description = realloc( description, 100 * sizeof(char) );
        if( description == NULL )
        {
            fprintf(stderr, "Error - unable to allocate required memory\n");
        }
        else
        {
            strcat( description, "She is in class 10th");
        }

        printf("realloced Name = %s\n", name );
        printf("realloced Description: %s\n", description );

        /* release memory using free() function */
        free(description);
    }


#ifdef ABCD
    printf("1: yes\n");
#else
    printf("1: no\n");
#endif

#ifndef ABCD
    printf("2: no1\n");
#elif ABCD == 2
    printf("2: yes\n");
#else
    printf("2: no2\n");
#endif

#if !defined(DCBA) && (ABCD < 2*4-3)
    printf("3: yes\n");
#endif

 
 
#undef FUNCTION
#define FUNCTION 34
#define OUTPUT(a) puts( #a )
    printf("quadruple(13): %d\n", fun_quadruple(13) );
    printf("double(21): %d\n", fun_double(21) );
    printf("%d\n", FUNCTION);
    OUTPUT(million);               //note the lack of quotes
    //#pragma message("_X86 defined") //pragma is for special compiler 
    //#ifndef IMPORTANT
    //#error stayhigh_error_message_important_undefined // compilation stop
    //#endif

    /* change the current filename to targetfile.txt */
    /* change the current processor line number to 777 */
    //#define FNAME "targetfile.txt"
    //#line 777 FNAME
    //        assert(2+2 == 5);
    //
    //
    //
    /* Raise errno with non-zero value */
    printf("MATH_ERRNO is %s\n", math_errhandling & MATH_ERRNO ? "set" : "not set");

    /* you should assign expression result to a variable or cause unused value warning */
    int ret;
    errno = 0;
    ret = 1.0/0.0;
    show_errno();

    errno = 0;
    ret = acos(+1.1);
    show_errno();

    errno = 0;
    ret = log(0.0);
    show_errno();

    errno = 0;
    ret = sin(0.0);
    show_errno();


    FILE* f = fopen("non_existent", "r");
    if (f == NULL) {
        perror("open()");
    } else {
        fclose(f);
    }

    perror("@fopen():");


    errno = 0;
    printf("log(-1.0) = %f\n", log(-1.0));
    printf("strerr> %s\n\n",strerror(errno));

    errno = 0;
    printf("strerr> log(0.0)  = %f\n", log(0.0));
    printf("%s\n",strerror(errno));

    /* constant */
    const double pi = 3.14;
    const char NEWLINE = '\n';


    /* storage classes */
    {
        auto int month; // local variable, can used only within functions
    }


    /* save into register and doesn't have memory location.(& operator can't apply to it) */
    {
        register int miles; 
    }

    /* apply string searching function */
    {
        char* str = "one two three";
        find_str(str, "two");
    }
    /* arithmetic conversion */
    //int 
    //unsigned int 
    //long 
    //unsigned long
    //long long 
    //unsigned long long 
    //float
    //double
    //long double



    /* check errno */
    printf("start to checking the file /dev/zer0\n");
    int fd = -1;
    fd = open ("/dev/zer0", O_RDONLY);
    if (fd == -1)
    {
        /* perror uses errno */
        perror ("Ouuupsss");
        atexit(func_at_exit);
        exit (EXIT_FAILURE);
    }
    close (fd);

    return EXIT_SUCCESS;

}

void subfunc(void){
    printf("subfunc runs\n");
}
