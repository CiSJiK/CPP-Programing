#include <iostream>
using namespace std;

const int NAME_LEN=30;
struct account{
  int id;
  char name[NAME_LEN];
  int balance;
}acc;
int selectMain();
int main() 
{
    do{
      int input = selectMain();
      if(input == 0) break;
    }
    while(1);
    cout << "프로그램을 종료합니다." << endl;
    return 0;
}
int selectMain(){
  cout << "-----Menu-----" << endl;
  cout << "1. 계좌개설" << endl;
  cout << "2. 입 금" << endl;
  cout << "3. 출 금" << endl;
  cout << "4. 계좌정보 전체 출력" << endl;
  cout << "5. 프로그램 종료" << endl;
  cout << "선택: ";
  int input = 0;
  cin >> input;
  return input;
}
void selected(int x){
  
}

void createNewAccount(){
  
}