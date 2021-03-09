void stringCompression(char input[]) {
    int n = strlen(input);
    
    int i = 0;
    for(; i<=n;i++)
    {
        if(input[i]=='\0') return;
        int count = 1;
        while(i<n-1&&input[i]==input[i+1])
        {
            count++;
            i++;
        }
        if(count>1)
        {
            cout<<input[i]<<count;

        }
        else
        {
           cout<<input[i];
        }
    }

    

}