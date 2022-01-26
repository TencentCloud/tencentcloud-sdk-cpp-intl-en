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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPCENDPOINTREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPCENDPOINTREQUEST_H_

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
                * CreateVpcEndPoint request structure.
                */
                class CreateVpcEndPointRequest : public AbstractModel
                {
                public:
                    CreateVpcEndPointRequest();
                    ~CreateVpcEndPointRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC instance ID
                     * @return VpcId VPC instance ID
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC instance ID
                     * @param VpcId VPC instance ID
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Subnet instance ID
                     * @return SubnetId Subnet instance ID
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet instance ID
                     * @param SubnetId Subnet instance ID
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Endpoint name
                     * @return EndPointName Endpoint name
                     */
                    std::string GetEndPointName() const;

                    /**
                     * 设置Endpoint name
                     * @param EndPointName Endpoint name
                     */
                    void SetEndPointName(const std::string& _endPointName);

                    /**
                     * 判断参数 EndPointName 是否已赋值
                     * @return EndPointName 是否已赋值
                     */
                    bool EndPointNameHasBeenSet() const;

                    /**
                     * 获取Endpoint service ID
                     * @return EndPointServiceId Endpoint service ID
                     */
                    std::string GetEndPointServiceId() const;

                    /**
                     * 设置Endpoint service ID
                     * @param EndPointServiceId Endpoint service ID
                     */
                    void SetEndPointServiceId(const std::string& _endPointServiceId);

                    /**
                     * 判断参数 EndPointServiceId 是否已赋值
                     * @return EndPointServiceId 是否已赋值
                     */
                    bool EndPointServiceIdHasBeenSet() const;

                    /**
                     * 获取Endpoint VIP. You can apply for a specified IP.
                     * @return EndPointVip Endpoint VIP. You can apply for a specified IP.
                     */
                    std::string GetEndPointVip() const;

                    /**
                     * 设置Endpoint VIP. You can apply for a specified IP.
                     * @param EndPointVip Endpoint VIP. You can apply for a specified IP.
                     */
                    void SetEndPointVip(const std::string& _endPointVip);

                    /**
                     * 判断参数 EndPointVip 是否已赋值
                     * @return EndPointVip 是否已赋值
                     */
                    bool EndPointVipHasBeenSet() const;

                    /**
                     * 获取Security group ID
                     * @return SecurityGroupId Security group ID
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置Security group ID
                     * @param SecurityGroupId Security group ID
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                private:

                    /**
                     * VPC instance ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet instance ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Endpoint name
                     */
                    std::string m_endPointName;
                    bool m_endPointNameHasBeenSet;

                    /**
                     * Endpoint service ID
                     */
                    std::string m_endPointServiceId;
                    bool m_endPointServiceIdHasBeenSet;

                    /**
                     * Endpoint VIP. You can apply for a specified IP.
                     */
                    std::string m_endPointVip;
                    bool m_endPointVipHasBeenSet;

                    /**
                     * Security group ID
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPCENDPOINTREQUEST_H_
