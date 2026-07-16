/**
 * @file rtsyn/plugin/schema.h
 * @author Sergio Hidalgo (sergiohg.dev@gmail.com)
 * @brief Header file for the RTSyn Runtime Schema.
 *
 * The RTSyn Plugin Schema defines how the plugin is formed.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 * @copyright Copyright (c) Sergio Hidalgo 2026
 */
#ifndef RTSYN_PLUGIN_SCHEMA_H
#define RTSYN_PLUGIN_SCHEMA_H
#include <rtsyn/port.h>
#include <stdbool.h>
#include <stdint.h>

typedef struct rtsyn_plugin_schema_s rtsyn_plugin_schema_t;

rtsyn_plugin_schema_t *
rtsyn_plugin_schema_create(char *plugin_name);

bool
rtsyn_plugin_schema_add_port(rtsyn_plugin_schema_t *plugin_schema, rtsyn_port_t *port);

bool
rtsyn_plugin_schema_add_ports(rtsyn_plugin_schema_t *plugin_schema, rtsyn_port_t *port[],
                              uint32_t port_count);

void
rtsyn_plugin_schema_destroy(rtsyn_plugin_schema_t *plugin_schema);

#endif /* RTSYN_PLUGIN_SCHEMA_H */
