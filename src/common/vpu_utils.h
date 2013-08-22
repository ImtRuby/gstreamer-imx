/* Miscellanous utility functions for VPU operations
 * Copyright (C) 2013  Carlos Rafael Giani
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */


#ifndef VPU_UTILS_H
#define VPU_UTILS_H

#include <glib.h>
#include <vpu_wrapper.h>


G_BEGIN_DECLS


gchar const *gst_fsl_vpu_strerror(VpuDecRetCode code);

void gst_fsl_vpu_init_alloc_debug(void);

gboolean gst_fsl_vpu_alloc_virt_mem_block(unsigned char **mem_block, int size);
void gst_fsl_vpu_append_virt_mem_block(unsigned char *mem_block, GSList **virt_mem_blocks);
gboolean gst_fsl_vpu_free_virt_mem_blocks(GSList **virt_mem_blocks);

gboolean gst_fsl_vpu_alloc_phys_mem_block(VpuMemDesc **mem_block, int size);
void gst_fsl_vpu_append_phys_mem_block(VpuMemDesc *mem_block, GSList **phys_mem_blocks);
gboolean gst_fsl_vpu_free_phys_mem_blocks(GSList **phys_mem_blocks);


G_END_DECLS


#endif
