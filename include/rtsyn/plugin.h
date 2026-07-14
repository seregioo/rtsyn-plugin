/**
 * @file rtsyn/plugin.h
 * @author Sergio Hidalgo (sergiohg.dev@gmail.com)
 * @brief Header file for the RTSyn Runtime.
 *
 * The RTSyn Runtime Plugin executes logic.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 * @copyright Copyright (c) Sergio Hidalgo 2026
 */
#ifndef RTSYN_PLUGIN_H
#define RTSYN_PLUGIN_H
#include "plugin/schema.h"

/**
 * @brief Opaque plugin context.
 *
 * The plugin owns the execution context used to run RTSyn states. All the
 * inputed states must be different to Invalid. Otherwhise, the plugin will
 * return exit event. destroy itself. Create it with `rtsyn_plugin_create` and
 * release it with `rtsyn_plugin_destroy`.
 */
typedef struct rtsyn_plugin_s rtsyn_plugin_t;

/**
 * @brief Create an RTSyn plugin.
 *
 * @param plugin_schema Schema for the plugin.
 * @return Pointer to the created plugin, or NULL if creation fails.
 */
rtsyn_plugin_t *
rtsyn_plugin_create(rtsyn_plugin_schema_t *plugin_schema);

/**
 * @brief Destroy an RTSyn plugin.
 *
 * For this, plugin will transit to Exit state and call the necessary cleanup
 * functions.
 *
 * @param rtsyn_plugin Plugin to be destroyed.
 */
void
rtsyn_plugin_destroy(rtsyn_plugin_t *rtsyn_plugin);


#endif /* RTSYN_PLUGIN_H */
