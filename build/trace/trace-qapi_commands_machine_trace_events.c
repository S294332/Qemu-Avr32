/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "qemu/module.h"
#include "trace-qapi_commands_machine_trace_events.h"

uint16_t _TRACE_QMP_ENTER_QUERY_CPUS_FAST_DSTATE;
uint16_t _TRACE_QMP_EXIT_QUERY_CPUS_FAST_DSTATE;
uint16_t _TRACE_QMP_ENTER_QUERY_MACHINES_DSTATE;
uint16_t _TRACE_QMP_EXIT_QUERY_MACHINES_DSTATE;
uint16_t _TRACE_QMP_ENTER_QUERY_CURRENT_MACHINE_DSTATE;
uint16_t _TRACE_QMP_EXIT_QUERY_CURRENT_MACHINE_DSTATE;
uint16_t _TRACE_QMP_ENTER_QUERY_TARGET_DSTATE;
uint16_t _TRACE_QMP_EXIT_QUERY_TARGET_DSTATE;
uint16_t _TRACE_QMP_ENTER_QUERY_UUID_DSTATE;
uint16_t _TRACE_QMP_EXIT_QUERY_UUID_DSTATE;
uint16_t _TRACE_QMP_ENTER_QUERY_VM_GENERATION_ID_DSTATE;
uint16_t _TRACE_QMP_EXIT_QUERY_VM_GENERATION_ID_DSTATE;
uint16_t _TRACE_QMP_ENTER_SYSTEM_RESET_DSTATE;
uint16_t _TRACE_QMP_EXIT_SYSTEM_RESET_DSTATE;
uint16_t _TRACE_QMP_ENTER_SYSTEM_POWERDOWN_DSTATE;
uint16_t _TRACE_QMP_EXIT_SYSTEM_POWERDOWN_DSTATE;
uint16_t _TRACE_QMP_ENTER_SYSTEM_WAKEUP_DSTATE;
uint16_t _TRACE_QMP_EXIT_SYSTEM_WAKEUP_DSTATE;
uint16_t _TRACE_QMP_ENTER_INJECT_NMI_DSTATE;
uint16_t _TRACE_QMP_EXIT_INJECT_NMI_DSTATE;
uint16_t _TRACE_QMP_ENTER_QUERY_KVM_DSTATE;
uint16_t _TRACE_QMP_EXIT_QUERY_KVM_DSTATE;
uint16_t _TRACE_QMP_ENTER_MEMSAVE_DSTATE;
uint16_t _TRACE_QMP_EXIT_MEMSAVE_DSTATE;
uint16_t _TRACE_QMP_ENTER_PMEMSAVE_DSTATE;
uint16_t _TRACE_QMP_EXIT_PMEMSAVE_DSTATE;
uint16_t _TRACE_QMP_ENTER_QUERY_MEMDEV_DSTATE;
uint16_t _TRACE_QMP_EXIT_QUERY_MEMDEV_DSTATE;
uint16_t _TRACE_QMP_ENTER_QUERY_HOTPLUGGABLE_CPUS_DSTATE;
uint16_t _TRACE_QMP_EXIT_QUERY_HOTPLUGGABLE_CPUS_DSTATE;
uint16_t _TRACE_QMP_ENTER_SET_NUMA_NODE_DSTATE;
uint16_t _TRACE_QMP_EXIT_SET_NUMA_NODE_DSTATE;
uint16_t _TRACE_QMP_ENTER_BALLOON_DSTATE;
uint16_t _TRACE_QMP_EXIT_BALLOON_DSTATE;
uint16_t _TRACE_QMP_ENTER_QUERY_BALLOON_DSTATE;
uint16_t _TRACE_QMP_EXIT_QUERY_BALLOON_DSTATE;
uint16_t _TRACE_QMP_ENTER_QUERY_MEMORY_SIZE_SUMMARY_DSTATE;
uint16_t _TRACE_QMP_EXIT_QUERY_MEMORY_SIZE_SUMMARY_DSTATE;
uint16_t _TRACE_QMP_ENTER_QUERY_MEMORY_DEVICES_DSTATE;
uint16_t _TRACE_QMP_EXIT_QUERY_MEMORY_DEVICES_DSTATE;
uint16_t _TRACE_QMP_ENTER_X_QUERY_IRQ_DSTATE;
uint16_t _TRACE_QMP_EXIT_X_QUERY_IRQ_DSTATE;
uint16_t _TRACE_QMP_ENTER_X_QUERY_JIT_DSTATE;
uint16_t _TRACE_QMP_EXIT_X_QUERY_JIT_DSTATE;
uint16_t _TRACE_QMP_ENTER_X_QUERY_NUMA_DSTATE;
uint16_t _TRACE_QMP_EXIT_X_QUERY_NUMA_DSTATE;
uint16_t _TRACE_QMP_ENTER_X_QUERY_OPCOUNT_DSTATE;
uint16_t _TRACE_QMP_EXIT_X_QUERY_OPCOUNT_DSTATE;
uint16_t _TRACE_QMP_ENTER_X_QUERY_PROFILE_DSTATE;
uint16_t _TRACE_QMP_EXIT_X_QUERY_PROFILE_DSTATE;
uint16_t _TRACE_QMP_ENTER_X_QUERY_RAMBLOCK_DSTATE;
uint16_t _TRACE_QMP_EXIT_X_QUERY_RAMBLOCK_DSTATE;
uint16_t _TRACE_QMP_ENTER_X_QUERY_RDMA_DSTATE;
uint16_t _TRACE_QMP_EXIT_X_QUERY_RDMA_DSTATE;
uint16_t _TRACE_QMP_ENTER_X_QUERY_ROMS_DSTATE;
uint16_t _TRACE_QMP_EXIT_X_QUERY_ROMS_DSTATE;
uint16_t _TRACE_QMP_ENTER_X_QUERY_USB_DSTATE;
uint16_t _TRACE_QMP_EXIT_X_QUERY_USB_DSTATE;
uint16_t _TRACE_QMP_ENTER_DUMPDTB_DSTATE;
uint16_t _TRACE_QMP_EXIT_DUMPDTB_DSTATE;
TraceEvent _TRACE_QMP_ENTER_QUERY_CPUS_FAST_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_enter_query_cpus_fast",
    .sstate = TRACE_QMP_ENTER_QUERY_CPUS_FAST_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_QUERY_CPUS_FAST_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_QUERY_CPUS_FAST_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_exit_query_cpus_fast",
    .sstate = TRACE_QMP_EXIT_QUERY_CPUS_FAST_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_QUERY_CPUS_FAST_DSTATE 
};
TraceEvent _TRACE_QMP_ENTER_QUERY_MACHINES_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_enter_query_machines",
    .sstate = TRACE_QMP_ENTER_QUERY_MACHINES_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_QUERY_MACHINES_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_QUERY_MACHINES_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_exit_query_machines",
    .sstate = TRACE_QMP_EXIT_QUERY_MACHINES_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_QUERY_MACHINES_DSTATE 
};
TraceEvent _TRACE_QMP_ENTER_QUERY_CURRENT_MACHINE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_enter_query_current_machine",
    .sstate = TRACE_QMP_ENTER_QUERY_CURRENT_MACHINE_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_QUERY_CURRENT_MACHINE_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_QUERY_CURRENT_MACHINE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_exit_query_current_machine",
    .sstate = TRACE_QMP_EXIT_QUERY_CURRENT_MACHINE_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_QUERY_CURRENT_MACHINE_DSTATE 
};
TraceEvent _TRACE_QMP_ENTER_QUERY_TARGET_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_enter_query_target",
    .sstate = TRACE_QMP_ENTER_QUERY_TARGET_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_QUERY_TARGET_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_QUERY_TARGET_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_exit_query_target",
    .sstate = TRACE_QMP_EXIT_QUERY_TARGET_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_QUERY_TARGET_DSTATE 
};
TraceEvent _TRACE_QMP_ENTER_QUERY_UUID_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_enter_query_uuid",
    .sstate = TRACE_QMP_ENTER_QUERY_UUID_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_QUERY_UUID_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_QUERY_UUID_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_exit_query_uuid",
    .sstate = TRACE_QMP_EXIT_QUERY_UUID_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_QUERY_UUID_DSTATE 
};
TraceEvent _TRACE_QMP_ENTER_QUERY_VM_GENERATION_ID_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_enter_query_vm_generation_id",
    .sstate = TRACE_QMP_ENTER_QUERY_VM_GENERATION_ID_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_QUERY_VM_GENERATION_ID_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_QUERY_VM_GENERATION_ID_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_exit_query_vm_generation_id",
    .sstate = TRACE_QMP_EXIT_QUERY_VM_GENERATION_ID_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_QUERY_VM_GENERATION_ID_DSTATE 
};
TraceEvent _TRACE_QMP_ENTER_SYSTEM_RESET_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_enter_system_reset",
    .sstate = TRACE_QMP_ENTER_SYSTEM_RESET_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_SYSTEM_RESET_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_SYSTEM_RESET_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_exit_system_reset",
    .sstate = TRACE_QMP_EXIT_SYSTEM_RESET_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_SYSTEM_RESET_DSTATE 
};
TraceEvent _TRACE_QMP_ENTER_SYSTEM_POWERDOWN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_enter_system_powerdown",
    .sstate = TRACE_QMP_ENTER_SYSTEM_POWERDOWN_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_SYSTEM_POWERDOWN_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_SYSTEM_POWERDOWN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_exit_system_powerdown",
    .sstate = TRACE_QMP_EXIT_SYSTEM_POWERDOWN_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_SYSTEM_POWERDOWN_DSTATE 
};
TraceEvent _TRACE_QMP_ENTER_SYSTEM_WAKEUP_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_enter_system_wakeup",
    .sstate = TRACE_QMP_ENTER_SYSTEM_WAKEUP_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_SYSTEM_WAKEUP_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_SYSTEM_WAKEUP_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_exit_system_wakeup",
    .sstate = TRACE_QMP_EXIT_SYSTEM_WAKEUP_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_SYSTEM_WAKEUP_DSTATE 
};
TraceEvent _TRACE_QMP_ENTER_INJECT_NMI_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_enter_inject_nmi",
    .sstate = TRACE_QMP_ENTER_INJECT_NMI_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_INJECT_NMI_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_INJECT_NMI_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_exit_inject_nmi",
    .sstate = TRACE_QMP_EXIT_INJECT_NMI_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_INJECT_NMI_DSTATE 
};
TraceEvent _TRACE_QMP_ENTER_QUERY_KVM_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_enter_query_kvm",
    .sstate = TRACE_QMP_ENTER_QUERY_KVM_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_QUERY_KVM_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_QUERY_KVM_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_exit_query_kvm",
    .sstate = TRACE_QMP_EXIT_QUERY_KVM_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_QUERY_KVM_DSTATE 
};
TraceEvent _TRACE_QMP_ENTER_MEMSAVE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_enter_memsave",
    .sstate = TRACE_QMP_ENTER_MEMSAVE_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_MEMSAVE_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_MEMSAVE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_exit_memsave",
    .sstate = TRACE_QMP_EXIT_MEMSAVE_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_MEMSAVE_DSTATE 
};
TraceEvent _TRACE_QMP_ENTER_PMEMSAVE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_enter_pmemsave",
    .sstate = TRACE_QMP_ENTER_PMEMSAVE_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_PMEMSAVE_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_PMEMSAVE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_exit_pmemsave",
    .sstate = TRACE_QMP_EXIT_PMEMSAVE_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_PMEMSAVE_DSTATE 
};
TraceEvent _TRACE_QMP_ENTER_QUERY_MEMDEV_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_enter_query_memdev",
    .sstate = TRACE_QMP_ENTER_QUERY_MEMDEV_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_QUERY_MEMDEV_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_QUERY_MEMDEV_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_exit_query_memdev",
    .sstate = TRACE_QMP_EXIT_QUERY_MEMDEV_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_QUERY_MEMDEV_DSTATE 
};
TraceEvent _TRACE_QMP_ENTER_QUERY_HOTPLUGGABLE_CPUS_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_enter_query_hotpluggable_cpus",
    .sstate = TRACE_QMP_ENTER_QUERY_HOTPLUGGABLE_CPUS_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_QUERY_HOTPLUGGABLE_CPUS_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_QUERY_HOTPLUGGABLE_CPUS_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_exit_query_hotpluggable_cpus",
    .sstate = TRACE_QMP_EXIT_QUERY_HOTPLUGGABLE_CPUS_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_QUERY_HOTPLUGGABLE_CPUS_DSTATE 
};
TraceEvent _TRACE_QMP_ENTER_SET_NUMA_NODE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_enter_set_numa_node",
    .sstate = TRACE_QMP_ENTER_SET_NUMA_NODE_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_SET_NUMA_NODE_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_SET_NUMA_NODE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_exit_set_numa_node",
    .sstate = TRACE_QMP_EXIT_SET_NUMA_NODE_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_SET_NUMA_NODE_DSTATE 
};
TraceEvent _TRACE_QMP_ENTER_BALLOON_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_enter_balloon",
    .sstate = TRACE_QMP_ENTER_BALLOON_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_BALLOON_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_BALLOON_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_exit_balloon",
    .sstate = TRACE_QMP_EXIT_BALLOON_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_BALLOON_DSTATE 
};
TraceEvent _TRACE_QMP_ENTER_QUERY_BALLOON_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_enter_query_balloon",
    .sstate = TRACE_QMP_ENTER_QUERY_BALLOON_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_QUERY_BALLOON_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_QUERY_BALLOON_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_exit_query_balloon",
    .sstate = TRACE_QMP_EXIT_QUERY_BALLOON_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_QUERY_BALLOON_DSTATE 
};
TraceEvent _TRACE_QMP_ENTER_QUERY_MEMORY_SIZE_SUMMARY_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_enter_query_memory_size_summary",
    .sstate = TRACE_QMP_ENTER_QUERY_MEMORY_SIZE_SUMMARY_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_QUERY_MEMORY_SIZE_SUMMARY_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_QUERY_MEMORY_SIZE_SUMMARY_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_exit_query_memory_size_summary",
    .sstate = TRACE_QMP_EXIT_QUERY_MEMORY_SIZE_SUMMARY_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_QUERY_MEMORY_SIZE_SUMMARY_DSTATE 
};
TraceEvent _TRACE_QMP_ENTER_QUERY_MEMORY_DEVICES_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_enter_query_memory_devices",
    .sstate = TRACE_QMP_ENTER_QUERY_MEMORY_DEVICES_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_QUERY_MEMORY_DEVICES_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_QUERY_MEMORY_DEVICES_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_exit_query_memory_devices",
    .sstate = TRACE_QMP_EXIT_QUERY_MEMORY_DEVICES_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_QUERY_MEMORY_DEVICES_DSTATE 
};
TraceEvent _TRACE_QMP_ENTER_X_QUERY_IRQ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_enter_x_query_irq",
    .sstate = TRACE_QMP_ENTER_X_QUERY_IRQ_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_X_QUERY_IRQ_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_X_QUERY_IRQ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_exit_x_query_irq",
    .sstate = TRACE_QMP_EXIT_X_QUERY_IRQ_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_X_QUERY_IRQ_DSTATE 
};
TraceEvent _TRACE_QMP_ENTER_X_QUERY_JIT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_enter_x_query_jit",
    .sstate = TRACE_QMP_ENTER_X_QUERY_JIT_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_X_QUERY_JIT_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_X_QUERY_JIT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_exit_x_query_jit",
    .sstate = TRACE_QMP_EXIT_X_QUERY_JIT_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_X_QUERY_JIT_DSTATE 
};
TraceEvent _TRACE_QMP_ENTER_X_QUERY_NUMA_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_enter_x_query_numa",
    .sstate = TRACE_QMP_ENTER_X_QUERY_NUMA_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_X_QUERY_NUMA_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_X_QUERY_NUMA_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_exit_x_query_numa",
    .sstate = TRACE_QMP_EXIT_X_QUERY_NUMA_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_X_QUERY_NUMA_DSTATE 
};
TraceEvent _TRACE_QMP_ENTER_X_QUERY_OPCOUNT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_enter_x_query_opcount",
    .sstate = TRACE_QMP_ENTER_X_QUERY_OPCOUNT_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_X_QUERY_OPCOUNT_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_X_QUERY_OPCOUNT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_exit_x_query_opcount",
    .sstate = TRACE_QMP_EXIT_X_QUERY_OPCOUNT_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_X_QUERY_OPCOUNT_DSTATE 
};
TraceEvent _TRACE_QMP_ENTER_X_QUERY_PROFILE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_enter_x_query_profile",
    .sstate = TRACE_QMP_ENTER_X_QUERY_PROFILE_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_X_QUERY_PROFILE_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_X_QUERY_PROFILE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_exit_x_query_profile",
    .sstate = TRACE_QMP_EXIT_X_QUERY_PROFILE_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_X_QUERY_PROFILE_DSTATE 
};
TraceEvent _TRACE_QMP_ENTER_X_QUERY_RAMBLOCK_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_enter_x_query_ramblock",
    .sstate = TRACE_QMP_ENTER_X_QUERY_RAMBLOCK_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_X_QUERY_RAMBLOCK_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_X_QUERY_RAMBLOCK_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_exit_x_query_ramblock",
    .sstate = TRACE_QMP_EXIT_X_QUERY_RAMBLOCK_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_X_QUERY_RAMBLOCK_DSTATE 
};
TraceEvent _TRACE_QMP_ENTER_X_QUERY_RDMA_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_enter_x_query_rdma",
    .sstate = TRACE_QMP_ENTER_X_QUERY_RDMA_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_X_QUERY_RDMA_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_X_QUERY_RDMA_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_exit_x_query_rdma",
    .sstate = TRACE_QMP_EXIT_X_QUERY_RDMA_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_X_QUERY_RDMA_DSTATE 
};
TraceEvent _TRACE_QMP_ENTER_X_QUERY_ROMS_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_enter_x_query_roms",
    .sstate = TRACE_QMP_ENTER_X_QUERY_ROMS_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_X_QUERY_ROMS_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_X_QUERY_ROMS_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_exit_x_query_roms",
    .sstate = TRACE_QMP_EXIT_X_QUERY_ROMS_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_X_QUERY_ROMS_DSTATE 
};
TraceEvent _TRACE_QMP_ENTER_X_QUERY_USB_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_enter_x_query_usb",
    .sstate = TRACE_QMP_ENTER_X_QUERY_USB_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_X_QUERY_USB_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_X_QUERY_USB_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_exit_x_query_usb",
    .sstate = TRACE_QMP_EXIT_X_QUERY_USB_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_X_QUERY_USB_DSTATE 
};
TraceEvent _TRACE_QMP_ENTER_DUMPDTB_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_enter_dumpdtb",
    .sstate = TRACE_QMP_ENTER_DUMPDTB_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_DUMPDTB_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_DUMPDTB_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_exit_dumpdtb",
    .sstate = TRACE_QMP_EXIT_DUMPDTB_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_DUMPDTB_DSTATE 
};
TraceEvent *qapi_commands_machine_trace_events_trace_events[] = {
    &_TRACE_QMP_ENTER_QUERY_CPUS_FAST_EVENT,
    &_TRACE_QMP_EXIT_QUERY_CPUS_FAST_EVENT,
    &_TRACE_QMP_ENTER_QUERY_MACHINES_EVENT,
    &_TRACE_QMP_EXIT_QUERY_MACHINES_EVENT,
    &_TRACE_QMP_ENTER_QUERY_CURRENT_MACHINE_EVENT,
    &_TRACE_QMP_EXIT_QUERY_CURRENT_MACHINE_EVENT,
    &_TRACE_QMP_ENTER_QUERY_TARGET_EVENT,
    &_TRACE_QMP_EXIT_QUERY_TARGET_EVENT,
    &_TRACE_QMP_ENTER_QUERY_UUID_EVENT,
    &_TRACE_QMP_EXIT_QUERY_UUID_EVENT,
    &_TRACE_QMP_ENTER_QUERY_VM_GENERATION_ID_EVENT,
    &_TRACE_QMP_EXIT_QUERY_VM_GENERATION_ID_EVENT,
    &_TRACE_QMP_ENTER_SYSTEM_RESET_EVENT,
    &_TRACE_QMP_EXIT_SYSTEM_RESET_EVENT,
    &_TRACE_QMP_ENTER_SYSTEM_POWERDOWN_EVENT,
    &_TRACE_QMP_EXIT_SYSTEM_POWERDOWN_EVENT,
    &_TRACE_QMP_ENTER_SYSTEM_WAKEUP_EVENT,
    &_TRACE_QMP_EXIT_SYSTEM_WAKEUP_EVENT,
    &_TRACE_QMP_ENTER_INJECT_NMI_EVENT,
    &_TRACE_QMP_EXIT_INJECT_NMI_EVENT,
    &_TRACE_QMP_ENTER_QUERY_KVM_EVENT,
    &_TRACE_QMP_EXIT_QUERY_KVM_EVENT,
    &_TRACE_QMP_ENTER_MEMSAVE_EVENT,
    &_TRACE_QMP_EXIT_MEMSAVE_EVENT,
    &_TRACE_QMP_ENTER_PMEMSAVE_EVENT,
    &_TRACE_QMP_EXIT_PMEMSAVE_EVENT,
    &_TRACE_QMP_ENTER_QUERY_MEMDEV_EVENT,
    &_TRACE_QMP_EXIT_QUERY_MEMDEV_EVENT,
    &_TRACE_QMP_ENTER_QUERY_HOTPLUGGABLE_CPUS_EVENT,
    &_TRACE_QMP_EXIT_QUERY_HOTPLUGGABLE_CPUS_EVENT,
    &_TRACE_QMP_ENTER_SET_NUMA_NODE_EVENT,
    &_TRACE_QMP_EXIT_SET_NUMA_NODE_EVENT,
    &_TRACE_QMP_ENTER_BALLOON_EVENT,
    &_TRACE_QMP_EXIT_BALLOON_EVENT,
    &_TRACE_QMP_ENTER_QUERY_BALLOON_EVENT,
    &_TRACE_QMP_EXIT_QUERY_BALLOON_EVENT,
    &_TRACE_QMP_ENTER_QUERY_MEMORY_SIZE_SUMMARY_EVENT,
    &_TRACE_QMP_EXIT_QUERY_MEMORY_SIZE_SUMMARY_EVENT,
    &_TRACE_QMP_ENTER_QUERY_MEMORY_DEVICES_EVENT,
    &_TRACE_QMP_EXIT_QUERY_MEMORY_DEVICES_EVENT,
    &_TRACE_QMP_ENTER_X_QUERY_IRQ_EVENT,
    &_TRACE_QMP_EXIT_X_QUERY_IRQ_EVENT,
    &_TRACE_QMP_ENTER_X_QUERY_JIT_EVENT,
    &_TRACE_QMP_EXIT_X_QUERY_JIT_EVENT,
    &_TRACE_QMP_ENTER_X_QUERY_NUMA_EVENT,
    &_TRACE_QMP_EXIT_X_QUERY_NUMA_EVENT,
    &_TRACE_QMP_ENTER_X_QUERY_OPCOUNT_EVENT,
    &_TRACE_QMP_EXIT_X_QUERY_OPCOUNT_EVENT,
    &_TRACE_QMP_ENTER_X_QUERY_PROFILE_EVENT,
    &_TRACE_QMP_EXIT_X_QUERY_PROFILE_EVENT,
    &_TRACE_QMP_ENTER_X_QUERY_RAMBLOCK_EVENT,
    &_TRACE_QMP_EXIT_X_QUERY_RAMBLOCK_EVENT,
    &_TRACE_QMP_ENTER_X_QUERY_RDMA_EVENT,
    &_TRACE_QMP_EXIT_X_QUERY_RDMA_EVENT,
    &_TRACE_QMP_ENTER_X_QUERY_ROMS_EVENT,
    &_TRACE_QMP_EXIT_X_QUERY_ROMS_EVENT,
    &_TRACE_QMP_ENTER_X_QUERY_USB_EVENT,
    &_TRACE_QMP_EXIT_X_QUERY_USB_EVENT,
    &_TRACE_QMP_ENTER_DUMPDTB_EVENT,
    &_TRACE_QMP_EXIT_DUMPDTB_EVENT,
  NULL,
};

static void trace_qapi_commands_machine_trace_events_register_events(void)
{
    trace_event_register_group(qapi_commands_machine_trace_events_trace_events);
}
trace_init(trace_qapi_commands_machine_trace_events_register_events)