/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DDOSFEATURESFILTER_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DDOSFEATURESFILTER_H_

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
        namespace V20220106
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
                     * 获取Action. `drop`: Drop the request; `transmit`: Allow the request; `drop_block`: Drop the request and block it; `forward`: Continue to offer protection.
                     * @return Action Action. `drop`: Drop the request; `transmit`: Allow the request; `drop_block`: Drop the request and block it; `forward`: Continue to offer protection.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Action. `drop`: Drop the request; `transmit`: Allow the request; `drop_block`: Drop the request and block it; `forward`: Continue to offer protection.
                     * @param _action Action. `drop`: Drop the request; `transmit`: Allow the request; `drop_block`: Drop the request and block it; `forward`: Continue to offer protection.
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Sets how far from the first search position
                     * @return Depth Sets how far from the first search position
                     * 
                     */
                    int64_t GetDepth() const;

                    /**
                     * 设置Sets how far from the first search position
                     * @param _depth Sets how far from the first search position
                     * 
                     */
                    void SetDepth(const int64_t& _depth);

                    /**
                     * 判断参数 Depth 是否已赋值
                     * @return Depth 是否已赋值
                     * 
                     */
                    bool DepthHasBeenSet() const;

                    /**
                     * 获取Sets how far from the second search position
                     * @return Depth2 Sets how far from the second search position
                     * 
                     */
                    int64_t GetDepth2() const;

                    /**
                     * 设置Sets how far from the second search position
                     * @param _depth2 Sets how far from the second search position
                     * 
                     */
                    void SetDepth2(const int64_t& _depth2);

                    /**
                     * 判断参数 Depth2 是否已赋值
                     * @return Depth2 是否已赋值
                     * 
                     */
                    bool Depth2HasBeenSet() const;

                    /**
                     * 获取End of the destination port
                     * @return DportEnd End of the destination port
                     * 
                     */
                    int64_t GetDportEnd() const;

                    /**
                     * 设置End of the destination port
                     * @param _dportEnd End of the destination port
                     * 
                     */
                    void SetDportEnd(const int64_t& _dportEnd);

                    /**
                     * 判断参数 DportEnd 是否已赋值
                     * @return DportEnd 是否已赋值
                     * 
                     */
                    bool DportEndHasBeenSet() const;

                    /**
                     * 获取Start of the destination port
                     * @return DportStart Start of the destination port
                     * 
                     */
                    int64_t GetDportStart() const;

                    /**
                     * 设置Start of the destination port
                     * @param _dportStart Start of the destination port
                     * 
                     */
                    void SetDportStart(const int64_t& _dportStart);

                    /**
                     * 判断参数 DportStart 是否已赋值
                     * @return DportStart 是否已赋值
                     * 
                     */
                    bool DportStartHasBeenSet() const;

                    /**
                     * 获取Whether to match string 1 that does not contain all the specified elements
                     * @return IsNot Whether to match string 1 that does not contain all the specified elements
                     * 
                     */
                    int64_t GetIsNot() const;

                    /**
                     * 设置Whether to match string 1 that does not contain all the specified elements
                     * @param _isNot Whether to match string 1 that does not contain all the specified elements
                     * 
                     */
                    void SetIsNot(const int64_t& _isNot);

                    /**
                     * 判断参数 IsNot 是否已赋值
                     * @return IsNot 是否已赋值
                     * 
                     */
                    bool IsNotHasBeenSet() const;

                    /**
                     * 获取Whether to match string 2 that does not contain all the specified elements
                     * @return IsNot2 Whether to match string 2 that does not contain all the specified elements
                     * 
                     */
                    int64_t GetIsNot2() const;

                    /**
                     * 设置Whether to match string 2 that does not contain all the specified elements
                     * @param _isNot2 Whether to match string 2 that does not contain all the specified elements
                     * 
                     */
                    void SetIsNot2(const int64_t& _isNot2);

                    /**
                     * 判断参数 IsNot2 是否已赋值
                     * @return IsNot2 是否已赋值
                     * 
                     */
                    bool IsNot2HasBeenSet() const;

                    /**
                     * 获取Logical operator that combines two conditions. Values: `none`, `and` and `or`. If there is only one condition, pass in `none` for this condition only.
                     * @return MatchLogic Logical operator that combines two conditions. Values: `none`, `and` and `or`. If there is only one condition, pass in `none` for this condition only.
                     * 
                     */
                    std::string GetMatchLogic() const;

                    /**
                     * 设置Logical operator that combines two conditions. Values: `none`, `and` and `or`. If there is only one condition, pass in `none` for this condition only.
                     * @param _matchLogic Logical operator that combines two conditions. Values: `none`, `and` and `or`. If there is only one condition, pass in `none` for this condition only.
                     * 
                     */
                    void SetMatchLogic(const std::string& _matchLogic);

                    /**
                     * 判断参数 MatchLogic 是否已赋值
                     * @return MatchLogic 是否已赋值
                     * 
                     */
                    bool MatchLogicHasBeenSet() const;

                    /**
                     * 获取Matching method of the first condition. `pcre`: Regex match; `sunday`: String match.
                     * @return MatchType Matching method of the first condition. `pcre`: Regex match; `sunday`: String match.
                     * 
                     */
                    std::string GetMatchType() const;

                    /**
                     * 设置Matching method of the first condition. `pcre`: Regex match; `sunday`: String match.
                     * @param _matchType Matching method of the first condition. `pcre`: Regex match; `sunday`: String match.
                     * 
                     */
                    void SetMatchType(const std::string& _matchType);

                    /**
                     * 判断参数 MatchType 是否已赋值
                     * @return MatchType 是否已赋值
                     * 
                     */
                    bool MatchTypeHasBeenSet() const;

                    /**
                     * 获取Matching method of the second condition. `pcre`: Regex match; `sunday`: String match.
                     * @return MatchType2 Matching method of the second condition. `pcre`: Regex match; `sunday`: String match.
                     * 
                     */
                    std::string GetMatchType2() const;

                    /**
                     * 设置Matching method of the second condition. `pcre`: Regex match; `sunday`: String match.
                     * @param _matchType2 Matching method of the second condition. `pcre`: Regex match; `sunday`: String match.
                     * 
                     */
                    void SetMatchType2(const std::string& _matchType2);

                    /**
                     * 判断参数 MatchType2 是否已赋值
                     * @return MatchType2 是否已赋值
                     * 
                     */
                    bool MatchType2HasBeenSet() const;

                    /**
                     * 获取Offset from the first search position
                     * @return Offset Offset from the first search position
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset from the first search position
                     * @param _offset Offset from the first search position
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Offset from the second search position
                     * @return Offset2 Offset from the second search position
                     * 
                     */
                    int64_t GetOffset2() const;

                    /**
                     * 设置Offset from the second search position
                     * @param _offset2 Offset from the second search position
                     * 
                     */
                    void SetOffset2(const int64_t& _offset2);

                    /**
                     * 判断参数 Offset2 是否已赋值
                     * @return Offset2 是否已赋值
                     * 
                     */
                    bool Offset2HasBeenSet() const;

                    /**
                     * 获取Maximum packet length
                     * @return PacketMax Maximum packet length
                     * 
                     */
                    int64_t GetPacketMax() const;

                    /**
                     * 设置Maximum packet length
                     * @param _packetMax Maximum packet length
                     * 
                     */
                    void SetPacketMax(const int64_t& _packetMax);

                    /**
                     * 判断参数 PacketMax 是否已赋值
                     * @return PacketMax 是否已赋值
                     * 
                     */
                    bool PacketMaxHasBeenSet() const;

                    /**
                     * 获取Minimum packet length
                     * @return PacketMin Minimum packet length
                     * 
                     */
                    int64_t GetPacketMin() const;

                    /**
                     * 设置Minimum packet length
                     * @param _packetMin Minimum packet length
                     * 
                     */
                    void SetPacketMin(const int64_t& _packetMin);

                    /**
                     * 判断参数 PacketMin 是否已赋值
                     * @return PacketMin 是否已赋值
                     * 
                     */
                    bool PacketMinHasBeenSet() const;

                    /**
                     * 获取Protocol. Values: `tcp`, `udp`, `icmp` and `all`.
                     * @return Protocol Protocol. Values: `tcp`, `udp`, `icmp` and `all`.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol. Values: `tcp`, `udp`, `icmp` and `all`.
                     * @param _protocol Protocol. Values: `tcp`, `udp`, `icmp` and `all`.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取End of the source port
                     * @return SportEnd End of the source port
                     * 
                     */
                    int64_t GetSportEnd() const;

                    /**
                     * 设置End of the source port
                     * @param _sportEnd End of the source port
                     * 
                     */
                    void SetSportEnd(const int64_t& _sportEnd);

                    /**
                     * 判断参数 SportEnd 是否已赋值
                     * @return SportEnd 是否已赋值
                     * 
                     */
                    bool SportEndHasBeenSet() const;

                    /**
                     * 获取Start of the source port
                     * @return SportStart Start of the source port
                     * 
                     */
                    int64_t GetSportStart() const;

                    /**
                     * 设置Start of the source port
                     * @param _sportStart Start of the source port
                     * 
                     */
                    void SetSportStart(const int64_t& _sportStart);

                    /**
                     * 判断参数 SportStart 是否已赋值
                     * @return SportStart 是否已赋值
                     * 
                     */
                    bool SportStartHasBeenSet() const;

                    /**
                     * 获取String in the first condition
                     * @return Str String in the first condition
                     * 
                     */
                    std::string GetStr() const;

                    /**
                     * 设置String in the first condition
                     * @param _str String in the first condition
                     * 
                     */
                    void SetStr(const std::string& _str);

                    /**
                     * 判断参数 Str 是否已赋值
                     * @return Str 是否已赋值
                     * 
                     */
                    bool StrHasBeenSet() const;

                    /**
                     * 获取String in the second condition
                     * @return Str2 String in the second condition
                     * 
                     */
                    std::string GetStr2() const;

                    /**
                     * 设置String in the second condition
                     * @param _str2 String in the second condition
                     * 
                     */
                    void SetStr2(const std::string& _str2);

                    /**
                     * 判断参数 Str2 是否已赋值
                     * @return Str2 是否已赋值
                     * 
                     */
                    bool Str2HasBeenSet() const;

                    /**
                     * 获取Layer at which each match starts. Values: `begin_l5`, `no_match`, `begin_l3` and `begin_l4`.
                     * @return MatchBegin Layer at which each match starts. Values: `begin_l5`, `no_match`, `begin_l3` and `begin_l4`.
                     * 
                     */
                    std::string GetMatchBegin() const;

                    /**
                     * 设置Layer at which each match starts. Values: `begin_l5`, `no_match`, `begin_l3` and `begin_l4`.
                     * @param _matchBegin Layer at which each match starts. Values: `begin_l5`, `no_match`, `begin_l3` and `begin_l4`.
                     * 
                     */
                    void SetMatchBegin(const std::string& _matchBegin);

                    /**
                     * 判断参数 MatchBegin 是否已赋值
                     * @return MatchBegin 是否已赋值
                     * 
                     */
                    bool MatchBeginHasBeenSet() const;

                    /**
                     * 获取Layer at which each match starts. Values: `begin_l5`, `no_match`, `begin_l3` and `begin_l4`.
                     * @return MatchBegin2 Layer at which each match starts. Values: `begin_l5`, `no_match`, `begin_l3` and `begin_l4`.
                     * 
                     */
                    std::string GetMatchBegin2() const;

                    /**
                     * 设置Layer at which each match starts. Values: `begin_l5`, `no_match`, `begin_l3` and `begin_l4`.
                     * @param _matchBegin2 Layer at which each match starts. Values: `begin_l5`, `no_match`, `begin_l3` and `begin_l4`.
                     * 
                     */
                    void SetMatchBegin2(const std::string& _matchBegin2);

                    /**
                     * 判断参数 MatchBegin2 是否已赋值
                     * @return MatchBegin2 是否已赋值
                     * 
                     */
                    bool MatchBegin2HasBeenSet() const;

                private:

                    /**
                     * Action. `drop`: Drop the request; `transmit`: Allow the request; `drop_block`: Drop the request and block it; `forward`: Continue to offer protection.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Sets how far from the first search position
                     */
                    int64_t m_depth;
                    bool m_depthHasBeenSet;

                    /**
                     * Sets how far from the second search position
                     */
                    int64_t m_depth2;
                    bool m_depth2HasBeenSet;

                    /**
                     * End of the destination port
                     */
                    int64_t m_dportEnd;
                    bool m_dportEndHasBeenSet;

                    /**
                     * Start of the destination port
                     */
                    int64_t m_dportStart;
                    bool m_dportStartHasBeenSet;

                    /**
                     * Whether to match string 1 that does not contain all the specified elements
                     */
                    int64_t m_isNot;
                    bool m_isNotHasBeenSet;

                    /**
                     * Whether to match string 2 that does not contain all the specified elements
                     */
                    int64_t m_isNot2;
                    bool m_isNot2HasBeenSet;

                    /**
                     * Logical operator that combines two conditions. Values: `none`, `and` and `or`. If there is only one condition, pass in `none` for this condition only.
                     */
                    std::string m_matchLogic;
                    bool m_matchLogicHasBeenSet;

                    /**
                     * Matching method of the first condition. `pcre`: Regex match; `sunday`: String match.
                     */
                    std::string m_matchType;
                    bool m_matchTypeHasBeenSet;

                    /**
                     * Matching method of the second condition. `pcre`: Regex match; `sunday`: String match.
                     */
                    std::string m_matchType2;
                    bool m_matchType2HasBeenSet;

                    /**
                     * Offset from the first search position
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Offset from the second search position
                     */
                    int64_t m_offset2;
                    bool m_offset2HasBeenSet;

                    /**
                     * Maximum packet length
                     */
                    int64_t m_packetMax;
                    bool m_packetMaxHasBeenSet;

                    /**
                     * Minimum packet length
                     */
                    int64_t m_packetMin;
                    bool m_packetMinHasBeenSet;

                    /**
                     * Protocol. Values: `tcp`, `udp`, `icmp` and `all`.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * End of the source port
                     */
                    int64_t m_sportEnd;
                    bool m_sportEndHasBeenSet;

                    /**
                     * Start of the source port
                     */
                    int64_t m_sportStart;
                    bool m_sportStartHasBeenSet;

                    /**
                     * String in the first condition
                     */
                    std::string m_str;
                    bool m_strHasBeenSet;

                    /**
                     * String in the second condition
                     */
                    std::string m_str2;
                    bool m_str2HasBeenSet;

                    /**
                     * Layer at which each match starts. Values: `begin_l5`, `no_match`, `begin_l3` and `begin_l4`.
                     */
                    std::string m_matchBegin;
                    bool m_matchBeginHasBeenSet;

                    /**
                     * Layer at which each match starts. Values: `begin_l5`, `no_match`, `begin_l3` and `begin_l4`.
                     */
                    std::string m_matchBegin2;
                    bool m_matchBegin2HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DDOSFEATURESFILTER_H_
