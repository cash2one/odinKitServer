#include "base64.h"


const char DeBase64Tab[] =
{
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	62,        // '+'
	0, 0, 0,
	63,        // '/'
	52, 53, 54, 55, 56, 57, 58, 59, 60, 61,        // '0'-'9'
	0, 0, 0, 0, 0, 0, 0,
	0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,
	13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25,        // 'A'-'Z'
	0, 0, 0, 0, 0, 0,
	26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38,
	39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51,        // 'a'-'z'
};

const char EnBase64Tab[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

int DecodeBase64(const char* pSrc, char* pDst, int nSrcLen)
{
    int nDstLen;            // 输出的字符计数
    int nValue;             // 解码用到的长整数
    int i;
 
    i = 0;
    nDstLen = 0;
 
    // 取4个字符，解码到一个长整数，再经过移位得到3个字节
    while (i < nSrcLen)
    {
		if (*pSrc == 0)
		{
			break;
		}

        if (*pSrc != '\r' && *pSrc!='\n')
        {
            nValue = DeBase64Tab[(int)(*pSrc++)] << 18;
            nValue += DeBase64Tab[(int)(*pSrc++)] << 12;
            *pDst++ = (nValue & 0x00ff0000) >> 16;
            nDstLen++;
 
            if (*pSrc != '=')
            {
                nValue += DeBase64Tab[(int)(*pSrc++)] << 6;
                *pDst++ = (nValue & 0x0000ff00) >> 8;
                nDstLen++;
 
                if (*pSrc != '=')
                {
                    nValue += DeBase64Tab[(int)(*pSrc++)];
                    *pDst++ =nValue & 0x000000ff;
                    nDstLen++;
                }
            }
 
            i += 4;
        }
        else        // 回车换行，跳过
        {
            pSrc++;
            i++;
        }
     }
 
    // 输出加个结束符
    *pDst = '\0';
 
    return nDstLen;
}

int EncodeBase64(const char* pSrc, char* pDst, int nSrcLen/*, int nMaxLineLen*/)
{
    unsigned char c1, c2, c3;    // 输入缓冲区读出3个字节
    int nDstLen = 0;             // 输出的字符计数
    int nLineLen = 0;            // 输出的行长度计数
    int nDiv = nSrcLen / 3;      // 输入数据长度除以3得到的倍数
    int nMod = nSrcLen % 3;      // 输入数据长度除以3得到的余数
 
    // 每次取3个字节，编码成4个字符
    for (int i = 0; i < nDiv; i ++)
    {
        // 取3个字节
        c1 = *pSrc++;
        c2 = *pSrc++;
        c3 = *pSrc++;
 
        // 编码成4个字符
        *pDst++ = EnBase64Tab[c1 >> 2];
        *pDst++ = EnBase64Tab[((c1 << 4) | (c2 >> 4)) & 0x3f];
        *pDst++ = EnBase64Tab[((c2 << 2) | (c3 >> 6)) & 0x3f];
        *pDst++ = EnBase64Tab[c3 & 0x3f];
        nLineLen += 4;
        nDstLen += 4;
 
        // 输出换行？
        /*if (nLineLen > nMaxLineLen - 4)
        {
            *pDst++ = '\r';
            *pDst++ = '\n';
            nLineLen = 0;
            nDstLen += 2;
        }*/
    }
 
    // 编码余下的字节
    if (nMod == 1)
    {
        c1 = *pSrc++;
        *pDst++ = EnBase64Tab[(c1 & 0xfc) >> 2];
        *pDst++ = EnBase64Tab[((c1 & 0x03) << 4)];
        *pDst++ = '=';
        *pDst++ = '=';
        nLineLen += 4;
        nDstLen += 4;
    }
    else if (nMod == 2)
    {
        c1 = *pSrc++;
        c2 = *pSrc++;
        *pDst++ = EnBase64Tab[(c1 & 0xfc) >> 2];
        *pDst++ = EnBase64Tab[((c1 & 0x03) << 4) | ((c2 & 0xf0) >> 4)];
        *pDst++ = EnBase64Tab[((c2 & 0x0f) << 2)];
        *pDst++ = '=';
        nDstLen += 4;
    }
 
    // 输出加个结束符
    *pDst = '\0';
 
    return nDstLen;
}
