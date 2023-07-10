int designerPdfViewer(int h_count, int* h, char* word) {
    int i,max=0,val=0;
    int count=0;
    for(i=0;;i++)
    {
        if(word[i]=='\0')
            break;
        count++;
    }
    for(i=0;i<count;i++)
    {
        val = h[word[i]-97];
        if(val>max)
            max = val;
    }
    return max*count;
}