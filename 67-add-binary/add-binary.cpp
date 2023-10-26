class Solution {
public:
    string addBinary(string a, string b) {
       // returning the smaller length back to the function
       // it is done to work on smaller length
        if(a.length() > b.length()){
            return addBinary(b,a);
        }
        string zero="";
        int diff = b.length() - a.length();//calculate difference
        for(int i=0;i<diff;i++){
            zero.push_back('0');//push zeroes to equal the size
        }
        a = zero + a;//adding string suffix after zeroes
        char carry = '0';//maintaining carry var
        string res;
        for(int i=a.length()-1;i>=0;i--)
        {//Performing all the condition check with all possibilities.
            if(a[i] == '1' && b[i] == '1'){
                if(carry == '1'){
                    res.push_back('1');
                    carry = '1';
                }
                else{
                    res.push_back('0');
                    carry = '1';
                }
            }
            else if(a[i] == '0' && b[i] == '0'){
                if(carry == '1'){
                    res.push_back('1');
                    carry = '0';
                }
                else{
                    res.push_back('0');
                    carry = '0';
                }
            }
            else if(a[i] != b[i]){
                if(carry == '1'){
                    res.push_back('0');
                    carry = '1';
                }
                else{
                    res.push_back('1');
                    carry = '0';
                }
            }
        }
        if(carry == '1'){
            res.push_back(carry); //pushing last carry just we do the addition in lower standard in school days :)
        }
        reverse(res.begin(),res.end()); //actually answer comes after reversing the string because we are pushing back in the string.
        return res;
    }
};