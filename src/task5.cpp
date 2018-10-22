#include <task5.h>

void split(char ***result, int *N, char *buf, char ch){
	size_t n = strlen(buf);
    int count = 0;
    unsigned long long int maxsize = 0;

    vector <string> vec;
    string str;

    for(int i = 0;i < n; i++){
        if ((buf[i] != ch)){
            str += buf[i];
        }
        if((buf[i] == ch)||(i == n - 1)){
            count++;
            //cout<<str<<" "<<count<<" "<<maxsize<<endl;
            if (str.size() > maxsize){
                maxsize = str.size();
            }
            vec.push_back(str);
            str.clear();
        }
    }



    (result) = new char **[count + 1]; //массив указателей
    /*
    result[0] = new char *[maxsize + 1];
    (result)[0][0] = &(vec[0][0]);
    cout<<*(result)[0]<<" "<<(vec[0])<<endl;

    result[1] = new char *[maxsize + 1];
    (result)[1][0] = &(vec[1][0]);
    cout<<*(result)[1]<<" "<<(vec[1])<<endl;

    result[2] = new char *[maxsize + 1];
    (result)[2][0] = &(vec[2][0]);
    cout<<*(result)[2]<<" "<<(vec[2])<<endl;
    */
    for (int i = 0; i < count; i++){
        result[i] = new char *[maxsize + 1];
        (result)[i][0] = &(vec[i][0]);
        //cout<<*(result)[i]<<" "<<vec[i]<<endl;
    }
    *N = count;
}
