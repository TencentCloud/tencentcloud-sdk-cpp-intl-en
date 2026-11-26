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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYPREFETCHORIGINLIMITREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYPREFETCHORIGINLIMITREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyPrefetchOriginLimit request structure.
                */
                class ModifyPrefetchOriginLimitRequest : public AbstractModel
                {
                public:
                    ModifyPrefetchOriginLimitRequest();
                    ~ModifyPrefetchOriginLimitRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Acceleration domain name.
                     * @return DomainName Acceleration domain name.
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置Acceleration domain name.
                     * @param _domainName Acceleration domain name.
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取Acceleration region restricted by origin-pull rate limiting.
During preheating, the acceleration region will be subject to the configured Bandwidth value limit. Valid values:
<li>Overseas: global availability zone (excluding the Chinese mainland);</li>
<li>MainlandChina: Chinese mainland availability zone.</li>
                     * @return Area Acceleration region restricted by origin-pull rate limiting.
During preheating, the acceleration region will be subject to the configured Bandwidth value limit. Valid values:
<li>Overseas: global availability zone (excluding the Chinese mainland);</li>
<li>MainlandChina: Chinese mainland availability zone.</li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Acceleration region restricted by origin-pull rate limiting.
During preheating, the acceleration region will be subject to the configured Bandwidth value limit. Valid values:
<li>Overseas: global availability zone (excluding the Chinese mainland);</li>
<li>MainlandChina: Chinese mainland availability zone.</li>
                     * @param _area Acceleration region restricted by origin-pull rate limiting.
During preheating, the acceleration region will be subject to the configured Bandwidth value limit. Valid values:
<li>Overseas: global availability zone (excluding the Chinese mainland);</li>
<li>MainlandChina: Chinese mainland availability zone.</li>
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Origin-pull bandwidth limit.
Upper limit of bandwidth for returning to the origin during preheating. Value range: 100-100,000. Unit: Mbps.
                     * @return Bandwidth Origin-pull bandwidth limit.
Upper limit of bandwidth for returning to the origin during preheating. Value range: 100-100,000. Unit: Mbps.
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置Origin-pull bandwidth limit.
Upper limit of bandwidth for returning to the origin during preheating. Value range: 100-100,000. Unit: Mbps.
                     * @param _bandwidth Origin-pull bandwidth limit.
Upper limit of bandwidth for returning to the origin during preheating. Value range: 100-100,000. Unit: Mbps.
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取Origin-pull rate limiting control switch.
Used to enable/delete this origin-pull speed limit. Valid values:
<li>`on`: Enable restriction;</li>
<li>off: Delete restriction.</li>
                     * @return Enabled Origin-pull rate limiting control switch.
Used to enable/delete this origin-pull speed limit. Valid values:
<li>`on`: Enable restriction;</li>
<li>off: Delete restriction.</li>
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置Origin-pull rate limiting control switch.
Used to enable/delete this origin-pull speed limit. Valid values:
<li>`on`: Enable restriction;</li>
<li>off: Delete restriction.</li>
                     * @param _enabled Origin-pull rate limiting control switch.
Used to enable/delete this origin-pull speed limit. Valid values:
<li>`on`: Enable restriction;</li>
<li>off: Delete restriction.</li>
                     * 
                     */
                    void SetEnabled(const std::string& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Acceleration domain name.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * Acceleration region restricted by origin-pull rate limiting.
During preheating, the acceleration region will be subject to the configured Bandwidth value limit. Valid values:
<li>Overseas: global availability zone (excluding the Chinese mainland);</li>
<li>MainlandChina: Chinese mainland availability zone.</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Origin-pull bandwidth limit.
Upper limit of bandwidth for returning to the origin during preheating. Value range: 100-100,000. Unit: Mbps.
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * Origin-pull rate limiting control switch.
Used to enable/delete this origin-pull speed limit. Valid values:
<li>`on`: Enable restriction;</li>
<li>off: Delete restriction.</li>
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYPREFETCHORIGINLIMITREQUEST_H_
