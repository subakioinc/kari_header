
typedef struct
{
    uint8_t fs0; //0xAA
    uint8_t fs1; //0x44
    uint8_t len; 
    uint8_t checksum;
} Header;

typedef struct
{
    uint64_t timestamp;    // nsec, ros
    float64 t_sec;           // board time

    float32 delt_sec;

    float32 delx_rps;
    float32 dely_rps;
    float32 qual;

    float32 gx_rps;
    float32 gy_rps;
    float32 gz_rps;

    float32 ax_mps2;
    float32 ay_mps2;
    float32 az_mps2;

    float32 h_mtr;

    float32 mx_gauss;
    float32 my_gauss;
    float32 mz_gauss;

    float32 rsv0;
    float32 rsv1;
    float32 rsv2;
    float32 rsv3;

} SOpticBoardOut;

typedef struct
{
    Header _header;
    SOpticBoardOut _opticboardout;
} SopticBoardOutPacket;

typedef struct
{
    uint64_t timestamp;    // nsec, ros
    float64 t_sec;

    float64 lat_deg;
    float64 lon_deg;
    float32 h_mtr;

    float32 nvel_mps;
    float32 evel_mps;
    float32 dvel_mps;

    float32 roll_deg;
    float32 pitch_deg;
    float32 yaw_deg;

    float32 gx_dps;
    float32 gy_dps;
    float32 gz_dps;

    float32 ax_mps2;
    float32 ay_mps2;
    float32 az_mps2;

    float32 gbx_dps;
    float32 gby_dps;
    float32 gbz_dps;

    float32 abx_mps2;
    float32 aby_mps2;
    float32 abz_mps2;

} SKariEstiX;

typedef struct
{
    uint64_t timestamp;
    float64 t_sec;

    float32 lat_deg;
    float32 lon_deg;
    float32 h_mtr;

    float32 xvel_mps;
    float32 yvel_mps;
    float32 zvel_mps;

    float32 roll_deg;
    float32 pitch_deg;
    float32 yaw_deg;

    float32 gbx_dps;
    float32 gby_dps;
    float32 gbz_dps;

    float32 abx_mps2;
    float32 aby_mps2;
    float32 abz_mps2;

} SKariEstiStd;

typedef struct
{
    uint64_t timestamp;
    float64 t_sec;

    float32 rsv1;
    float32 rsv2;
    float32 rsv3;
    float32 rsv4;
    float32 rsv5;
    float32 rsv6;

} SKariOpticExt;



