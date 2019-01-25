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
	DePacketize(packet);
	return 0;
}

