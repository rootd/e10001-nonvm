# e1000e-nonvm

This is the Intel e1000e Ethernet adapter driver. The NVM checksum rouine has been removed so it works flawlessly with i219-V models.

Read more: http://superuser.com/questions/1104537/how-to-repair-the-checksum-of-the-non-volatile-memory-nvm-of-intel-ethernet-co/1106641#1106641

Building and Installation
-------------------------

For the build to work properly, the currently running kernel MUST match the version and configuration of the installed kernel sources. If you have just recompiled the kernel reboot the system before building.

```
cd ./src
sudo make install
sudo modprobe e1000e
```

Source
------
Version: 3.3.4 (Latest) Date: 5/20/2016

https://downloadcenter.intel.com/download/15817