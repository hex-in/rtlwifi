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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xd2b65ec6, __VMLINUX_SYMBOL_STR(ieee80211_rx_irqsafe) },
	{ 0x25085545, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x116d60da, __VMLINUX_SYMBOL_STR(rtl_swlps_beacon) },
	{ 0x611ced83, __VMLINUX_SYMBOL_STR(rtl_deinit_deferred_work) },
	{ 0x4eba98f, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xed5e0098, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x9859e4f5, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xc424e365, __VMLINUX_SYMBOL_STR(rtl_deinit_core) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x413a4b90, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x1db32389, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xc939564c, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x83a4dc0a, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x83393cf8, __VMLINUX_SYMBOL_STR(read_efuse_byte) },
	{ 0x382aef34, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x8ed97cb6, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xa7400a95, __VMLINUX_SYMBOL_STR(ieee80211_stop_queue) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xae6626a4, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x2d882d91, __VMLINUX_SYMBOL_STR(rtl_global_var) },
	{ 0xefd4d68b, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x960ab5c4, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0xdd7ab7ec, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x738880ef, __VMLINUX_SYMBOL_STR(rtl_init_core) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xdd2101f8, __VMLINUX_SYMBOL_STR(rtl_action_proc) },
	{ 0x8637c1e0, __VMLINUX_SYMBOL_STR(rtl_dbgp_flag_init) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x87825440, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_irq) },
	{ 0xf8ff6add, __VMLINUX_SYMBOL_STR(rtl_lps_change_work_callback) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xb025f018, __VMLINUX_SYMBOL_STR(rtl_init_rx_config) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xb5f99869, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xc962bc00, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x241dedc1, __VMLINUX_SYMBOL_STR(rtl_tid_to_ac) },
	{ 0xa1d13fcf, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xcb8a97d, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x9963a089, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x5972878b, __VMLINUX_SYMBOL_STR(ieee80211_tx_status_irqsafe) },
	{ 0xa6e1ac8c, __VMLINUX_SYMBOL_STR(rtl_ops) },
	{ 0xcde930b0, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xdba6a2c3, __VMLINUX_SYMBOL_STR(rtl_deinit_rfkill) },
	{ 0x2fb885cf, __VMLINUX_SYMBOL_STR(rtl_p2p_info) },
	{ 0x45c9739a, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x1e8d3c0b, __VMLINUX_SYMBOL_STR(ieee80211_wake_queue) },
	{ 0x8c03cf21, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x88468d35, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0xd63c3472, __VMLINUX_SYMBOL_STR(rtl_attribute_group) },
	{ 0x98125cb4, __VMLINUX_SYMBOL_STR(rtl_recognize_peer) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4fd8a85b, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xd4cd8227, __VMLINUX_SYMBOL_STR(rtl_is_special_data) },
	{ 0x5c456b05, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0x4966f6d4, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xb315c84b, __VMLINUX_SYMBOL_STR(rtl_init_rfkill) },
	{ 0xa2449aea, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x755c9b2e, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xcffb562b, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0xee74e6e5, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x96a8d9ce, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xd6b589f4, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x5dcf6341, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xaecb9506, __VMLINUX_SYMBOL_STR(rtl_tx_mgmt_proc) },
	{ 0xc8c91553, __VMLINUX_SYMBOL_STR(rtl_beacon_statistic) },
	{ 0x32db811d, __VMLINUX_SYMBOL_STR(pcie_capability_read_word) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,rtlwifi";


MODULE_INFO(srcversion, "85C12CA179BAE00B0174CA5");
