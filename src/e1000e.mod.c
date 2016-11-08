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

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5b407e3c, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xca517d27, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xd9fa2fe3, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb0c34f8b, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9c80de71, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x99840d00, __VMLINUX_SYMBOL_STR(timecounter_init) },
	{ 0xea49db6d, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x33dd6362, __VMLINUX_SYMBOL_STR(skb_clone_tx_timestamp) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xdb3a5d4c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x91eb9b4, __VMLINUX_SYMBOL_STR(round_jiffies) },
	{ 0xc94be675, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x46ca3dfd, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0xed76caa, __VMLINUX_SYMBOL_STR(node_data) },
	{ 0x14831722, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xb047197f, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0x4ea25709, __VMLINUX_SYMBOL_STR(dql_reset) },
	{ 0xa712d4e6, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xeb82deab, __VMLINUX_SYMBOL_STR(pm_qos_add_request) },
	{ 0x3a5ba1e7, __VMLINUX_SYMBOL_STR(pm_qos_remove_request) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xc30c3c4e, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x7b108bf7, __VMLINUX_SYMBOL_STR(put_zone_device_page) },
	{ 0xebc803c0, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x914ebaec, __VMLINUX_SYMBOL_STR(pcie_capability_clear_and_set_word) },
	{ 0x3a4de076, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xbe248c3a, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc245cfed, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x1652163d, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0xda5c072f, __VMLINUX_SYMBOL_STR(pci_disable_link_state_locked) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xf4c91ed, __VMLINUX_SYMBOL_STR(ns_to_timespec) },
	{ 0x205ffd3d, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xab82e32e, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x26afd6dd, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x9cdb7634, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xb47cca30, __VMLINUX_SYMBOL_STR(csum_ipv6_magic) },
	{ 0x42a85040, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x38c68176, __VMLINUX_SYMBOL_STR(ptp_clock_unregister) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x70201cb, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x4aaaf83f, __VMLINUX_SYMBOL_STR(netif_schedule_queue) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x303519fd, __VMLINUX_SYMBOL_STR(pci_enable_pcie_error_reporting) },
	{ 0x1603c7e6, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x8e10bd96, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x81909657, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xa9e291e0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf074d6fb, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0xa00aca2a, __VMLINUX_SYMBOL_STR(dql_completed) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x8abdf02, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xdc611343, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xad8ea988, __VMLINUX_SYMBOL_STR(__pci_enable_wake) },
	{ 0x6faffc84, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x393d4de9, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x716548d1, __VMLINUX_SYMBOL_STR(dev_close) },
	{ 0x1e948a65, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_irq) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x5394a5e6, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0x208bf2c, __VMLINUX_SYMBOL_STR(ptp_clock_register) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x3b389fd2, __VMLINUX_SYMBOL_STR(device_wakeup_enable) },
	{ 0x9ce14156, __VMLINUX_SYMBOL_STR(pci_clear_master) },
	{ 0x168a03b, __VMLINUX_SYMBOL_STR(dev_open) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0xc542933a, __VMLINUX_SYMBOL_STR(timecounter_read) },
	{ 0xfe6c35b0, __VMLINUX_SYMBOL_STR(pci_find_capability) },
	{ 0x68370889, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x4fa49fb1, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x56f68f88, __VMLINUX_SYMBOL_STR(pci_select_bars) },
	{ 0xa8b76a68, __VMLINUX_SYMBOL_STR(timecounter_cyc2time) },
	{ 0xc934b469, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xeed37ba9, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0x1ba42ffe, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x84234c35, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_node_trace) },
	{ 0xd83475fc, __VMLINUX_SYMBOL_STR(pci_disable_link_state) },
	{ 0x618911fc, __VMLINUX_SYMBOL_STR(numa_node) },
	{ 0x50e86674, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x2abd5be4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x3d07c1b0, __VMLINUX_SYMBOL_STR(pci_enable_msix_range) },
	{ 0x6618adb, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xe556c69a, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0x9d378f70, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x614b0bc3, __VMLINUX_SYMBOL_STR(pci_cleanup_aer_uncorrect_error_status) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbf0b5f30, __VMLINUX_SYMBOL_STR(pm_schedule_suspend) },
	{ 0xc35b925b, __VMLINUX_SYMBOL_STR(passthru_features_check) },
	{ 0xe4e65fc, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0xc8ea9ccd, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x7ba67421, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x98df91bd, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x467df16d, __VMLINUX_SYMBOL_STR(netdev_rss_key_fill) },
	{ 0xba45f6be, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0x3f358e91, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0xd94743ef, __VMLINUX_SYMBOL_STR(node_states) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x566e95b7, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x7bd9e9a2, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x72585f6c, __VMLINUX_SYMBOL_STR(pci_disable_pcie_error_reporting) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x16578ef1, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x4749455f, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xd92c7df2, __VMLINUX_SYMBOL_STR(ptp_clock_index) },
	{ 0xceea7ea6, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0x4b215b4e, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x18df65bf, __VMLINUX_SYMBOL_STR(pci_prepare_to_sleep) },
	{ 0x884fb2cb, __VMLINUX_SYMBOL_STR(pci_dev_run_wake) },
	{ 0x864b164c, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x8d1031ee, __VMLINUX_SYMBOL_STR(pm_qos_update_request) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0xc21e9990, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x3b549f30, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x9e0c711d, __VMLINUX_SYMBOL_STR(vzalloc_node) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf058c44a, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xa0b4827d, __VMLINUX_SYMBOL_STR(pci_enable_device_mem) },
	{ 0x51284661, __VMLINUX_SYMBOL_STR(__napi_alloc_skb) },
	{ 0x788377d9, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0x37a4711c, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x50596a5a, __VMLINUX_SYMBOL_STR(pci_release_selected_regions) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x617c046f, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x6cd532ff, __VMLINUX_SYMBOL_STR(pcie_capability_write_word) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0xe8e28830, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xf513cfda, __VMLINUX_SYMBOL_STR(pci_request_selected_regions_exclusive) },
	{ 0x8849be4f, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x7d2ff585, __VMLINUX_SYMBOL_STR(pcie_capability_read_word) },
	{ 0x297ffd82, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x1ab935e6, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x266c023f, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ptp";

MODULE_ALIAS("pci:v00008086d0000105Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000105Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010B9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000108Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000108Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000109Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001096sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001098sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001049sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001501sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000294Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001525sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010EFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001502sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001503sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000153Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000153Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000155Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001559sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000156Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001570sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015B7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015B8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015B9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015D7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015D6sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "96FF0B5F2C4FC8BABFAA7B3");
