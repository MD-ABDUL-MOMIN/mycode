#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__attribute_used__
__attribute__((section("__versions"))) = {
	{ 0xfc4fa38d, "struct_module" },
	{ 0x601910b, "vfs_create" },
	{ 0x4d3c153f, "sigprocmask" },
	{ 0x5402565f, "d_path" },
	{ 0x4d28b566, "kmem_cache_destroy" },
	{ 0xd2a5da6f, "auth_domain_put" },
	{ 0x8377b3ba, "per_cpu__current_task" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd5b037e1, "kref_put" },
	{ 0x79353ac, "sunrpc_cache_update" },
	{ 0x6ad778e5, "up_read" },
	{ 0xc0573b72, "xdr_init_encode" },
	{ 0xf6ba3642, "mem_map" },
	{ 0x10bf8505, "lease_get_mtime" },
	{ 0x8f5cebc, "single_open" },
	{ 0xc6bc7f76, "vfs_readdir" },
	{ 0x94b79934, "filemap_fdatawait" },
	{ 0x5db1cfe, "rpc_call_async" },
	{ 0xe909a9b8, "auth_unix_lookup" },
	{ 0xb8e064c3, "seq_open" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x2368be6d, "posix_acl_to_xattr" },
	{ 0xe6c4c1d8, "vfs_link" },
	{ 0xf6f16766, "svc_print_addr" },
	{ 0xa24721db, "seq_escape" },
	{ 0x74cc238d, "current_kernel_time" },
	{ 0x4e848e9f, "single_release" },
	{ 0x5eb621a6, "seq_puts" },
	{ 0x511cddb2, "vfs_llseek" },
	{ 0x3dafcd5c, "export_op_default" },
	{ 0x100211dd, "svc_addsock" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x8550ee26, "put_rpccred" },
	{ 0xfdc4cea6, "touch_atime" },
	{ 0x5e6ad92f, "dput" },
	{ 0x12e280e3, "svc_proc_unregister" },
	{ 0x49989c66, "seq_printf" },
	{ 0x4d1372b5, "remove_proc_entry" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb0bf95ca, "dentry_open" },
	{ 0x87774314, "nlmsvc_ops" },
	{ 0x1f065d15, "vfs_mknod" },
	{ 0xa6814433, "groups_free" },
	{ 0x71fa908a, "cache_flush" },
	{ 0x6ce66043, "mutex_unlock" },
	{ 0xc206b6ab, "svc_seq_show" },
	{ 0x3b48f237, "igrab" },
	{ 0x1fe17927, "vfs_symlink" },
	{ 0xf1a3902c, "cache_register" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x8cb9afbb, "seq_read" },
	{ 0xb3a307c6, "si_meminfo" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xbabf0f35, "rpciod_down" },
	{ 0x7d11c268, "jiffies" },
	{ 0x8f99ee56, "xdr_reserve_space" },
	{ 0x375492a4, "rpciod_up" },
	{ 0xc8ffd72b, "svc_set_client" },
	{ 0xbce67cc4, "down_read" },
	{ 0x66615e76, "vfs_rmdir" },
	{ 0x4aede0cc, "unlock_rename" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x64910249, "__create_workqueue" },
	{ 0xeff86e38, "svc_makesock" },
	{ 0x87f3060d, "cache_check" },
	{ 0x7fae9b06, "get_sb_single" },
	{ 0xe15665a, "vfs_lock_file" },
	{ 0xebe896d9, "auth_unix_add_addr" },
	{ 0xe0846ae1, "vfs_readv" },
	{ 0x2bc95bd4, "memset" },
	{ 0xb56717cf, "xtime" },
	{ 0x77152044, "proc_mkdir" },
	{ 0xd2b54fa6, "rpc_call_sync" },
	{ 0x565aed7e, "kill_litter_super" },
	{ 0x6eea229d, "svcauth_unix_purge" },
	{ 0x8d3894f2, "_ctype" },
	{ 0x5125107e, "svc_destroy" },
	{ 0x1438de2c, "rpc_create" },
	{ 0x83665fbb, "dnotify_parent" },
	{ 0xa0ba3a3f, "cancel_rearming_delayed_work" },
	{ 0xe4511f3e, "svc_sock_names" },
	{ 0x1b7d4074, "printk" },
	{ 0xa892e98c, "sunrpc_cache_lookup" },
	{ 0x1312bc08, "simple_transaction_read" },
	{ 0x6c60ade5, "write_inode_now" },
	{ 0x23ad070a, "set_current_groups" },
	{ 0x5d76ee20, "setlease" },
	{ 0xfe88c49f, "auth_unix_forget_old" },
	{ 0x9d905e52, "exit_fs" },
	{ 0xc4120ed5, "vfs_getxattr" },
	{ 0xaf456ba1, "seq_putc" },
	{ 0xa44072fc, "posix_acl_alloc" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x2d35d359, "kmem_cache_free" },
	{ 0x3e3ca28f, "lock_rename" },
	{ 0x78d0ffc4, "mutex_lock" },
	{ 0x8a7b2ee, "xdr_init_decode" },
	{ 0xec40291c, "destroy_workqueue" },
	{ 0x115828de, "crypto_free_tfm" },
	{ 0x232fa4f1, "svc_create_pooled" },
	{ 0xe97f4ce5, "qword_get" },
	{ 0xc8e96dea, "qword_addhex" },
	{ 0x6c152741, "rpcauth_lookup_credcache" },
	{ 0xefafda25, "unix_domain_find" },
	{ 0xe7176f5f, "svc_process" },
	{ 0x8393c4b3, "svc_set_num_threads" },
	{ 0xcfffeb32, "path_release" },
	{ 0x2cde2d59, "up_write" },
	{ 0x5b96bf3f, "cache_unregister" },
	{ 0x60610c03, "down_write" },
	{ 0x2e2b9551, "fput" },
	{ 0x402b43e5, "inotify_dentry_parent_queue_event" },
	{ 0x6a077ee4, "lease_modify" },
	{ 0xe896facd, "nfsacl_encode" },
	{ 0xedcf6be4, "qword_add" },
	{ 0xbb2b8d77, "boot_tvec_bases" },
	{ 0x44d42aac, "flush_signals" },
	{ 0x99a1dbee, "simple_transaction_release" },
	{ 0x4fa14a74, "locks_remove_posix" },
	{ 0x9079fc1f, "kmem_cache_alloc" },
	{ 0xbf9d1b96, "nfsd_debug" },
	{ 0xa3e36782, "locks_init_lock" },
	{ 0x39882d2b, "path_lookup" },
	{ 0x88d56da1, "mntput_no_expire" },
	{ 0x866af851, "copy_fs_struct" },
	{ 0x6451294b, "posix_acl_valid" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0x7b69467e, "posix_acl_from_xattr" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xafa0d443, "cache_purge" },
	{ 0xb1af0092, "vfs_statfs" },
	{ 0x99341c56, "create_proc_entry" },
	{ 0x7e7e188f, "__module_put_and_exit" },
	{ 0x57c2b647, "svc_proc_register" },
	{ 0xee000a63, "vfs_mkdir" },
	{ 0xb51ecf9a, "wake_up_process" },
	{ 0xe12cdd56, "inode_change_ok" },
	{ 0xb429410a, "posix_acl_from_mode" },
	{ 0x43fa79ce, "nfsacl_decode" },
	{ 0x5eb61823, "vfs_writev" },
	{ 0x4a31760e, "vfs_unlink" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0xceddb49e, "kmem_cache_create" },
	{ 0x29543150, "register_filesystem" },
	{ 0x6cb34e5, "init_waitqueue_head" },
	{ 0xc281c899, "__wake_up" },
	{ 0x112f51, "groups_alloc" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0x7cdf3335, "inotify_inode_queue_event" },
	{ 0xc844115, "follow_down" },
	{ 0xd43c6276, "seq_lseek" },
	{ 0xf65b8e44, "iput" },
	{ 0x13eb7449, "svc_exit_thread" },
	{ 0x83800bfa, "kref_init" },
	{ 0xaa6dd542, "vfs_test_lock" },
	{ 0x1db137f, "svc_max_payload" },
	{ 0x37a0cba, "kfree" },
	{ 0xa1b850a2, "kthread_create" },
	{ 0x70c9fd3d, "simple_transaction_get" },
	{ 0x8e35def8, "follow_up" },
	{ 0x2e60bace, "memcpy" },
	{ 0x171f7da4, "permission" },
	{ 0x7d1ed1f2, "prepare_to_wait" },
	{ 0xce33ec6e, "svc_reserve" },
	{ 0x9775cdc, "kref_get" },
	{ 0x12048ab, "simple_fill_super" },
	{ 0x976e539e, "lockd_up" },
	{ 0x5e3b32a, "put_page" },
	{ 0xa7b91a7b, "lockd_down" },
	{ 0x2a7b11d4, "finish_wait" },
	{ 0xebd7ed4e, "unregister_filesystem" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x7d3821b4, "xdr_inline_decode" },
	{ 0x25da070, "snprintf" },
	{ 0xee8ad456, "seq_release" },
	{ 0x9bc67a30, "svc_recv" },
	{ 0x8235805b, "memmove" },
	{ 0x400e0472, "__break_lease" },
	{ 0xb7a0ce7e, "auth_domain_find" },
	{ 0x19c13e56, "lookup_one_len" },
	{ 0x98b3dd3c, "vfs_rename" },
	{ 0xfdd6359d, "rpc_shutdown_client" },
	{ 0xf9ce59b2, "lock_may_write" },
	{ 0x46504e5a, "vfs_getattr" },
	{ 0x3c4440a0, "crypto_alloc_base" },
	{ 0x9bbedb98, "lock_may_read" },
	{ 0x7561ce0d, "xdr_decode_string_inplace" },
	{ 0xa7038a40, "notify_change" },
	{ 0x45322ce1, "vfs_setxattr" },
	{ 0x12eb92d1, "queue_delayed_work" },
	{ 0x5d6f3db6, "get_write_access" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0xee641ee2, "find_exported_dentry" },
	{ 0xd98f85d2, "vfs_removexattr" },
	{ 0xb2337b6e, "seq_path" },
	{ 0xbf09f7d8, "filemap_fdatawrite" },
	{ 0xabad8b42, "locks_mandatory_area" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=sunrpc,exportfs,lockd,nfs_acl";


MODULE_INFO(srcversion, "943B79E6E257C613FA9B139");
