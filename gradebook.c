#include <stdio.h>

#define MAX_STUDENTS 100

void inputGrades(int grades[], int numStudents);
double calculateAverage(int grades[], int numStudents);
int findHighest(int grades[], int numStudents);
int findLowest(int grades[], int numStudents);

int main(void) {
  int grades[MAX_STUDENTS];
  int numStudents;

  printf("Enter the number of students: ");
  scanf("%d", &numStudents);

  inputGrades(grades, numStudents);

  double avg = calculateAverage(grades, numStudents);
  printf("Average grade: %.2f\n", avg);

  int highest = findHighest(grades, numStudents);
  printf("Highest grade: %d\n", grades[highest]);

  int lowest = findLowest(grades, numStudents);
  printf("Lowest grade: %d\n", grades[lowest]);

  return 0;
}

void inputGrades(int grades[], int numStudents) {
  for (int i = 0; i < numStudents; i++) {
    printf("Enter grade for student %d: ", i + 1);
    scanf("%d", &grades[i]);
  }
}

double calculateAverage(int grades[], int numStudents) {
  int sum = 0;
  for (int i = 0; i < numStudents; i++) {
    sum += grades[i];
  }
  return (double)sum / numStudents;
}

int findHighest(int grades[], int numStudents) {
  int highest = 0;
  for (int i = 1; i < numStudents; i++) {
    if (grades[i] > grades[highest]) {
      highest = i;
    }
  }
  return highest;
}

int findLowest(int grades[], int numStudents) {
  int lowest = 0;
  for (int i = 1; i < numStudents; i++) {
    if (grades[i] < grades[lowest]) {
      lowest = i;
    }
  }
  return lowest;
}
