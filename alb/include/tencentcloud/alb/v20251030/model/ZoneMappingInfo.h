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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_ZONEMAPPINGINFO_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_ZONEMAPPINGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/LoadBalancerAddress.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * AZ and subnet mapping structure
                */
                class ZoneMappingInfo : public AbstractModel
                {
                public:
                    ZoneMappingInfo();
                    ~ZoneMappingInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Subnet ID.</p>
                     * @return SubnetId <p>Subnet ID.</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>Subnet ID.</p>
                     * @param _subnetId <p>Subnet ID.</p>
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>Availability zone ID. Maximum support for adding 10 availability zones. If the current region supports 2 or more availability zones, at least 2 availability zones need to be added.<br>You can obtain the availability zone information corresponding to the availability zone ID by calling the <a href="https://www.tencentcloud.com/document/api/1822/133727?from_cn_redirect=1">DescribeZones</a> API.</p>
                     * @return ZoneId <p>Availability zone ID. Maximum support for adding 10 availability zones. If the current region supports 2 or more availability zones, at least 2 availability zones need to be added.<br>You can obtain the availability zone information corresponding to the availability zone ID by calling the <a href="https://www.tencentcloud.com/document/api/1822/133727?from_cn_redirect=1">DescribeZones</a> API.</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Availability zone ID. Maximum support for adding 10 availability zones. If the current region supports 2 or more availability zones, at least 2 availability zones need to be added.<br>You can obtain the availability zone information corresponding to the availability zone ID by calling the <a href="https://www.tencentcloud.com/document/api/1822/133727?from_cn_redirect=1">DescribeZones</a> API.</p>
                     * @param _zoneId <p>Availability zone ID. Maximum support for adding 10 availability zones. If the current region supports 2 or more availability zones, at least 2 availability zones need to be added.<br>You can obtain the availability zone information corresponding to the availability zone ID by calling the <a href="https://www.tencentcloud.com/document/api/1822/133727?from_cn_redirect=1">DescribeZones</a> API.</p>
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
                     * 获取<p>Load balancing VIP/EIP information</p>
                     * @return LoadBalancerAddress <p>Load balancing VIP/EIP information</p>
                     * 
                     */
                    LoadBalancerAddress GetLoadBalancerAddress() const;

                    /**
                     * 设置<p>Load balancing VIP/EIP information</p>
                     * @param _loadBalancerAddress <p>Load balancing VIP/EIP information</p>
                     * 
                     */
                    void SetLoadBalancerAddress(const LoadBalancerAddress& _loadBalancerAddress);

                    /**
                     * 判断参数 LoadBalancerAddress 是否已赋值
                     * @return LoadBalancerAddress 是否已赋值
                     * 
                     */
                    bool LoadBalancerAddressHasBeenSet() const;

                    /**
                     * 获取<p>Availability zone status. Value:</p><ul><li><strong>Active</strong>: Running.</li><li><strong>Stopped</strong>: Stopped.</li><li><strong>Shifted</strong>: Has been removed.</li><li><strong>Starting</strong>: Starting.</li><li><strong>Stopping</strong>: Stopping.</li></ul>
                     * @return Status <p>Availability zone status. Value:</p><ul><li><strong>Active</strong>: Running.</li><li><strong>Stopped</strong>: Stopped.</li><li><strong>Shifted</strong>: Has been removed.</li><li><strong>Starting</strong>: Starting.</li><li><strong>Stopping</strong>: Stopping.</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Availability zone status. Value:</p><ul><li><strong>Active</strong>: Running.</li><li><strong>Stopped</strong>: Stopped.</li><li><strong>Shifted</strong>: Has been removed.</li><li><strong>Starting</strong>: Starting.</li><li><strong>Stopping</strong>: Stopping.</li></ul>
                     * @param _status <p>Availability zone status. Value:</p><ul><li><strong>Active</strong>: Running.</li><li><strong>Stopped</strong>: Stopped.</li><li><strong>Shifted</strong>: Has been removed.</li><li><strong>Starting</strong>: Starting.</li><li><strong>Stopping</strong>: Stopping.</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>Subnet ID.</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>Availability zone ID. Maximum support for adding 10 availability zones. If the current region supports 2 or more availability zones, at least 2 availability zones need to be added.<br>You can obtain the availability zone information corresponding to the availability zone ID by calling the <a href="https://www.tencentcloud.com/document/api/1822/133727?from_cn_redirect=1">DescribeZones</a> API.</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>Load balancing VIP/EIP information</p>
                     */
                    LoadBalancerAddress m_loadBalancerAddress;
                    bool m_loadBalancerAddressHasBeenSet;

                    /**
                     * <p>Availability zone status. Value:</p><ul><li><strong>Active</strong>: Running.</li><li><strong>Stopped</strong>: Stopped.</li><li><strong>Shifted</strong>: Has been removed.</li><li><strong>Starting</strong>: Starting.</li><li><strong>Stopping</strong>: Stopping.</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_ZONEMAPPINGINFO_H_
