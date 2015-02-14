#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>
#include <errno.h>
#define ABCD 2

/* define replacement */
#define FUNCTION(name, a) int fun_##name(int x) { return (a)*x;}
FUNCTION(quadruple, 4)
FUNCTION(double, 2)

/* structures */
struct Books {
    char  title[50];
    char  author[50];
    char  subject[100];
    int   book_id;
} book;  

/* struct as a parameter */
void printBook( struct Books book ){
    printf( "Book title : %s\n", book.title);
    printf( "Book author : %s\n", book.author);
    printf( "Book subject : %s\n", book.subject);
    printf( "Book book_id : %d\n", book.book_id);
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
        printf("-> pos address:%x\n", pos);
        printf("-> str address:%x\n", str);
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

    /* get average */
    double balance[10] = {11.0,12.0,13.0,14.0,15.0,16.0,17.0,18.0,19.0,20.0};
    double aver_balance;
    printf("getAverage(balance): %ld\n", getAverage(balance, 10));

    /* get average from ptr as a parameter*/
    double *balanceptr = balance;
    printf("getAverageByPtr(balanceptr): %ld\n", getAverage(balanceptr, 10));

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

    /* subfunc call in main */
    subfunc();

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

    errno = 0;
    1.0/0.0;
    show_errno();

    errno = 0;
    acos(+1.1);
    show_errno();

    errno = 0;
    log(0.0);
    show_errno();

    errno = 0;
    sin(0.0);
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
    const int pi = 3.14;
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
    char* str = "one two three";
    find_str(str, "two");

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
