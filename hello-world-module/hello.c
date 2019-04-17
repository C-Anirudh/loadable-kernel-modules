#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("C. Anirudh");
MODULE_DESCRIPTION("A kernel module that displays message when loaded and un-loaded");
MODULE_VERSION("0.1");

static int __init hello_start(void)
{
    printk(KERN_INFO "I am loaded\n");
    return 0;
}

static void __exit hello_end(void)
{
    printk(KERN_INFO "Bye, I am unloaded\n");
}

module_init(hello_start);
module_exit(hello_end);