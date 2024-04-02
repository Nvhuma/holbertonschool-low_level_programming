#include "function_pointers.h"

/**
 * print_name - Prints a name using a specified printing function
 * @name: The name to print
 * @f: Pointer to the printing function
 *
 * Description: This function takes a name and a pointer to a printing function
 *              as arguments. It calls the specified printing function to print
 *              the name.
 */
void print_name(char *name, void (*f)(char *)) {
    if (name != NULL && f != NULL) {
        f(name);
    }
}
