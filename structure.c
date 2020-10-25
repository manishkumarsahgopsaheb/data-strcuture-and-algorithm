// #include<stdio.h>
// #include<stdlib.h>

// ************ passing structure member as argument ********************

// struct student
// {
//     char name[50];
//     int age;
//     int roll_no;
//     float marks;
// };

// void print(char name[], int age, int roll_no, float marks)
// {
//     printf("%s %d %d %.2f", name, age, roll_no, marks);
// }

// int main()
// {
//     struct student s1 = {"manish", 21, 12, 75.63};  // passing value into the structure
//     print(s1.name, s1.age, s1.roll_no, s1.marks);   // passing structure member as an argument
// }




//  now lets pass the argument as address to structure i.e. call by reference

// struct charset{
//     char s;
//     int i;
// };

// void keyvalue(char *s, int *i)  // we know for holding the value of address we have pointer variable
// {
//     scanf("%c %d", s, i);
// }

// int main()
// {
//     struct charset cs;
//     keyvalue(&cs.s, &cs.i);   // call by reference
//     printf("%c %d", cs.s, cs.i);
//     return 0;
// }



// ****************** passing structure variable as argument *********************

// struct point
// {
//     int x;
//     int y;
// };

// void print(struct point p)
// {
//     printf("%d %d\n", p.x, p.y);
// }

// int main()
// {
//     struct point p1 = {23, 45};
//     struct point p2 = {56, 90};
//     print(p1);
//     print(p2);
//     return 0;
// }



// *************** passing address of the structure **************

// if the size of the structure is very large then passing the copy
// of whole structure is not efficient
// better choice: pass the address of the structure
// and use the arrow operator(->) to access the structure members inside the called function

// struct point
// {
//     int x;
//     int y;
// };

// void print(struct point *ptr)
// {
//     printf("%d %d\n", ptr->x, ptr->y);
// }

// int main()
// {
//     struct point p1 = {23, 45};
//     struct point p2 = {56, 90};

//     print(&p1);
//     print(&p2);
//     return 0;
// }



// ***************** returning a structure variable from the function *****************

// struct point
// {
//     int x;
//     int y;
// };

// struct point edit(struct point p)
// {
//     p.x = p.x + 1;
//     p.y = p.y + 5;
//     return p;
// }

// void print(struct point p)
// {
//     printf("%d %d\n", p.x, p.y);
// }

// int main()
// {
//     struct point p1 = {23, 45};
//     struct point p2 = {56, 90};
//     p1 = edit(p1);
//     p2 = edit(p2);
//     print(p1);
//     print(p2);
//     return 0;
// }



// ******************** returning a pointer to a structure from the function ****************

// struct point
// {
//     int x;
//     int y;
// };

// struct point* edit(int a, int b)
// {
//     struct point *ptr = (struct point *)malloc(sizeof(struct point));
//     ptr->x = a;
//     ptr->y = b + 5;
//     return ptr;
// }

// void print(struct point *p)
// {
//     printf("%d %d\n", p->x, p->y);
// }

// int main()
// {
//     struct point *p1, *p2;
//     p1 = edit(23, 45);
//     p2 = edit(56, 90);
//     print(p1);
//     print(p2);
//     free(p1);
//     free(p2);
//     return 0;
// }


// ********************** passing array of structure as argument ***********************

// struct abc
// {
//     int a;
//     int b;
// };

// void print(struct abc arr[])
// {
//     for(int i=0;i<2;i++)
//     {
//         printf("%d %d\n", arr[i].a, arr[i].b);
//     }
// }

// int main()
// {
//     struct abc arr[2] = {{1,2}, {3,4}};
//     print(arr);
//     return 0;
// }



// ************** what are self referential structures ******************

// self referential structures are those structures in which one or more pointers points to the 
// structure of the same type

// struct code
// {
//     int i;
//     int c;
//     struct code *ptr;
// };

// int main()
// {
//     struct code var1;
//     struct code var2;

//     var1.i = 65;
//     var1.c = 'A';
//     var1.ptr = NULL;

//     var2.i = 66;
//     var2.c = 'B';
//     var2.ptr = NULL;

//     // now let me establish the connection between var1 and var2
//     var1.ptr = &var2;
//     // var1.ptr is holding the address of var2 so
//     // now var1.ptr can access the element of var2
//     // its use in linked list
//     printf("%d %c", var1.ptr->i, var1.ptr->c);
//     return 0;
// }