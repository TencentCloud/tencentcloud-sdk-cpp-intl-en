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
                     * 获取Specifies the acceleration region with origin-pull speed limit.
During preheating, the acceleration region will be subject to the configured Bandwidth value limit. valid values:.
<Li>Overseas: global availability zone (excluding the chinese mainland);</li>.
<Li>MainlandChina: chinese mainland availability zone.</li>.
                     * @return Area Specifies the acceleration region with origin-pull speed limit.
During preheating, the acceleration region will be subject to the configured Bandwidth value limit. valid values:.
<Li>Overseas: global availability zone (excluding the chinese mainland);</li>.
<Li>MainlandChina: chinese mainland availability zone.</li>.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Specifies the acceleration region with origin-pull speed limit.
During preheating, the acceleration region will be subject to the configured Bandwidth value limit. valid values:.
<Li>Overseas: global availability zone (excluding the chinese mainland);</li>.
<Li>MainlandChina: chinese mainland availability zone.</li>.
                     * @param _area Specifies the acceleration region with origin-pull speed limit.
During preheating, the acceleration region will be subject to the configured Bandwidth value limit. valid values:.
<Li>Overseas: global availability zone (excluding the chinese mainland);</li>.
<Li>MainlandChina: chinese mainland availability zone.</li>.
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
                     * 获取Specifies the bandwidth limit for origin-pull.
Specifies the upper limit of bandwidth returning to the origin server during preheating. value ranges from 100 to 100,000 Mbps.
                     * @return Bandwidth Specifies the bandwidth limit for origin-pull.
Specifies the upper limit of bandwidth returning to the origin server during preheating. value ranges from 100 to 100,000 Mbps.
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置Specifies the bandwidth limit for origin-pull.
Specifies the upper limit of bandwidth returning to the origin server during preheating. value ranges from 100 to 100,000 Mbps.
                     * @param _bandwidth Specifies the bandwidth limit for origin-pull.
Specifies the upper limit of bandwidth returning to the origin server during preheating. value ranges from 100 to 100,000 Mbps.
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
                     * 获取Specifies the control switch for origin-pull rate limiting.
Used to enable/delete the origin-pull speed limit. valid values:.
<li>on: enablement limit.</li>.
<li>off: delete restriction.</li>.
                     * @return Enabled Specifies the control switch for origin-pull rate limiting.
Used to enable/delete the origin-pull speed limit. valid values:.
<li>on: enablement limit.</li>.
<li>off: delete restriction.</li>.
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置Specifies the control switch for origin-pull rate limiting.
Used to enable/delete the origin-pull speed limit. valid values:.
<li>on: enablement limit.</li>.
<li>off: delete restriction.</li>.
                     * @param _enabled Specifies the control switch for origin-pull rate limiting.
Used to enable/delete the origin-pull speed limit. valid values:.
<li>on: enablement limit.</li>.
<li>off: delete restriction.</li>.
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
                     * Specifies the acceleration region with origin-pull speed limit.
During preheating, the acceleration region will be subject to the configured Bandwidth value limit. valid values:.
<Li>Overseas: global availability zone (excluding the chinese mainland);</li>.
<Li>MainlandChina: chinese mainland availability zone.</li>.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Specifies the bandwidth limit for origin-pull.
Specifies the upper limit of bandwidth returning to the origin server during preheating. value ranges from 100 to 100,000 Mbps.
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * Specifies the control switch for origin-pull rate limiting.
Used to enable/delete the origin-pull speed limit. valid values:.
<li>on: enablement limit.</li>.
<li>off: delete restriction.</li>.
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYPREFETCHORIGINLIMITREQUEST_H_
