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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPCENDPOINTREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPCENDPOINTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateVpcEndPoint request structure.
                */
                class CreateVpcEndPointRequest : public AbstractModel
                {
                public:
                    CreateVpcEndPointRequest();
                    ~CreateVpcEndPointRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC instance ID. obtain through the API [DescribeVpcs](https://www.tencentcloud.comom/document/product/1108/43663?from_cn_redirect=1).
                     * @return VpcId VPC instance ID. obtain through the API [DescribeVpcs](https://www.tencentcloud.comom/document/product/1108/43663?from_cn_redirect=1).
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC instance ID. obtain through the API [DescribeVpcs](https://www.tencentcloud.comom/document/product/1108/43663?from_cn_redirect=1).
                     * @param _vpcId VPC instance ID. obtain through the API [DescribeVpcs](https://www.tencentcloud.comom/document/product/1108/43663?from_cn_redirect=1).
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
                     * 获取Subnet instance ID. can be obtained through the [DescribeSubnets](https://www.tencentcloud.comom/document/product/215/15784?from_cn_redirect=1) api.
                     * @return SubnetId Subnet instance ID. can be obtained through the [DescribeSubnets](https://www.tencentcloud.comom/document/product/215/15784?from_cn_redirect=1) api.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet instance ID. can be obtained through the [DescribeSubnets](https://www.tencentcloud.comom/document/product/215/15784?from_cn_redirect=1) api.
                     * @param _subnetId Subnet instance ID. can be obtained through the [DescribeSubnets](https://www.tencentcloud.comom/document/product/215/15784?from_cn_redirect=1) api.
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
                     * 获取Endpoint name. limited to 60 characters.
                     * @return EndPointName Endpoint name. limited to 60 characters.
                     * 
                     */
                    std::string GetEndPointName() const;

                    /**
                     * 设置Endpoint name. limited to 60 characters.
                     * @param _endPointName Endpoint name. limited to 60 characters.
                     * 
                     */
                    void SetEndPointName(const std::string& _endPointName);

                    /**
                     * 判断参数 EndPointName 是否已赋值
                     * @return EndPointName 是否已赋值
                     * 
                     */
                    bool EndPointNameHasBeenSet() const;

                    /**
                     * 获取Endpoint service ID, which can be obtained through the [DescribeVpcEndPointService](https://www.tencentcloud.comom/document/product/215/54678?from_cn_redirect=1) api.
                     * @return EndPointServiceId Endpoint service ID, which can be obtained through the [DescribeVpcEndPointService](https://www.tencentcloud.comom/document/product/215/54678?from_cn_redirect=1) api.
                     * 
                     */
                    std::string GetEndPointServiceId() const;

                    /**
                     * 设置Endpoint service ID, which can be obtained through the [DescribeVpcEndPointService](https://www.tencentcloud.comom/document/product/215/54678?from_cn_redirect=1) api.
                     * @param _endPointServiceId Endpoint service ID, which can be obtained through the [DescribeVpcEndPointService](https://www.tencentcloud.comom/document/product/215/54678?from_cn_redirect=1) api.
                     * 
                     */
                    void SetEndPointServiceId(const std::string& _endPointServiceId);

                    /**
                     * 判断参数 EndPointServiceId 是否已赋值
                     * @return EndPointServiceId 是否已赋值
                     * 
                     */
                    bool EndPointServiceIdHasBeenSet() const;

                    /**
                     * 获取Endpoint VIP. You can apply for a specified IP.
                     * @return EndPointVip Endpoint VIP. You can apply for a specified IP.
                     * 
                     */
                    std::string GetEndPointVip() const;

                    /**
                     * 设置Endpoint VIP. You can apply for a specified IP.
                     * @param _endPointVip Endpoint VIP. You can apply for a specified IP.
                     * 
                     */
                    void SetEndPointVip(const std::string& _endPointVip);

                    /**
                     * 判断参数 EndPointVip 是否已赋值
                     * @return EndPointVip 是否已赋值
                     * 
                     */
                    bool EndPointVipHasBeenSet() const;

                    /**
                     * 获取Security group ID. can be obtained through the API [DescribeSecurityGroups](https://www.tencentcloud.comom/document/product/215/15808?from_cn_redirect=1).
                     * @return SecurityGroupId Security group ID. can be obtained through the API [DescribeSecurityGroups](https://www.tencentcloud.comom/document/product/215/15808?from_cn_redirect=1).
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置Security group ID. can be obtained through the API [DescribeSecurityGroups](https://www.tencentcloud.comom/document/product/215/15808?from_cn_redirect=1).
                     * @param _securityGroupId Security group ID. can be obtained through the API [DescribeSecurityGroups](https://www.tencentcloud.comom/document/product/215/15808?from_cn_redirect=1).
                     * 
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取List of tags to be bound, for example, [{"Key": "city", "Value": "shanghai"}].
                     * @return Tags List of tags to be bound, for example, [{"Key": "city", "Value": "shanghai"}].
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置List of tags to be bound, for example, [{"Key": "city", "Value": "shanghai"}].
                     * @param _tags List of tags to be bound, for example, [{"Key": "city", "Value": "shanghai"}].
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Protocol type. supports Ipv4 and Ipv6. default is Ipv4.
                     * @return IpAddressType Protocol type. supports Ipv4 and Ipv6. default is Ipv4.
                     * 
                     */
                    std::string GetIpAddressType() const;

                    /**
                     * 设置Protocol type. supports Ipv4 and Ipv6. default is Ipv4.
                     * @param _ipAddressType Protocol type. supports Ipv4 and Ipv6. default is Ipv4.
                     * 
                     */
                    void SetIpAddressType(const std::string& _ipAddressType);

                    /**
                     * 判断参数 IpAddressType 是否已赋值
                     * @return IpAddressType 是否已赋值
                     * 
                     */
                    bool IpAddressTypeHasBeenSet() const;

                private:

                    /**
                     * VPC instance ID. obtain through the API [DescribeVpcs](https://www.tencentcloud.comom/document/product/1108/43663?from_cn_redirect=1).
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet instance ID. can be obtained through the [DescribeSubnets](https://www.tencentcloud.comom/document/product/215/15784?from_cn_redirect=1) api.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Endpoint name. limited to 60 characters.
                     */
                    std::string m_endPointName;
                    bool m_endPointNameHasBeenSet;

                    /**
                     * Endpoint service ID, which can be obtained through the [DescribeVpcEndPointService](https://www.tencentcloud.comom/document/product/215/54678?from_cn_redirect=1) api.
                     */
                    std::string m_endPointServiceId;
                    bool m_endPointServiceIdHasBeenSet;

                    /**
                     * Endpoint VIP. You can apply for a specified IP.
                     */
                    std::string m_endPointVip;
                    bool m_endPointVipHasBeenSet;

                    /**
                     * Security group ID. can be obtained through the API [DescribeSecurityGroups](https://www.tencentcloud.comom/document/product/215/15808?from_cn_redirect=1).
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * List of tags to be bound, for example, [{"Key": "city", "Value": "shanghai"}].
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Protocol type. supports Ipv4 and Ipv6. default is Ipv4.
                     */
                    std::string m_ipAddressType;
                    bool m_ipAddressTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPCENDPOINTREQUEST_H_
