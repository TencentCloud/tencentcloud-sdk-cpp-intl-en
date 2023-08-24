/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEUSEDIPADDRESSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEUSEDIPADDRESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeUsedIpAddress request structure.
                */
                class DescribeUsedIpAddressRequest : public AbstractModel
                {
                public:
                    DescribeUsedIpAddressRequest();
                    ~DescribeUsedIpAddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC instance ID.
                     * @return VpcId VPC instance ID.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC instance ID.
                     * @param _vpcId VPC instance ID.
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
                     * 获取Subnet instance ID
                     * @return SubnetId Subnet instance ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet instance ID
                     * @param _subnetId Subnet instance ID
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
                     * 获取List of IPs to be queried. The IPs must be within the VPC or subnet. Up to 100 IPs can be queried at a time.
                     * @return IpAddresses List of IPs to be queried. The IPs must be within the VPC or subnet. Up to 100 IPs can be queried at a time.
                     * 
                     */
                    std::vector<std::string> GetIpAddresses() const;

                    /**
                     * 设置List of IPs to be queried. The IPs must be within the VPC or subnet. Up to 100 IPs can be queried at a time.
                     * @param _ipAddresses List of IPs to be queried. The IPs must be within the VPC or subnet. Up to 100 IPs can be queried at a time.
                     * 
                     */
                    void SetIpAddresses(const std::vector<std::string>& _ipAddresses);

                    /**
                     * 判断参数 IpAddresses 是否已赋值
                     * @return IpAddresses 是否已赋值
                     * 
                     */
                    bool IpAddressesHasBeenSet() const;

                    /**
                     * 获取The offset. Default value: 0
                     * @return Offset The offset. Default value: 0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置The offset. Default value: 0
                     * @param _offset The offset. Default value: 0
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
                     * 获取The number of returned results. Default value: 20. Maximum value: 100.
                     * @return Limit The number of returned results. Default value: 20. Maximum value: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The number of returned results. Default value: 20. Maximum value: 100.
                     * @param _limit The number of returned results. Default value: 20. Maximum value: 100.
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
                     * VPC instance ID.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet instance ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * List of IPs to be queried. The IPs must be within the VPC or subnet. Up to 100 IPs can be queried at a time.
                     */
                    std::vector<std::string> m_ipAddresses;
                    bool m_ipAddressesHasBeenSet;

                    /**
                     * The offset. Default value: 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The number of returned results. Default value: 20. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEUSEDIPADDRESSREQUEST_H_
