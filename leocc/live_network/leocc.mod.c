#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_UNWINDER_ORC
#include <asm/orc_header.h>
ORC_HEADER;
#endif

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb7c0f443, "sort" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9858f364, "get_random_u8" },
	{ 0xb911bb58, "minmax_running_max" },
	{ 0x56470118, "__warn_printk" },
	{ 0x4239c21d, "param_ops_uint" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x122c3a7e, "_printk" },
	{ 0x54d43484, "register_btf_kfunc_id_set" },
	{ 0x1392369d, "init_net" },
	{ 0x9e6bc2fc, "__netlink_kernel_create" },
	{ 0xf921e1bf, "tcp_register_congestion_control" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc6255b33, "tcp_unregister_congestion_control" },
	{ 0x5b06c3af, "netlink_kernel_release" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xe2fd41e5, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C22612838CD22531B4EF917");
