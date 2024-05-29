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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DDOSPROTECTIONCONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DDOSPROTECTIONCONFIG_H_

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
                * Exclusive DDoS protection specifications configuration applicable to Layer 4 proxy or web site service.
                */
                class DDosProtectionConfig : public AbstractModel
                {
                public:
                    DDosProtectionConfig();
                    ~DDosProtectionConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Dedicated anti-DDoS specifications in the Chinese mainland. For details, refer to [Dedicated Anti-DDoS Related Fees](https://intl.cloud.tencent.com/document/product/1552/94162?from_cn_redirect=1).
<li>PLATFORM: uses the default protection. Dedicated anti-DDoS is not enabled;</li>
<li>BASE30_MAX300: uses dedicated anti-DDoS, which provides 30 Gbps guaranteed protection bandwidth and up to 300 Gbps elastic protection bandwidth;</li>
<li>BASE60_MAX600: uses dedicated anti-DDoS, which provides 60 Gbps guaranteed protection bandwidth and up to 600 Gbps elastic protection bandwidth. </li>If this field is not specified, the default value 'PLATFORM' will be used.
                     * @return LevelMainland Dedicated anti-DDoS specifications in the Chinese mainland. For details, refer to [Dedicated Anti-DDoS Related Fees](https://intl.cloud.tencent.com/document/product/1552/94162?from_cn_redirect=1).
<li>PLATFORM: uses the default protection. Dedicated anti-DDoS is not enabled;</li>
<li>BASE30_MAX300: uses dedicated anti-DDoS, which provides 30 Gbps guaranteed protection bandwidth and up to 300 Gbps elastic protection bandwidth;</li>
<li>BASE60_MAX600: uses dedicated anti-DDoS, which provides 60 Gbps guaranteed protection bandwidth and up to 600 Gbps elastic protection bandwidth. </li>If this field is not specified, the default value 'PLATFORM' will be used.
                     * 
                     */
                    std::string GetLevelMainland() const;

                    /**
                     * 设置Dedicated anti-DDoS specifications in the Chinese mainland. For details, refer to [Dedicated Anti-DDoS Related Fees](https://intl.cloud.tencent.com/document/product/1552/94162?from_cn_redirect=1).
<li>PLATFORM: uses the default protection. Dedicated anti-DDoS is not enabled;</li>
<li>BASE30_MAX300: uses dedicated anti-DDoS, which provides 30 Gbps guaranteed protection bandwidth and up to 300 Gbps elastic protection bandwidth;</li>
<li>BASE60_MAX600: uses dedicated anti-DDoS, which provides 60 Gbps guaranteed protection bandwidth and up to 600 Gbps elastic protection bandwidth. </li>If this field is not specified, the default value 'PLATFORM' will be used.
                     * @param _levelMainland Dedicated anti-DDoS specifications in the Chinese mainland. For details, refer to [Dedicated Anti-DDoS Related Fees](https://intl.cloud.tencent.com/document/product/1552/94162?from_cn_redirect=1).
<li>PLATFORM: uses the default protection. Dedicated anti-DDoS is not enabled;</li>
<li>BASE30_MAX300: uses dedicated anti-DDoS, which provides 30 Gbps guaranteed protection bandwidth and up to 300 Gbps elastic protection bandwidth;</li>
<li>BASE60_MAX600: uses dedicated anti-DDoS, which provides 60 Gbps guaranteed protection bandwidth and up to 600 Gbps elastic protection bandwidth. </li>If this field is not specified, the default value 'PLATFORM' will be used.
                     * 
                     */
                    void SetLevelMainland(const std::string& _levelMainland);

                    /**
                     * 判断参数 LevelMainland 是否已赋值
                     * @return LevelMainland 是否已赋值
                     * 
                     */
                    bool LevelMainlandHasBeenSet() const;

                    /**
                     * 获取Configuration of elastic protection bandwidth for exclusive DDoS protection in the Chinese mainland.Valid only when exclusive DDoS protection in the Chinese mainland is enabled (refer to the LevelMainland parameter configuration), and the value has the following limitations:<li>When exclusive DDoS protection is enabled in the Chinese mainland and the 30 Gbps baseline protection bandwidth is used (the LevelMainland parameter value is BASE30_MAX300): the value range is 30 to 300 in Gbps;</li><li>When exclusive DDoS protection is enabled in the Chinese mainland and the 60 Gbps baseline protection bandwidth is used (the LevelMainland parameter value is BASE60_MAX600): the value range is 60 to 600 in Gbps;</li><li>When the default protection of the platform is used (the LevelMainland parameter value is PLATFORM): configuration is not supported, and the value of this parameter is invalid.</li>
                     * @return MaxBandwidthMainland Configuration of elastic protection bandwidth for exclusive DDoS protection in the Chinese mainland.Valid only when exclusive DDoS protection in the Chinese mainland is enabled (refer to the LevelMainland parameter configuration), and the value has the following limitations:<li>When exclusive DDoS protection is enabled in the Chinese mainland and the 30 Gbps baseline protection bandwidth is used (the LevelMainland parameter value is BASE30_MAX300): the value range is 30 to 300 in Gbps;</li><li>When exclusive DDoS protection is enabled in the Chinese mainland and the 60 Gbps baseline protection bandwidth is used (the LevelMainland parameter value is BASE60_MAX600): the value range is 60 to 600 in Gbps;</li><li>When the default protection of the platform is used (the LevelMainland parameter value is PLATFORM): configuration is not supported, and the value of this parameter is invalid.</li>
                     * 
                     */
                    uint64_t GetMaxBandwidthMainland() const;

                    /**
                     * 设置Configuration of elastic protection bandwidth for exclusive DDoS protection in the Chinese mainland.Valid only when exclusive DDoS protection in the Chinese mainland is enabled (refer to the LevelMainland parameter configuration), and the value has the following limitations:<li>When exclusive DDoS protection is enabled in the Chinese mainland and the 30 Gbps baseline protection bandwidth is used (the LevelMainland parameter value is BASE30_MAX300): the value range is 30 to 300 in Gbps;</li><li>When exclusive DDoS protection is enabled in the Chinese mainland and the 60 Gbps baseline protection bandwidth is used (the LevelMainland parameter value is BASE60_MAX600): the value range is 60 to 600 in Gbps;</li><li>When the default protection of the platform is used (the LevelMainland parameter value is PLATFORM): configuration is not supported, and the value of this parameter is invalid.</li>
                     * @param _maxBandwidthMainland Configuration of elastic protection bandwidth for exclusive DDoS protection in the Chinese mainland.Valid only when exclusive DDoS protection in the Chinese mainland is enabled (refer to the LevelMainland parameter configuration), and the value has the following limitations:<li>When exclusive DDoS protection is enabled in the Chinese mainland and the 30 Gbps baseline protection bandwidth is used (the LevelMainland parameter value is BASE30_MAX300): the value range is 30 to 300 in Gbps;</li><li>When exclusive DDoS protection is enabled in the Chinese mainland and the 60 Gbps baseline protection bandwidth is used (the LevelMainland parameter value is BASE60_MAX600): the value range is 60 to 600 in Gbps;</li><li>When the default protection of the platform is used (the LevelMainland parameter value is PLATFORM): configuration is not supported, and the value of this parameter is invalid.</li>
                     * 
                     */
                    void SetMaxBandwidthMainland(const uint64_t& _maxBandwidthMainland);

                    /**
                     * 判断参数 MaxBandwidthMainland 是否已赋值
                     * @return MaxBandwidthMainland 是否已赋值
                     * 
                     */
                    bool MaxBandwidthMainlandHasBeenSet() const;

                    /**
                     * 获取Dedicated anti-DDoS specifications in global regions (excluding the Chinese mainland).
<li>PLATFORM: uses the default protection. Dedicated anti-DDoS is not enabled;</li>
<li>ANYCAST300: uses dedicated anti-DDoS, which provides 300 Gbps protection bandwidth;</li>
<li>ANYCAST_ALLIN: uses dedicated anti-DDoS, which provides all available protection resources. </li>If this field is not specified, the default value 'PLATFORM' will be used.
                     * @return LevelOverseas Dedicated anti-DDoS specifications in global regions (excluding the Chinese mainland).
<li>PLATFORM: uses the default protection. Dedicated anti-DDoS is not enabled;</li>
<li>ANYCAST300: uses dedicated anti-DDoS, which provides 300 Gbps protection bandwidth;</li>
<li>ANYCAST_ALLIN: uses dedicated anti-DDoS, which provides all available protection resources. </li>If this field is not specified, the default value 'PLATFORM' will be used.
                     * 
                     */
                    std::string GetLevelOverseas() const;

                    /**
                     * 设置Dedicated anti-DDoS specifications in global regions (excluding the Chinese mainland).
<li>PLATFORM: uses the default protection. Dedicated anti-DDoS is not enabled;</li>
<li>ANYCAST300: uses dedicated anti-DDoS, which provides 300 Gbps protection bandwidth;</li>
<li>ANYCAST_ALLIN: uses dedicated anti-DDoS, which provides all available protection resources. </li>If this field is not specified, the default value 'PLATFORM' will be used.
                     * @param _levelOverseas Dedicated anti-DDoS specifications in global regions (excluding the Chinese mainland).
<li>PLATFORM: uses the default protection. Dedicated anti-DDoS is not enabled;</li>
<li>ANYCAST300: uses dedicated anti-DDoS, which provides 300 Gbps protection bandwidth;</li>
<li>ANYCAST_ALLIN: uses dedicated anti-DDoS, which provides all available protection resources. </li>If this field is not specified, the default value 'PLATFORM' will be used.
                     * 
                     */
                    void SetLevelOverseas(const std::string& _levelOverseas);

                    /**
                     * 判断参数 LevelOverseas 是否已赋值
                     * @return LevelOverseas 是否已赋值
                     * 
                     */
                    bool LevelOverseasHasBeenSet() const;

                private:

                    /**
                     * Dedicated anti-DDoS specifications in the Chinese mainland. For details, refer to [Dedicated Anti-DDoS Related Fees](https://intl.cloud.tencent.com/document/product/1552/94162?from_cn_redirect=1).
<li>PLATFORM: uses the default protection. Dedicated anti-DDoS is not enabled;</li>
<li>BASE30_MAX300: uses dedicated anti-DDoS, which provides 30 Gbps guaranteed protection bandwidth and up to 300 Gbps elastic protection bandwidth;</li>
<li>BASE60_MAX600: uses dedicated anti-DDoS, which provides 60 Gbps guaranteed protection bandwidth and up to 600 Gbps elastic protection bandwidth. </li>If this field is not specified, the default value 'PLATFORM' will be used.
                     */
                    std::string m_levelMainland;
                    bool m_levelMainlandHasBeenSet;

                    /**
                     * Configuration of elastic protection bandwidth for exclusive DDoS protection in the Chinese mainland.Valid only when exclusive DDoS protection in the Chinese mainland is enabled (refer to the LevelMainland parameter configuration), and the value has the following limitations:<li>When exclusive DDoS protection is enabled in the Chinese mainland and the 30 Gbps baseline protection bandwidth is used (the LevelMainland parameter value is BASE30_MAX300): the value range is 30 to 300 in Gbps;</li><li>When exclusive DDoS protection is enabled in the Chinese mainland and the 60 Gbps baseline protection bandwidth is used (the LevelMainland parameter value is BASE60_MAX600): the value range is 60 to 600 in Gbps;</li><li>When the default protection of the platform is used (the LevelMainland parameter value is PLATFORM): configuration is not supported, and the value of this parameter is invalid.</li>
                     */
                    uint64_t m_maxBandwidthMainland;
                    bool m_maxBandwidthMainlandHasBeenSet;

                    /**
                     * Dedicated anti-DDoS specifications in global regions (excluding the Chinese mainland).
<li>PLATFORM: uses the default protection. Dedicated anti-DDoS is not enabled;</li>
<li>ANYCAST300: uses dedicated anti-DDoS, which provides 300 Gbps protection bandwidth;</li>
<li>ANYCAST_ALLIN: uses dedicated anti-DDoS, which provides all available protection resources. </li>If this field is not specified, the default value 'PLATFORM' will be used.
                     */
                    std::string m_levelOverseas;
                    bool m_levelOverseasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DDOSPROTECTIONCONFIG_H_
