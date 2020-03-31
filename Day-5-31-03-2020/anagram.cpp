int sherlockAndAnagrams(string s) {
unordered_map<string, int>u;
string temp;
int l = s.length(),c=0;
for(int i=0;i<l;i++){
    temp="";
    for(int k=i;k<l;k++){
        temp+=s[k];
        sort(temp.begin(),temp.end());
        ++u[temp];
    }
}

for(auto n:u){
        if(n.second>=2)c+=n.second*(n.second-1)/2;
    }
    return c;
}