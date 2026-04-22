struct modify_state {
    struct ofp_header header;
    struct ofp_match match;
    uint64_t cookie;
    uint16_t command;
    uint16_t idle_timeout; uint16_t hard_timeout; uint16_t priority;
    uint32_t buffer_id; uint16_t out_port; uint16_t flags;
};

struct hello{
    struct ofp_header header;
};

struct flow_removed{
    struct ofp_header header;
    struct ofp_match match;
    uint64_t cookie;
    uint16_t priority;
    uint8_t reason;
    uint8_t pad[1];
    uint32_t duration_sec;
    uint32_t duration_nsec;
    uint16_t idle_timeout;
    uint8_t pad2[2];
    uint64_t packet_count;
    uint64_t byte_count;
};


