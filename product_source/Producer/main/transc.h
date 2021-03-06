#ifndef _TRANSC_H_
#define _TRANSC_H_

//#include "burn_result.h"
#include "fwl_usb_transc.h"
#define     USB_STATUS_SUCCESS  FHA_SUCCESS
#define     USB_STATUS_FAILE    FHA_FAIL

#define    TRANS_NULL  						0
#define    TRANS_SWITCH_USB					1		//切换USB速度为High Speed
#define    TRANS_TEST_CONNECT				2		//测试USb通讯
#define    TRANS_SET_MODE					3 		//设置烧录模式，完整烧录或是升级或是SPI烧录
#define    TRANS_GET_FLASHID				4 		//获取nandflash或spi flash id
#define    TRANS_SET_NANDPARAM				5 		//设置nandflash的参数
#define    TRANS_DETECT_NANDPARAM			6 		//测nandflash参数，对于不在nand列表里的flash使用
#define    TRANS_INIT_SECAREA				7		//初始化安全区
#define    TRANS_SET_RESV					8		//设置保留区大小
#define    TRANS_CREATE_PARTITION			9		//创建分区
#define    TRANS_FORMAT_DRIVER				10		//格式化分区
#define    TRANS_MOUNT_DRIVER				11		//挂载分区
#define    TRANS_DOWNLOAD_BOOT_START		12		//开始下载boot
#define    TRANS_DOWNLOAD_BOOT_DATA			13		//发送boot数据
#define    TRANS_COMPARE_BOOT_START		    14		//开始比较boot
#define    TRANS_COMPARE_BOOT_DATA			15		//发送比较boot数据
#define    TRANS_DOWNLOAD_BIN_START			16		//开始下载bin文件
#define    TRANS_DOWNLOAD_BIN_DATA			17		//发送bin文件数据
#define    TRANS_COMPARE_BIN_START			18		//开始比较bin文件
#define    TRANS_COMPARE_BIN_DATA			19		//发送比较bin文件数据
#define    TRANS_DOWNLOAD_IMG_START			20		//开始下载IMAGE文件
#define    TRANS_DOWNLOAD_IMG_DATA			21		//发送IMAGE数据
#define    TRANS_COMPARE_IMG_START			22		//开始比较IMAGE文件
#define    TRANS_COMPARE_IMG_DATA			23		//发送比较IMAGE数据
#define    TRANS_DOWNLOAD_FILE_START		24		//开始下载文件系统文件
#define    TRANS_DOWNLOAD_FILE_DATA			25		//发送文件系统文件数据
#define    TRANS_COMPARE_FILE_START		    26		//开始比较文件系统文件
#define    TRANS_COMPARE_FILE_DATA			27		//发送比较文件系统文件数据
#define    TRANS_UPLOAD_BIN_START			28	    //开始上传BIN文件
#define    TRANS_UPLOAD_BIN_DATA			29	    //上传BIN文件
#define    TRANS_UPLOAD_FILE_START			30      //开始上传文件系统文件
#define    TRANS_UPLOAD_FILE_DATA			31		//上传文件系统文件数据
#define    TRANS_SET_GPIO					32 		//设置GPIO
#define    TRANS_RESET						33		//重启设备端
#define    TRANS_CLOSE						34		//Close
#define    TRANS_SET_REG					35
#define    TRANS_DOWNLOAD_PRODUCER_START	36
#define    TRANS_DOWNLOAD_PRODUCER_DATA		37
#define    TRANS_RUN_PRODUCER				38
#define    TRANS_GET_DISK_INFO		        39		//获取分区信息
#define    TRANS_UPDATESELF_BIN_START		40		//开始下载自升级数据
#define    TRANS_UPDATESELF_BIN_DATA		41		//传自升级数据
#define    TRANS_UPLOAD_BIN_LEN				43	    //上传BIN长度
#define	   TRANS_WRITE_ASA_FILE				44	    //写安全区文件

#define    TRANS_DOWNLOAD_CLIENT_BOOT_START			45		//开始下载客户BOOT文件
#define    TRANS_DOWNLOAD_CLIENT_BOOT_DATA			46		//发送客户BOOT文件数据
#define    TRANS_COMPARE_CLIENT_BOOT_START			47		//开始比较客户BOOT文件
#define    TRANS_COMPARE_CLIENT_BOOT_DATA			48		//发送比较
#define    TRANS_SET_SPIPARAM          			    49		//设置PSI参数
#define    TRANS_GET_FLASH_HIGH_ID                   50      //获取nandflash的high id

#define    TRANS_UPLOAD_SPIDATA_START			    53	    //开始上传SPIDATA
#define    TRANS_UPLOAD_SPIDATA_DATA			    54	    //开始上传SPIDATA

#define    TRANS_WRITE_OTP_SERIAL			        55	    //写otp序列号
#define    TRANS_READ_OTP_SERIAL			        56	    //读otp序列号




#define	   TRANS_GET_CHANNEL_ID						100
#define	   TRANS_GET_RAM_VALUE						101	    //
#define	   TRANS_GET_SCSI_STATUS				    102	    //
#define	   TRANS_SET_CHANNEL_ID						103
#define    TRANS_SET_BURNEDPARAM                    104     // 下发烧录完成参数
#define    TRANS_SET_NANDFLASH_CHIP_SEL             105     // NAND 片选设置
#define	   TRANS_READ_ASA_FILE				        106	    //写安全区文件

#define	   TRANS_UPLOAD_BOOT_START				    107	    //获取boot文件开始
#define	   TRANS_UPLOAD_BOOT_DATA				    108	    //获取boot文件的数据
#define	   TRANS_UPLOAD_BOOT_LEN				    109	    //获取boot文件的长�

#define	   TRANS_SET_ERASE_NAND_MODE			    111	    //设置nand的擦block的模式
#define	   TRANS_SET_BIN_RESV_SIZE			        112	    //设置BIN区的剩余空间大小.





static T_BOOL Transc_SwitchUsbHighSpeed(T_U8 data[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_TestConnection(T_U8 data[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_SetMode(T_U8 data[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_GetFlashID(T_U8 data[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_SetNandParam(T_U8 data[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_DetectNandParam(T_U8 buf[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_InitSecArea(T_U8 data[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_SetResvAreaSize(T_U8 data[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_StartDLBin(T_U8 data[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_DLBin(T_U8 data[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_GetDiskInfo(T_U8 data[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_CreatePartion(T_U8 data[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_FormatDriver(T_U8 data[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_MountDriver(T_U8 data[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_StartDLImg(T_U8 data[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_DLImg(T_U8 data[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_StartDLBoot(T_U8 data[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_DLBoot(T_U8 data[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_StartDLFile(T_U8 data[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_DLFile(T_U8 data[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_Reset(T_U8 data[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_Close(T_U8 data[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_GetBinStart(T_U8 data[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_GetBinLength(T_U8 data[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_GetBinData(T_U8 data[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_WriteAsaFile(T_U8 data[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_SetSPIParam(T_U8 data[], T_U32 len, T_CMD_RESULT *result);

static T_BOOL Transc_ReadAsaFile(T_U8 data[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_GetChannel_ID(T_U8 data[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_SetChannel_ID(T_U8 data[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_GetBootStart(T_U8 data[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_GetBootData(T_U8 data[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_GetBootLen(T_U8 data[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_SetErase_Mode(T_U8 data[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_Set_Bin_Resv_Size(T_U8 data[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_ReadAsaFile(T_U8 data[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_GetSpiDataStart(T_U8 data[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_GetSpiData(T_U8 data[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_GetFlashHighID(T_U8 data[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_write_otp_serial(T_U8 data[], T_U32 len, T_CMD_RESULT *result);
static T_BOOL Transc_read_otp_serial(T_U8 data[], T_U32 len, T_CMD_RESULT *result);





#endif
