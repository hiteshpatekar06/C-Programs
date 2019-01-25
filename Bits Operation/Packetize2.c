#include<stdio.h>
int packetize2(int flag,int crc1,int crc2,int data,int length)
{
	int packet=0;
	packet=flag&((1<<2)-1);
	packet=packet<<4;
	packet=packet|(crc1&((1<<4)-1));
	packet=packet<<5;
	packet=packet|(crc2&((1<<5)-1));
	packet=packet<<14;
	packet=packet|(data&((1<<14)-1));
	packet=packet<<7;
	packet=packet|(length&((1<<7)-1));
	return packet;
}

void DePacketize2(int packet)
{
	int length=packet&((1<<7)-1);
	packet=packet>>7;
	int data=packet&((1<<14)-1);
	packet=packet>>14;
	int crc2=packet&((1<<5)-1);
	packet=packet>>5;
	int crc1=packet&((1<<4)-1);
	packet=packet>>4;
	int flag=packet&((1<<2)-1);
	printf("\nAfter DePacketize:\nFLAG=%d\nCRC1=%d\nCRC2=%d\nDATA=%d\nLENGTH=%d\n",flag,crc1,crc2,data,length);
}

int main()
{
	int flag,crc1,crc2,data,length;
	printf("\nEnter Flag:\n");
	scanf("%d",&flag);
	printf("\nEnter crc1 :\n");
	scanf("%d",&crc1);
	printf("\nEnter crc2:\n");
	scanf("%d",&crc2);
	printf("\nEnter data:\n");
	scanf("%d",&data);
	printf("\nEnter length:\n");
	scanf("%d",&length);
	int packet=packetize2(flag,crc1,crc2,data,length);
	printf("\nThe value of packetize is : %d\n",packet);
	DePacketize2(packet);
	return 0;
}
