#include <iostream>
#include <vector>
#include<string>
#include "Book.h"
#include "Catalogue.h"

void fill(Catalogue& catalogue);
void test(const Catalogue& catalogue);

int main(){

    Catalogue catalogue;
    fill(catalogue);
    test(catalogue);
    return 0;
}

void fill(Catalogue& catalogue){
    catalogue.add("the big Bang","MRadd", "world");
    catalogue.add("you are here","MRbbd", "Hello");
    catalogue.add("meant to be","Mqfee", "NETWork");
    catalogue.add("not you","Stte", "support");
    catalogue.add("project alpha","Leaf", "jungler");
    catalogue.add("start coding","Leaf", "Mid");
    catalogue.add("War of games","CODE", "lead");
    catalogue.add("Miss terra","woRk", "tom");
    catalogue.add("Hello world","whisper", "Jerry");
}
void search(const Catalogue& catalogue,const Book& target)
{
    cout<<"\n"<<"Find "<< target<<endl;
    vector<Book *> matches=catalogue.find(target);
    if(matches.size()==0) cout<<"No matches!!"<<endl;
    else{
        cout<<"Matches:\n";
        for(Book *book:matches){
            cout<<"     "<<*book<<endl;
        }
    }
}
void test(const Catalogue& catologue){
    Book target1("the Big BANG","Mradd","world");
    search(catologue,target1);
    Book target2("","Leaf","");
    search(catologue,target2);
    Book target3("BERS","Mradd","world");
    search(catologue,target3);
    Book target4("","","");
    search(catologue,target4);

}