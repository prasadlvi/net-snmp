/*
 *  registry:  displays a list of all loaded mib modules.
 *
 */
#ifndef _MIBGROUP_REGISTRY_H
#define _MIBGROUP_REGISTRY_H

extern u_char	*var_registry();

#define	REGISTRYINDEX		1
#define	REGISTRYOID		2

#ifdef IN_SNMP_VARS_C

struct variable2 registry_variables[] = {
    { REGISTRYINDEX,  INTEGER, RONLY, var_registry, 1, {1}},
    { REGISTRYOID,   OBJID, RONLY, var_registry, 1, {2}}
};
config_load_mib(1.3.6.1.4.1.2021.102.1, 9, registry_variables)

#endif
#endif /* _MIBGROUP_REGISTRY_H */
