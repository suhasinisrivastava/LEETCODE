class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool ans;
        if(count(sentence.begin(),sentence.end(),'a')>=1 && count(sentence.begin(),sentence.end(),'b')>=1 && count(sentence.begin(),sentence.end(),'c')>=1 && count(sentence.begin(),sentence.end(),'d')>=1 && count(sentence.begin(),sentence.end(),'r')>=1 && count(sentence.begin(),sentence.end(),'f')>=1 && count(sentence.begin(),sentence.end(),'s')>=1 && count(sentence.begin(),sentence.end(),'g')>=1 && count(sentence.begin(),sentence.end(),'t')>=1 && count(sentence.begin(),sentence.end(),'h')>=1 && count(sentence.begin(),sentence.end(),'u')>=1 && count(sentence.begin(),sentence.end(),'i')>=1 && count(sentence.begin(),sentence.end(),'v')>=1 && count(sentence.begin(),sentence.end(),'j')>=1 && count(sentence.begin(),sentence.end(),'w')>=1 && count(sentence.begin(),sentence.end(),'k')>=1 && count(sentence.begin(),sentence.end(),'x')>=1 && count(sentence.begin(),sentence.end(),'l')>=1 && count(sentence.begin(),sentence.end(),'y')>=1 && count(sentence.begin(),sentence.end(),'m')>=1 && count(sentence.begin(),sentence.end(),'z')>=1 && count(sentence.begin(),sentence.end(),'n')>=1 && count(sentence.begin(),sentence.end(),'e')>=1 && count(sentence.begin(),sentence.end(),'o')>=1 && count(sentence.begin(),sentence.end(),'q')>=1 && count(sentence.begin(),sentence.end(),'p')>=1){
            ans= true;
        }
        else{
            ans=false;
        }
    return ans;    
    }
};