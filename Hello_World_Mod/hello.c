#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("d8daea297b36 - Devin Rataiczak");
MODULE_DESCRIPTION("A simple hello world module");
MODULE_VERSION("0.1");

static int __init kern_mod_init(void) {
	printk(KERN_DEBUG "Hello world!\n");
	return 0;
}

static void __exit kern_mod_exit(void) {
	printk(KERN_DEBUG "Unloading module...\n");
}

module_init(kern_mod_init);
module_exit(kern_mod_exit);
