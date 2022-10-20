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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DDOSFEATURESFILTER_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DDOSFEATURESFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DDoS feature filtering
                */
                class DDoSFeaturesFilter : public AbstractModel
                {
                public:
                    DDoSFeaturesFilter();
                    ~DDoSFeaturesFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Action to be executed. Valid values:
<li>`drop`: Discard</li>
<li>`transmit`: Allow</li>
<li>`drop_block`: Discard and block</li>
<li>`forward`: Continue protection</li>
                     * @return Action Action to be executed. Valid values:
<li>`drop`: Discard</li>
<li>`transmit`: Allow</li>
<li>`drop_block`: Discard and block</li>
<li>`forward`: Continue protection</li>
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Action to be executed. Valid values:
<li>`drop`: Discard</li>
<li>`transmit`: Allow</li>
<li>`drop_block`: Discard and block</li>
<li>`forward`: Continue protection</li>
                     * @param Action Action to be executed. Valid values:
<li>`drop`: Discard</li>
<li>`transmit`: Allow</li>
<li>`drop_block`: Discard and block</li>
<li>`forward`: Continue protection</li>
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取The protocol. Values:
<li>`tcp`: TCP protocol</li>
<li>`udp`: UDP protocol</li>
<li>`icmp`: ICMP protocol</li>
<li>`all`: All protocols</li>
                     * @return Protocol The protocol. Values:
<li>`tcp`: TCP protocol</li>
<li>`udp`: UDP protocol</li>
<li>`icmp`: ICMP protocol</li>
<li>`all`: All protocols</li>
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置The protocol. Values:
<li>`tcp`: TCP protocol</li>
<li>`udp`: UDP protocol</li>
<li>`icmp`: ICMP protocol</li>
<li>`all`: All protocols</li>
                     * @param Protocol The protocol. Values:
<li>`tcp`: TCP protocol</li>
<li>`udp`: UDP protocol</li>
<li>`icmp`: ICMP protocol</li>
<li>`all`: All protocols</li>
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Start of the destination port. Value range: 0–65535.
                     * @return DportStart Start of the destination port. Value range: 0–65535.
                     */
                    int64_t GetDportStart() const;

                    /**
                     * 设置Start of the destination port. Value range: 0–65535.
                     * @param DportStart Start of the destination port. Value range: 0–65535.
                     */
                    void SetDportStart(const int64_t& _dportStart);

                    /**
                     * 判断参数 DportStart 是否已赋值
                     * @return DportStart 是否已赋值
                     */
                    bool DportStartHasBeenSet() const;

                    /**
                     * 获取End of the destination port. Value range: 0–65535.
                     * @return DportEnd End of the destination port. Value range: 0–65535.
                     */
                    int64_t GetDportEnd() const;

                    /**
                     * 设置End of the destination port. Value range: 0–65535.
                     * @param DportEnd End of the destination port. Value range: 0–65535.
                     */
                    void SetDportEnd(const int64_t& _dportEnd);

                    /**
                     * 判断参数 DportEnd 是否已赋值
                     * @return DportEnd 是否已赋值
                     */
                    bool DportEndHasBeenSet() const;

                    /**
                     * 获取Minimum packet length. Value range: 0–1500.
                     * @return PacketMin Minimum packet length. Value range: 0–1500.
                     */
                    int64_t GetPacketMin() const;

                    /**
                     * 设置Minimum packet length. Value range: 0–1500.
                     * @param PacketMin Minimum packet length. Value range: 0–1500.
                     */
                    void SetPacketMin(const int64_t& _packetMin);

                    /**
                     * 判断参数 PacketMin 是否已赋值
                     * @return PacketMin 是否已赋值
                     */
                    bool PacketMinHasBeenSet() const;

                    /**
                     * 获取Maximum packet length. Value range: 0–1500.
                     * @return PacketMax Maximum packet length. Value range: 0–1500.
                     */
                    int64_t GetPacketMax() const;

                    /**
                     * 设置Maximum packet length. Value range: 0–1500.
                     * @param PacketMax Maximum packet length. Value range: 0–1500.
                     */
                    void SetPacketMax(const int64_t& _packetMax);

                    /**
                     * 判断参数 PacketMax 是否已赋值
                     * @return PacketMax 是否已赋值
                     */
                    bool PacketMaxHasBeenSet() const;

                    /**
                     * 获取Start of the source port. Value range: 0–65535.
                     * @return SportStart Start of the source port. Value range: 0–65535.
                     */
                    int64_t GetSportStart() const;

                    /**
                     * 设置Start of the source port. Value range: 0–65535.
                     * @param SportStart Start of the source port. Value range: 0–65535.
                     */
                    void SetSportStart(const int64_t& _sportStart);

                    /**
                     * 判断参数 SportStart 是否已赋值
                     * @return SportStart 是否已赋值
                     */
                    bool SportStartHasBeenSet() const;

                    /**
                     * 获取End of the source port. Value range: 0–65535.
                     * @return SportEnd End of the source port. Value range: 0–65535.
                     */
                    int64_t GetSportEnd() const;

                    /**
                     * 设置End of the source port. Value range: 0–65535.
                     * @param SportEnd End of the source port. Value range: 0–65535.
                     */
                    void SetSportEnd(const int64_t& _sportEnd);

                    /**
                     * 判断参数 SportEnd 是否已赋值
                     * @return SportEnd 是否已赋值
                     */
                    bool SportEndHasBeenSet() const;

                    /**
                     * 获取Matching method 1 of **feature 1**. Values:
<li>`pcre`: Regular expression match</li>
<li>`sunday`: String match</li>An empty string is used by default.
                     * @return MatchType Matching method 1 of **feature 1**. Values:
<li>`pcre`: Regular expression match</li>
<li>`sunday`: String match</li>An empty string is used by default.
                     */
                    std::string GetMatchType() const;

                    /**
                     * 设置Matching method 1 of **feature 1**. Values:
<li>`pcre`: Regular expression match</li>
<li>`sunday`: String match</li>An empty string is used by default.
                     * @param MatchType Matching method 1 of **feature 1**. Values:
<li>`pcre`: Regular expression match</li>
<li>`sunday`: String match</li>An empty string is used by default.
                     */
                    void SetMatchType(const std::string& _matchType);

                    /**
                     * 判断参数 MatchType 是否已赋值
                     * @return MatchType 是否已赋值
                     */
                    bool MatchTypeHasBeenSet() const;

                    /**
                     * 获取Whether the pattern in **feature 1** is matched. This parameter is used together with `MatchType`. Values:
<li>`0`: Matched</li>
<li>`1`: Not matched</li>
                     * @return IsNot Whether the pattern in **feature 1** is matched. This parameter is used together with `MatchType`. Values:
<li>`0`: Matched</li>
<li>`1`: Not matched</li>
                     */
                    int64_t GetIsNot() const;

                    /**
                     * 设置Whether the pattern in **feature 1** is matched. This parameter is used together with `MatchType`. Values:
<li>`0`: Matched</li>
<li>`1`: Not matched</li>
                     * @param IsNot Whether the pattern in **feature 1** is matched. This parameter is used together with `MatchType`. Values:
<li>`0`: Matched</li>
<li>`1`: Not matched</li>
                     */
                    void SetIsNot(const int64_t& _isNot);

                    /**
                     * 判断参数 IsNot 是否已赋值
                     * @return IsNot 是否已赋值
                     */
                    bool IsNotHasBeenSet() const;

                    /**
                     * 获取Offset 1 of **feature 1**. Value range: 0–1500.
                     * @return Offset Offset 1 of **feature 1**. Value range: 0–1500.
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset 1 of **feature 1**. Value range: 0–1500.
                     * @param Offset Offset 1 of **feature 1**. Value range: 0–1500.
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取The depth to inspect **feature 1** in the packet. Value range: 1–1500.
                     * @return Depth The depth to inspect **feature 1** in the packet. Value range: 1–1500.
                     */
                    int64_t GetDepth() const;

                    /**
                     * 设置The depth to inspect **feature 1** in the packet. Value range: 1–1500.
                     * @param Depth The depth to inspect **feature 1** in the packet. Value range: 1–1500.
                     */
                    void SetDepth(const int64_t& _depth);

                    /**
                     * 判断参数 Depth 是否已赋值
                     * @return Depth 是否已赋值
                     */
                    bool DepthHasBeenSet() const;

                    /**
                     * 获取The layer from which each match starts. Values:
<li>`begin_l5`: Start from the payload.</li>
<li>`begin_l4`: Start from the TCP/UDP header.</li>
<li>`begin_l3`: Start from the IP header.</li>
                     * @return MatchBegin The layer from which each match starts. Values:
<li>`begin_l5`: Start from the payload.</li>
<li>`begin_l4`: Start from the TCP/UDP header.</li>
<li>`begin_l3`: Start from the IP header.</li>
                     */
                    std::string GetMatchBegin() const;

                    /**
                     * 设置The layer from which each match starts. Values:
<li>`begin_l5`: Start from the payload.</li>
<li>`begin_l4`: Start from the TCP/UDP header.</li>
<li>`begin_l3`: Start from the IP header.</li>
                     * @param MatchBegin The layer from which each match starts. Values:
<li>`begin_l5`: Start from the payload.</li>
<li>`begin_l4`: Start from the TCP/UDP header.</li>
<li>`begin_l3`: Start from the IP header.</li>
                     */
                    void SetMatchBegin(const std::string& _matchBegin);

                    /**
                     * 判断参数 MatchBegin 是否已赋值
                     * @return MatchBegin 是否已赋值
                     */
                    bool MatchBeginHasBeenSet() const;

                    /**
                     * 获取The match content of **feature 1**.
                     * @return Str The match content of **feature 1**.
                     */
                    std::string GetStr() const;

                    /**
                     * 设置The match content of **feature 1**.
                     * @param Str The match content of **feature 1**.
                     */
                    void SetStr(const std::string& _str);

                    /**
                     * 判断参数 Str 是否已赋值
                     * @return Str 是否已赋值
                     */
                    bool StrHasBeenSet() const;

                    /**
                     * 获取Matching method 2 of **feature 2**. Values:
<li>`pcre`: Regular expression match</li>
<li>`sunday`: String match</li>An empty string is used by default.
                     * @return MatchType2 Matching method 2 of **feature 2**. Values:
<li>`pcre`: Regular expression match</li>
<li>`sunday`: String match</li>An empty string is used by default.
                     */
                    std::string GetMatchType2() const;

                    /**
                     * 设置Matching method 2 of **feature 2**. Values:
<li>`pcre`: Regular expression match</li>
<li>`sunday`: String match</li>An empty string is used by default.
                     * @param MatchType2 Matching method 2 of **feature 2**. Values:
<li>`pcre`: Regular expression match</li>
<li>`sunday`: String match</li>An empty string is used by default.
                     */
                    void SetMatchType2(const std::string& _matchType2);

                    /**
                     * 判断参数 MatchType2 是否已赋值
                     * @return MatchType2 是否已赋值
                     */
                    bool MatchType2HasBeenSet() const;

                    /**
                     * 获取Whether the pattern in **feature 2** is matched. This parameter is used together with `MatchType2`. Values:
<li>`0`: Matched</li>
<li>`1`: Not matched</li>
                     * @return IsNot2 Whether the pattern in **feature 2** is matched. This parameter is used together with `MatchType2`. Values:
<li>`0`: Matched</li>
<li>`1`: Not matched</li>
                     */
                    int64_t GetIsNot2() const;

                    /**
                     * 设置Whether the pattern in **feature 2** is matched. This parameter is used together with `MatchType2`. Values:
<li>`0`: Matched</li>
<li>`1`: Not matched</li>
                     * @param IsNot2 Whether the pattern in **feature 2** is matched. This parameter is used together with `MatchType2`. Values:
<li>`0`: Matched</li>
<li>`1`: Not matched</li>
                     */
                    void SetIsNot2(const int64_t& _isNot2);

                    /**
                     * 判断参数 IsNot2 是否已赋值
                     * @return IsNot2 是否已赋值
                     */
                    bool IsNot2HasBeenSet() const;

                    /**
                     * 获取Offset 2 of **feature 2**. Value range: 0–1500.
                     * @return Offset2 Offset 2 of **feature 2**. Value range: 0–1500.
                     */
                    int64_t GetOffset2() const;

                    /**
                     * 设置Offset 2 of **feature 2**. Value range: 0–1500.
                     * @param Offset2 Offset 2 of **feature 2**. Value range: 0–1500.
                     */
                    void SetOffset2(const int64_t& _offset2);

                    /**
                     * 判断参数 Offset2 是否已赋值
                     * @return Offset2 是否已赋值
                     */
                    bool Offset2HasBeenSet() const;

                    /**
                     * 获取The depth to inspect **feature 2** in the packet. Value range: 1–1500.
                     * @return Depth2 The depth to inspect **feature 2** in the packet. Value range: 1–1500.
                     */
                    int64_t GetDepth2() const;

                    /**
                     * 设置The depth to inspect **feature 2** in the packet. Value range: 1–1500.
                     * @param Depth2 The depth to inspect **feature 2** in the packet. Value range: 1–1500.
                     */
                    void SetDepth2(const int64_t& _depth2);

                    /**
                     * 判断参数 Depth2 是否已赋值
                     * @return Depth2 是否已赋值
                     */
                    bool Depth2HasBeenSet() const;

                    /**
                     * 获取The layer from which each match starts. Values:
<li>`begin_l5`: Start from the payload.</li>
<li>`begin_l4`: Start from the TCP/UDP header.</li>
<li>`begin_l3`: Start from the IP header.</li>
                     * @return MatchBegin2 The layer from which each match starts. Values:
<li>`begin_l5`: Start from the payload.</li>
<li>`begin_l4`: Start from the TCP/UDP header.</li>
<li>`begin_l3`: Start from the IP header.</li>
                     */
                    std::string GetMatchBegin2() const;

                    /**
                     * 设置The layer from which each match starts. Values:
<li>`begin_l5`: Start from the payload.</li>
<li>`begin_l4`: Start from the TCP/UDP header.</li>
<li>`begin_l3`: Start from the IP header.</li>
                     * @param MatchBegin2 The layer from which each match starts. Values:
<li>`begin_l5`: Start from the payload.</li>
<li>`begin_l4`: Start from the TCP/UDP header.</li>
<li>`begin_l3`: Start from the IP header.</li>
                     */
                    void SetMatchBegin2(const std::string& _matchBegin2);

                    /**
                     * 判断参数 MatchBegin2 是否已赋值
                     * @return MatchBegin2 是否已赋值
                     */
                    bool MatchBegin2HasBeenSet() const;

                    /**
                     * 获取The match content of **feature 2**.
                     * @return Str2 The match content of **feature 2**.
                     */
                    std::string GetStr2() const;

                    /**
                     * 设置The match content of **feature 2**.
                     * @param Str2 The match content of **feature 2**.
                     */
                    void SetStr2(const std::string& _str2);

                    /**
                     * 判断参数 Str2 是否已赋值
                     * @return Str2 是否已赋值
                     */
                    bool Str2HasBeenSet() const;

                    /**
                     * 获取Multi-feature relationship. Enter `none` if only **feature 1** is configured. If **feature 2** exists, you can leave this parameter empty.
                     * @return MatchLogic Multi-feature relationship. Enter `none` if only **feature 1** is configured. If **feature 2** exists, you can leave this parameter empty.
                     */
                    std::string GetMatchLogic() const;

                    /**
                     * 设置Multi-feature relationship. Enter `none` if only **feature 1** is configured. If **feature 2** exists, you can leave this parameter empty.
                     * @param MatchLogic Multi-feature relationship. Enter `none` if only **feature 1** is configured. If **feature 2** exists, you can leave this parameter empty.
                     */
                    void SetMatchLogic(const std::string& _matchLogic);

                    /**
                     * 判断参数 MatchLogic 是否已赋值
                     * @return MatchLogic 是否已赋值
                     */
                    bool MatchLogicHasBeenSet() const;

                private:

                    /**
                     * Action to be executed. Valid values:
<li>`drop`: Discard</li>
<li>`transmit`: Allow</li>
<li>`drop_block`: Discard and block</li>
<li>`forward`: Continue protection</li>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * The protocol. Values:
<li>`tcp`: TCP protocol</li>
<li>`udp`: UDP protocol</li>
<li>`icmp`: ICMP protocol</li>
<li>`all`: All protocols</li>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Start of the destination port. Value range: 0–65535.
                     */
                    int64_t m_dportStart;
                    bool m_dportStartHasBeenSet;

                    /**
                     * End of the destination port. Value range: 0–65535.
                     */
                    int64_t m_dportEnd;
                    bool m_dportEndHasBeenSet;

                    /**
                     * Minimum packet length. Value range: 0–1500.
                     */
                    int64_t m_packetMin;
                    bool m_packetMinHasBeenSet;

                    /**
                     * Maximum packet length. Value range: 0–1500.
                     */
                    int64_t m_packetMax;
                    bool m_packetMaxHasBeenSet;

                    /**
                     * Start of the source port. Value range: 0–65535.
                     */
                    int64_t m_sportStart;
                    bool m_sportStartHasBeenSet;

                    /**
                     * End of the source port. Value range: 0–65535.
                     */
                    int64_t m_sportEnd;
                    bool m_sportEndHasBeenSet;

                    /**
                     * Matching method 1 of **feature 1**. Values:
<li>`pcre`: Regular expression match</li>
<li>`sunday`: String match</li>An empty string is used by default.
                     */
                    std::string m_matchType;
                    bool m_matchTypeHasBeenSet;

                    /**
                     * Whether the pattern in **feature 1** is matched. This parameter is used together with `MatchType`. Values:
<li>`0`: Matched</li>
<li>`1`: Not matched</li>
                     */
                    int64_t m_isNot;
                    bool m_isNotHasBeenSet;

                    /**
                     * Offset 1 of **feature 1**. Value range: 0–1500.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The depth to inspect **feature 1** in the packet. Value range: 1–1500.
                     */
                    int64_t m_depth;
                    bool m_depthHasBeenSet;

                    /**
                     * The layer from which each match starts. Values:
<li>`begin_l5`: Start from the payload.</li>
<li>`begin_l4`: Start from the TCP/UDP header.</li>
<li>`begin_l3`: Start from the IP header.</li>
                     */
                    std::string m_matchBegin;
                    bool m_matchBeginHasBeenSet;

                    /**
                     * The match content of **feature 1**.
                     */
                    std::string m_str;
                    bool m_strHasBeenSet;

                    /**
                     * Matching method 2 of **feature 2**. Values:
<li>`pcre`: Regular expression match</li>
<li>`sunday`: String match</li>An empty string is used by default.
                     */
                    std::string m_matchType2;
                    bool m_matchType2HasBeenSet;

                    /**
                     * Whether the pattern in **feature 2** is matched. This parameter is used together with `MatchType2`. Values:
<li>`0`: Matched</li>
<li>`1`: Not matched</li>
                     */
                    int64_t m_isNot2;
                    bool m_isNot2HasBeenSet;

                    /**
                     * Offset 2 of **feature 2**. Value range: 0–1500.
                     */
                    int64_t m_offset2;
                    bool m_offset2HasBeenSet;

                    /**
                     * The depth to inspect **feature 2** in the packet. Value range: 1–1500.
                     */
                    int64_t m_depth2;
                    bool m_depth2HasBeenSet;

                    /**
                     * The layer from which each match starts. Values:
<li>`begin_l5`: Start from the payload.</li>
<li>`begin_l4`: Start from the TCP/UDP header.</li>
<li>`begin_l3`: Start from the IP header.</li>
                     */
                    std::string m_matchBegin2;
                    bool m_matchBegin2HasBeenSet;

                    /**
                     * The match content of **feature 2**.
                     */
                    std::string m_str2;
                    bool m_str2HasBeenSet;

                    /**
                     * Multi-feature relationship. Enter `none` if only **feature 1** is configured. If **feature 2** exists, you can leave this parameter empty.
                     */
                    std::string m_matchLogic;
                    bool m_matchLogicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DDOSFEATURESFILTER_H_
