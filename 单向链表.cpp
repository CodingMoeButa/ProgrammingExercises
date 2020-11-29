/*
	Title: �������� 
	Version: 2.1.0
	Author: Ricky
	Github: https://github.com/ricky50575/ProgrammingExercises
	Website: http://lightnovel.moe/
*/ 

#include <iostream>
using namespace std;

struct node{//ͨ���ṹ�嶨��node���ڵ㣩��������
	int data;//�ڵ��������
	struct node* next;//�ڵ��ָ����Ϊָ����һ���ڵ��ָ��
};

node* createLink(){//����һ��������ֻ�������ƽڵ㣨��ڽڵ㡢��ʼ�ڵ㡢��ĩ�ڵ㣩�����������ݽڵ�
	node* entry = new node;//������ڽڵ�
	node* head = new node;//������ʼ�ڵ�
	node* tail = new node;//������ĩ�ڵ�
	tail->next = NULL;//��ĩ�ڵ㲻������һ���ڵ㣬����ĩ�ڵ��ָ���򸳿�ֵ 
	head->next = tail;//���������ʼ�ڵ����һ���ڵ�����ĩ�ڵ� 
	entry->next = head;//��ڽڵ����һ���ڵ�����ʼ�ڵ� 
	
	return entry;//������ڽڵ��ָ��
}

bool insertNode(node* entry, int data, int after){/* ��ָ���ڵ㣨after�������һ���µ����ݽڵ㣬data�Ǹ����ݽڵ�������� 
�ڱ������У���ʼ�ڵ�����Ϊ0�����ݽڵ�����Ϊ������ */ 
	node* temp = entry;
	int i;
	
	for(i = 0; i <= after; i++){//�ƶ�temp��Ҫ�����λ�� 
		temp = temp->next;
		if(temp->next == NULL){
			return false;//�������󷵻ؼ� 
		}
	}
	
	node* insert = new node;//����һ���µ����ݽڵ� 
	insert->data = data;//�����ݽڵ��������ֵ 
	insert->next = temp->next;//����һ���ڵ����� 
	temp->next = insert;//����һ���ڵ����� 
	return true;//ִ�гɹ������� 
}

bool updateNode(node* entry, int data, int index){//���£��޸ģ�ָ�����ݽڵ��������index����� 
	node* target = entry;
	int i;
	
	for(i = 0; i <= index; i++){//�ƶ�target��Ҫ������λ�� 
		target = target->next;
		if(target->next == NULL){
			return false;
		}
	}
	
	target->data = data;//����Ŀ�����ݽڵ�������� 
	return true;
} 

bool deleteNode(node* entry, int index){//ɾ��ָ�����ݽڵ� 
	node* target = entry;
	node* last;
	int i;
	
	for(i = 0; i <= index; i++){//�ƶ�target��Ҫ������λ�ã�last��target����һ��λ�� 
		last = target;
		target = target->next;
		if(target->next == NULL){
			return false;
		}
	}
	
	last->next = target->next;//����ǰ��ڵ� 
	delete target;//�ͷ�Ŀ��ڵ� 
	return true;
}

int readNode(node* entry, int index){//��ȡָ�����ݽڵ�������� 
	node* target = entry;
	int i;
	
	for(i = 0; i <= index; i++){
		target = target->next;
	}
	
	return target->data;//���������� 
}

int sizeofLink(node* entry){//��ȡָ����������ݽڵ��� 
	int size = 0;
	node* head = entry->next;
	node* temp = head->next;
	
	while(temp->next != NULL){
		size++;
		temp = temp->next;
	}
	
	return size;
} 

void deleteLink(node* entry){//ɾ������
	node* target = entry;
	node* last;
	
	while(target != NULL){
		last = target;
		target = target->next;
		delete last;//�ͷ�Ŀ��ڵ�
	}
} 

int main(){//���������ڲ��Գ��� 
	int i;
	
	node* entry = createLink();//����һ�������� 
	
	for(i = 1; i <= 5; i++){//������������������Ϊ����1��5�����ݽڵ� 
		if(insertNode(entry, i, i-1) == false){//�ж�ִ���Ƿ�ʧ�� 
			puts("Node inserting failed!");//���ִ��ʧ����ʾ��Ϣ 
		}
	}
	for(i = 1; i <= 5; i++){//�г������5�����ݽڵ�������� 
		printf("%d ",readNode(entry, i)); 
	}
	printf("\n");
	
	for(i = 1; i <= 5; i++){//�������1������5�����ݽڵ�����������Ϊ����5��1 
		if(updateNode(entry, 6-i, i) == false){
			puts("Node updating failed!");
		}
	}
	updateNode(entry, 10, 3);//����3�����ݽڵ�����������Ϊ10 
	for(i = 1; i <= 5; i++){
		printf("%d ",readNode(entry, i)); 
	}
	printf("\n");
	
	if(deleteNode(entry, 3) == false){//ɾ����3�����ݽڵ� 
		puts("Node deleting failed!");
	}
	for(i = 1; i <= 4; i++){
		printf("%d ",readNode(entry, i)); 
	}
	printf("\n");
	
	printf("%d\n",sizeofLink(entry));//ȡ������ 
	
	deleteLink(entry);//ɾ������
	for(i = 1; i <= 4; i++){
		printf("%d ",readNode(entry, i)); 
	}
	
	return 0;
}
