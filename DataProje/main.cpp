#include <iostream>
#include <fstream>
#include <map>
using namespace std;
void print_all(map<string ,int> &t,const string& sep = " " ){
    map<string ,int>::iterator itr = t.begin();
    itr++;
    while(itr != t.end()){
        cout<<itr->first<<sep<<itr->second;
        cout<<endl;
        itr++;
    }
    cout<<endl;
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
int main() {
    int i =0;
    map<string ,int>badWords;
    ifstream bad;
    bad.open("stopwords.txt");
    string line;
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
        if(check_keyword(tmp)){
            cout<<"YES"<<endl;
        }
        else{

        }
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
            if(check_keyword(tmp)){
                cout<<"YES"<<endl;
            }
            else{

            }
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
            if(check_keyword(tmp)){
                cout<<"YES"<<endl;
            }
            else{

            }
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
            if(check_keyword(tmp)){
                cout<<"YES"<<endl;
            }
            else{

            }
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
            if(check_keyword(tmp)){
                cout<<"YES"<<endl;
            }
            else{

            }
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
            if(check_keyword(tmp)){
                cout<<"YES"<<endl;
            }
            else{

            }
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
            if(check_keyword(tmp)){
                cout<<"YES"<<endl;
            }
            else{

            }
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
            if(check_keyword(tmp)){
                cout<<"YES"<<endl;
            }
            else{

            }
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
            if(check_keyword(tmp)){
                cout<<"YES"<<endl;
            }
            else{

            }
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
            if(check_keyword(tmp)){
                cout<<"YES"<<endl;
            }
            else{

            }
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
            if(check_keyword(tmp)){
                cout<<"YES"<<endl;
            }
            else{

            }
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
            if(check_keyword(tmp)){
                cout<<"YES"<<endl;
            }
            else{

            }
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
            if(check_keyword(tmp)){
                cout<<"YES"<<endl;
            }
            else{

            }
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
            if(check_keyword(tmp)){
                cout<<"YES"<<endl;
            }
            else{

            }
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
            if(check_keyword(tmp)){
                cout<<"YES"<<endl;
            }
            else{

            }
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
            if(check_keyword(tmp)){
                cout<<"YES"<<endl;
            }
            else{

            }
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
            if(check_keyword(tmp)){
                cout<<"YES"<<endl;
            }
            else{

            }
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
            if(check_keyword(tmp)){
                cout<<"YES"<<endl;
            }
            else{

            }
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
            if(check_keyword(tmp)){
                cout<<"YES"<<endl;
            }
            else{

            }
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
            if(check_keyword(tmp)){
                cout<<"YES"<<endl;
            }
            else{

            }
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
            if(check_keyword(tmp)){
                cout<<"YES"<<endl;
            }
            else{

            }
        }
    }
    print_all(reuter);
    bad.close();
    reuters.close();
    return 0;
}
