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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_UNASSIGNIPV6CIDRBLOCKREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_UNASSIGNIPV6CIDRBLOCKREQUEST_H_

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
                * UnassignIpv6CidrBlock request structure.
                */
                class UnassignIpv6CidrBlockRequest : public AbstractModel
                {
                public:
                    UnassignIpv6CidrBlockRequest();
                    ~UnassignIpv6CidrBlockRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The `ID` of the `VPC`, such as `vpc-f49l6u0z`.
                     * @return VpcId The `ID` of the `VPC`, such as `vpc-f49l6u0z`.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置The `ID` of the `VPC`, such as `vpc-f49l6u0z`.
                     * @param _vpcId The `ID` of the `VPC`, such as `vpc-f49l6u0z`.
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
                     * 获取The `IPv6` IP range, such as `3402:4e00:20:1000::/56`
                     * @return Ipv6CidrBlock The `IPv6` IP range, such as `3402:4e00:20:1000::/56`
                     * 
                     */
                    std::string GetIpv6CidrBlock() const;

                    /**
                     * 设置The `IPv6` IP range, such as `3402:4e00:20:1000::/56`
                     * @param _ipv6CidrBlock The `IPv6` IP range, such as `3402:4e00:20:1000::/56`
                     * 
                     */
                    void SetIpv6CidrBlock(const std::string& _ipv6CidrBlock);

                    /**
                     * 判断参数 Ipv6CidrBlock 是否已赋值
                     * @return Ipv6CidrBlock 是否已赋值
                     * 
                     */
                    bool Ipv6CidrBlockHasBeenSet() const;

                private:

                    /**
                     * The `ID` of the `VPC`, such as `vpc-f49l6u0z`.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * The `IPv6` IP range, such as `3402:4e00:20:1000::/56`
                     */
                    std::string m_ipv6CidrBlock;
                    bool m_ipv6CidrBlockHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_UNASSIGNIPV6CIDRBLOCKREQUEST_H_
