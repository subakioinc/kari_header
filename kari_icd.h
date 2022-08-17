
typedef struct
{
    uint64_t timestamp;    // nsec, ros
    uint64_t t_sec;           // board time

    float32_k delt_sec;

    float32_k delx_rps;
    float32_k dely_rps;
    float32_k qual;

    float32_k gx_rps;
    float32_k gy_rps;
    float32_k gz_rps;

    float32_k ax_mps2;
    float32_k ay_mps2;
    float32_k az_mps2;

    float32_k h_mtr;

    float32_k mx_gauss;
    float32_k my_gauss;
    float32_k mz_gauss;

    float32_k rsv0;
    float32_k rsv1;
    float32_k rsv2;
    float32_k rsv3;

} SOpticBoardOut;


typedef struct
{
    uint64_t timestamp;    // nsec, ros
    uint64_t t_sec;

    float64_k lat_deg;
    float64_k lon_deg;
    float32_k h_mtr;

    float32_k nvel_mps;
    float32_k evel_mps;
    float32_k dvel_mps;

    float32_k roll_deg;
    float32_k pitch_deg;
    float32_k yaw_deg;

    float32_k gx_dps;
    float32_k gy_dps;
    float32_k gz_dps;

    float32_k ax_mps2;
    float32_k ay_mps2;
    float32_k az_mps2;

    float32_k gbx_dps;
    float32_k gby_dps;
    float32_k gbz_dps;

    float32_k abx_mps2;
    float32_k aby_mps2;
    float32_k abz_mps2;

} SKariEstiX;

typedef struct
{
    uint64_t timestamp;
    uint64_t t_sec;

    float32_k lat_deg;
    float32_k lon_deg;
    float32_k h_mtr;

    float32_k xvel_mps;
    float32_k yvel_mps;
    float32_k zvel_mps;

    float32_k roll_deg;
    float32_k pitch_deg;
    float32_k yaw_deg;

    float32_k gbx_dps;
    float32_k gby_dps;
    float32_k gbz_dps;

    float32_k abx_mps2;
    float32_k aby_mps2;
    float32_k abz_mps2;

} SKariEstiStd;

typedef struct
{
    uint64_t timestamp;
    uint64_t t_sec;

    float32_k rsv1;
    float32_k rsv2;
    float32_k rsv3;
    float32_k rsv4;
    float32_k rsv5;
    float32_k rsv6;

} SKariOpticExt;



