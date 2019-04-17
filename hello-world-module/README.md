# hello.c

This is a simple Loadable Kernel module that prints messages to the kernel log.
It prints `I am loaded` when it is loaded into the kernel and `Bye, I am unloaded` when it is unloaded from the kernel.

## Installation

This will install the essential development tools and the kernel headers.
```bash
$ sudo apt-get install build-essential linux-headers-`uname -r`
```


## Using the LKM

Run the make command to compile the source code.
```bash
$ make
```

Use insmod to load the module.
```bash
$ sudo insmod hello.ko
```

The printk function doesn’t output to the console but rather to the kernel log. To see that, we’ll need to run:
```bash
$ sudo dmesg
```
or
```bash
$ tail /var/log/kern.log
```

To remove the module, run:
```bash
$ sudo rmmod hello
```

Now check kernel log again for the message when the module is unloaded.


This is the manual way to check the module. Execute the following command to run the automated test.
```bash
$ make test
```
