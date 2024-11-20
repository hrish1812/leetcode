bool isPalindrome(int x) {
            //M1
    // if(x<0){
    //     return false;
    // }
    // long original=x;
    // long reversed=0;

    // while(x>0){
    //     reversed=reversed*10 +x%10;
    //     x/=10;
    // }
    // return original==reversed;

            //  M2
    // if((x<0)||(x!=0 && x%10==0)){
    //     return false;
    // }
    // int reversedNumber=0;
    // while(x>reversedNumber){
    //     reversedNumber=reversedNumber *10 +x%10;
    //     x=x/10;
    // }
    // return (reversedNumber ==x)||(x==(reversedNumber/10));

                //M3
    // double reversed = 0;
    // double n = x;
    // if (x<0)
    // {
    //     return false;
    // }
    // else {
    //     while(x!=0)
    //     {
    //     int remainder = x % 10;
    //     reversed = reversed * 10 + remainder;
    //     x/=10;
    //     }
    // }
    // if (reversed == n)
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }


                //M4
    if(x<0)
    return false;
    if(x==0)
    return true;
    long long a,b=0;
    a=x;
    while(a){
        b=b*10+a%10;
        a/=10;
    }
    return b==x;

}
