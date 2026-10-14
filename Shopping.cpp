#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<string> list;
    int choice;
    string item;
    do {
        cout << "\n1.Add 2.Remove 3.Search 4.Display 5.Exit\nChoice: ";
        cin >> choice;
        if(choice==1){ cout<<"Enter item: "; cin>>item; list.push_back(item); }
        else if(choice==2){ cout<<"Enter item to remove: "; cin>>item;
            auto it=find(list.begin(), list.end(), item);
            if(it!=list.end()) list.erase(it); else cout<<"Not found\n";
        }
        else if(choice==3){ cout<<"Enter to search: "; cin>>item;
            if(find(list.begin(), list.end(), item)!=list.end()) cout<<"Found\n"; else cout<<"Not Found\n";
        }
        else if(choice==4){ cout<<"List: "; for(auto &s:list) cout<<s<<" "; cout<<endl; }
    } while(choice!=5);
    return 0;
}
