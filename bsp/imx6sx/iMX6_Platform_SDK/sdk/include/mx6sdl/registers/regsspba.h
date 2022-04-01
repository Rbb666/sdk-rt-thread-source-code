/*
 * Copyright (c) 2012, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * THIS SOFTWARE IS PROVIDED BY FREESCALE "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT
 * SHALL FREESCALE BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
 * OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY
 * OF SUCH DAMAGE.
 */
/*
 * WARNING! DO NOT EDIT THIS FILE DIRECTLY!
 *
 * This file was generated automatically and any changes may be lost.
 */
#ifndef __HW_SPBA_REGISTERS_H__
#define __HW_SPBA_REGISTERS_H__

#include "regs.h"

/*
 * i.MX6SDL SPBA
 *
 * Temperature Monitor
 *
 * Registers defined in this header file:
 * - HW_SPBA_PRRn - Peripheral Rights Register
 *
 * - hw_spba_t - Struct containing all module registers.
 */

//! @name Module base addresses
//@{
#ifndef REGS_SPBA_BASE
#define HW_SPBA_INSTANCE_COUNT (1) //!< Number of instances of the SPBA module.
#define REGS_SPBA_BASE (0x0203c000) //!< Base address for SPBA.
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_SPBA_PRRn - Peripheral Rights Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SPBA_PRRn - Peripheral Rights Register (RW)
 *
 * Reset value: 0x00000007
 *
 * This register controls master ownership and access for a peripheral.
 */
typedef union _hw_spba_prrn
{
    reg32_t U;
    struct _hw_spba_prrn_bitfields
    {
        unsigned RARA : 1; //!< [0] Resource Access Right.
        unsigned RARB : 1; //!< [1] Resource Access Right.
        unsigned RARC : 1; //!< [2] Resource Access Right.
        unsigned RESERVED0 : 13; //!< [15:3] Reserved
        unsigned ROI : 2; //!< [17:16] Resource Owner ID.
        unsigned RESERVED1 : 12; //!< [29:18] Reserved
        unsigned RMO : 2; //!< [31:30] Requesting Master Owner.
    } B;
} hw_spba_prrn_t;
#endif

/*!
 * @name Constants and macros for entire SPBA_PRRn register
 */
//@{
//! @brief Number of instances of the SPBA_PRRn register.
#define HW_SPBA_PRRn_COUNT     (32)

#define HW_SPBA_PRRn_ADDR(n)   (REGS_SPBA_BASE + 0x0 + (0x4 * (n)))

#ifndef __LANGUAGE_ASM__
#define HW_SPBA_PRRn(n)        (*(volatile hw_spba_prrn_t *) HW_SPBA_PRRn_ADDR(n))
#define HW_SPBA_PRRn_RD(n)     (HW_SPBA_PRRn(n).U)
#define HW_SPBA_PRRn_WR(n, v)  (HW_SPBA_PRRn(n).U = (v))
#define HW_SPBA_PRRn_SET(n, v) (HW_SPBA_PRRn_WR(n, HW_SPBA_PRRn_RD(n) |  (v)))
#define HW_SPBA_PRRn_CLR(n, v) (HW_SPBA_PRRn_WR(n, HW_SPBA_PRRn_RD(n) & ~(v)))
#define HW_SPBA_PRRn_TOG(n, v) (HW_SPBA_PRRn_WR(n, HW_SPBA_PRRn_RD(n) ^  (v)))
#endif
//@}

/*
 * constants & macros for individual SPBA_PRRn bitfields
 */

/*! @name Register SPBA_PRRn, field RARA[0] (RW)
 *
 * Resource Access Right. Control and Status bit for master A. This field indicates whether master A
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * - PROHIBITED = 0 - Access to peripheral is not allowed.
 * - ALLOWED = 1 - Access to peripheral is granted.
 */
//@{
#define BP_SPBA_PRRn_RARA      (0)      //!< Bit position for SPBA_PRRn_RARA.
#define BM_SPBA_PRRn_RARA      (0x00000001)  //!< Bit mask for SPBA_PRRn_RARA.

//! @brief Get value of SPBA_PRRn_RARA from a register value.
#define BG_SPBA_PRRn_RARA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRRn_RARA) >> BP_SPBA_PRRn_RARA)

