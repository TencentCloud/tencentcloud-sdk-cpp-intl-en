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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_ENTERPRISEPACKAGECONFIG_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_ENTERPRISEPACKAGECONFIG_H_

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
    "ProtectIpCount": 1,
    "BasicProtectBandwidth": 300,
    "Bandwidth": 100,
    "ElasticProtectBandwidth": 0,
    "ElasticBandwidthFlag": true
}
                */
                class EnterprisePackageConfig : public AbstractModel
                {
                public:
                    EnterprisePackageConfig();
                    ~EnterprisePackageConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the region of the anti-ddos pro package.
                     * @return Region Specifies the region of the anti-ddos pro package.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Specifies the region of the anti-ddos pro package.
                     * @param _region Specifies the region of the anti-ddos pro package.
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
                     * 获取Number of protected ips.
                     * @return ProtectIpCount Number of protected ips.
                     * 
                     */
                    uint64_t GetProtectIpCount() const;

                    /**
                     * 设置Number of protected ips.
                     * @param _protectIpCount Number of protected ips.
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
                     * 获取Specifies the baseline protection bandwidth.
                     * @return BasicProtectBandwidth Specifies the baseline protection bandwidth.
                     * 
                     */
                    uint64_t GetBasicProtectBandwidth() const;

                    /**
                     * 设置Specifies the baseline protection bandwidth.
                     * @param _basicProtectBandwidth Specifies the baseline protection bandwidth.
                     * 
                     */
                    void SetBasicProtectBandwidth(const uint64_t& _basicProtectBandwidth);

                    /**
                     * 判断参数 BasicProtectBandwidth 是否已赋值
                     * @return BasicProtectBandwidth 是否已赋值
                     * 
                     */
                    bool BasicProtectBandwidthHasBeenSet() const;

                    /**
                     * 获取Business bandwidth scale.
                     * @return Bandwidth Business bandwidth scale.
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置Business bandwidth scale.
                     * @param _bandwidth Business bandwidth scale.
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
                     * 获取Elastic bandwidth in Gbps. valid values: 0, 400, 500, 600, 800, 1000.
The default is 0.
                     * @return ElasticProtectBandwidth Elastic bandwidth in Gbps. valid values: 0, 400, 500, 600, 800, 1000.
The default is 0.
                     * 
                     */
                    uint64_t GetElasticProtectBandwidth() const;

                    /**
                     * 设置Elastic bandwidth in Gbps. valid values: 0, 400, 500, 600, 800, 1000.
The default is 0.
                     * @param _elasticProtectBandwidth Elastic bandwidth in Gbps. valid values: 0, 400, 500, 600, 800, 1000.
The default is 0.
                     * 
                     */
                    void SetElasticProtectBandwidth(const uint64_t& _elasticProtectBandwidth);

                    /**
                     * 判断参数 ElasticProtectBandwidth 是否已赋值
                     * @return ElasticProtectBandwidth 是否已赋值
                     * 
                     */
                    bool ElasticProtectBandwidthHasBeenSet() const;

                    /**
                     * 获取Elastic scaling enabled for business bandwidth.
The default is false.
                     * @return ElasticBandwidthFlag Elastic scaling enabled for business bandwidth.
The default is false.
                     * 
                     */
                    bool GetElasticBandwidthFlag() const;

                    /**
                     * 设置Elastic scaling enabled for business bandwidth.
The default is false.
                     * @param _elasticBandwidthFlag Elastic scaling enabled for business bandwidth.
The default is false.
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
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Number of protected ips.
                     */
                    uint64_t m_protectIpCount;
                    bool m_protectIpCountHasBeenSet;

                    /**
                     * Specifies the baseline protection bandwidth.
                     */
                    uint64_t m_basicProtectBandwidth;
                    bool m_basicProtectBandwidthHasBeenSet;

                    /**
                     * Business bandwidth scale.
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * Elastic bandwidth in Gbps. valid values: 0, 400, 500, 600, 800, 1000.
The default is 0.
                     */
                    uint64_t m_elasticProtectBandwidth;
                    bool m_elasticProtectBandwidthHasBeenSet;

                    /**
                     * Elastic scaling enabled for business bandwidth.
The default is false.
                     */
                    bool m_elasticBandwidthFlag;
                    bool m_elasticBandwidthFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_ENTERPRISEPACKAGECONFIG_H_
