class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int>>visited;
        visited.insert({0,0});
        int x=0;
        int y=0;
        for(int i=0;i<path.size();i++){
            if(path[i]=='N'){
                y++;
            }
            else if(path[i]=='S'){
                y--;
            }
            else if(path[i]=='E'){
                x++;
            }
            else if(path[i]=='W'){
                x--;
            }
            if(visited.count({x,y})>0){
                    return 1;
                }
            
            else{
                visited.insert({x,y});
            }
    }
        
        return 0;
    }
};