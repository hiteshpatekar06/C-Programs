#include<stdio.h>

int packetize(int flag,int crc,int len,int data)
{
	int packet=flag<<9;
	packet=packet|crc;
	packet=packet<<7;
	packet=packet|len;
	packet=packet<<14;
	packet=packet|data;
	return packet;
}

int printValue(int packet,int pos,int bit,int shift)
{
	int x=1;
	x=(x<<bit)-1;
	x=x<<(pos-bit);
	int p=packet&x;
	return p>>shift;
}

void DePacketize(int packet)
{
	int data=packet&((1<<14)-1);
	packet=packet>>14;
	int length=packet&((1<<7)-1);
	packet=packet>>7;
	int crc=packet&((1<<9)-1);
	packet=packet>>9;
	int flag=packet&((1<<2)-1);
	printf("\nDATA=%d\nLENGTH=%d\nCRC=%d\nFLAG=%d\n",data,length,crc,flag);
}
int main()
{
	int flag,crc,len,data;
	int choice;
	printf("\nEnter Flag:\n");
	scanf("%d",&flag);
	printf("\nEnter crc:\n");
	scanf("%d",&crc);
	printf("\nEnter lenght:\n");
	scanf("%d",&len);
	printf("\nEnter data:\n");
	scanf("%d",&data);
	int packet=packetize(flag,crc,len,data);
	printf("\nThe packetize form is %d\n",packet);
	do
	{
		printf("\nWhich value you want to print:\n1.)FLAG\n2.)CRC\n3.)LENGTH\n4.)DATA\n5.)DEPACKETIZE\nENTER your choice:");
		scanf("%d",&choice);		
		switch(choice)
		{
			case 1:	printf("\nThe value of FLAG is %d\n",printValue(packet,32,2,30));	
				break;
			case 2: printf("\nThe value of crc is %d\n",printValue(packet,30,9,21));
				break;
			case 3: printf("\nThe value of LENGTH is %d\n",printValue(packet,21,7,14));
				break;
			case 4: printf("\nThe value of DATA is %d\n",printValue(packet,14,14,0));
				break;
			case 5: DePacketize(packet);
				break;
		}
	}while(choice!=5);
		return 0;
}
	
	
