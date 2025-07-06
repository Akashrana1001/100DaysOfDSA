class Solution {
  public:
    int myAtoi(string s) {
        
 long INTMAX = 2147483647;
 long INTMIN = -2147483648; 
        int n = s.length();
        long long sum=0;
        bool negsum=false;
        
        
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                continue;
            }
           if(s[i]=='-' && sum==0){
                negsum=true;
                continue;
            }
            if(!isdigit(s[i])){
                break;
            }
            
            
            
            int value=s[i] - '0';
            sum =(sum*10) + value;
            // cout<<sum<<endl;
        }
        
        if(negsum==true){
            sum = 0-sum;
        }

        
        if(sum >INTMAX){
            return INTMAX;
        }
        
        else if(sum < INTMIN){
            return INTMIN;
        }
        else{
            return sum;
        }
    }
};


//implement a Self made ATOI function 
