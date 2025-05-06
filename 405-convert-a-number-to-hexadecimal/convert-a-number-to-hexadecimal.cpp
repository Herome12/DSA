class Solution {
public:
    string toHex(int num) {
         string result = "";
           if (num == 0) return "0"; 
            unsigned int n = num;
        while(n>0){
           
           char ch;
           int remainder =n%16;
          if(remainder<10){
             ch = '0'+remainder;
          }
          else{
             ch = 'a' +(remainder-10);
          }
           result = ch + result;
           n = n/16;

        }
        return result;
    }
};