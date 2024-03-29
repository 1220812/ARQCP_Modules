 typedef struct{
	short number;
	int grades[5];
	char age;
	char name[60];
	char address[100];
} Student;

void fill_student(Student *s, char age, short number, char *name, char *address);

void update_address(Student *s, char *new_address);

void update_grades(Student *s, int *new_grades);

int locate_greater(Student *s, int minimum, int *greater_grades);
