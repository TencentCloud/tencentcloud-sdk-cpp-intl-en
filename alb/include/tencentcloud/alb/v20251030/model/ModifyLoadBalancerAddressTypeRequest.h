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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_MODIFYLOADBALANCERADDRESSTYPEREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_MODIFYLOADBALANCERADDRESSTYPEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/ZoneMappingsItem.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * ModifyLoadBalancerAddressType request structure.
                */
                class ModifyLoadBalancerAddressTypeRequest : public AbstractModel
                {
                public:
                    ModifyLoadBalancerAddressTypeRequest();
                    ~ModifyLoadBalancerAddressTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Target network type. Value:
- **Internet** (public network)
A load balancing instance is assigned a public network IP address, and the domain name (DNS) is parsed to the public network IP. It can be directly accessed via the public network and is suitable for business scenarios that provide external services.
- **Intranet** (private network)
Load balancing instances are assigned only private IP addresses, and the domain name (DNS) resolves to the private IP. Access is supported only within the private network environment of the VPC to which the load balancing instance belongs. This is suitable for internal business or scenarios with high security requirements.
                     * @return AddressType Target network type. Value:
- **Internet** (public network)
A load balancing instance is assigned a public network IP address, and the domain name (DNS) is parsed to the public network IP. It can be directly accessed via the public network and is suitable for business scenarios that provide external services.
- **Intranet** (private network)
Load balancing instances are assigned only private IP addresses, and the domain name (DNS) resolves to the private IP. Access is supported only within the private network environment of the VPC to which the load balancing instance belongs. This is suitable for internal business or scenarios with high security requirements.
                     * 
                     */
                    std::string GetAddressType() const;

                    /**
                     * 设置Target network type. Value:
- **Internet** (public network)
A load balancing instance is assigned a public network IP address, and the domain name (DNS) is parsed to the public network IP. It can be directly accessed via the public network and is suitable for business scenarios that provide external services.
- **Intranet** (private network)
Load balancing instances are assigned only private IP addresses, and the domain name (DNS) resolves to the private IP. Access is supported only within the private network environment of the VPC to which the load balancing instance belongs. This is suitable for internal business or scenarios with high security requirements.
                     * @param _addressType Target network type. Value:
- **Internet** (public network)
A load balancing instance is assigned a public network IP address, and the domain name (DNS) is parsed to the public network IP. It can be directly accessed via the public network and is suitable for business scenarios that provide external services.
- **Intranet** (private network)
Load balancing instances are assigned only private IP addresses, and the domain name (DNS) resolves to the private IP. Access is supported only within the private network environment of the VPC to which the load balancing instance belongs. This is suitable for internal business or scenarios with high security requirements.
                     * 
                     */
                    void SetAddressType(const std::string& _addressType);

                    /**
                     * 判断参数 AddressType 是否已赋值
                     * @return AddressType 是否已赋值
                     * 
                     */
                    bool AddressTypeHasBeenSet() const;

                    /**
                     * 获取CLB instance ID. The format is alb- followed by 8 alphanumeric characters.
                     * @return LoadBalancerId CLB instance ID. The format is alb- followed by 8 alphanumeric characters.
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置CLB instance ID. The format is alb- followed by 8 alphanumeric characters.
                     * @param _loadBalancerId CLB instance ID. The format is alb- followed by 8 alphanumeric characters.
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取Bandwidth package ID.
                     * @return BandwidthPackageId Bandwidth package ID.
                     * 
                     */
                    std::string GetBandwidthPackageId() const;

                    /**
                     * 设置Bandwidth package ID.
                     * @param _bandwidthPackageId Bandwidth package ID.
                     * 
                     */
                    void SetBandwidthPackageId(const std::string& _bandwidthPackageId);

                    /**
                     * 判断参数 BandwidthPackageId 是否已赋值
                     * @return BandwidthPackageId 是否已赋值
                     * 
                     */
                    bool BandwidthPackageIdHasBeenSet() const;

                    /**
                     * 获取Whether to only precheck this request. Parameter Value:
- **true**: Send a check request without updating the network type of the instance. Check items include whether required parameters are filled in, request format, and service limits. If the check fails, return the corresponding error. If the check passes, return the error code `DryRunOperation`.
- **false** (default value): Send a normal request, return HTTP 2xx status code after check, and directly perform the operation.
                     * @return DryRun Whether to only precheck this request. Parameter Value:
- **true**: Send a check request without updating the network type of the instance. Check items include whether required parameters are filled in, request format, and service limits. If the check fails, return the corresponding error. If the check passes, return the error code `DryRunOperation`.
- **false** (default value): Send a normal request, return HTTP 2xx status code after check, and directly perform the operation.
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置Whether to only precheck this request. Parameter Value:
- **true**: Send a check request without updating the network type of the instance. Check items include whether required parameters are filled in, request format, and service limits. If the check fails, return the corresponding error. If the check passes, return the error code `DryRunOperation`.
- **false** (default value): Send a normal request, return HTTP 2xx status code after check, and directly perform the operation.
                     * @param _dryRun Whether to only precheck this request. Parameter Value:
- **true**: Send a check request without updating the network type of the instance. Check items include whether required parameters are filled in, request format, and service limits. If the check fails, return the corresponding error. If the check passes, return the error code `DryRunOperation`.
- **false** (default value): Send a normal request, return HTTP 2xx status code after check, and directly perform the operation.
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取Availability zone and subnet mapping structure.
If the current region supports 2 or more AZs, a minimum of 2 AZs is required.
                     * @return ZoneMappings Availability zone and subnet mapping structure.
If the current region supports 2 or more AZs, a minimum of 2 AZs is required.
                     * 
                     */
                    std::vector<ZoneMappingsItem> GetZoneMappings() const;

                    /**
                     * 设置Availability zone and subnet mapping structure.
If the current region supports 2 or more AZs, a minimum of 2 AZs is required.
                     * @param _zoneMappings Availability zone and subnet mapping structure.
If the current region supports 2 or more AZs, a minimum of 2 AZs is required.
                     * 
                     */
                    void SetZoneMappings(const std::vector<ZoneMappingsItem>& _zoneMappings);

                    /**
                     * 判断参数 ZoneMappings 是否已赋值
                     * @return ZoneMappings 是否已赋值
                     * 
                     */
                    bool ZoneMappingsHasBeenSet() const;

                private:

                    /**
                     * Target network type. Value:
- **Internet** (public network)
A load balancing instance is assigned a public network IP address, and the domain name (DNS) is parsed to the public network IP. It can be directly accessed via the public network and is suitable for business scenarios that provide external services.
- **Intranet** (private network)
Load balancing instances are assigned only private IP addresses, and the domain name (DNS) resolves to the private IP. Access is supported only within the private network environment of the VPC to which the load balancing instance belongs. This is suitable for internal business or scenarios with high security requirements.
                     */
                    std::string m_addressType;
                    bool m_addressTypeHasBeenSet;

                    /**
                     * CLB instance ID. The format is alb- followed by 8 alphanumeric characters.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * Bandwidth package ID.
                     */
                    std::string m_bandwidthPackageId;
                    bool m_bandwidthPackageIdHasBeenSet;

                    /**
                     * Whether to only precheck this request. Parameter Value:
- **true**: Send a check request without updating the network type of the instance. Check items include whether required parameters are filled in, request format, and service limits. If the check fails, return the corresponding error. If the check passes, return the error code `DryRunOperation`.
- **false** (default value): Send a normal request, return HTTP 2xx status code after check, and directly perform the operation.
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * Availability zone and subnet mapping structure.
If the current region supports 2 or more AZs, a minimum of 2 AZs is required.
                     */
                    std::vector<ZoneMappingsItem> m_zoneMappings;
                    bool m_zoneMappingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_MODIFYLOADBALANCERADDRESSTYPEREQUEST_H_
