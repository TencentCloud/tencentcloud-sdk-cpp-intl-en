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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PACKETFILTERCONFIG_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PACKETFILTERCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * Feature filtering configuration
                */
                class PacketFilterConfig : public AbstractModel
                {
                public:
                    PacketFilterConfig();
                    ~PacketFilterConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Protocol. Valid values: `tcp`, `udp`, `icmp`, `all`.
                     * @return Protocol Protocol. Valid values: `tcp`, `udp`, `icmp`, `all`.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol. Valid values: `tcp`, `udp`, `icmp`, `all`.
                     * @param _protocol Protocol. Valid values: `tcp`, `udp`, `icmp`, `all`.
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
                     * 获取Start source port. Value range: 0–65535.
                     * @return SportStart Start source port. Value range: 0–65535.
                     * 
                     */
                    int64_t GetSportStart() const;

                    /**
                     * 设置Start source port. Value range: 0–65535.
                     * @param _sportStart Start source port. Value range: 0–65535.
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
                     * 获取End source port. Value range: 0–65535. The value also should be greater than or equal to that of the start source port.
                     * @return SportEnd End source port. Value range: 0–65535. The value also should be greater than or equal to that of the start source port.
                     * 
                     */
                    int64_t GetSportEnd() const;

                    /**
                     * 设置End source port. Value range: 0–65535. The value also should be greater than or equal to that of the start source port.
                     * @param _sportEnd End source port. Value range: 0–65535. The value also should be greater than or equal to that of the start source port.
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
                     * 获取Start destination port
                     * @return DportStart Start destination port
                     * 
                     */
                    int64_t GetDportStart() const;

                    /**
                     * 设置Start destination port
                     * @param _dportStart Start destination port
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
                     * 获取End destination port. Value range: 1–65535. The value also should be greater than or equal to that of the start source port.
                     * @return DportEnd End destination port. Value range: 1–65535. The value also should be greater than or equal to that of the start source port.
                     * 
                     */
                    int64_t GetDportEnd() const;

                    /**
                     * 设置End destination port. Value range: 1–65535. The value also should be greater than or equal to that of the start source port.
                     * @param _dportEnd End destination port. Value range: 1–65535. The value also should be greater than or equal to that of the start source port.
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
                     * 获取Minimum message length. Value range: 1–1500.
                     * @return PktlenMin Minimum message length. Value range: 1–1500.
                     * 
                     */
                    int64_t GetPktlenMin() const;

                    /**
                     * 设置Minimum message length. Value range: 1–1500.
                     * @param _pktlenMin Minimum message length. Value range: 1–1500.
                     * 
                     */
                    void SetPktlenMin(const int64_t& _pktlenMin);

                    /**
                     * 判断参数 PktlenMin 是否已赋值
                     * @return PktlenMin 是否已赋值
                     * 
                     */
                    bool PktlenMinHasBeenSet() const;

                    /**
                     * 获取Maximum message length. Value range: 1–1500. The value also should be greater than or equal to that of the minimum message length.
                     * @return PktlenMax Maximum message length. Value range: 1–1500. The value also should be greater than or equal to that of the minimum message length.
                     * 
                     */
                    int64_t GetPktlenMax() const;

                    /**
                     * 设置Maximum message length. Value range: 1–1500. The value also should be greater than or equal to that of the minimum message length.
                     * @param _pktlenMax Maximum message length. Value range: 1–1500. The value also should be greater than or equal to that of the minimum message length.
                     * 
                     */
                    void SetPktlenMax(const int64_t& _pktlenMax);

                    /**
                     * 判断参数 PktlenMax 是否已赋值
                     * @return PktlenMax 是否已赋值
                     * 
                     */
                    bool PktlenMaxHasBeenSet() const;

                    /**
                     * 获取Action. Valid values:
`drop`: discards the request.
`transmit`: allows the request.
`drop_black`: discards the request and adds the IP to blocklist.
`drop_rst`: blocks the request.
`drop_black_rst`: blocks the request and adds the IP to blocklist.
`forward`: continues protection.
]
                     * @return Action Action. Valid values:
`drop`: discards the request.
`transmit`: allows the request.
`drop_black`: discards the request and adds the IP to blocklist.
`drop_rst`: blocks the request.
`drop_black_rst`: blocks the request and adds the IP to blocklist.
`forward`: continues protection.
]
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Action. Valid values:
`drop`: discards the request.
`transmit`: allows the request.
`drop_black`: discards the request and adds the IP to blocklist.
`drop_rst`: blocks the request.
`drop_black_rst`: blocks the request and adds the IP to blocklist.
`forward`: continues protection.
]
                     * @param _action Action. Valid values:
`drop`: discards the request.
`transmit`: allows the request.
`drop_black`: discards the request and adds the IP to blocklist.
`drop_rst`: blocks the request.
`drop_black_rst`: blocks the request and adds the IP to blocklist.
`forward`: continues protection.
]
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
                     * 获取Detection location:
`begin_l3`: IP header
`begin_l4`: TCP/UDP header
`begin_l5`: T load
`no_match`: no match
]
                     * @return MatchBegin Detection location:
`begin_l3`: IP header
`begin_l4`: TCP/UDP header
`begin_l5`: T load
`no_match`: no match
]
                     * 
                     */
                    std::string GetMatchBegin() const;

                    /**
                     * 设置Detection location:
`begin_l3`: IP header
`begin_l4`: TCP/UDP header
`begin_l5`: T load
`no_match`: no match
]
                     * @param _matchBegin Detection location:
`begin_l3`: IP header
`begin_l4`: TCP/UDP header
`begin_l5`: T load
`no_match`: no match
]
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
                     * 获取Detection type:
`sunday`: keyword
`pcre`: regular expression
]
                     * @return MatchType Detection type:
`sunday`: keyword
`pcre`: regular expression
]
                     * 
                     */
                    std::string GetMatchType() const;

                    /**
                     * 设置Detection type:
`sunday`: keyword
`pcre`: regular expression
]
                     * @param _matchType Detection type:
`sunday`: keyword
`pcre`: regular expression
]
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
                     * 获取Detection value. Should be in key string or regular expression. 
When the `MatchType` is `sunday`, enter a string or a string in hexadecimal byte code representation. For example, a string "123" corresponds to the hexadecimal byte code "\x313233".
When the `MatchType` is `pcre`, enter a regular expression.
]
                     * @return Str Detection value. Should be in key string or regular expression. 
When the `MatchType` is `sunday`, enter a string or a string in hexadecimal byte code representation. For example, a string "123" corresponds to the hexadecimal byte code "\x313233".
When the `MatchType` is `pcre`, enter a regular expression.
]
                     * 
                     */
                    std::string GetStr() const;

                    /**
                     * 设置Detection value. Should be in key string or regular expression. 
When the `MatchType` is `sunday`, enter a string or a string in hexadecimal byte code representation. For example, a string "123" corresponds to the hexadecimal byte code "\x313233".
When the `MatchType` is `pcre`, enter a regular expression.
]
                     * @param _str Detection value. Should be in key string or regular expression. 
When the `MatchType` is `sunday`, enter a string or a string in hexadecimal byte code representation. For example, a string "123" corresponds to the hexadecimal byte code "\x313233".
When the `MatchType` is `pcre`, enter a regular expression.
]
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
                     * 获取Detection depth starting from the detection position. Value range: [0, 1500].
                     * @return Depth Detection depth starting from the detection position. Value range: [0, 1500].
                     * 
                     */
                    int64_t GetDepth() const;

                    /**
                     * 设置Detection depth starting from the detection position. Value range: [0, 1500].
                     * @param _depth Detection depth starting from the detection position. Value range: [0, 1500].
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
                     * 获取Offset starting from the detection position. Value range: [0, Depth].
                     * @return Offset Offset starting from the detection position. Value range: [0, Depth].
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset starting from the detection position. Value range: [0, Depth].
                     * @param _offset Offset starting from the detection position. Value range: [0, Depth].
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
                     * 获取Whether the detection value is included:
`0`: included
`1`: excluded
]
                     * @return IsNot Whether the detection value is included:
`0`: included
`1`: excluded
]
                     * 
                     */
                    int64_t GetIsNot() const;

                    /**
                     * 设置Whether the detection value is included:
`0`: included
`1`: excluded
]
                     * @param _isNot Whether the detection value is included:
`0`: included
`1`: excluded
]
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
                     * 获取Relationship between the first and second detection conditions:
`and`: under both the first and second detection conditions
`none`: under only the first detection condition
]
                     * @return MatchLogic Relationship between the first and second detection conditions:
`and`: under both the first and second detection conditions
`none`: under only the first detection condition
]
                     * 
                     */
                    std::string GetMatchLogic() const;

                    /**
                     * 设置Relationship between the first and second detection conditions:
`and`: under both the first and second detection conditions
`none`: under only the first detection condition
]
                     * @param _matchLogic Relationship between the first and second detection conditions:
`and`: under both the first and second detection conditions
`none`: under only the first detection condition
]
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
                     * 获取The second detection position:
`begin_l5`: load
`no_match`: no match
]
                     * @return MatchBegin2 The second detection position:
`begin_l5`: load
`no_match`: no match
]
                     * 
                     */
                    std::string GetMatchBegin2() const;

                    /**
                     * 设置The second detection position:
`begin_l5`: load
`no_match`: no match
]
                     * @param _matchBegin2 The second detection position:
`begin_l5`: load
`no_match`: no match
]
                     * 
                     */
                    void SetMatchBegin2(const std::string& _matchBegin2);

                    /**
                     * 判断参数 MatchBegin2 是否已赋值
                     * @return MatchBegin2 是否已赋值
                     * 
                     */
                    bool MatchBegin2HasBeenSet() const;

                    /**
                     * 获取The second detection type:
`sunday`: keyword
`pcre`: regular expression
]
                     * @return MatchType2 The second detection type:
`sunday`: keyword
`pcre`: regular expression
]
                     * 
                     */
                    std::string GetMatchType2() const;

                    /**
                     * 设置The second detection type:
`sunday`: keyword
`pcre`: regular expression
]
                     * @param _matchType2 The second detection type:
`sunday`: keyword
`pcre`: regular expression
]
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
                     * 获取The second detection value. Should be in key string or regular expression.
When the `MatchType` is `sunday`, enter a string or a string in hexadecimal byte code representation. For example, a string "123" corresponds to the hexadecimal byte code "\x313233".
When the `MatchType` is `pcre`, enter a regular expression.
]
                     * @return Str2 The second detection value. Should be in key string or regular expression.
When the `MatchType` is `sunday`, enter a string or a string in hexadecimal byte code representation. For example, a string "123" corresponds to the hexadecimal byte code "\x313233".
When the `MatchType` is `pcre`, enter a regular expression.
]
                     * 
                     */
                    std::string GetStr2() const;

                    /**
                     * 设置The second detection value. Should be in key string or regular expression.
When the `MatchType` is `sunday`, enter a string or a string in hexadecimal byte code representation. For example, a string "123" corresponds to the hexadecimal byte code "\x313233".
When the `MatchType` is `pcre`, enter a regular expression.
]
                     * @param _str2 The second detection value. Should be in key string or regular expression.
When the `MatchType` is `sunday`, enter a string or a string in hexadecimal byte code representation. For example, a string "123" corresponds to the hexadecimal byte code "\x313233".
When the `MatchType` is `pcre`, enter a regular expression.
]
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
                     * 获取Detection depth starting from the second detection position. Value range: [0, 1500].
                     * @return Depth2 Detection depth starting from the second detection position. Value range: [0, 1500].
                     * 
                     */
                    int64_t GetDepth2() const;

                    /**
                     * 设置Detection depth starting from the second detection position. Value range: [0, 1500].
                     * @param _depth2 Detection depth starting from the second detection position. Value range: [0, 1500].
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
                     * 获取Offset starting from the second detection position. Value range: [0, Depth2].
                     * @return Offset2 Offset starting from the second detection position. Value range: [0, Depth2].
                     * 
                     */
                    int64_t GetOffset2() const;

                    /**
                     * 设置Offset starting from the second detection position. Value range: [0, Depth2].
                     * @param _offset2 Offset starting from the second detection position. Value range: [0, Depth2].
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
                     * 获取Whether the second detection value is included:
`0`: included
`1`: excluded
]
                     * @return IsNot2 Whether the second detection value is included:
`0`: included
`1`: excluded
]
                     * 
                     */
                    int64_t GetIsNot2() const;

                    /**
                     * 设置Whether the second detection value is included:
`0`: included
`1`: excluded
]
                     * @param _isNot2 Whether the second detection value is included:
`0`: included
`1`: excluded
]
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
                     * 获取A rule ID is generated after a feature filtering configuration is added successfully. Leave this field empty when adding a new feature filtering configuration.
                     * @return Id A rule ID is generated after a feature filtering configuration is added successfully. Leave this field empty when adding a new feature filtering configuration.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置A rule ID is generated after a feature filtering configuration is added successfully. Leave this field empty when adding a new feature filtering configuration.
                     * @param _id A rule ID is generated after a feature filtering configuration is added successfully. Leave this field empty when adding a new feature filtering configuration.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Byte threshold of the packet. Packets larger than the specified size are not returned. It must be an integer larger than 1.
                     * @return PktLenGT Byte threshold of the packet. Packets larger than the specified size are not returned. It must be an integer larger than 1.
                     * 
                     */
                    int64_t GetPktLenGT() const;

                    /**
                     * 设置Byte threshold of the packet. Packets larger than the specified size are not returned. It must be an integer larger than 1.
                     * @param _pktLenGT Byte threshold of the packet. Packets larger than the specified size are not returned. It must be an integer larger than 1.
                     * 
                     */
                    void SetPktLenGT(const int64_t& _pktLenGT);

                    /**
                     * 判断参数 PktLenGT 是否已赋值
                     * @return PktLenGT 是否已赋值
                     * 
                     */
                    bool PktLenGTHasBeenSet() const;

                private:

                    /**
                     * Protocol. Valid values: `tcp`, `udp`, `icmp`, `all`.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Start source port. Value range: 0–65535.
                     */
                    int64_t m_sportStart;
                    bool m_sportStartHasBeenSet;

                    /**
                     * End source port. Value range: 0–65535. The value also should be greater than or equal to that of the start source port.
                     */
                    int64_t m_sportEnd;
                    bool m_sportEndHasBeenSet;

                    /**
                     * Start destination port
                     */
                    int64_t m_dportStart;
                    bool m_dportStartHasBeenSet;

                    /**
                     * End destination port. Value range: 1–65535. The value also should be greater than or equal to that of the start source port.
                     */
                    int64_t m_dportEnd;
                    bool m_dportEndHasBeenSet;

                    /**
                     * Minimum message length. Value range: 1–1500.
                     */
                    int64_t m_pktlenMin;
                    bool m_pktlenMinHasBeenSet;

                    /**
                     * Maximum message length. Value range: 1–1500. The value also should be greater than or equal to that of the minimum message length.
                     */
                    int64_t m_pktlenMax;
                    bool m_pktlenMaxHasBeenSet;

                    /**
                     * Action. Valid values:
`drop`: discards the request.
`transmit`: allows the request.
`drop_black`: discards the request and adds the IP to blocklist.
`drop_rst`: blocks the request.
`drop_black_rst`: blocks the request and adds the IP to blocklist.
`forward`: continues protection.
]
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Detection location:
`begin_l3`: IP header
`begin_l4`: TCP/UDP header
`begin_l5`: T load
`no_match`: no match
]
                     */
                    std::string m_matchBegin;
                    bool m_matchBeginHasBeenSet;

                    /**
                     * Detection type:
`sunday`: keyword
`pcre`: regular expression
]
                     */
                    std::string m_matchType;
                    bool m_matchTypeHasBeenSet;

                    /**
                     * Detection value. Should be in key string or regular expression. 
When the `MatchType` is `sunday`, enter a string or a string in hexadecimal byte code representation. For example, a string "123" corresponds to the hexadecimal byte code "\x313233".
When the `MatchType` is `pcre`, enter a regular expression.
]
                     */
                    std::string m_str;
                    bool m_strHasBeenSet;

                    /**
                     * Detection depth starting from the detection position. Value range: [0, 1500].
                     */
                    int64_t m_depth;
                    bool m_depthHasBeenSet;

                    /**
                     * Offset starting from the detection position. Value range: [0, Depth].
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Whether the detection value is included:
`0`: included
`1`: excluded
]
                     */
                    int64_t m_isNot;
                    bool m_isNotHasBeenSet;

                    /**
                     * Relationship between the first and second detection conditions:
`and`: under both the first and second detection conditions
`none`: under only the first detection condition
]
                     */
                    std::string m_matchLogic;
                    bool m_matchLogicHasBeenSet;

                    /**
                     * The second detection position:
`begin_l5`: load
`no_match`: no match
]
                     */
                    std::string m_matchBegin2;
                    bool m_matchBegin2HasBeenSet;

                    /**
                     * The second detection type:
`sunday`: keyword
`pcre`: regular expression
]
                     */
                    std::string m_matchType2;
                    bool m_matchType2HasBeenSet;

                    /**
                     * The second detection value. Should be in key string or regular expression.
When the `MatchType` is `sunday`, enter a string or a string in hexadecimal byte code representation. For example, a string "123" corresponds to the hexadecimal byte code "\x313233".
When the `MatchType` is `pcre`, enter a regular expression.
]
                     */
                    std::string m_str2;
                    bool m_str2HasBeenSet;

                    /**
                     * Detection depth starting from the second detection position. Value range: [0, 1500].
                     */
                    int64_t m_depth2;
                    bool m_depth2HasBeenSet;

                    /**
                     * Offset starting from the second detection position. Value range: [0, Depth2].
                     */
                    int64_t m_offset2;
                    bool m_offset2HasBeenSet;

                    /**
                     * Whether the second detection value is included:
`0`: included
`1`: excluded
]
                     */
                    int64_t m_isNot2;
                    bool m_isNot2HasBeenSet;

                    /**
                     * A rule ID is generated after a feature filtering configuration is added successfully. Leave this field empty when adding a new feature filtering configuration.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Byte threshold of the packet. Packets larger than the specified size are not returned. It must be an integer larger than 1.
                     */
                    int64_t m_pktLenGT;
                    bool m_pktLenGTHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PACKETFILTERCONFIG_H_
