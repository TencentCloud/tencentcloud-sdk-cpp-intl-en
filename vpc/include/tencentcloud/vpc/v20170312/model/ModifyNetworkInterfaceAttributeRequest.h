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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYNETWORKINTERFACEATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYNETWORKINTERFACEATTRIBUTEREQUEST_H_

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
                * ModifyNetworkInterfaceAttribute request structure.
                */
                class ModifyNetworkInterfaceAttributeRequest : public AbstractModel
                {
                public:
                    ModifyNetworkInterfaceAttributeRequest();
                    ~ModifyNetworkInterfaceAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The ID of the ENI instance, such as `eni-pxir56ns`.
                     * @return NetworkInterfaceId The ID of the ENI instance, such as `eni-pxir56ns`.
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置The ID of the ENI instance, such as `eni-pxir56ns`.
                     * @param NetworkInterfaceId The ID of the ENI instance, such as `eni-pxir56ns`.
                     */
                    void SetNetworkInterfaceId(const std::string& _networkInterfaceId);

                    /**
                     * 判断参数 NetworkInterfaceId 是否已赋值
                     * @return NetworkInterfaceId 是否已赋值
                     */
                    bool NetworkInterfaceIdHasBeenSet() const;

                    /**
                     * 获取The name of the ENI. The maximum length is 60 characters.
                     * @return NetworkInterfaceName The name of the ENI. The maximum length is 60 characters.
                     */
                    std::string GetNetworkInterfaceName() const;

                    /**
                     * 设置The name of the ENI. The maximum length is 60 characters.
                     * @param NetworkInterfaceName The name of the ENI. The maximum length is 60 characters.
                     */
                    void SetNetworkInterfaceName(const std::string& _networkInterfaceName);

                    /**
                     * 判断参数 NetworkInterfaceName 是否已赋值
                     * @return NetworkInterfaceName 是否已赋值
                     */
                    bool NetworkInterfaceNameHasBeenSet() const;

                    /**
                     * 获取ENI description can be named freely, but the maximum length is 60 characters.
                     * @return NetworkInterfaceDescription ENI description can be named freely, but the maximum length is 60 characters.
                     */
                    std::string GetNetworkInterfaceDescription() const;

                    /**
                     * 设置ENI description can be named freely, but the maximum length is 60 characters.
                     * @param NetworkInterfaceDescription ENI description can be named freely, but the maximum length is 60 characters.
                     */
                    void SetNetworkInterfaceDescription(const std::string& _networkInterfaceDescription);

                    /**
                     * 判断参数 NetworkInterfaceDescription 是否已赋值
                     * @return NetworkInterfaceDescription 是否已赋值
                     */
                    bool NetworkInterfaceDescriptionHasBeenSet() const;

                    /**
                     * 获取The specified security groups to be bound with, such as ['sg-1dd51d'].
                     * @return SecurityGroupIds The specified security groups to be bound with, such as ['sg-1dd51d'].
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置The specified security groups to be bound with, such as ['sg-1dd51d'].
                     * @param SecurityGroupIds The specified security groups to be bound with, such as ['sg-1dd51d'].
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取Configuration of the ENI trunking mode. Valid values: `Enable` and `Disable`. Default value: `Disable`.
                     * @return TrunkingFlag Configuration of the ENI trunking mode. Valid values: `Enable` and `Disable`. Default value: `Disable`.
                     */
                    std::string GetTrunkingFlag() const;

                    /**
                     * 设置Configuration of the ENI trunking mode. Valid values: `Enable` and `Disable`. Default value: `Disable`.
                     * @param TrunkingFlag Configuration of the ENI trunking mode. Valid values: `Enable` and `Disable`. Default value: `Disable`.
                     */
                    void SetTrunkingFlag(const std::string& _trunkingFlag);

                    /**
                     * 判断参数 TrunkingFlag 是否已赋值
                     * @return TrunkingFlag 是否已赋值
                     */
                    bool TrunkingFlagHasBeenSet() const;

                private:

                    /**
                     * The ID of the ENI instance, such as `eni-pxir56ns`.
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * The name of the ENI. The maximum length is 60 characters.
                     */
                    std::string m_networkInterfaceName;
                    bool m_networkInterfaceNameHasBeenSet;

                    /**
                     * ENI description can be named freely, but the maximum length is 60 characters.
                     */
                    std::string m_networkInterfaceDescription;
                    bool m_networkInterfaceDescriptionHasBeenSet;

                    /**
                     * The specified security groups to be bound with, such as ['sg-1dd51d'].
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Configuration of the ENI trunking mode. Valid values: `Enable` and `Disable`. Default value: `Disable`.
                     */
                    std::string m_trunkingFlag;
                    bool m_trunkingFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYNETWORKINTERFACEATTRIBUTEREQUEST_H_
