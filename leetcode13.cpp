class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        for(int i=0;i<s.size();i++){ //IV=4  IX=9  XL=40 XC=90  CD=400 CM=900
            
            if(s[i] == 'I'){ //4
                if(s[i+1] == 'V'){ //IV
                    ans +=4;
                    i+=1;
                }else if(s[i+1] == 'X' ){
                    ans +=9;
                    i+=1;
                }else
                    ans += 1;
            }else if(s[i] == 'V'){
                ans += 5;
            }else if(s[i] == 'X'){
                 if(s[i+1] == 'L'){ //IV
                    ans +=40;
                    i+=1;
                }else if(s[i+1] == 'C' ){
                    ans +=90;
                    i+=1;
                }else
                    ans += 10;
                
            }else if(s[i] == 'L'){
                ans += 50;
                
            }else if(s[i] == 'C'){
                 if(s[i+1] == 'D'){ //IV
                    ans +=400;
                    i+=1;
                }else if(s[i+1] == 'M' ){
                    ans +=900;
                    i+=1;
                }else
                    ans += 100;
                
            }else if(s[i] == 'D'){
                ans += 500;
                
            }else if(s[i] == 'M'){
                ans += 1000;
            } 
        }
        return ans;
    }
};
