#include <iostream>

using namespace std;
void task_1(); void task_2();void task_3();void task_4();

int main(){
    int num_task;
    cout<<"what task to perform (write a number): "<<endl;
    cin>>num_task;
    switch (num_task)
    {
    case 1:
        task_1();
        break;

    case 2:
        task_2();
        break;

        case 3:
        task_3();
        break;

    case 4:
        task_4();
        break;
    }

}

void task_1(){
    int num;
    int sum = 1;

    cout<<"Enter an integer: "<<endl;
    cin>>num;

    for (int i = 1; i <= num; i++){
        sum*=i;
    }
    cout<< "!" << num << " = " << sum<<endl;
}

void task_2(){
    int num;
    int sum = 0;

    cout<<"Enter an integer: "<<endl;
    cin>>num;

    for (int i = 0; i <= num; i++){
        if(i%2==0){
            sum+=i;
        }   
    }
    cout<<sum<<endl;
}

void task_3(){
    int common_divisor_max = 0;
    int num1, num2;

    cout<<"Enter the first number: "<<endl;
    cin>>num1;
    cout<<"Enter the second number: "<<endl;
    cin>>num2;

    for (int i = 1; i <= num1; i++)
    {
        if(num1%i==0 and num2%i==0 and i>common_divisor_max){
            common_divisor_max=i;
        }
    }
    cout<<common_divisor_max<<endl;
}

void task_4(){
    int n;
    double num1 = 0;
    double num2 = 1;
    double num3;
    double ratio,ratio2;
    cout<<"Enter an number: "<<endl;
    cin>>n;
    cout<<num1<<" ";
    for (int i = 0; i < n; i++)
    {
        num3 = num1+num2;
        cout << num3 << " ";
        num1 = num2;
        num2 = num3;    
    }

    ratio2 = num3/(num3-num1);
    cout << endl << endl << "Penultimate pair ratio = " << ratio2 << endl;
    ratio = num3/num1;
    cout << endl << "Last pair ratio = " << ratio << endl;
}