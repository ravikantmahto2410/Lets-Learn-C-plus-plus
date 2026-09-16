#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int> books;
    vector<int> shelves;

    int book_placed = 0;
    int book_unplaced = 0;

    for(int i=0; i < books.size(); i++){
        for(int j=0; j < shelves.size(); j++){
            if(books[i] <= shelves[j] && shelves[j] != -1){
                book_placed++;
                shelves[j] = -1;
                break;
            }
        }
    }
    int ans = n - book_placed;
    cout<<ans<<endl;
}