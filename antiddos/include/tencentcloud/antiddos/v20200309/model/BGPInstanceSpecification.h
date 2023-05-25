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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPINSTANCESPECIFICATION_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPINSTANCESPECIFICATION_H_

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
                * Anti-DDoS Pro instance specifications
                */
                class BGPInstanceSpecification : public AbstractModel
                {
                public:
                    BGPInstanceSpecification();
                    ~BGPInstanceSpecification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Base protection bandwidth (in Gbps)
                     * @return ProtectBandwidth Base protection bandwidth (in Gbps)
                     */
                    uint64_t GetProtectBandwidth() const;

                    /**
                     * 设置Base protection bandwidth (in Gbps)
                     * @param ProtectBandwidth Base protection bandwidth (in Gbps)
                     */
                    void SetProtectBandwidth(const uint64_t& _protectBandwidth);

                    /**
                     * 判断参数 ProtectBandwidth 是否已赋值
                     * @return ProtectBandwidth 是否已赋值
                     */
                    bool ProtectBandwidthHasBeenSet() const;

                    /**
                     * 获取Number of protection chances
                     * @return ProtectCountLimit Number of protection chances
                     */
                    uint64_t GetProtectCountLimit() const;

                    /**
                     * 设置Number of protection chances
                     * @param ProtectCountLimit Number of protection chances
                     */
                    void SetProtectCountLimit(const uint64_t& _protectCountLimit);

                    /**
                     * 判断参数 ProtectCountLimit 是否已赋值
                     * @return ProtectCountLimit 是否已赋值
                     */
                    bool ProtectCountLimitHasBeenSet() const;

                    /**
                     * 获取Number of protected IPs
                     * @return ProtectIPNumberLimit Number of protected IPs
                     */
                    uint64_t GetProtectIPNumberLimit() const;

                    /**
                     * 设置Number of protected IPs
                     * @param ProtectIPNumberLimit Number of protected IPs
                     */
                    void SetProtectIPNumberLimit(const uint64_t& _protectIPNumberLimit);

                    /**
                     * 判断参数 ProtectIPNumberLimit 是否已赋值
                     * @return ProtectIPNumberLimit 是否已赋值
                     */
                    bool ProtectIPNumberLimitHasBeenSet() const;

                    /**
                     * 获取Auto-renewal status. Values:
`0`: Disabled
`1`: Enabled
]
                     * @return AutoRenewFlag Auto-renewal status. Values:
`0`: Disabled
`1`: Enabled
]
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Auto-renewal status. Values:
`0`: Disabled
`1`: Enabled
]
                     * @param AutoRenewFlag Auto-renewal status. Values:
`0`: Disabled
`1`: Enabled
]
                     */
                    void SetAutoRenewFlag(const uint64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取Protection type of Anti-DDoS Pro. Valid values: `0` (general protection) and `1` (Lighthouse-based protection).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UnionPackFlag Protection type of Anti-DDoS Pro. Valid values: `0` (general protection) and `1` (Lighthouse-based protection).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetUnionPackFlag() const;

                    /**
                     * 设置Protection type of Anti-DDoS Pro. Valid values: `0` (general protection) and `1` (Lighthouse-based protection).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param UnionPackFlag Protection type of Anti-DDoS Pro. Valid values: `0` (general protection) and `1` (Lighthouse-based protection).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUnionPackFlag(const uint64_t& _unionPackFlag);

                    /**
                     * 判断参数 UnionPackFlag 是否已赋值
                     * @return UnionPackFlag 是否已赋值
                     */
                    bool UnionPackFlagHasBeenSet() const;

                    /**
                     * 获取Application bandwidth
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServiceBandWidth Application bandwidth
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetServiceBandWidth() const;

                    /**
                     * 设置Application bandwidth
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ServiceBandWidth Application bandwidth
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetServiceBandWidth(const uint64_t& _serviceBandWidth);

                    /**
                     * 判断参数 ServiceBandWidth 是否已赋值
                     * @return ServiceBandWidth 是否已赋值
                     */
                    bool ServiceBandWidthHasBeenSet() const;

                    /**
                     * 获取Whether it’s an Anti-DDoS Pro Premium edition. Values: `0` (General edition); `1` (Premium edition).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BattleEditionFlag Whether it’s an Anti-DDoS Pro Premium edition. Values: `0` (General edition); `1` (Premium edition).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetBattleEditionFlag() const;

                    /**
                     * 设置Whether it’s an Anti-DDoS Pro Premium edition. Values: `0` (General edition); `1` (Premium edition).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param BattleEditionFlag Whether it’s an Anti-DDoS Pro Premium edition. Values: `0` (General edition); `1` (Premium edition).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetBattleEditionFlag(const uint64_t& _battleEditionFlag);

                    /**
                     * 判断参数 BattleEditionFlag 是否已赋值
                     * @return BattleEditionFlag 是否已赋值
                     */
                    bool BattleEditionFlagHasBeenSet() const;

                    /**
                     * 获取Whether it’s an Anti-DDoS Pro Standard edition. Values: `0` (General edition); `1` (Standard edition).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ChannelEditionFlag Whether it’s an Anti-DDoS Pro Standard edition. Values: `0` (General edition); `1` (Standard edition).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetChannelEditionFlag() const;

                    /**
                     * 设置Whether it’s an Anti-DDoS Pro Standard edition. Values: `0` (General edition); `1` (Standard edition).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ChannelEditionFlag Whether it’s an Anti-DDoS Pro Standard edition. Values: `0` (General edition); `1` (Standard edition).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetChannelEditionFlag(const uint64_t& _channelEditionFlag);

                    /**
                     * 判断参数 ChannelEditionFlag 是否已赋值
                     * @return ChannelEditionFlag 是否已赋值
                     */
                    bool ChannelEditionFlagHasBeenSet() const;

                    /**
                     * 获取Whether it’s an Anti-DDoS Pro Enterprise edition. Values: `0` (General edition); `1` (Enterprise edition).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnterpriseFlag Whether it’s an Anti-DDoS Pro Enterprise edition. Values: `0` (General edition); `1` (Enterprise edition).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetEnterpriseFlag() const;

                    /**
                     * 设置Whether it’s an Anti-DDoS Pro Enterprise edition. Values: `0` (General edition); `1` (Enterprise edition).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param EnterpriseFlag Whether it’s an Anti-DDoS Pro Enterprise edition. Values: `0` (General edition); `1` (Enterprise edition).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEnterpriseFlag(const uint64_t& _enterpriseFlag);

                    /**
                     * 判断参数 EnterpriseFlag 是否已赋值
                     * @return EnterpriseFlag 是否已赋值
                     */
                    bool EnterpriseFlagHasBeenSet() const;

                    /**
                     * 获取Elastic bandwidth threshold of the Anti-DDoS Pro Enterprise edition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ElasticLimit Elastic bandwidth threshold of the Anti-DDoS Pro Enterprise edition.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetElasticLimit() const;

                    /**
                     * 设置Elastic bandwidth threshold of the Anti-DDoS Pro Enterprise edition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ElasticLimit Elastic bandwidth threshold of the Anti-DDoS Pro Enterprise edition.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetElasticLimit(const uint64_t& _elasticLimit);

                    /**
                     * 判断参数 ElasticLimit 是否已赋值
                     * @return ElasticLimit 是否已赋值
                     */
                    bool ElasticLimitHasBeenSet() const;

                    /**
                     * 获取Protection bandwidth after the plan downgrade, in Gbps. 
Note: This field may return `null`, indicating that no valid value was found.
                     * @return DownGradeProtect Protection bandwidth after the plan downgrade, in Gbps. 
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    uint64_t GetDownGradeProtect() const;

                    /**
                     * 设置Protection bandwidth after the plan downgrade, in Gbps. 
Note: This field may return `null`, indicating that no valid value was found.
                     * @param DownGradeProtect Protection bandwidth after the plan downgrade, in Gbps. 
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetDownGradeProtect(const uint64_t& _downGradeProtect);

                    /**
                     * 判断参数 DownGradeProtect 是否已赋值
                     * @return DownGradeProtect 是否已赋值
                     */
                    bool DownGradeProtectHasBeenSet() const;

                private:

                    /**
                     * Base protection bandwidth (in Gbps)
                     */
                    uint64_t m_protectBandwidth;
                    bool m_protectBandwidthHasBeenSet;

                    /**
                     * Number of protection chances
                     */
                    uint64_t m_protectCountLimit;
                    bool m_protectCountLimitHasBeenSet;

                    /**
                     * Number of protected IPs
                     */
                    uint64_t m_protectIPNumberLimit;
                    bool m_protectIPNumberLimitHasBeenSet;

                    /**
                     * Auto-renewal status. Values:
`0`: Disabled
`1`: Enabled
]
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Protection type of Anti-DDoS Pro. Valid values: `0` (general protection) and `1` (Lighthouse-based protection).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_unionPackFlag;
                    bool m_unionPackFlagHasBeenSet;

                    /**
                     * Application bandwidth
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_serviceBandWidth;
                    bool m_serviceBandWidthHasBeenSet;

                    /**
                     * Whether it’s an Anti-DDoS Pro Premium edition. Values: `0` (General edition); `1` (Premium edition).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_battleEditionFlag;
                    bool m_battleEditionFlagHasBeenSet;

                    /**
                     * Whether it’s an Anti-DDoS Pro Standard edition. Values: `0` (General edition); `1` (Standard edition).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_channelEditionFlag;
                    bool m_channelEditionFlagHasBeenSet;

                    /**
                     * Whether it’s an Anti-DDoS Pro Enterprise edition. Values: `0` (General edition); `1` (Enterprise edition).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_enterpriseFlag;
                    bool m_enterpriseFlagHasBeenSet;

                    /**
                     * Elastic bandwidth threshold of the Anti-DDoS Pro Enterprise edition.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_elasticLimit;
                    bool m_elasticLimitHasBeenSet;

                    /**
                     * Protection bandwidth after the plan downgrade, in Gbps. 
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    uint64_t m_downGradeProtect;
                    bool m_downGradeProtectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPINSTANCESPECIFICATION_H_
