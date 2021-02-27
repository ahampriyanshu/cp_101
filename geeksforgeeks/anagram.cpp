class Solution{
    public:
    /*  Function to check if two strings are anagram
    *   a, b: input string
    */
    bool isAnagram(string a, string b){
        
   sort(a.begin(), a.end()); 
   sort(b.begin(), b.end()); 
    
    return a == b  ;  
    }

};