//! @brief Format value for bitfield SPBA_PRRn_RARA.
#define BF_SPBA_PRRn_RARA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRRn_RARA) & BM_SPBA_PRRn_RARA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARA field to a new value.
#define BW_SPBA_PRRn_RARA(n, v)   (HW_SPBA_PRRn_WR(n, (HW_SPBA_PRRn_RD(n) & ~BM_SPBA_PRRn_RARA) | BF_SPBA_PRRn_RARA(v)))
#endif

//! @brief Macro to simplify usage of value macros.
#define BF_SPBA_PRRn_RARA_V(v) BF_SPBA_PRRn_RARA(BV_SPBA_PRRn_RARA__##v)

#define BV_SPBA_PRRn_RARA__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRRn_RARA__ALLOWED (0x1) //!< Access to peripheral is granted.
//@}

/*! @name Register SPBA_PRRn, field RARB[1] (RW)
 *
 * Resource Access Right. Control and Status bit for master B. This field indicates whether master B
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * - PROHIBITED = 0 - Access to peripheral is not allowed.
 * - ALLOWED = 1 - Access to peripheral is granted.
 */
//@{
#define BP_SPBA_PRRn_RARB      (1)      //!< Bit position for SPBA_PRRn_RARB.
#define BM_SPBA_PRRn_RARB      (0x00000002)  //!< Bit mask for SPBA_PRRn_RARB.

//! @brief Get value of SPBA_PRRn_RARB from a register value.
#define BG_SPBA_PRRn_RARB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRRn_RARB) >> BP_SPBA_PRRn_RARB)

//! @brief Format value for bitfield SPBA_PRRn_RARB.
#define BF_SPBA_PRRn_RARB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRRn_RARB) & BM_SPBA_PRRn_RARB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARB field to a new value.
#define BW_SPBA_PRRn_RARB(n, v)   (HW_SPBA_PRRn_WR(n, (HW_SPBA_PRRn_RD(n) & ~BM_SPBA_PRRn_RARB) | BF_SPBA_PRRn_RARB(v)))
#endif

//! @brief Macro to simplify usage of value macros.
#define BF_SPBA_PRRn_RARB_V(v) BF_SPBA_PRRn_RARB(BV_SPBA_PRRn_RARB__##v)

#define BV_SPBA_PRRn_RARB__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRRn_RARB__ALLOWED (0x1) //!< Access to peripheral is granted.
//@}

/*! @name Register SPBA_PRRn, field RARC[2] (RW)
 *
 * Resource Access Right. Control and Status bit for master C. This field indicates whether master C
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * - PROHIBITED = 0 - Access to peripheral is not allowed.
 * - ALLOWED = 1 - Access to peripheral is granted.
 */
//@{
#define BP_SPBA_PRRn_RARC      (2)      //!< Bit position for SPBA_PRRn_RARC.
#define BM_SPBA_PRRn_RARC      (0x00000004)  //!< Bit mask for SPBA_PRRn_RARC.

//! @brief Get value of SPBA_PRRn_RARC from a register value.
#define BG_SPBA_PRRn_RARC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRRn_RARC) >> BP_SPBA_PRRn_RARC)

//! @brief Format value for bitfield SPBA_PRRn_RARC.
#define BF_SPBA_PRRn_RARC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRRn_RARC) & BM_SPBA_PRRn_RARC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARC field to a new value.
#define BW_SPBA_PRRn_RARC(n, v)   (HW_SPBA_PRRn_WR(n, (HW_SPBA_PRRn_RD(n) & ~BM_SPBA_PRRn_RARC) | BF_SPBA_PRRn_RARC(v)))
#endif

//! @brief Macro to simplify usage of value macros.
#define BF_SPBA_PRRn_RARC_V(v) BF_SPBA_PRRn_RARC(BV_SPBA_PRRn_RARC__##v)

#define BV_SPBA_PRRn_RARC__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRRn_RARC__ALLOWED (0x1) //!< Access to peripheral is granted.
//@}

