#define _CRT_SECURE_NO_WARNINGS
#define MAX_PERSON 1000
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

typedef struct Person{
	char name[1024];
	char tel[1024];
}Person;

typedef struct AddressBook {
	Person persons[MAX_PERSON];
	int size;
}AddressBook;
void init(AddressBook* addressbook) {
	addressbook->size = 0;
}
void addPerson(AddressBook* addressbook){
	printf("������ϵ��\n");
	int cursize = addressbook->size;
	if (cursize >= MAX_PERSON){
		printf("ͨѶ¼����������ʧ�ܣ�\n");
	}
	Person* p = &addressbook->persons[cursize];
	printf("��������ϵ��������");
	scanf("%s", p->name);
	printf("��������ϵ�˵绰��");
	scanf("%s", p->tel);
	printf("������ϵ�˳ɹ�!\n");
	addressbook->size++;
}
void findPerson(AddressBook* addressbook){
	printf("��������������ϵ��\n");
	printf("������Ҫ���ҵ�����: ");
	char name[1024] = { 0 };
	scanf("%s", name);

	for (int i = 0; i < addressbook->size; i++) {
		Person* p = &addressbook->persons[i];
		if (strcmp(name, p->name) == 0) {
			printf("[%d]\t\t%s\t\t%s\n", i, p->name, p->tel);
		}
	}
	printf("������ϵ�����!\n");
}
void delPerson(AddressBook* addressbook){
	printf("ɾ����ϵ��\n");
	printf("������Ҫɾ������ϵ�˵ı��: ");
	int id = 0;
	scanf("%d", &id);
	if (id < 0 || id >= addressbook->size) {
		printf("������ı������!\n");
		return;
	}
	if (id == addressbook->size - 1){
		addressbook->size--;
		printf("ɾ���ɹ�!\n");
		return;
	}
	addressbook->persons[id] = addressbook->persons[addressbook->size - 1];
	addressbook->size--;
	printf("ɾ���ɹ�!\n");
}
void updatePerson(AddressBook* addressbook){
	printf("������ϵ��\n");
	printf("������Ҫ���µ���ϵ�˵ı��: ");
	int id = 0;
	scanf("%d", &id);
	if (id < 0 || id >= addressbook->size) {
		printf("������ı������!\n");
		return;
	}
	Person* p = &addressbook->persons[id];
	printf("��������ϵ��������");
	scanf("%s", p->name);
	printf("��������ϵ�˵绰��");
	scanf("%s", p->tel);
	printf("������ϵ�˳ɹ�!\n");
	
}
void printPerson(AddressBook* addressbook){
	printf("��������ϵ�ˣ�\n");
	for (int i = 0; i < addressbook->size; i++) {
		Person* p = &addressbook->persons[i];
			printf("[%d]\t\t%s\t\t%s\n", i, p->name, p->tel);
	}
	printf("���� [%d] ����¼\n", addressbook->size);
}
void clearPerson(AddressBook* addressbook){
	for (int i = 0; i < addressbook->size; i++) {
		addressbook->size--;
		if (addressbook->size == 0){
			break;
		}
	}
	printf("��ճɹ�\n");
}


void sortPerson(AddressBook* addressbook){
	if (addressbook->size <= 0){
		printf("ͨѶ¼��û����ϵ�ˣ������!\n");
	}
	int i = 0;
	int j = 0;
	for (i = 0; i<addressbook->size - 1; i++)
	{
		for (j = 0; j<addressbook->size - i - 1; j++)
		{
			if (strcmp(addressbook->persons[j].name, (addressbook->persons[j + 1]).name)>0)
			{
				Person tmp = addressbook->persons[j];
				addressbook->persons[j] = addressbook->persons[j + 1];
				addressbook->persons[j + 1] = tmp;
			}
		}
		printf("����ɹ���\n");
	}
}
int menu(){
	printf("=====================\n");
	printf(" 1. ������ϵ��\n");
	printf(" 2. ������ϵ��\n");
	printf(" 3. ɾ����ϵ��\n");
	printf(" 4. �޸���ϵ��\n");    
	printf(" 5. �鿴������ϵ��\n");
	printf(" 6. ���������ϵ��\n"); 
	printf(" 7. ����������������ϵ��\n"); 
	printf(" 0. �˳�\n");
	printf("=====================\n");
	printf(" ����������ѡ��:");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
typedef void(*Func)(AddressBook*);
AddressBook addressbook;
int main()
{
	Func funcs[] = {
		NULL,
		addPerson,
		findPerson,
		delPerson,
		updatePerson,
		printPerson,
		clearPerson,
		sortPerson,
	
	};
	init(&addressbook);
	
	while (1){
		int choice = menu();
		if (choice == 0){
			printf("GoodBye!!!");
			break;
		}
		if (choice<0 || choice>sizeof(funcs) / sizeof(funcs[0])){
			printf("����������Ч!\n");
			continue;
		}
		funcs[choice](&addressbook);
	}
	system("pause");
	return 0;
}