/*
 * Copyright (c) 2015, EURECOM (www.eurecom.fr)
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * The views and conclusions contained in the software and documentation are those
 * of the authors and should not be interpreted as representing official policies,
 * either expressed or implied, of the FreeBSD Project.
 */

#ifndef FILE_3GPP_24_008_SEEN
#define FILE_3GPP_24_008_SEEN

//------------------------------------------------------------------------------
// 10.5.6.3 Protocol configuration options
//------------------------------------------------------------------------------
#define PCO_MIN_LENGTH                                               3
#define PCO_MAX_LENGTH                                               253
#define PCO_CONFIGURATION_PROTOCOL_PPP_FOR_USE_WITH_IP_PDP_TYPE_OR_IP_PDN_TYPE 000b

// Protocol identifiers defined in RFC 3232
#define PCO_PI_LCP                                                      (0xC021)
#define PCO_PI_PAP                                                      (0xC023)
#define PCO_PI_CHAP                                                     (0xC223)
#define PCO_PI_IPCP                                                     (0x8021)

/* CONTAINER IDENTIFIER MS to network direction:*/
#define PCO_CI_P_CSCF_IPV6_ADDRESS_REQUEST                              (0x0001)
#define PCO_CI_DNS_SERVER_IPV6_ADDRESS_REQUEST                          (0x0003)
// NOT SUPPORTED                                                        (0x0004)
#define PCO_CI_MS_SUPPORT_OF_NETWORK_REQUESTED_BEARER_CONTROL_INDICATOR (0x0005)
// RESERVED                                                             (0x0006)
#define PCO_CI_DSMIPV6_HOME_AGENT_ADDRESS_REQUEST                       (0x0007)
#define PCO_CI_DSMIPV6_HOME_NETWORK_PREFIX_REQUEST                      (0x0008)
#define PCO_CI_DSMIPV6_IPV4_HOME_AGENT_ADDRESS_REQUEST                  (0x0009)
#define PCO_CI_IP_ADDRESS_ALLOCATION_VIA_NAS_SIGNALLING                 (0x000A)
#define PCO_CI_IPV4_ADDRESS_ALLOCATION_VIA_DHCPV4                       (0x000B)
#define PCO_CI_P_CSCF_IPV4_ADDRESS_REQUEST                              (0x000C)
#define PCO_CI_DNS_SERVER_IPV4_ADDRESS_REQUEST                          (0x000D)
#define PCO_CI_MSISDN_REQUEST                                           (0x000E)
#define PCO_CI_IFOM_SUPPORT_REQUEST                                     (0x000F)
#define PCO_CI_IPV4_LINK_MTU_REQUEST                                    (0x0010)
// RESERVED                                                             (0xFF00..FFFF)

/* CONTAINER IDENTIFIER Network to MS direction:*/
#define PCO_CI_P_CSCF_IPV6_ADDRESS                                      (0x0001)
#define PCO_CI_DNS_SERVER_IPV6_ADDRESS                                  (0x0003)
#define PCO_CI_POLICY_CONTROL_REJECTION_CODE                            (0x0004)
#define PCO_CI_SELECTED_BEARER_CONTROL_MODE                             (0x0005)
// RESERVED                                                             (0x0006)
#define PCO_CI_DSMIPV6_HOME_AGENT_ADDRESS                               (0x0007)
#define PCO_CI_DSMIPV6_HOME_NETWORK_PREFIX                              (0x0008)
#define PCO_CI_DSMIPV6_IPV4_HOME_AGENT_ADDRESS                          (0x0009)
// RESERVED                                                             (0x000A)
// RESERVED                                                             (0x000B)
#define PCO_CI_P_CSCF_IPV4_ADDRESS                                      (0x000C)
#define PCO_CI_DNS_SERVER_IPV4_ADDRESS                                  (0x000D)
#define PCO_CI_MSISDN                                                   (0x000E)
#define PCO_CI_IFOM_SUPPORT                                             (0x000F)
#define PCO_CI_IPV4_LINK_MTU                                            (0x0010)
// RESERVED                                                             (0xFF00..FFFF)

/* Both directions:*/
#define PCO_CI_IM_CN_SUBSYSTEM_SIGNALING_FLAG                           (0x0002)

#endif /* FILE_3GPP_24_008_SEEN */
