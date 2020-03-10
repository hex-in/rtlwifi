#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x166a2d7, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x3f30879a, __VMLINUX_SYMBOL_STR(rtl_cam_delete_one_entry) },
	{ 0xc127e95c, __VMLINUX_SYMBOL_STR(rtl_fw_cb) },
	{ 0x1bd4b463, __VMLINUX_SYMBOL_STR(rtl_pci_probe) },
	{ 0x9eaac2b2, __VMLINUX_SYMBOL_STR(rtl_cam_get_free_entry) },
	{ 0x4eba98f, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xb5574012, __VMLINUX_SYMBOL_STR(rtl_dm_diginit) },
	{ 0xfeff8b20, __VMLINUX_SYMBOL_STR(rtl_ps_disable_nic) },
	{ 0x82c545a3, __VMLINUX_SYMBOL_STR(rtl_hal_pwrseqcmdparsing) },
	{ 0xed5e0098, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xf1bcf172, __VMLINUX_SYMBOL_STR(rtl_get_tcb_desc) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xb0d6edfa, __VMLINUX_SYMBOL_STR(rtl_efuse_shadow_map_update) },
	{ 0x79188a02, __VMLINUX_SYMBOL_STR(rtl_query_rxpwrpercentage) },
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x7c5eb942, __VMLINUX_SYMBOL_STR(rtl_cam_add_one_entry) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x207fbb70, __VMLINUX_SYMBOL_STR(rtl_evm_db_to_percentage) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x8ed97cb6, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6f0036d9, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x7a98a839, __VMLINUX_SYMBOL_STR(rtl_pci_resume) },
	{ 0xc7e43cd1, __VMLINUX_SYMBOL_STR(rtl_ps_enable_nic) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xbf66ad2b, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xc8fd727e, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xe0c3a4a8, __VMLINUX_SYMBOL_STR(rtl_signal_scale_mapping) },
	{ 0xdd8d94c4, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0xe44a8f93, __VMLINUX_SYMBOL_STR(rtl_pci_suspend) },
	{ 0xc47c29cd, __VMLINUX_SYMBOL_STR(rtlwifi_rate_mapping) },
	{ 0x27a8fd7d, __VMLINUX_SYMBOL_STR(rtl_pci_disconnect) },
	{ 0xff4e8f5a, __VMLINUX_SYMBOL_STR(rtl_cmd_send_packet) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xcde930b0, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x8750c971, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0x9a5dec3f, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x7ad1d38b, __VMLINUX_SYMBOL_STR(rtl_cam_mark_invalid) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2c2a0810, __VMLINUX_SYMBOL_STR(rtl_cam_del_entry) },
	{ 0x697b92f5, __VMLINUX_SYMBOL_STR(rtl_cam_empty_entry) },
	{ 0xdb2d15f7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xb931d3ba, __VMLINUX_SYMBOL_STR(rtl_cam_reset_all_entry) },
	{ 0x9a32720b, __VMLINUX_SYMBOL_STR(rtl_process_phyinfo) },
	{ 0x96a8d9ce, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xc86adfd7, __VMLINUX_SYMBOL_STR(efuse_read_1byte) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtlwifi,rtl_pci,mac80211";

MODULE_ALIAS("pci:v000010ECd00008179sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "FDBFE876AF19688E7245293");
