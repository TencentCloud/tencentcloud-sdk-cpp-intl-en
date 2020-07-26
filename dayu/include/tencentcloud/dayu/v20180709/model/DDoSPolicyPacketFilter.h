/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DDOSPOLICYPACKETFILTER_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DDOSPOLICYPACKETFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Packet filter in advanced DDoS policy
                */
                class DDoSPolicyPacketFilter : public AbstractModel
                {
                public:
                    DDoSPolicyPacketFilter();
                    ~DDoSPolicyPacketFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Protocol. Valid values: [tcp, udp, icmp, all]
                     * @return Protocol Protocol. Valid values: [tcp, udp, icmp, all]
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol. Valid values: [tcp, udp, icmp, all]
                     * @param Protocol Protocol. Valid values: [tcp, udp, icmp, all]
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Start source port. Value range: [0,65535]
                     * @return SportStart Start source port. Value range: [0,65535]
                     */
                    uint64_t GetSportStart() const;

                    /**
                     * 设置Start source port. Value range: [0,65535]
                     * @param SportStart Start source port. Value range: [0,65535]
                     */
                    void SetSportStart(const uint64_t& _sportStart);

                    /**
                     * 判断参数 SportStart 是否已赋值
                     * @return SportStart 是否已赋值
                     */
                    bool SportStartHasBeenSet() const;

                    /**
                     * 获取End source port. Value range: [0,65535]
                     * @return SportEnd End source port. Value range: [0,65535]
                     */
                    uint64_t GetSportEnd() const;

                    /**
                     * 设置End source port. Value range: [0,65535]
                     * @param SportEnd End source port. Value range: [0,65535]
                     */
                    void SetSportEnd(const uint64_t& _sportEnd);

                    /**
                     * 判断参数 SportEnd 是否已赋值
                     * @return SportEnd 是否已赋值
                     */
                    bool SportEndHasBeenSet() const;

                    /**
                     * 获取Start destination port. Value range: [0,65535]
                     * @return DportStart Start destination port. Value range: [0,65535]
                     */
                    uint64_t GetDportStart() const;

                    /**
                     * 设置Start destination port. Value range: [0,65535]
                     * @param DportStart Start destination port. Value range: [0,65535]
                     */
                    void SetDportStart(const uint64_t& _dportStart);

                    /**
                     * 判断参数 DportStart 是否已赋值
                     * @return DportStart 是否已赋值
                     */
                    bool DportStartHasBeenSet() const;

                    /**
                     * 获取End destination port. Value range: [0,65535]
                     * @return DportEnd End destination port. Value range: [0,65535]
                     */
                    uint64_t GetDportEnd() const;

                    /**
                     * 设置End destination port. Value range: [0,65535]
                     * @param DportEnd End destination port. Value range: [0,65535]
                     */
                    void SetDportEnd(const uint64_t& _dportEnd);

                    /**
                     * 判断参数 DportEnd 是否已赋值
                     * @return DportEnd 是否已赋值
                     */
                    bool DportEndHasBeenSet() const;

                    /**
                     * 获取Minimum packet length. Value range: [0,1500]
                     * @return PktlenMin Minimum packet length. Value range: [0,1500]
                     */
                    uint64_t GetPktlenMin() const;

                    /**
                     * 设置Minimum packet length. Value range: [0,1500]
                     * @param PktlenMin Minimum packet length. Value range: [0,1500]
                     */
                    void SetPktlenMin(const uint64_t& _pktlenMin);

                    /**
                     * 判断参数 PktlenMin 是否已赋值
                     * @return PktlenMin 是否已赋值
                     */
                    bool PktlenMinHasBeenSet() const;

                    /**
                     * 获取Maximum packet length. Value range: [0,1500]
                     * @return PktlenMax Maximum packet length. Value range: [0,1500]
                     */
                    uint64_t GetPktlenMax() const;

                    /**
                     * 设置Maximum packet length. Value range: [0,1500]
                     * @param PktlenMax Maximum packet length. Value range: [0,1500]
                     */
                    void SetPktlenMax(const uint64_t& _pktlenMax);

                    /**
                     * 判断参数 PktlenMax 是否已赋值
                     * @return PktlenMax 是否已赋值
                     */
                    bool PktlenMaxHasBeenSet() const;

                    /**
                     * 获取Whether to detect the payload. Valid values: [
begin_l3 (IP header)
begin_l4 (TCP header)
begin_l5 (payload)
no_match (no check)
]
                     * @return MatchBegin Whether to detect the payload. Valid values: [
begin_l3 (IP header)
begin_l4 (TCP header)
begin_l5 (payload)
no_match (no check)
]
                     */
                    std::string GetMatchBegin() const;

                    /**
                     * 设置Whether to detect the payload. Valid values: [
begin_l3 (IP header)
begin_l4 (TCP header)
begin_l5 (payload)
no_match (no check)
]
                     * @param MatchBegin Whether to detect the payload. Valid values: [
begin_l3 (IP header)
begin_l4 (TCP header)
begin_l5 (payload)
no_match (no check)
]
                     */
                    void SetMatchBegin(const std::string& _matchBegin);

                    /**
                     * 判断参数 MatchBegin 是否已赋值
                     * @return MatchBegin 是否已赋值
                     */
                    bool MatchBeginHasBeenSet() const;

                    /**
                     * 获取Whether it is a regular expression. Valid values: [sunday (keyword), pcre (regular expression)]
                     * @return MatchType Whether it is a regular expression. Valid values: [sunday (keyword), pcre (regular expression)]
                     */
                    std::string GetMatchType() const;

                    /**
                     * 设置Whether it is a regular expression. Valid values: [sunday (keyword), pcre (regular expression)]
                     * @param MatchType Whether it is a regular expression. Valid values: [sunday (keyword), pcre (regular expression)]
                     */
                    void SetMatchType(const std::string& _matchType);

                    /**
                     * 判断参数 MatchType 是否已赋值
                     * @return MatchType 是否已赋值
                     */
                    bool MatchTypeHasBeenSet() const;

                    /**
                     * 获取Keyword or regular expression
                     * @return Str Keyword or regular expression
                     */
                    std::string GetStr() const;

                    /**
                     * 设置Keyword or regular expression
                     * @param Str Keyword or regular expression
                     */
                    void SetStr(const std::string& _str);

                    /**
                     * 判断参数 Str 是否已赋值
                     * @return Str 是否已赋值
                     */
                    bool StrHasBeenSet() const;

                    /**
                     * 获取Detection depth. Value range: [0,1500]
                     * @return Depth Detection depth. Value range: [0,1500]
                     */
                    uint64_t GetDepth() const;

                    /**
                     * 设置Detection depth. Value range: [0,1500]
                     * @param Depth Detection depth. Value range: [0,1500]
                     */
                    void SetDepth(const uint64_t& _depth);

                    /**
                     * 判断参数 Depth 是否已赋值
                     * @return Depth 是否已赋值
                     */
                    bool DepthHasBeenSet() const;

                    /**
                     * 获取Detection offset. Value range: [0,1500]
                     * @return Offset Detection offset. Value range: [0,1500]
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Detection offset. Value range: [0,1500]
                     * @param Offset Detection offset. Value range: [0,1500]
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Whether to include. Valid values: [0 (no), 1 (yes)]
                     * @return IsNot Whether to include. Valid values: [0 (no), 1 (yes)]
                     */
                    uint64_t GetIsNot() const;

                    /**
                     * 设置Whether to include. Valid values: [0 (no), 1 (yes)]
                     * @param IsNot Whether to include. Valid values: [0 (no), 1 (yes)]
                     */
                    void SetIsNot(const uint64_t& _isNot);

                    /**
                     * 判断参数 IsNot 是否已赋值
                     * @return IsNot 是否已赋值
                     */
                    bool IsNotHasBeenSet() const;

                    /**
                     * 获取Policy action. Valid values: [drop, drop_black, drop_rst, drop_black_rst, transmit]
                     * @return Action Policy action. Valid values: [drop, drop_black, drop_rst, drop_black_rst, transmit]
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Policy action. Valid values: [drop, drop_black, drop_rst, drop_black_rst, transmit]
                     * @param Action Policy action. Valid values: [drop, drop_black, drop_rst, drop_black_rst, transmit]
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                private:

                    /**
                     * Protocol. Valid values: [tcp, udp, icmp, all]
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Start source port. Value range: [0,65535]
                     */
                    uint64_t m_sportStart;
                    bool m_sportStartHasBeenSet;

                    /**
                     * End source port. Value range: [0,65535]
                     */
                    uint64_t m_sportEnd;
                    bool m_sportEndHasBeenSet;

                    /**
                     * Start destination port. Value range: [0,65535]
                     */
                    uint64_t m_dportStart;
                    bool m_dportStartHasBeenSet;

                    /**
                     * End destination port. Value range: [0,65535]
                     */
                    uint64_t m_dportEnd;
                    bool m_dportEndHasBeenSet;

                    /**
                     * Minimum packet length. Value range: [0,1500]
                     */
                    uint64_t m_pktlenMin;
                    bool m_pktlenMinHasBeenSet;

                    /**
                     * Maximum packet length. Value range: [0,1500]
                     */
                    uint64_t m_pktlenMax;
                    bool m_pktlenMaxHasBeenSet;

                    /**
                     * Whether to detect the payload. Valid values: [
begin_l3 (IP header)
begin_l4 (TCP header)
begin_l5 (payload)
no_match (no check)
]
                     */
                    std::string m_matchBegin;
                    bool m_matchBeginHasBeenSet;

                    /**
                     * Whether it is a regular expression. Valid values: [sunday (keyword), pcre (regular expression)]
                     */
                    std::string m_matchType;
                    bool m_matchTypeHasBeenSet;

                    /**
                     * Keyword or regular expression
                     */
                    std::string m_str;
                    bool m_strHasBeenSet;

                    /**
                     * Detection depth. Value range: [0,1500]
                     */
                    uint64_t m_depth;
                    bool m_depthHasBeenSet;

                    /**
                     * Detection offset. Value range: [0,1500]
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Whether to include. Valid values: [0 (no), 1 (yes)]
                     */
                    uint64_t m_isNot;
                    bool m_isNotHasBeenSet;

                    /**
                     * Policy action. Valid values: [drop, drop_black, drop_rst, drop_black_rst, transmit]
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DDOSPOLICYPACKETFILTER_H_
