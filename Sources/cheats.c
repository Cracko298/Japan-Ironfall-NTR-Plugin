#include "cheats.h"
#include <stdbool.h>
#include "hid.h"
#include "values.h"
#include <string.h>

u32 offset = 0;
u32 data = 0;
u32 patch_address = 0;

void	Infinite_Health__Jim_(void)
{
	offset = 0x31000000;
	WRITEU8(offset + 0x06EC28F, 0x00000013);
	offset = 0;
	data = 0;
}

void	No_Health__Jim_(void)
{
	offset = 0x31000000;
	WRITEU8(offset + 0x06EC28F, 0x00000013);
	offset = 0;
	data = 0;
}

void	Highest_Score(void)
{
	offset = 0x00000000;
	WRITEU32(offset + 0x034B26C, 0x3B9AC9FF);
	offset = 0;
	data = 0;
}

void	Ultimate_Jim_Code(void)
{
	offset = 0x00000000;
	WRITEU32(offset + 0x034B26C, 0x3B9AC9FF);
	WRITEU8(offset + 0x034B268, 0x00000064);
	offset = 0x31000000;
	WRITEU8(offset + 0x06EC28F, 0x00000013);
	offset = 0x30000000;
	WRITEU8(offset + 0x0738074, 0x00000008);
	offset = 0x30000000;
	WRITEU8(offset + 0x0738074, 0x00000008);
	WRITEU8(offset + 0x073808A, 0x00000064);
	WRITEU8(offset + 0x073808C, 0x00000002);
	WRITEU8(offset + 0x0738042, 0x00000064);
	WRITEU8(offset + 0x0738044, 0x00000024);
	WRITEU8(offset + 0x0738096, 0x00000064);
	WRITEU8(offset + 0x0738098, 0x00000002);
	WRITEU8(offset + 0x073805A, 0x00000064);
	WRITEU8(offset + 0x073805C, 0x00000010);
	WRITEU8(offset + 0x073804E, 0x00000064);
	WRITEU8(offset + 0x0738050, 0x00000030);
	WRITEU8(offset + 0x0738068, 0x00000004);
	WRITEU8(offset + 0x0738066, 0x00000064);
	WRITEU8(offset + 0x0738072, 0x00000064);
	WRITEU8(offset + 0x073804E, 0x00000064);
	WRITEU8(offset + 0x0738050, 0x00000030);
	offset = 0x00000000;
	WRITEU32(offset + 0x034B26C, 0x3B9AC9FF);
	offset = 0;
	data = 0;
}

void	MoonJump(void)
{
	offset = 0x0F000000;
	WRITEU32(offset + 0x0FFFC9C, 0x0000C350);
	offset = 0x31000000;
	WRITEU32(offset + 0x06ECD54, 0x00008000);
	WRITEU32(offset + 0x0860C7C, 0x0000C350);
	WRITEU32(offset + 0x08617D4, 0x0000C350);
	WRITEU32(offset + 0x0861CCC, 0x0000C350);
	WRITEU32(offset + 0x0861EFC, 0x0000C350);
	WRITEU32(offset + 0x06EC1FC, 0x00008000);
	offset = 0x30000000;
	WRITEU32(offset + 0x00D8084, 0x00008000);
	WRITEU32(offset + 0x00D802C, 0x0000C350);
	WRITEU32(offset + 0x00D8084, 0x0000C350);
	WRITEU32(offset + 0x00D839C, 0x0000C350);
	WRITEU32(offset + 0x00D895C, 0x0000C350);
	WRITEU32(offset + 0x0860C7C, 0x0000C350);
	WRITEU32(offset + 0x00D802C, 0x00008000);
	if (is_pressed(0x00000040))
	{
		offset = 0;
		data = 0;
	}
}

void	Time_Stuck_At_OneZero_Seconds(void)
{
	offset = 0x00000000;
	WRITEU8(offset + 0x034B268, 0x00000064);
	offset = 0;
	data = 0;
}

void	See_Through_Walls(void)
{
	offset = 0x30000000;
	WRITEU32(offset + 0x035753C, 0xFFFFFFFF);
	offset = 0;
	data = 0;
}

void	Ghost_Bullets(void)
{
	offset = 0x00000000;
	WRITEU32(offset + 0x034B6F4, 0x00012583);
	offset = 0;
	data = 0;
}

void	White_Heart_Rate(void)
{
	offset = 0x00000000;
	WRITEU32(offset + 0x034B112, 0x00FF00FF);
	offset = 0;
	data = 0;
}

void	By_Cracktus_Heinkel(void)
{
	offset = 0x31000000;
	WRITEU8(offset + 0x06EC28F, 0x00000013);
	offset = 0;
	data = 0;
}

void	By_Lucas_Aqua(void)
{
	offset = 0x31000000;
	WRITEU8(offset + 0x06EC28F, 0x00000013);
	offset = 0;
	data = 0;
}

