
#pragma once

#include <stdbool.h>
#include <stdint.h>

/**
 * An H.265 NAL header.
 */
typedef struct {
    /**
     * `forbidden_zero_bit` f(1).
     */
    bool forbidden_zero_bit;

    /**
     * `unit_type` u(6).
     */
    uint8_t unit_type;

    /**
     * `nuh_layer_id` u(6).
     */
    uint8_t nuh_layer_id;

    /**
     * `nuh_temporal_id_plus1` u(3).
     */
    uint8_t nuh_temporal_id_plus1;
} SmolRTSP_H265NalHeader;

/**
 * An H.265 NAL unit.
 */
typedef struct {
    /**
     * The NAL header of this NAL unit.
     */
    SmolRTSP_H265NalHeader header;

    /**
     * The payload data of this NAL unit (not including the header).
     */
    uint8_t* payload;
} SmolRTSP_H265NalUnit;

/**
 * Coded slice segment of a non-TSA, non-STSA trailing picture.
 */
#define SMOLRTSP_H265_NAL_UNIT_TRAIL_N 0

/**
 * Coded slice segment of a non-TSA, non-STSA trailing picture.
 */
#define SMOLRTSP_H265_NAL_UNIT_TRAIL_R 1

/**
 * Coded slice segment of a TSA picture.
 */
#define SMOLRTSP_H265_NAL_UNIT_TSA_N 2

/**
 * Coded slice segment of a TSA picture.
 */
#define SMOLRTSP_H265_NAL_UNIT_TSA_R 3

/**
 * Coded slice segment of an STSA picture.
 */
#define SMOLRTSP_H265_NAL_UNIT_STSA_N 4

/**
 * Coded slice segment of an STSA picture.
 */
#define SMOLRTSP_H265_NAL_UNIT_STSA_R 5

/**
 * Coded slice segment of a RADL picture.
 */
#define SMOLRTSP_H265_NAL_UNIT_RADL_N 6

/**
 * Coded slice segment of a RADL picture.
 */
#define SMOLRTSP_H265_NAL_UNIT_RADL_R 7

/**
 * Coded slice segment of a RASL picture.
 */
#define SMOLRTSP_H265_NAL_UNIT_RASL_N 8

/**
 * Coded slice segment of a RASL picture.
 */
#define SMOLRTSP_H265_NAL_UNIT_RASL_R 9

/**
 * Coded slice segment of a BLA picture.
 */
#define SMOLRTSP_H265_NAL_UNIT_BLA_W_LP 16

/**
 * Coded slice segment of a BLA picture.
 */
#define SMOLRTSP_H265_NAL_UNIT_BLA_W_RADL 17

/**
 * Coded slice segment of a BLA picture.
 */
#define SMOLRTSP_H265_NAL_UNIT_BLA_N_LP 18

/**
 * Coded slice segment of an IDR picture.
 */
#define SMOLRTSP_H265_NAL_UNIT_IDR_W_RADL 19

/**
 * Coded slice segment of an IDR picture.
 */
#define SMOLRTSP_H265_NAL_UNIT_IDR_N_LP 20

/**
 * Coded slice segment of a CRA picture.
 */
#define SMOLRTSP_H265_NAL_UNIT_CRA_NUT 21

/**
 * Video parameter set.
 */
#define SMOLRTSP_H265_NAL_UNIT_VPS_NUT 32

/**
 * Sequence parameter set.
 */
#define SMOLRTSP_H265_NAL_UNIT_SPS_NUT 33

/**
 * Picture parameter set.
 */
#define SMOLRTSP_H265_NAL_UNIT_PPS_NUT 34

/**
 * Access unit delimiter.
 */
#define SMOLRTSP_H265_NAL_UNIT_AUD_NUT 35

/**
 * End of sequence.
 */
#define SMOLRTSP_H265_NAL_UNIT_EOS_NUT 36

/**
 * End of bitstream.
 */
#define SMOLRTSP_H265_NAL_UNIT_EOB_NUT 37

/**
 * Filler data.
 */
#define SMOLRTSP_H265_NAL_UNIT_FD_NUT 38

/**
 * Supplemental enhancement information.
 */
#define SMOLRTSP_H265_NAL_UNIT_PREFIX_SEI_NUT 39

/**
 * Supplemental enhancement information.
 */
#define SMOLRTSP_H265_NAL_UNIT_SUFFIX_SEI_NUT 40
