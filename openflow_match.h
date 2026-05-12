struct ofp_match {
    uint32_t wildcards; uint16_t in_port; uint8_t dl_src[6]; uint8_t dl_dst[6];
    uint16_t dl_vlan; uint8_t dl_vlan_pcp; uint8_t pad1[1]; uint16_t dl_type;
    uint8_t nw_tos; uint8_t nw_proto; uint8_t pad2[2];
    uint32_t nw_src; uint32_t nw_dst; uint16_t tp_src; uint16_t tp_dst;
};
