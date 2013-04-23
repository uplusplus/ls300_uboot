echo #1 setup environment.
. setenv
echo #2 make uboot.
make
echo .
echo .
ls -l u-boot.bin
echo .
echo .
echo #3 create u-boot-config_fused.bin
cat ./sd_fusing/c110.signedBL1_bin u-boot.bin > u-boot-config_fused.bin
echo .
echo .
ls -l u-boot-config_fused.bin
echo .
echo .
echo #4 cp u-boot-config_fused.bin to windows
cp u-boot-config_fused.bin /home/cobuntu/windows/linux_soft/android_fs/
