#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    bool mode= false;
    for(int i=0;i<code.size();i++){
        if(mode == false){
            if(code[i]=='1')
                mode=true;
            
            else if(i%2==0)
                answer+=code[i];
        }
        else{
            if(code[i]=='1')
                mode=false;
            else if(i%2!=0)
                answer+=code[i];
        }
    }
    if(answer.size()==0)
        return "EMPTY";
    else
        return answer;
}