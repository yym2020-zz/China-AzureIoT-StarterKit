//By Microsoft DX and Orange Pi
#ifndef _ORANGEPI_H_
#define _ORANGEPI_H_

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Update data from OrnagePi to Azure.
 * If return 0 when udpate is successful.
 */
int OrangePi2Azure(char *name,char *data);

/*
 * Update the Azure key.
 */
int OrangePi_Update_Azure_Key(const char *key);
#ifdef __cplusplus
}
#endif

#endif
