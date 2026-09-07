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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_STANDARDPLUSPACKAGECONFIG_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_STANDARDPLUSPACKAGECONFIG_H_

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
                * {
    "Region": "ap-guangzhou",
    "ProtectCount": "TWO_TIMES",
    "ProtectIpCount": 1,
    "Bandwidth": 50,
    "ElasticBandwidthFlag": true
}
                */
                class StandardPlusPackageConfig : public AbstractModel
                {
                public:
                    StandardPlusPackageConfig();
                    ~StandardPlusPackageConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the region of the anti-ddos pro package.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Region Specifies the region of the anti-ddos pro package.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Specifies the region of the anti-ddos pro package.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _region Specifies the region of the anti-ddos pro package.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Protection TIMES: TWO_TIMES: full protection twice. UNLIMITED: UNLIMITED protection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProtectCount Protection TIMES: TWO_TIMES: full protection twice. UNLIMITED: UNLIMITED protection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProtectCount() const;

                    /**
                     * 设置Protection TIMES: TWO_TIMES: full protection twice. UNLIMITED: UNLIMITED protection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _protectCount Protection TIMES: TWO_TIMES: full protection twice. UNLIMITED: UNLIMITED protection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProtectCount(const std::string& _protectCount);

                    /**
                     * 判断参数 ProtectCount 是否已赋值
                     * @return ProtectCount 是否已赋值
                     * 
                     */
                    bool ProtectCountHasBeenSet() const;

                    /**
                     * 获取Specifies the number of protected ips.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProtectIpCount Specifies the number of protected ips.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetProtectIpCount() const;

                    /**
                     * 设置Specifies the number of protected ips.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _protectIpCount Specifies the number of protected ips.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProtectIpCount(const uint64_t& _protectIpCount);

                    /**
                     * 判断参数 ProtectIpCount 是否已赋值
                     * @return ProtectIpCount 是否已赋值
                     * 
                     */
                    bool ProtectIpCountHasBeenSet() const;

                    /**
                     * 获取Protection bandwidth is 50 Mbps.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Bandwidth Protection bandwidth is 50 Mbps.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置Protection bandwidth is 50 Mbps.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bandwidth Protection bandwidth is 50 Mbps.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBandwidth(const uint64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取Elastic scaling enabled for business bandwidth.
true: enabled.
Specifies whether the feature is disabled. valid values: false. 
Disabled by default.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ElasticBandwidthFlag Elastic scaling enabled for business bandwidth.
true: enabled.
Specifies whether the feature is disabled. valid values: false. 
Disabled by default.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetElasticBandwidthFlag() const;

                    /**
                     * 设置Elastic scaling enabled for business bandwidth.
true: enabled.
Specifies whether the feature is disabled. valid values: false. 
Disabled by default.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _elasticBandwidthFlag Elastic scaling enabled for business bandwidth.
true: enabled.
Specifies whether the feature is disabled. valid values: false. 
Disabled by default.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetElasticBandwidthFlag(const bool& _elasticBandwidthFlag);

                    /**
                     * 判断参数 ElasticBandwidthFlag 是否已赋值
                     * @return ElasticBandwidthFlag 是否已赋值
                     * 
                     */
                    bool ElasticBandwidthFlagHasBeenSet() const;

                private:

                    /**
                     * Specifies the region of the anti-ddos pro package.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Protection TIMES: TWO_TIMES: full protection twice. UNLIMITED: UNLIMITED protection.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_protectCount;
                    bool m_protectCountHasBeenSet;

                    /**
                     * Specifies the number of protected ips.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_protectIpCount;
                    bool m_protectIpCountHasBeenSet;

                    /**
                     * Protection bandwidth is 50 Mbps.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * Elastic scaling enabled for business bandwidth.
true: enabled.
Specifies whether the feature is disabled. valid values: false. 
Disabled by default.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_elasticBandwidthFlag;
                    bool m_elasticBandwidthFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_STANDARDPLUSPACKAGECONFIG_H_
