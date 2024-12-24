class Solution {
public:
    string reverseVowels(string s) {
        int n = s.length();
       
        
        for(int i=0;i<n;i++){
            
            char d= s[i];

            if(d=='a'||d=='e'||d=='i'||d=='o'||d=='u'||d=='A'||d=='E'||d=='I'||d=='O'||d=='U'){
               
               for(int j=n-1;j>=0;j--){
                char c=s[j];
                 if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
                    s[i]=c;
                    s[j]=d;
                    n=j;
                    break;

                    
                   
                    
                 }
               }
                
            }


        }
        return s;
         
    }
};