int remAnagram(string str1, string str2)
{
// Your code goes here

   int arr[26]={0};
   int c=0;
   if(str1.length()>str2.length())
   {
       int i=0;
       while(i<str1.length())
       {
           arr[str1[i]-'a']++;
           i++;
       }
       int j=0;
       while(j<str2.length())
       {
           arr[str2[j]-'a']--;
           j++;
           
       }
       int k=0;
       for(k=0;k<26;k++)
       {
           c=c+abs(arr[k]);
       }
      
   } 
   else
   {
       int i=0;
       while(i<str2.length())
       {
           arr[str2[i]-'a']++;
           i++;
       }
       int j=0;
       while(j<str1.length())
       {
           arr[str1[j]-'a']--;
           j++;
           
       }
       int k=0;
       for(k=0;k<26;k++)
       {
           c=c+abs(arr[k]);
       }
   }
    return c;
  
}