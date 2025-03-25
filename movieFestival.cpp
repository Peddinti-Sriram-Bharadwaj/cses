#include <iostream>
#include <vector>
#include <algorithm>

//expected TC :- nlogn
//expected SC:- n

bool customComparator(std::pair<int,int> a, std::pair<int,int> b){
    return a.second < b.second;
}

int main(){
    int n; 
    std::cin >> n;
    std::vector<std::pair<int,int>> movies(n);
    for(int i = 0;i<n;i++){
        std::cin >> movies[i].first >> movies[i].second;
    }
    sort(movies.begin(), movies.end(), customComparator);

    int moviesWatched = 0;
    int time = 0;
    for(int i = 0;i<n;i++){
        if(movies[i].first >= time) {moviesWatched++;
        time = movies[i].second;}
    }

    std::cout << moviesWatched << std::endl;

    return 0;
}