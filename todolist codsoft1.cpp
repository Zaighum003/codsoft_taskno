//attempted by:            zaighum zawar
//codsoft internship task         
#include<iostream>
#include<conio.h>
using namespace std;
class todo_list{
	public:
		int array_size;
		string *arr;
		
		todo_list(){
			array_size=0;
			arr=new string[array_size];
		}
		~todo_list(){
			delete arr;
		}
		void addtask(string task){
			string *ch=new string[array_size+1];
			for(int i=0;i<array_size;i++){
				ch[i]=arr[i];
			}
			ch[array_size]=task;
			array_size+=1;
			arr=ch;
		}
		void removetask(int index){
			int flag=0;
			for(int i=0;i<array_size;i++){
				if(index==i){
					flag=1;
				}
			}
			if(flag==0){
				cout<<"no task exist at that index"<<endl;
			}
			else{
			string *ch=new string[array_size-1];
			for(int i=0;i<index;i++){
				ch[i]=arr[i];
			}
			for(int i=index;i<array_size-1;i++){
				ch[i]=arr[i+1];
			}
			array_size-=1;
			arr=ch;}
		}
};
int main(){
	todo_list list;
	int choice,index;
	string task;
	cout<<"******welcome******"<<endl;
	cout<<"******TO DO LIST******"<<endl;
	do{
		cout<<"your options:"<<endl;
		cout<<"1.open to do list"<<endl;
		cout<<"2.add task"<<endl;
		cout<<"3.remove task"<<endl;
		cout<<"4.exit"<<endl;
		cout<<"your choice: ";
		cin>>choice;
		cin.ignore();
		switch(choice){
			case 1:
				if(list.array_size==0){
					cout<<"you have no tasks today :)"<<endl;
				}
				else{
					for(int i=0;i<list.array_size;i++){
						cout<<i+1<<"."<<list.arr[i]<<endl;	
					}
				}
				getch();
				system("cls");
				break;
			case 2:
				cout<<"enter task"<<endl;
				getline(cin,task);
				list.addtask(task);
				cout<<"task added successfully"<<endl;
				getch();
				system("cls");
				break;
			case 3:
				for(int i=0;i<list.array_size;i++){
						cout<<i+1<<"."<<list.arr[i]<<endl;	
				}
				cout<<"enter index number of task that you want to remove"<<endl;
				cin>>index;
				list.removetask(index);
				getch();
				system("cls");
				break;
			default:
				cout<<"wrong option selected"<<endl;
				getch();
				system("cls");
				break;
				
				
		}
		
	}while(choice!=4);
}

