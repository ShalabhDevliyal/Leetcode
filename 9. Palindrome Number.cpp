


bool isPalindrome(int x){
   double new=0,num=x,rem;
    if(x<0)
        return false;
    while(x!=0){
    rem=x%10;
    new=new*10+rem;
    x/=10;
    }
    if(num==new)
        return true;
    return false;
    
    
}