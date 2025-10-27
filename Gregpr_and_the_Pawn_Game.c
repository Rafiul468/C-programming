#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        char enemy[200005], gregor[200005];
        scanf("%s", enemy);
        scanf("%s", gregor);

        int ans=0;

        for(int i=0;i<n;i++){
            if(gregor[i]=='1'){
                if(enemy[i]=='0'){
                    ans++;
                }
                else if(i>n && enemy[i-1]=='1'){
                    ans++;
                    enemy[i-1]='0';
                }
                else if(i<n-1 && enemy[n+1]=='1'){
                    ans++;
                    enemy[i+1]='0';
                }
            }
        }
        printf("%d", ans);
    }
    return 0;
}
