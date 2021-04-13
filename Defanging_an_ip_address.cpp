class Solution {
public:
    string defangIPaddr(string address) {
        string s ="";
        for (char i : address)
        {  if(i == '.' )
              {   
                    s += '[';
                    s += '.';
                    s += ']';
              }
            else 
                s+= i;
        }
        return s;
    }
};
