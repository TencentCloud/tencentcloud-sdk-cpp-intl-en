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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DDOSSPEEDLIMITCONFIG_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DDOSSPEEDLIMITCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/SpeedValue.h>
#include <tencentcloud/antiddos/v20200309/model/PortSegment.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * Anti-DDoS access rate limit configuration
                */
                class DDoSSpeedLimitConfig : public AbstractModel
                {
                public:
                    DDoSSpeedLimitConfig();
                    ~DDoSSpeedLimitConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rate limit mode. Valid values:
`1`: rate limit based on the real server IP
`2`: rate limit based on the destination port
]
                     * @return Mode Rate limit mode. Valid values:
`1`: rate limit based on the real server IP
`2`: rate limit based on the destination port
]
                     */
                    uint64_t GetMode() const;

                    /**
                     * 设置Rate limit mode. Valid values:
`1`: rate limit based on the real server IP
`2`: rate limit based on the destination port
]
                     * @param Mode Rate limit mode. Valid values:
`1`: rate limit based on the real server IP
`2`: rate limit based on the destination port
]
                     */
                    void SetMode(const uint64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Rate limit value. This field contains at least one valid rate limit type. Note that only up to one value of each type is supported.
                     * @return SpeedValues Rate limit value. This field contains at least one valid rate limit type. Note that only up to one value of each type is supported.
                     */
                    std::vector<SpeedValue> GetSpeedValues() const;

                    /**
                     * 设置Rate limit value. This field contains at least one valid rate limit type. Note that only up to one value of each type is supported.
                     * @param SpeedValues Rate limit value. This field contains at least one valid rate limit type. Note that only up to one value of each type is supported.
                     */
                    void SetSpeedValues(const std::vector<SpeedValue>& _speedValues);

                    /**
                     * 判断参数 SpeedValues 是否已赋值
                     * @return SpeedValues 是否已赋值
                     */
                    bool SpeedValuesHasBeenSet() const;

                    /**
                     * 获取This field is replaced with a new field DstPortList.
                     * @return DstPortScopes This field is replaced with a new field DstPortList.
                     */
                    std::vector<PortSegment> GetDstPortScopes() const;

                    /**
                     * 设置This field is replaced with a new field DstPortList.
                     * @param DstPortScopes This field is replaced with a new field DstPortList.
                     */
                    void SetDstPortScopes(const std::vector<PortSegment>& _dstPortScopes);

                    /**
                     * 判断参数 DstPortScopes 是否已赋值
                     * @return DstPortScopes 是否已赋值
                     */
                    bool DstPortScopesHasBeenSet() const;

                    /**
                     * 获取
                     * @return Id 
                     */
                    std::string GetId() const;

                    /**
                     * 设置
                     * @param Id 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取IP protocol number. Valid values:
`ALL`: all protocols
`TCP`: TCP protocol
`UDP`: UDP protocol
`SMP`: SMP protocol
`1;2–100`: user-defined protocol with up to 8 ranges
]
Note: For custom protocol ranges, only protocol number is supported. Multiple ranges are separated by ";". If the value is `ALL`, any other protocol or protocol number should be excluded.
                     * @return ProtocolList IP protocol number. Valid values:
`ALL`: all protocols
`TCP`: TCP protocol
`UDP`: UDP protocol
`SMP`: SMP protocol
`1;2–100`: user-defined protocol with up to 8 ranges
]
Note: For custom protocol ranges, only protocol number is supported. Multiple ranges are separated by ";". If the value is `ALL`, any other protocol or protocol number should be excluded.
                     */
                    std::string GetProtocolList() const;

                    /**
                     * 设置IP protocol number. Valid values:
`ALL`: all protocols
`TCP`: TCP protocol
`UDP`: UDP protocol
`SMP`: SMP protocol
`1;2–100`: user-defined protocol with up to 8 ranges
]
Note: For custom protocol ranges, only protocol number is supported. Multiple ranges are separated by ";". If the value is `ALL`, any other protocol or protocol number should be excluded.
                     * @param ProtocolList IP protocol number. Valid values:
`ALL`: all protocols
`TCP`: TCP protocol
`UDP`: UDP protocol
`SMP`: SMP protocol
`1;2–100`: user-defined protocol with up to 8 ranges
]
Note: For custom protocol ranges, only protocol number is supported. Multiple ranges are separated by ";". If the value is `ALL`, any other protocol or protocol number should be excluded.
                     */
                    void SetProtocolList(const std::string& _protocolList);

                    /**
                     * 判断参数 ProtocolList 是否已赋值
                     * @return ProtocolList 是否已赋值
                     */
                    bool ProtocolListHasBeenSet() const;

                    /**
                     * 获取Port range list, which contains up to 8 ranges. Use ";" to separate multiple ports and "–" to indicate a range of ports, as described in the following formats: `0–65535`, `80;443;1000–2000`.
                     * @return DstPortList Port range list, which contains up to 8 ranges. Use ";" to separate multiple ports and "–" to indicate a range of ports, as described in the following formats: `0–65535`, `80;443;1000–2000`.
                     */
                    std::string GetDstPortList() const;

                    /**
                     * 设置Port range list, which contains up to 8 ranges. Use ";" to separate multiple ports and "–" to indicate a range of ports, as described in the following formats: `0–65535`, `80;443;1000–2000`.
                     * @param DstPortList Port range list, which contains up to 8 ranges. Use ";" to separate multiple ports and "–" to indicate a range of ports, as described in the following formats: `0–65535`, `80;443;1000–2000`.
                     */
                    void SetDstPortList(const std::string& _dstPortList);

                    /**
                     * 判断参数 DstPortList 是否已赋值
                     * @return DstPortList 是否已赋值
                     */
                    bool DstPortListHasBeenSet() const;

                private:

                    /**
                     * Rate limit mode. Valid values:
`1`: rate limit based on the real server IP
`2`: rate limit based on the destination port
]
                     */
                    uint64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Rate limit value. This field contains at least one valid rate limit type. Note that only up to one value of each type is supported.
                     */
                    std::vector<SpeedValue> m_speedValues;
                    bool m_speedValuesHasBeenSet;

                    /**
                     * This field is replaced with a new field DstPortList.
                     */
                    std::vector<PortSegment> m_dstPortScopes;
                    bool m_dstPortScopesHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * IP protocol number. Valid values:
`ALL`: all protocols
`TCP`: TCP protocol
`UDP`: UDP protocol
`SMP`: SMP protocol
`1;2–100`: user-defined protocol with up to 8 ranges
]
Note: For custom protocol ranges, only protocol number is supported. Multiple ranges are separated by ";". If the value is `ALL`, any other protocol or protocol number should be excluded.
                     */
                    std::string m_protocolList;
                    bool m_protocolListHasBeenSet;

                    /**
                     * Port range list, which contains up to 8 ranges. Use ";" to separate multiple ports and "–" to indicate a range of ports, as described in the following formats: `0–65535`, `80;443;1000–2000`.
                     */
                    std::string m_dstPortList;
                    bool m_dstPortListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DDOSSPEEDLIMITCONFIG_H_
