TARGET= Cmanager
CFLAGS=-c -Wall
CC=cc

$(TARGET) : emp_manage.o add_emp.o display_emp.o increment.o display_details.o clean.o delete_emp.o
	$(CC) emp_manage.o add_emp.o display_emp.o increment.o display_details.o clean.o delete_emp.o -o $(TARGET)
	
*.o : *.c
	$(CC) $(CFLAGS) $^
	
clean :
	rm *.o
	rm $(TARGET)
run :
	./$(TARGET)
