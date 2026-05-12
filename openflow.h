#pragma pack(1)
struct ofp_header {
    uint8_t  version;
    uint8_t  type;
    uint16_t length;
    uint32_t xid;
};
