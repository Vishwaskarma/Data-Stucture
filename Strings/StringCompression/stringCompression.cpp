// #include<iostream>
// #include<vector>
// using namespace std;

// string  stringCompression(string str){

//     int len=str.length();
//     int idx=0;
//     for(int i=0;i<len;i++){
//         int count=0;
//         char ch=str[i];
//         while(i<len && str[i]==ch){
//             count+=1;
//             i++;

//         }
//         if(count==1){
//             str[idx++]=ch;
          

//         }else{
//             str[idx++]=ch;
//             string st=to_string(count);
//             for(char dig:st){
//                 str[idx]=dig;
//             }
            
            
//         }
//         i--;
//     }
//     str.resize(idx);
//     return idx;


// }
// int main(){
//     string input="aabccc";
//     string ans=stringCompression(input);
//     return 0;

// }