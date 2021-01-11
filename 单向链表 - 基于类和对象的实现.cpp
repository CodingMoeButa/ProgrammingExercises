/*
	Title: 单向链表 
	Version: 2.2.0
	Author: Ricky
	Github: https://github.com/ricky50575/ProgrammingExercises
	Website: http://lightnovel.moe/
*/ 

#include <iostream>
using namespace std;

class LinkList{
	private:
		struct node{//通过结构体定义node（节点）数据类型
			int data;//节点的数据域
			node* next;//节点的指针域，为指向下一个节点的指针
		};
		
		node* entry;//创建入口节点
		node* head;//创建起始节点
		node* tail;//创建终末节点
		
	public:
		LinkList(){//创建一个空链表，只包含控制节点（入口节点、起始节点、终末节点），不包含数据节点
			tail->next = NULL;//终末节点不存在下一个节点，故终末节点的指针域赋空值 
			head->next = tail;//空链表的起始节点的下一个节点是终末节点 
			entry->next = head;//入口节点的下一个节点是起始节点 
		}
		
		bool insertNode(int data, int after){/* 在指定节点（after）后插入一个新的数据节点，data是该数据节点的数据域； 
		在本程序中，起始节点的序号为0，数据节点的序号为正整数 */ 
			node* temp = entry;
			int i;
			
			for(i = 0; i <= after; i++){//移动temp到要插入的位置 
				temp = temp->next;
				if(temp->next == NULL){
					return false;//参数错误返回假 
				}
			}
			
			node* insert = new node;//创建一个新的数据节点 
			insert->data = data;//向数据节点的数据域赋值 
			insert->next = temp->next;//与下一个节点连接 
			temp->next = insert;//与上一个节点连接 
			return true;//执行成功返回真 
		}
		
		bool updateNode(int data, int index){//更新（修改）指定数据节点的数据域，index是序号 
			node* target = entry;
			int i;
			
			for(i = 0; i <= index; i++){//移动target到要操作的位置 
				target = target->next;
				if(target->next == NULL){
					return false;
				}
			}
			
			target->data = data;//更新目标数据节点的数据域 
			return true;
		} 
		
		bool deleteNode(int index){//删除指定数据节点 
			node* target = entry;
			node* last;
			int i;
			
			for(i = 0; i <= index; i++){//移动target到要操作的位置，last是target的上一个位置 
				last = target;
				target = target->next;
				if(target->next == NULL){
					return false;
				}
			}
			
			last->next = target->next;//连接前后节点 
			delete target;//释放目标节点 
			return true;
		}
		
		int readNode(int index){//读取指定数据节点的数据域 
			node* target = entry;
			int i;
			
			for(i = 0; i <= index; i++){
				target = target->next;
			}
			
			return target->data;//返回数据域 
		}
		
		int sizeofLink(){//获取指定链表的数据节点数 
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
				delete last;//释放目标节点
			}
		}
};

int main(){//主函数用于测试程序 
	int i;
	
	LinkList linklist;//创建一个空链表 
	
	for(i = 1; i <= 5; i++){//向空链表中添加数据域为整数1至5的数据节点 
		if(linklist.insertNode(i, i-1) == false){//判断执行是否失败 
			puts("Node inserting failed!");//输出执行失败提示信息 
		}
	}
	for(i = 1; i <= 5; i++){//列出链表的5个数据节点的数据域 
		printf("%d ",linklist.readNode(i)); 
	}
	printf("\n");
	
	for(i = 1; i <= 5; i++){//将链表第1个至第5个数据节点的数据域更新为整数5至1 
		if(linklist.updateNode(6-i, i) == false){
			puts("Node updating failed!");
		}
	}
	linklist.updateNode(10, 3);//将第3个数据节点的数据域更新为10 
	for(i = 1; i <= 5; i++){
		printf("%d ",linklist.readNode(i)); 
	}
	printf("\n");
	
	if(linklist.deleteNode(3) == false){//删除第3个数据节点 
		puts("Node deleting failed!");
	}
	for(i = 1; i <= 4; i++){
		printf("%d ",linklist.readNode(i)); 
	}
	printf("\n");
	
	printf("%d\n",linklist.sizeofLink());//取链表长度 
	
	return 0;
}
