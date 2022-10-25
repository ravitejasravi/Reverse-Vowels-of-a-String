class Solution {
public:
    string reverseVowels(string s) {
        
        string vowels = "aAeEiIoOuU";
        bool StartSignal = false, EndSignal = false;
        int StartIndex = 0, EndIndex = s.length() - 1;
        
        if(s.length() == 1)
            return s;
        
        while(StartIndex <= EndIndex)
        {
            
            for(int iter = 0; iter < vowels.length(); iter++)
            {
                if(StartSignal == true && EndSignal == true)
                    break;
                
                if(StartSignal == false && vowels[iter] == s[StartIndex])
                    StartSignal = true;
                
                if(EndSignal == false && vowels[iter] == s[EndIndex])
                    EndSignal = true;
        
            }
            
            if(StartSignal == false)
            {
                StartIndex += 1;
            }
            
            if(EndSignal == false)
            {
                EndIndex -= 1;
            }
            
            if(StartSignal == true && EndSignal == true)
            {
                if(s[StartIndex] != s[EndIndex])
                {
                    char inter = s[StartIndex];
                    s[StartIndex] = s[EndIndex];
                    s[EndIndex] = inter;
                }
                
                EndSignal = false;
                StartSignal = false;
                
                EndIndex -= 1;
                StartIndex += 1;
            } 

        }
        
        return s;
        
    }
};