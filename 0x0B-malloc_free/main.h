<<<<<<< HEAD
#ifndef MAIN_H	
#define MAIN_H

char *create_array(unsigned int size, char c);		
int _putchar(char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);

=======
#ifndef MAIN_H
		
#define MAIN_H
		

		
char *create_array(unsigned int size, char c);
		
int _putchar(char c);
		
char *_strdup(char *str);
		
char *str_concat(char *s1, char *s2);
		
int **alloc_grid(int width, int height);
		
void free_grid(int **grid, int height);
		
char *argstostr(int ac, char **av);
		

		
>>>>>>> c22e237461c9f523a4a468bbc04386db23d38688
#endif
