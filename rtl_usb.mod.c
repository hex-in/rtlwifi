#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x166a2d7, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x1433c459, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x611ced83, __VMLINUX_SYMBOL_STR(rtl_deinit_deferred_work) },
	{ 0xc424e365, __VMLINUX_SYMBOL_STR(rtl_deinit_core) },
	{ 0x53e38448, __VMLINUX_SYMBOL_STR(usb_get_from_anchor) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x1db32389, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xc939564c, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xa4c31d29, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x8ed97cb6, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x192d68f0, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x960ab5c4, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0xffbe96c, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x738880ef, __VMLINUX_SYMBOL_STR(rtl_init_core) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xdd2101f8, __VMLINUX_SYMBOL_STR(rtl_action_proc) },
	{ 0x8637c1e0, __VMLINUX_SYMBOL_STR(rtl_dbgp_flag_init) },
	{ 0x4af9ff32, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x75890ab7, __VMLINUX_SYMBOL_STR(ieee80211_rx) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xf8ff6add, __VMLINUX_SYMBOL_STR(rtl_lps_change_work_callback) },
	{ 0xb025f018, __VMLINUX_SYMBOL_STR(rtl_init_rx_config) },
	{ 0xb5f99869, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x75885ae0, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xc962bc00, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x10a42264, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xb0eefa74, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xc177c691, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xd1f0a011, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0xc5c4a3ec, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x5972878b, __VMLINUX_SYMBOL_STR(ieee80211_tx_status_irqsafe) },
	{ 0xa6e1ac8c, __VMLINUX_SYMBOL_STR(rtl_ops) },
	{ 0xcde930b0, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x88468d35, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x44361976, __VMLINUX_SYMBOL_STR(rtl_ips_nic_on) },
	{ 0xa2449aea, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x755c9b2e, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x14c5bdec, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x96a8d9ce, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x7461e1cc, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xc8c91553, __VMLINUX_SYMBOL_STR(rtl_beacon_statistic) },
	{ 0xca58057c, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0xbfb6f60b, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtlwifi,mac80211";


MODULE_INFO(srcversion, "1456048E595517F1A8E1DE0");
