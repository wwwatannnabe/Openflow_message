struct packet_in{
    struct ofp_header header;
    uint32_t buffer_id;
    uint16_t total_len;
    uint16_t in_port;
    uint8_t reason;
    uint8_t pad;
    uint8_t data[0];
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

struct port_status{
	struct ofp_header header;
	uint8_t reason;
	uint8_t pad[7];
	struct ofp_phy_port desc;
};

struct error{
    struct ofp_header header;
    uint16_t type;
    uint16_t code;
    uint8_t data[0];
};

struct feature{
   struct ofp_header header;
    uint64_t datapath_id;
    uint32_t n_buffers;
    uint8_t n_tables;
    uint8_t pad[3];
    uint32_t capablilities;
    uint32_t actions;
    struct ofp_phy_port ports[0];
};

struct config{
    struct ofp_header header;
    uint16_t flags;
    uint16_t miss_send_len;
};

struct modify_state {
    struct ofp_header header;
    struct ofp_match match;
    uint64_t cookie;
    uint16_t command;
    uint16_t idle_timeout; uint16_t hard_timeout; uint16_t priority;
    uint32_t buffer_id; uint16_t out_port; uint16_t flags;
};

struct read_state{
    struct ofp_header header;
    uint16_t type;
    uint16_t flags;
    uint8_t body[0];
};

struct hello{
    struct ofp_header header;
};
