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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_MODEL_DESCRIBEINSTANCESREQUEST_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_MODEL_DESCRIBEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Edgezone
    {
        namespace V20260401
        {
            namespace Model
            {
                /**
                * DescribeInstances request structure.
                */
                class DescribeInstancesRequest : public AbstractModel
                {
                public:
                    DescribeInstancesRequest();
                    ~DescribeInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Instance ID list for filtering by instance ID</p>
                     * @return InstanceIds <p>Instance ID list for filtering by instance ID</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>Instance ID list for filtering by instance ID</p>
                     * @param _instanceIds <p>Instance ID list for filtering by instance ID</p>
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取<p>Instance name, supports fuzzy matching.</p>
                     * @return InstanceName <p>Instance name, supports fuzzy matching.</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Instance name, supports fuzzy matching.</p>
                     * @param _instanceName <p>Instance name, supports fuzzy matching.</p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>Availability zone code for filtering instances in the specified availability zone</p>
                     * @return Zone <p>Availability zone code for filtering instances in the specified availability zone</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>Availability zone code for filtering instances in the specified availability zone</p>
                     * @param _zone <p>Availability zone code for filtering instances in the specified availability zone</p>
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>Instance status list for status filtering. Available values: allocating, running, isolating, isolated, terminating, error.</p>
                     * @return InstanceStatus <p>Instance status list for status filtering. Available values: allocating, running, isolating, isolated, terminating, error.</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceStatus() const;

                    /**
                     * 设置<p>Instance status list for status filtering. Available values: allocating, running, isolating, isolated, terminating, error.</p>
                     * @param _instanceStatus <p>Instance status list for status filtering. Available values: allocating, running, isolating, isolated, terminating, error.</p>
                     * 
                     */
                    void SetInstanceStatus(const std::vector<std::string>& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取<p>Public network ID.</p>
                     * @return PublicNetworkId <p>Public network ID.</p>
                     * 
                     */
                    std::string GetPublicNetworkId() const;

                    /**
                     * 设置<p>Public network ID.</p>
                     * @param _publicNetworkId <p>Public network ID.</p>
                     * 
                     */
                    void SetPublicNetworkId(const std::string& _publicNetworkId);

                    /**
                     * 判断参数 PublicNetworkId 是否已赋值
                     * @return PublicNetworkId 是否已赋值
                     * 
                     */
                    bool PublicNetworkIdHasBeenSet() const;

                    /**
                     * 获取<p>VPC ID.</p>
                     * @return PrivateNetworkId <p>VPC ID.</p>
                     * 
                     */
                    std::string GetPrivateNetworkId() const;

                    /**
                     * 设置<p>VPC ID.</p>
                     * @param _privateNetworkId <p>VPC ID.</p>
                     * 
                     */
                    void SetPrivateNetworkId(const std::string& _privateNetworkId);

                    /**
                     * 判断参数 PrivateNetworkId 是否已赋值
                     * @return PrivateNetworkId 是否已赋值
                     * 
                     */
                    bool PrivateNetworkIdHasBeenSet() const;

                    /**
                     * 获取<p>Public IPv4 address list, used for filtering instances by public IP address</p>
                     * @return PublicIps <p>Public IPv4 address list, used for filtering instances by public IP address</p>
                     * 
                     */
                    std::vector<std::string> GetPublicIps() const;

                    /**
                     * 设置<p>Public IPv4 address list, used for filtering instances by public IP address</p>
                     * @param _publicIps <p>Public IPv4 address list, used for filtering instances by public IP address</p>
                     * 
                     */
                    void SetPublicIps(const std::vector<std::string>& _publicIps);

                    /**
                     * 判断参数 PublicIps 是否已赋值
                     * @return PublicIps 是否已赋值
                     * 
                     */
                    bool PublicIpsHasBeenSet() const;

                    /**
                     * 获取<p>Offset. Default value: 0.</p>
                     * @return Offset <p>Offset. Default value: 0.</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Offset. Default value: 0.</p>
                     * @param _offset <p>Offset. Default value: 0.</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>Number of returned results. Default 20. Maximum 100.</p>
                     * @return Limit <p>Number of returned results. Default 20. Maximum 100.</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Number of returned results. Default 20. Maximum 100.</p>
                     * @param _limit <p>Number of returned results. Default 20. Maximum 100.</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID list for filtering by instance ID</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>Instance name, supports fuzzy matching.</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Availability zone code for filtering instances in the specified availability zone</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>Instance status list for status filtering. Available values: allocating, running, isolating, isolated, terminating, error.</p>
                     */
                    std::vector<std::string> m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * <p>Public network ID.</p>
                     */
                    std::string m_publicNetworkId;
                    bool m_publicNetworkIdHasBeenSet;

                    /**
                     * <p>VPC ID.</p>
                     */
                    std::string m_privateNetworkId;
                    bool m_privateNetworkIdHasBeenSet;

                    /**
                     * <p>Public IPv4 address list, used for filtering instances by public IP address</p>
                     */
                    std::vector<std::string> m_publicIps;
                    bool m_publicIpsHasBeenSet;

                    /**
                     * <p>Offset. Default value: 0.</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Number of returned results. Default 20. Maximum 100.</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_DESCRIBEINSTANCESREQUEST_H_
