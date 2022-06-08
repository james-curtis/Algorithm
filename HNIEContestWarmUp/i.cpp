#include "iostream"
#include "algorithm"
#include "vector"
#include "map"
#include <stdio.h>
#include "string"
#include <ctype.h>

using namespace std;

void tolowerCase(char *a,int len){
		for(int j=0;j<len;j++)
		{
			a[j]=tolower(a[j]);
		}
		
}

int main(){
	//freopen("./a.in.cpp","r",stdin);
	int aLen=0;
	cin >> aLen;
	
	for(int i=0;i<aLen;i++)
	{
		int n,//���� 
		m;//���� 
		cin >> n >> m;
		long long map[n][m];
		for(int row=0;row<n;row++)
			for(int col=0;col<m;col++)
			{
				cin >> map[row][col];
				//cout <<  map[row][col] << '\n';
			} 
		
		vector<long long> sumMap;
		for(int row=0;row<n;row++)
			for(int col=0;col<m;col++)
			{
				int sum=0;
				//����
				for(int cnt=1;;cnt++){
					//�������궼�Ǽ���
					
					//�Լ��ڱ߿��ϲ����� 
					if(row - cnt < 0 || col - cnt < 0)break;
					
					sum+=map[row - cnt][col - cnt];
				}
				
				//����
				for(int cnt=1;;cnt++){
					//������ 
					
					//�Լ��ڱ߿��ϲ����� 
					if(row - cnt < 0 || col + cnt >= m)break;
					
					sum+=map[row - cnt][col + cnt];
				}
				
				//����
				for(int cnt=1;;cnt++){
					//�ӣ��� 
					
					//�Լ��ڱ߿��ϲ����� 
					if(row + cnt >= n || col - cnt < 0)break;
					
					sum+=map[row+ cnt][col - cnt];
				}
				
				//���� 
				for(int cnt=1;;cnt++){
					//�ӣ���
					
					//�Լ��ڱ߿��ϲ����� 
					if(row + cnt >= n || col + cnt >= m)break;
					
					sum+=map[row + cnt][col + cnt];
				}
				sum+=map[row][col];
				sumMap.push_back(sum);
			}
		
		sort(sumMap.begin(),sumMap.end());
		reverse(sumMap.begin(),sumMap.end());
		if(i!=0)cout << '\n';
		cout << sumMap[0];
		
	}
	
	
}
