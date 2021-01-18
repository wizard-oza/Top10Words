#include <iostream>
#include <fstream>
#include <map>
using namespace std;
template <typename T>
void print_all(T& t,string sep = " " ){
    auto itr =t.begin();
    while(itr != t.end()){
        cout<<itr->first<<sep<<itr->second;
        cout<<endl;
        itr++;
    }
    cout<<endl;
}
template <typename T>
bool check_if_bad(T& t,string line){
    auto end =t.end();
    decltype(end) iter = t.find(line);
    if(iter != t.end()){

        return true;
    }
    else{

        return false;
    }
}
template<typename T>
void add_word(T& t,string word){
    auto end =t.end();
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
    else{}
    return  line;
}
int main() {
    int i=0;
    string keyword = "<BODY>";
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
        if(line2!=keyword){}
        else{
            while(line2!=keyword){
                line2 = check_if_upper_case(line2);
                if(check_if_bad(badWords,line2)){}
                else{
                    add_word(reuter,line2);
                }
            }
        }
    }
    print_all(badWords);
    print_all(reuter);
    bad.close();
    reuters.close();
    return 0;
}
