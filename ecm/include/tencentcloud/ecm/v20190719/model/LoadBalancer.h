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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_LOADBALANCER_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_LOADBALANCER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Position.h>
#include <tencentcloud/ecm/v20190719/model/TagInfo.h>
#include <tencentcloud/ecm/v20190719/model/LoadBalancerInternetAccessible.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * CLB instance information
                */
                class LoadBalancer : public AbstractModel
                {
                public:
                    LoadBalancer();
                    ~LoadBalancer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Region Region.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _region Region.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Location information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Position Location information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Position GetPosition() const;

                    /**
                     * 设置Location information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _position Location information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPosition(const Position& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取CLB instance ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LoadBalancerId CLB instance ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置CLB instance ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _loadBalancerId CLB instance ID.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取CLB instance name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LoadBalancerName CLB instance name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置CLB instance name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _loadBalancerName CLB instance name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLoadBalancerName(const std::string& _loadBalancerName);

                    /**
                     * 判断参数 LoadBalancerName 是否已赋值
                     * @return LoadBalancerName 是否已赋值
                     * 
                     */
                    bool LoadBalancerNameHasBeenSet() const;

                    /**
                     * 获取Network type of the CLB instance. Valid values: OPEN: public network
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LoadBalancerType Network type of the CLB instance. Valid values: OPEN: public network
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLoadBalancerType() const;

                    /**
                     * 设置Network type of the CLB instance. Valid values: OPEN: public network
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _loadBalancerType Network type of the CLB instance. Valid values: OPEN: public network
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLoadBalancerType(const std::string& _loadBalancerType);

                    /**
                     * 判断参数 LoadBalancerType 是否已赋值
                     * @return LoadBalancerType 是否已赋值
                     * 
                     */
                    bool LoadBalancerTypeHasBeenSet() const;

                    /**
                     * 获取List of VIPs of the CLB instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LoadBalancerVips List of VIPs of the CLB instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerVips() const;

                    /**
                     * 设置List of VIPs of the CLB instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _loadBalancerVips List of VIPs of the CLB instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLoadBalancerVips(const std::vector<std::string>& _loadBalancerVips);

                    /**
                     * 判断参数 LoadBalancerVips 是否已赋值
                     * @return LoadBalancerVips 是否已赋值
                     * 
                     */
                    bool LoadBalancerVipsHasBeenSet() const;

                    /**
                     * 获取CLB instance status. Valid values:
 0: creating; 1: running.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Status CLB instance status. Valid values:
 0: creating; 1: running.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置CLB instance status. Valid values:
 0: creating; 1: running.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _status CLB instance status. Valid values:
 0: creating; 1: running.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取CLB instance creation time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime CLB instance creation time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置CLB instance creation time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _createTime CLB instance creation time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Last status change time of the CLB instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return StatusTime Last status change time of the CLB instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatusTime() const;

                    /**
                     * 设置Last status change time of the CLB instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _statusTime Last status change time of the CLB instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatusTime(const std::string& _statusTime);

                    /**
                     * 判断参数 StatusTime 是否已赋值
                     * @return StatusTime 是否已赋值
                     * 
                     */
                    bool StatusTimeHasBeenSet() const;

                    /**
                     * 获取VPC ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return VpcId VPC ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _vpcId VPC ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取CLB instance tag information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Tags CLB instance tag information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置CLB instance tag information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _tags CLB instance tag information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取ISP of the CLB IP address.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return VipIsp ISP of the CLB IP address.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVipIsp() const;

                    /**
                     * 设置ISP of the CLB IP address.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _vipIsp ISP of the CLB IP address.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVipIsp(const std::string& _vipIsp);

                    /**
                     * 判断参数 VipIsp 是否已赋值
                     * @return VipIsp 是否已赋值
                     * 
                     */
                    bool VipIspHasBeenSet() const;

                    /**
                     * 获取Network attribute of the CLB instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return NetworkAttributes Network attribute of the CLB instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    LoadBalancerInternetAccessible GetNetworkAttributes() const;

                    /**
                     * 设置Network attribute of the CLB instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _networkAttributes Network attribute of the CLB instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNetworkAttributes(const LoadBalancerInternetAccessible& _networkAttributes);

                    /**
                     * 判断参数 NetworkAttributes 是否已赋值
                     * @return NetworkAttributes 是否已赋值
                     * 
                     */
                    bool NetworkAttributesHasBeenSet() const;

                    /**
                     * 获取Security group.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SecureGroups Security group.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSecureGroups() const;

                    /**
                     * 设置Security group.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _secureGroups Security group.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSecureGroups(const std::vector<std::string>& _secureGroups);

                    /**
                     * 判断参数 SecureGroups 是否已赋值
                     * @return SecureGroups 是否已赋值
                     * 
                     */
                    bool SecureGroupsHasBeenSet() const;

                    /**
                     * 获取Whether the real server opens the traffic from ELB to the internet.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LoadBalancerPassToTarget Whether the real server opens the traffic from ELB to the internet.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetLoadBalancerPassToTarget() const;

                    /**
                     * 设置Whether the real server opens the traffic from ELB to the internet.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _loadBalancerPassToTarget Whether the real server opens the traffic from ELB to the internet.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLoadBalancerPassToTarget(const bool& _loadBalancerPassToTarget);

                    /**
                     * 判断参数 LoadBalancerPassToTarget 是否已赋值
                     * @return LoadBalancerPassToTarget 是否已赋值
                     * 
                     */
                    bool LoadBalancerPassToTargetHasBeenSet() const;

                    /**
                     * 获取IPv6 address of a CLB instance
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return AddressIPv6 IPv6 address of a CLB instance
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAddressIPv6() const;

                    /**
                     * 设置IPv6 address of a CLB instance
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _addressIPv6 IPv6 address of a CLB instance
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAddressIPv6(const std::string& _addressIPv6);

                    /**
                     * 判断参数 AddressIPv6 是否已赋值
                     * @return AddressIPv6 是否已赋值
                     * 
                     */
                    bool AddressIPv6HasBeenSet() const;

                private:

                    /**
                     * Region.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Location information.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Position m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * CLB instance ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * CLB instance name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * Network type of the CLB instance. Valid values: OPEN: public network
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_loadBalancerType;
                    bool m_loadBalancerTypeHasBeenSet;

                    /**
                     * List of VIPs of the CLB instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_loadBalancerVips;
                    bool m_loadBalancerVipsHasBeenSet;

                    /**
                     * CLB instance status. Valid values:
 0: creating; 1: running.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * CLB instance creation time.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last status change time of the CLB instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_statusTime;
                    bool m_statusTimeHasBeenSet;

                    /**
                     * VPC ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * CLB instance tag information.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * ISP of the CLB IP address.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vipIsp;
                    bool m_vipIspHasBeenSet;

                    /**
                     * Network attribute of the CLB instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    LoadBalancerInternetAccessible m_networkAttributes;
                    bool m_networkAttributesHasBeenSet;

                    /**
                     * Security group.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_secureGroups;
                    bool m_secureGroupsHasBeenSet;

                    /**
                     * Whether the real server opens the traffic from ELB to the internet.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_loadBalancerPassToTarget;
                    bool m_loadBalancerPassToTargetHasBeenSet;

                    /**
                     * IPv6 address of a CLB instance
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_addressIPv6;
                    bool m_addressIPv6HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_LOADBALANCER_H_
