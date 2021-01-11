/*
	Title: �������� 
	Version: 2.2.0
	Author: Ricky
	Github: https://github.com/ricky50575/ProgrammingExercises
	Website: http://lightnovel.moe/
*/ 

#include <iostream>
using namespace std;

class LinkList{
	private:
		struct node{//ͨ���ṹ�嶨��node���ڵ㣩��������
			int data;//�ڵ��������
			node* next;//�ڵ��ָ����Ϊָ����һ���ڵ��ָ��
		};
		
		node* entry;//������ڽڵ�
		node* head;//������ʼ�ڵ�
		node* tail;//������ĩ�ڵ�
		
	public:
		LinkList(){//����һ��������ֻ�������ƽڵ㣨��ڽڵ㡢��ʼ�ڵ㡢��ĩ�ڵ㣩�����������ݽڵ�
			tail->next = NULL;//��ĩ�ڵ㲻������һ���ڵ㣬����ĩ�ڵ��ָ���򸳿�ֵ 
			head->next = tail;//���������ʼ�ڵ����һ���ڵ�����ĩ�ڵ� 
			entry->next = head;//��ڽڵ����һ���ڵ�����ʼ�ڵ� 
		}
		
		bool insertNode(int data, int after){/* ��ָ���ڵ㣨after�������һ���µ����ݽڵ㣬data�Ǹ����ݽڵ�������� 
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
		
		bool updateNode(int data, int index){//���£��޸ģ�ָ�����ݽڵ��������index����� 
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
		
		bool deleteNode(int index){//ɾ��ָ�����ݽڵ� 
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
		
		int readNode(int index){//��ȡָ�����ݽڵ�������� 
			node* target = entry;
			int i;
			
			for(i = 0; i <= index; i++){
				target = target->next;
			}
			
			return target->data;//���������� 
		}
		
		int sizeofLink(){//��ȡָ����������ݽڵ��� 
			int size = 0;
			node* head = entry->next;
			node* temp = head->next;
			
			while(temp->next != NULL){
				size++;
				temp = temp->next;
			}
			
			return size;
		} 
		
		~LinkList(){
			node* target = entry;
			node* last;
			
			while(target != NULL){
				last = target;
				target = target->next;
				delete last;//�ͷ�Ŀ��ڵ�
			}
		}
};

int main(){//���������ڲ��Գ��� 
	int i;
	
	LinkList linklist;//����һ�������� 
	
	for(i = 1; i <= 5; i++){//������������������Ϊ����1��5�����ݽڵ� 
		if(linklist.insertNode(i, i-1) == false){//�ж�ִ���Ƿ�ʧ�� 
			puts("Node inserting failed!");//���ִ��ʧ����ʾ��Ϣ 
		}
	}
	for(i = 1; i <= 5; i++){//�г������5�����ݽڵ�������� 
		printf("%d ",linklist.readNode(i)); 
	}
	printf("\n");
	
	for(i = 1; i <= 5; i++){//�������1������5�����ݽڵ�����������Ϊ����5��1 
		if(linklist.updateNode(6-i, i) == false){
			puts("Node updating failed!");
		}
	}
	linklist.updateNode(10, 3);//����3�����ݽڵ�����������Ϊ10 
	for(i = 1; i <= 5; i++){
		printf("%d ",linklist.readNode(i)); 
	}
	printf("\n");
	
	if(linklist.deleteNode(3) == false){//ɾ����3�����ݽڵ� 
		puts("Node deleting failed!");
	}
	for(i = 1; i <= 4; i++){
		printf("%d ",linklist.readNode(i)); 
	}
	printf("\n");
	
	printf("%d\n",linklist.sizeofLink());//ȡ������ 
	
	return 0;
}
