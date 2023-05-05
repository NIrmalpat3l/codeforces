#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

typedef struct {
  int id;
  char first_name[50];
  char last_name[50];
  int age;
  char gender;
} Student;

Student students[MAX_STUDENTS];
int num_students = 0;

void add_student() {
  if (num_students == MAX_STUDENTS) {
    printf("Error: database is full\n");
    return;
  }

  printf("Enter student ID: ");
  scanf("%d", &students[num_students].id);

  printf("Enter first name: ");
  scanf("%s", students[num_students].first_name);

  printf("Enter last name: ");
  scanf("%s", students[num_students].last_name);

  printf("Enter age: ");
  scanf("%d", &students[num_students].age);

  printf("Enter gender (M/F): ");
  scanf(" %c", &students[num_students].gender);

  num_students++;
}

void search_student() {
  int id;
  printf("Enter student ID: ");
  scanf("%d", &id);

  for (int i = 0; i < num_students; i++) {
    if (students[i].id == id) {
      printf("ID: %d\n", students[i].id);
      printf("Name: %s %s\n", students[i].first_name, students[i].last_name);
      printf("Age: %d\n", students[i].age);
      printf("Gender: %c\n", students[i].gender);
      return;
    }
  }

  printf("Error: student not found\n");
}

void list_students() {
  for (int i = 0; i < num_students; i++) {
    printf("ID: %d\n", students[i].id);
    printf("Name: %s %s\n", students[i].first_name, students[i].last_name);
    printf("Age: %d\n", students[i].age);
    printf("Gender: %c\n", students[i].gender);
    printf("\n");
  }
}

void delete_student() {
  int id;
  printf("Enter student ID: ");
  scanf("%d", &id);

  for (int i = 0; i < num_students; i++) {
    if (students[i].id == id) {
      for (int j = i; j < num_students - 1; j++) {
        students[j] = students[j + 1];
      }
      num_students--;
      return;
    }
  }

  printf("Error: student not found\n");
}

int main() {
  while (1)