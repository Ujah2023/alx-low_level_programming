gcc -c *.c compiles all object files .c to files .o

ar rcs libmy.a creates file libmy.a

ar rcs libmy.a *.o copies all files .o to libmy.a file

create_static_lib.sh that creates a static library called liball.a
from all the .c files that are in the current directory