/*! @name Register SPBA_PRRn, field ROI[17:16] (RO)
 *
 * Resource Owner ID. This field indicates which master (one at a time) can access to the PRR for
 * rights modification. This is a read-only register. After reset, ROI bits are cleared ("00" -> un-
 * owned resource). A master performing a write access to the an un-owned PRR will get its ID
 * automatically written into ROI, while modifying RARx bits. It can then read back the RMO, RAR,
 * ROI bits to make sure RMO returns the right value, ROI bits contain its ID and RARx bits are
 * correctly asserted. Then no other master (whom ID is different from the one stored in ROI) will
 * be able to modify RAR fields. Owner master of a peripheral can assert its dead_owner signal, or
 * write 1'b0 in the RARx to release the ownership (ROI[1:0] reset to 2'b0).
 *
 * Values:
 * - UNOWNED = 00 - Unowned resource.
 * - MASTER_A = 01 - The resource is owned by master A port.
 * - MASTER_B = 10 - The resource is owned by master B port.
 * - MASTER_C = 11 - The resource is owned by master C port.
 */
//@{
#define BP_SPBA_PRRn_ROI      (16)      //!< Bit position for SPBA_PRRn_ROI.
#define BM_SPBA_PRRn_ROI      (0x00030000)  //!< Bit mask for SPBA_PRRn_ROI.

//! @brief Get value of SPBA_PRRn_ROI from a register value.
#define BG_SPBA_PRRn_ROI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRRn_ROI) >> BP_SPBA_PRRn_ROI)

//! @brief Macro to simplify usage of value macros.
#define BF_SPBA_PRRn_ROI_V(v) BF_SPBA_PRRn_ROI(BV_SPBA_PRRn_ROI__##v)

#define BV_SPBA_PRRn_ROI__UNOWNED (0x0) //!< Unowned resource.
#define BV_SPBA_PRRn_ROI__MASTER_A (0x1) //!< The resource is owned by master A port.
#define BV_SPBA_PRRn_ROI__MASTER_B (0x2) //!< The resource is owned by master B port.
#define BV_SPBA_PRRn_ROI__MASTER_C (0x3) //!< The resource is owned by master C port.
//@}

/*! @name Register SPBA_PRRn, field RMO[31:30] (RO)
 *
 * Requesting Master Owner. This 2-bit register field indicates if the corresponding resource is
 * owned by the requesting master or not. This register is reset to 2'b0 if ROI = 2'b0.
 *
 * Values:
 * - UNOWNED = 00 - The resource is unowned.
 * - 01 - Reserved.
 * - ANOTHER_MASTER = 10 - The resource is owned by another master.
 * - REQUESTING_MASTER = 11 - The resource is owned by the requesting master.
 */
//@{
#define BP_SPBA_PRRn_RMO      (30)      //!< Bit position for SPBA_PRRn_RMO.
#define BM_SPBA_PRRn_RMO      (0xc0000000)  //!< Bit mask for SPBA_PRRn_RMO.

//! @brief Get value of SPBA_PRRn_RMO from a register value.
#define BG_SPBA_PRRn_RMO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRRn_RMO) >> BP_SPBA_PRRn_RMO)

//! @brief Macro to simplify usage of value macros.
#define BF_SPBA_PRRn_RMO_V(v) BF_SPBA_PRRn_RMO(BV_SPBA_PRRn_RMO__##v)

#define BV_SPBA_PRRn_RMO__UNOWNED (0x0) //!< The resource is unowned.
#define BV_SPBA_PRRn_RMO__ANOTHER_MASTER (0x2) //!< The resource is owned by another master.
#define BV_SPBA_PRRn_RMO__REQUESTING_MASTER (0x3) //!< The resource is owned by the requesting master.
//@}

//-------------------------------------------------------------------------------------------
// hw_spba_t - module struct
//-------------------------------------------------------------------------------------------
/*!
 * @brief All SPBA module registers.
 */
#ifndef __LANGUAGE_ASM__
#pragma pack(1)
typedef struct _hw_spba
{
    volatile hw_spba_prrn_t PRRn[32]; //!< Peripheral Rights Register
} hw_spba_t;
#pragma pack()

//! @brief Macro to access all SPBA registers.
//! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
//!     use the '&' operator, like <code>&HW_SPBA</code>.
#define HW_SPBA     (*(hw_spba_t *) REGS_SPBA_BASE)
#endif

#endif // __HW_SPBA_REGISTERS_H__
// v18/121106/1.2.2
// EOF
