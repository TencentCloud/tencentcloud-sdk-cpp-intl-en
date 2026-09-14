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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_ACCELERATORAREAS_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_ACCELERATORAREAS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ga2/v20250115/model/IpAddressInfoSet.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * Acceleration region information
                */
                class AcceleratorAreas : public AbstractModel
                {
                public:
                    AcceleratorAreas();
                    ~AcceleratorAreas() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Acceleration region.</p>
                     * @return AccelerateRegion <p>Acceleration region.</p>
                     * 
                     */
                    std::string GetAccelerateRegion() const;

                    /**
                     * 设置<p>Acceleration region.</p>
                     * @param _accelerateRegion <p>Acceleration region.</p>
                     * 
                     */
                    void SetAccelerateRegion(const std::string& _accelerateRegion);

                    /**
                     * 判断参数 AccelerateRegion 是否已赋值
                     * @return AccelerateRegion 是否已赋值
                     * 
                     */
                    bool AccelerateRegionHasBeenSet() const;

                    /**
                     * 获取<p>Bandwidth.</p>
                     * @return Bandwidth <p>Bandwidth.</p>
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置<p>Bandwidth.</p>
                     * @param _bandwidth <p>Bandwidth.</p>
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
                     * 获取<p>Supports &#39;BGP&#39;, &#39;QUALITY_BGP&#39;, and &#39;STATIC_IP&#39;. Default: BGP.</p><p>Enumeration values:</p><ul><li>BGP: BGP</li><li>STATIC_IP: triple-network</li><li>QUALITY_BGP: dedicated BGP</li></ul>
                     * @return IspType <p>Supports &#39;BGP&#39;, &#39;QUALITY_BGP&#39;, and &#39;STATIC_IP&#39;. Default: BGP.</p><p>Enumeration values:</p><ul><li>BGP: BGP</li><li>STATIC_IP: triple-network</li><li>QUALITY_BGP: dedicated BGP</li></ul>
                     * 
                     */
                    std::string GetIspType() const;

                    /**
                     * 设置<p>Supports &#39;BGP&#39;, &#39;QUALITY_BGP&#39;, and &#39;STATIC_IP&#39;. Default: BGP.</p><p>Enumeration values:</p><ul><li>BGP: BGP</li><li>STATIC_IP: triple-network</li><li>QUALITY_BGP: dedicated BGP</li></ul>
                     * @param _ispType <p>Supports &#39;BGP&#39;, &#39;QUALITY_BGP&#39;, and &#39;STATIC_IP&#39;. Default: BGP.</p><p>Enumeration values:</p><ul><li>BGP: BGP</li><li>STATIC_IP: triple-network</li><li>QUALITY_BGP: dedicated BGP</li></ul>
                     * 
                     */
                    void SetIspType(const std::string& _ispType);

                    /**
                     * 判断参数 IspType 是否已赋值
                     * @return IspType 是否已赋值
                     * 
                     */
                    bool IspTypeHasBeenSet() const;

                    /**
                     * 获取<p>Only IPv4 is supported, and IPv4 is selected by default.</p>
                     * @return IpVersion <p>Only IPv4 is supported, and IPv4 is selected by default.</p>
                     * 
                     */
                    std::string GetIpVersion() const;

                    /**
                     * 设置<p>Only IPv4 is supported, and IPv4 is selected by default.</p>
                     * @param _ipVersion <p>Only IPv4 is supported, and IPv4 is selected by default.</p>
                     * 
                     */
                    void SetIpVersion(const std::string& _ipVersion);

                    /**
                     * 判断参数 IpVersion 是否已赋值
                     * @return IpVersion 是否已赋值
                     * 
                     */
                    bool IpVersionHasBeenSet() const;

                    /**
                     * 获取<p>Acceleration region ID.</p>
                     * @return AcceleratorAreaId <p>Acceleration region ID.</p>
                     * 
                     */
                    std::string GetAcceleratorAreaId() const;

                    /**
                     * 设置<p>Acceleration region ID.</p>
                     * @param _acceleratorAreaId <p>Acceleration region ID.</p>
                     * 
                     */
                    void SetAcceleratorAreaId(const std::string& _acceleratorAreaId);

                    /**
                     * 判断参数 AcceleratorAreaId 是否已赋值
                     * @return AcceleratorAreaId 是否已赋值
                     * 
                     */
                    bool AcceleratorAreaIdHasBeenSet() const;

                    /**
                     * 获取<p>IP.</p>
                     * @return IpAddress <p>IP.</p>
                     * 
                     */
                    std::vector<std::string> GetIpAddress() const;

                    /**
                     * 设置<p>IP.</p>
                     * @param _ipAddress <p>IP.</p>
                     * 
                     */
                    void SetIpAddress(const std::vector<std::string>& _ipAddress);

                    /**
                     * 判断参数 IpAddress 是否已赋值
                     * @return IpAddress 是否已赋值
                     * 
                     */
                    bool IpAddressHasBeenSet() const;

                    /**
                     * 获取<p>IP information.</p>
                     * @return IpAddressInfoSet <p>IP information.</p>
                     * 
                     */
                    std::vector<IpAddressInfoSet> GetIpAddressInfoSet() const;

                    /**
                     * 设置<p>IP information.</p>
                     * @param _ipAddressInfoSet <p>IP information.</p>
                     * 
                     */
                    void SetIpAddressInfoSet(const std::vector<IpAddressInfoSet>& _ipAddressInfoSet);

                    /**
                     * 判断参数 IpAddressInfoSet 是否已赋值
                     * @return IpAddressInfoSet 是否已赋值
                     * 
                     */
                    bool IpAddressInfoSetHasBeenSet() const;

                private:

                    /**
                     * <p>Acceleration region.</p>
                     */
                    std::string m_accelerateRegion;
                    bool m_accelerateRegionHasBeenSet;

                    /**
                     * <p>Bandwidth.</p>
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * <p>Supports &#39;BGP&#39;, &#39;QUALITY_BGP&#39;, and &#39;STATIC_IP&#39;. Default: BGP.</p><p>Enumeration values:</p><ul><li>BGP: BGP</li><li>STATIC_IP: triple-network</li><li>QUALITY_BGP: dedicated BGP</li></ul>
                     */
                    std::string m_ispType;
                    bool m_ispTypeHasBeenSet;

                    /**
                     * <p>Only IPv4 is supported, and IPv4 is selected by default.</p>
                     */
                    std::string m_ipVersion;
                    bool m_ipVersionHasBeenSet;

                    /**
                     * <p>Acceleration region ID.</p>
                     */
                    std::string m_acceleratorAreaId;
                    bool m_acceleratorAreaIdHasBeenSet;

                    /**
                     * <p>IP.</p>
                     */
                    std::vector<std::string> m_ipAddress;
                    bool m_ipAddressHasBeenSet;

                    /**
                     * <p>IP information.</p>
                     */
                    std::vector<IpAddressInfoSet> m_ipAddressInfoSet;
                    bool m_ipAddressInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_ACCELERATORAREAS_H_
