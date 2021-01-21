#include <iostream>
#include <fstream>
#include <map>
using namespace std;
void print_all(map<string ,int> &t,const string& sep = " " ){
    map<string ,int>::iterator itr = t.begin();
    itr++;
    int i =0;
    while(itr != t.end()){
        cout<<itr->first<<sep<<itr->second;
        cout<<endl;
        itr++;
        i++;
    }
    cout<< "Total Of "<<i<<" Words."<<endl;
}
bool check_keyword(const string& word){
    string keyword = "<BODY>";
    if(word == keyword){
        return true;
    }
    else{
        return false;
    }
}
bool check_if_bad(map<string ,int>&t,const string& line){
    map<string ,int>::iterator end =t.end();
    decltype(end) iter = t.find(line);
    if(iter != t.end()){

        return true;
    }
    else{

        return false;
    }
}
void get_biggest_values(map<string,int>&t){
    map<string,int>::iterator itr;
    map<string,int>::iterator tmp;
    map<string,int>pA;
    for(int i=0;i<10;i++){
        itr = t.begin();
        itr++;
        int max = itr->second;
        while(itr!=t.end()){
            if(itr->second>max){
               tmp = itr;
            }
            else{

            }
            itr++;
        }
        pair<string,int>tmp1(tmp->first,tmp->second);
        pA.insert(tmp1);
        t.erase(tmp);
    }
    map<string,int>::iterator itr1 = pA.begin();
    while (itr1 != pA.end()){
        cout<<itr1->first<<" "<<itr1->second<<endl;
        itr1++;
    }
}
void add_word(map<string ,int>&t,const string& word){
    map<string ,int>::iterator end =t.end();
    decltype(end) iter = t.find(word);
    if(iter != t.end()){
        iter->second++;
    }
    else{
        pair<string,int>temp(word,1);
        t.insert(temp);
    }
}
string check_if_upper_case(string line){
    if(65 <= line[0] && line[0]<=90){
    line[0] += 32;
        }
    else if(97<= line[0] && line[0]<=122){

    }
    else{
        line.erase();
    }
    for(int i=0;i<line.size();i++){
        if(65 <= line[i] && line[i]<=122 || line[i]==39){
        }
        else{
            line.erase(i);
        }
    }
    return  line;
}
int main(){
    map<string ,int>badWords;
    ifstream bad;
    bad.open("stopwords.txt");
    string line;
    int i=0;
    while(getline(bad,line)){
        i++;
        pair<string ,int> temp (line,i);
        badWords.insert(temp);
        }
    map<string,int>reuter;
    ifstream reuters;
    string line2;

    reuters.open("reut2-000.sgm");
    while(getline(reuters,line2)){
        string tmp;
        reuters>>tmp;
        tmp =check_if_upper_case(tmp);
        if(!check_if_bad(badWords,tmp)){
        add_word(reuter,tmp);
            }
    }
    reuters.close();
    reuters.open("reut2-001.sgm");
    while(getline(reuters,line2)){
        string tmp;
        reuters>>tmp;
        tmp =check_if_upper_case(tmp);
        if(!check_if_bad(badWords,tmp)){
            add_word(reuter,tmp);

        }
    }
    reuters.close();
    reuters.open("reut2-002.sgm");
    while(getline(reuters,line2)){
        string tmp;
        reuters>>tmp;
        tmp =check_if_upper_case(tmp);
        if(!check_if_bad(badWords,tmp)){
            add_word(reuter,tmp);

        }
    }
    reuters.close();
    reuters.open("reut2-003.sgm");
    while(getline(reuters,line2)){
        string tmp;
        reuters>>tmp;
        tmp =check_if_upper_case(tmp);
        if(!check_if_bad(badWords,tmp)){
            add_word(reuter,tmp);

        }
    }
    reuters.close();
    reuters.open("reut2-004.sgm");
    while(getline(reuters,line2)){
        string tmp;
        reuters>>tmp;
        tmp =check_if_upper_case(tmp);
        if(!check_if_bad(badWords,tmp)){
            add_word(reuter,tmp);

        }
    }
    reuters.close();
    reuters.open("reut2-005.sgm");
    while(getline(reuters,line2)){
        string tmp;
        reuters>>tmp;
        tmp =check_if_upper_case(tmp);
        if(!check_if_bad(badWords,tmp)){
            add_word(reuter,tmp);

        }
    }
    reuters.close();
    reuters.open("reut2-006.sgm");
    while(getline(reuters,line2)){
        string tmp;
        reuters>>tmp;
        tmp =check_if_upper_case(tmp);
        if(!check_if_bad(badWords,tmp)){
            add_word(reuter,tmp);

        }
    }
    reuters.close();
    reuters.open("reut2-007.sgm");
    while(getline(reuters,line2)){
        string tmp;
        reuters>>tmp;
        tmp =check_if_upper_case(tmp);
        if(!check_if_bad(badWords,tmp)){
            add_word(reuter,tmp);

        }
    }
    reuters.close();
    reuters.open("reut2-008.sgm");
    while(getline(reuters,line2)){
        string tmp;
        reuters>>tmp;
        tmp =check_if_upper_case(tmp);
        if(!check_if_bad(badWords,tmp)){
            add_word(reuter,tmp);

        }
    }
    reuters.close();
    reuters.open("reut2-009.sgm");
    while(getline(reuters,line2)){
        string tmp;
        reuters>>tmp;
        tmp =check_if_upper_case(tmp);
        if(!check_if_bad(badWords,tmp)){
            add_word(reuter,tmp);
        }
    }
    reuters.close();
    reuters.open("reut2-010.sgm");
    while(getline(reuters,line2)){
        string tmp;
        reuters>>tmp;
        tmp =check_if_upper_case(tmp);
        if(!check_if_bad(badWords,tmp)){
            add_word(reuter,tmp);

        }
    }
    reuters.close();
    reuters.open("reut2-011.sgm");
    while(getline(reuters,line2)){
        string tmp;
        reuters>>tmp;
        tmp =check_if_upper_case(tmp);
        if(!check_if_bad(badWords,tmp)){
            add_word(reuter,tmp);

        }
    }
    reuters.close();
    reuters.open("reut2-012sgm");
    while(getline(reuters,line2)){
        string tmp;
        reuters>>tmp;
        tmp =check_if_upper_case(tmp);
        if(!check_if_bad(badWords,tmp)){
            add_word(reuter,tmp);

        }
    }
    reuters.close();
    reuters.open("reut2-013.sgm");
    while(getline(reuters,line2)){
        string tmp;
        reuters>>tmp;
        tmp =check_if_upper_case(tmp);
        if(!check_if_bad(badWords,tmp)){
            add_word(reuter,tmp);

        }
    }
    reuters.close();
    reuters.open("reut2-014.sgm");
    while(getline(reuters,line2)){
        string tmp;
        reuters>>tmp;
        tmp =check_if_upper_case(tmp);
        if(!check_if_bad(badWords,tmp)){
            add_word(reuter,tmp);

        }
    }
    reuters.close();
    reuters.open("reut2-015.sgm");
    while(getline(reuters,line2)){
        string tmp;
        reuters>>tmp;
        tmp =check_if_upper_case(tmp);
        if(!check_if_bad(badWords,tmp)){
            add_word(reuter,tmp);

        }
    }
    reuters.close();
    reuters.open("reut2-016.sgm");
    while(getline(reuters,line2)){
        string tmp;
        reuters>>tmp;
        tmp =check_if_upper_case(tmp);
        if(!check_if_bad(badWords,tmp)){
            add_word(reuter,tmp);

        }
    }
    reuters.close();
    reuters.open("reut2-017.sgm");
    while(getline(reuters,line2)){
        string tmp;
        reuters>>tmp;
        tmp =check_if_upper_case(tmp);
        if(!check_if_bad(badWords,tmp)){
            add_word(reuter,tmp);

        }
    }
    reuters.close();
    reuters.open("reut2-018.sgm");
    while(getline(reuters,line2)){
        string tmp;
        reuters>>tmp;
        tmp =check_if_upper_case(tmp);
        if(!check_if_bad(badWords,tmp)){
            add_word(reuter,tmp);

        }
    }
    reuters.close();
    reuters.open("reut2-019.sgm");
    while(getline(reuters,line2)){
        string tmp;
        reuters>>tmp;
        tmp =check_if_upper_case(tmp);
        if(!check_if_bad(badWords,tmp)){
            add_word(reuter,tmp);

        }
    }
    reuters.close();
    reuters.open("reut2-020.sgm");
    while(getline(reuters,line2)){
        string tmp;
        reuters>>tmp;
        tmp =check_if_upper_case(tmp);
        if(!check_if_bad(badWords,tmp)){
            add_word(reuter,tmp);
        }
    }
    get_biggest_values(reuter);
    bad.close();
    reuters.close();
    return 0;
}
