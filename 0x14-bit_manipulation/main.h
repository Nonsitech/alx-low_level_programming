#ifendef __MAIN_H__
#define __MAINN_H__

unsigned int binary_to_uint(const char*b);
void print_binary(unsignd long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bit(unsigned long int n, unsigned long in m);
int get_endianness(void);

#endif