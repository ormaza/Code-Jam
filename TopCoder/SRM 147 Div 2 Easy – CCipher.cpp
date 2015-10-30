class CCipher
{
    public: string decode(string cipherText, int shift)
    {
        int deslocamento=0;
        for(int i=0;i<cipherText.length();i++)
        {
            cipherText[i]-=shift;
            while(cipherText[i]<65)
            {
                deslocamento = abs(cipherText[i]-65);
                cipherText[i]=91-deslocamento;
            }
            while(cipherText[i]>90)
            {
                deslocamento = abs(90-cipherText[i]);
                cipherText[i]=65+deslocamento;
            }
        }
        return cipherText;
    }
};
