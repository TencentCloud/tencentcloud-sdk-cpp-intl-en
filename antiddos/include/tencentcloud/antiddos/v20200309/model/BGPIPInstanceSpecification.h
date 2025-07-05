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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPIPINSTANCESPECIFICATION_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPIPINSTANCESPECIFICATION_H_

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
                * Anti-DDoS Advanced instance specifications
                */
                class BGPIPInstanceSpecification : public AbstractModel
                {
                public:
                    BGPIPInstanceSpecification();
                    ~BGPIPInstanceSpecification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Base protection bandwidth (in Mbps)
                     * @return ProtectBandwidth Base protection bandwidth (in Mbps)
                     * 
                     */
                    uint64_t GetProtectBandwidth() const;

                    /**
                     * 设置Base protection bandwidth (in Mbps)
                     * @param _protectBandwidth Base protection bandwidth (in Mbps)
                     * 
                     */
                    void SetProtectBandwidth(const uint64_t& _protectBandwidth);

                    /**
                     * 判断参数 ProtectBandwidth 是否已赋值
                     * @return ProtectBandwidth 是否已赋值
                     * 
                     */
                    bool ProtectBandwidthHasBeenSet() const;

                    /**
                     * 获取CC protection bandwidth (in QPS)
                     * @return ProtectCCQPS CC protection bandwidth (in QPS)
                     * 
                     */
                    uint64_t GetProtectCCQPS() const;

                    /**
                     * 设置CC protection bandwidth (in QPS)
                     * @param _protectCCQPS CC protection bandwidth (in QPS)
                     * 
                     */
                    void SetProtectCCQPS(const uint64_t& _protectCCQPS);

                    /**
                     * 判断参数 ProtectCCQPS 是否已赋值
                     * @return ProtectCCQPS 是否已赋值
                     * 
                     */
                    bool ProtectCCQPSHasBeenSet() const;

                    /**
                     * 获取Normal application bandwidth (in Mbps)
                     * @return NormalBandwidth Normal application bandwidth (in Mbps)
                     * 
                     */
                    uint64_t GetNormalBandwidth() const;

                    /**
                     * 设置Normal application bandwidth (in Mbps)
                     * @param _normalBandwidth Normal application bandwidth (in Mbps)
                     * 
                     */
                    void SetNormalBandwidth(const uint64_t& _normalBandwidth);

                    /**
                     * 判断参数 NormalBandwidth 是否已赋值
                     * @return NormalBandwidth 是否已赋值
                     * 
                     */
                    bool NormalBandwidthHasBeenSet() const;

                    /**
                     * 获取Number of forwarding rules
                     * @return ForwardRulesLimit Number of forwarding rules
                     * 
                     */
                    uint64_t GetForwardRulesLimit() const;

                    /**
                     * 设置Number of forwarding rules
                     * @param _forwardRulesLimit Number of forwarding rules
                     * 
                     */
                    void SetForwardRulesLimit(const uint64_t& _forwardRulesLimit);

                    /**
                     * 判断参数 ForwardRulesLimit 是否已赋值
                     * @return ForwardRulesLimit 是否已赋值
                     * 
                     */
                    bool ForwardRulesLimitHasBeenSet() const;

                    /**
                     * 获取Auto-renewal status. Valid values:
`0`: disabled
`1`: enabled
]
                     * @return AutoRenewFlag Auto-renewal status. Valid values:
`0`: disabled
`1`: enabled
]
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Auto-renewal status. Valid values:
`0`: disabled
`1`: enabled
]
                     * @param _autoRenewFlag Auto-renewal status. Valid values:
`0`: disabled
`1`: enabled
]
                     * 
                     */
                    void SetAutoRenewFlag(const uint64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取Anti-DDoS Advanced line. Valid values:
`1`: BGP
`2`: China Telecom
`3`: China Unicom
`4`: China Mobile
`99`: third-party line
]
                     * @return Line Anti-DDoS Advanced line. Valid values:
`1`: BGP
`2`: China Telecom
`3`: China Unicom
`4`: China Mobile
`99`: third-party line
]
                     * 
                     */
                    uint64_t GetLine() const;

                    /**
                     * 设置Anti-DDoS Advanced line. Valid values:
`1`: BGP
`2`: China Telecom
`3`: China Unicom
`4`: China Mobile
`99`: third-party line
]
                     * @param _line Anti-DDoS Advanced line. Valid values:
`1`: BGP
`2`: China Telecom
`3`: China Unicom
`4`: China Mobile
`99`: third-party line
]
                     * 
                     */
                    void SetLine(const uint64_t& _line);

                    /**
                     * 判断参数 Line 是否已赋值
                     * @return Line 是否已赋值
                     * 
                     */
                    bool LineHasBeenSet() const;

                    /**
                     * 获取Elastic protection bandwidth (in Mbps)
                     * @return ElasticBandwidth Elastic protection bandwidth (in Mbps)
                     * 
                     */
                    uint64_t GetElasticBandwidth() const;

                    /**
                     * 设置Elastic protection bandwidth (in Mbps)
                     * @param _elasticBandwidth Elastic protection bandwidth (in Mbps)
                     * 
                     */
                    void SetElasticBandwidth(const uint64_t& _elasticBandwidth);

                    /**
                     * 判断参数 ElasticBandwidth 是否已赋值
                     * @return ElasticBandwidth 是否已赋值
                     * 
                     */
                    bool ElasticBandwidthHasBeenSet() const;

                private:

                    /**
                     * Base protection bandwidth (in Mbps)
                     */
                    uint64_t m_protectBandwidth;
                    bool m_protectBandwidthHasBeenSet;

                    /**
                     * CC protection bandwidth (in QPS)
                     */
                    uint64_t m_protectCCQPS;
                    bool m_protectCCQPSHasBeenSet;

                    /**
                     * Normal application bandwidth (in Mbps)
                     */
                    uint64_t m_normalBandwidth;
                    bool m_normalBandwidthHasBeenSet;

                    /**
                     * Number of forwarding rules
                     */
                    uint64_t m_forwardRulesLimit;
                    bool m_forwardRulesLimitHasBeenSet;

                    /**
                     * Auto-renewal status. Valid values:
`0`: disabled
`1`: enabled
]
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Anti-DDoS Advanced line. Valid values:
`1`: BGP
`2`: China Telecom
`3`: China Unicom
`4`: China Mobile
`99`: third-party line
]
                     */
                    uint64_t m_line;
                    bool m_lineHasBeenSet;

                    /**
                     * Elastic protection bandwidth (in Mbps)
                     */
                    uint64_t m_elasticBandwidth;
                    bool m_elasticBandwidthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPIPINSTANCESPECIFICATION_H_
