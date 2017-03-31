# By Microsoft DX and Seeed Studio

#!/bin/ash

cp /mnt/$1/Config/run.log /root

cp /mnt/$1/Config/AzureConnectionString /root

cp /mnt/$1/Config/AzureMessageReceive /root

cp /mnt/$1/Config/AzureMessageSend /root

cp /mnt/$1/Config/AzureIoTHubClient /root

cp /mnt/$1/Config/rc.local /etc/rc.local

cp /mnt/$1/Config/ca-certificates_20160104_all.ipk /root

cd /root
opkg install ca-certificates_20160104_all.ipk

rm /root/ca-certificates_20160104_all.ipk
