#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
//struct Student {
//	// ��Щ�ڲ�����������, ��Ϊ "��Ա" / "����" / "�ֶ�" 
//	int id;         // ѧ��
//	char name[10];  // ����
//	int age;        // ����
//	double score;   // ����
//};
//typedef struct Student Student;

typedef struct Student {
	int id;         // ѧ��
	char name[1024];  // ����
	int age;        // ����
	double score;   // ����
} Student;
Student student = { 1, "zhangsan", 20, 95.5 };
	printf("%d\n", student.id);
	printf("%s\n", student.name);
	printf("%d\n", student.age);
	printf("%f\n", student.score);
	getchar();
	return 0;
}