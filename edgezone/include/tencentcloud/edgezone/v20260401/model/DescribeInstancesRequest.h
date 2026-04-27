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
                     * 获取Instance ID list for filtering by instance ID
                     * @return InstanceIds Instance ID list for filtering by instance ID
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance ID list for filtering by instance ID
                     * @param _instanceIds Instance ID list for filtering by instance ID
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
                     * 获取Instance name, supports fuzzy matching
                     * @return InstanceName Instance name, supports fuzzy matching
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name, supports fuzzy matching
                     * @param _instanceName Instance name, supports fuzzy matching
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
                     * 获取Availability zone code for filtering instances in the specified availability zone
                     * @return Zone Availability zone code for filtering instances in the specified availability zone
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone code for filtering instances in the specified availability zone
                     * @param _zone Availability zone code for filtering instances in the specified availability zone
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
                     * 获取Instance status list for status filtering. Available values: allocating, running, isolating, isolated, terminating, error.
                     * @return InstanceStatus Instance status list for status filtering. Available values: allocating, running, isolating, isolated, terminating, error.
                     * 
                     */
                    std::vector<std::string> GetInstanceStatus() const;

                    /**
                     * 设置Instance status list for status filtering. Available values: allocating, running, isolating, isolated, terminating, error.
                     * @param _instanceStatus Instance status list for status filtering. Available values: allocating, running, isolating, isolated, terminating, error.
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
                     * 获取Public IPv4 address list, used for filtering instances by public IP address
                     * @return PublicIps Public IPv4 address list, used for filtering instances by public IP address
                     * 
                     */
                    std::vector<std::string> GetPublicIps() const;

                    /**
                     * 设置Public IPv4 address list, used for filtering instances by public IP address
                     * @param _publicIps Public IPv4 address list, used for filtering instances by public IP address
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
                     * 获取Offset. Default value: 0
                     * @return Offset Offset. Default value: 0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0
                     * @param _offset Offset. Default value: 0
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
                     * 获取Number of returned results. Default 20. Maximum 100.
                     * @return Limit Number of returned results. Default 20. Maximum 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default 20. Maximum 100.
                     * @param _limit Number of returned results. Default 20. Maximum 100.
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
                     * Instance ID list for filtering by instance ID
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Instance name, supports fuzzy matching
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Availability zone code for filtering instances in the specified availability zone
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Instance status list for status filtering. Available values: allocating, running, isolating, isolated, terminating, error.
                     */
                    std::vector<std::string> m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * Public IPv4 address list, used for filtering instances by public IP address
                     */
                    std::vector<std::string> m_publicIps;
                    bool m_publicIpsHasBeenSet;

                    /**
                     * Offset. Default value: 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results. Default 20. Maximum 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_DESCRIBEINSTANCESREQUEST_H_
