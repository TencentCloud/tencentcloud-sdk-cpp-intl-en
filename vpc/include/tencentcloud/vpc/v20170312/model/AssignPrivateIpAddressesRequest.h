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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ASSIGNPRIVATEIPADDRESSESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ASSIGNPRIVATEIPADDRESSESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/PrivateIpAddressSpecification.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * AssignPrivateIpAddresses request structure.
                */
                class AssignPrivateIpAddressesRequest : public AbstractModel
                {
                public:
                    AssignPrivateIpAddressesRequest();
                    ~AssignPrivateIpAddressesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The ID of the ENI instance, such as `eni-m6dyj72l`.
                     * @return NetworkInterfaceId The ID of the ENI instance, such as `eni-m6dyj72l`.
                     * 
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置The ID of the ENI instance, such as `eni-m6dyj72l`.
                     * @param _networkInterfaceId The ID of the ENI instance, such as `eni-m6dyj72l`.
                     * 
                     */
                    void SetNetworkInterfaceId(const std::string& _networkInterfaceId);

                    /**
                     * 判断参数 NetworkInterfaceId 是否已赋值
                     * @return NetworkInterfaceId 是否已赋值
                     * 
                     */
                    bool NetworkInterfaceIdHasBeenSet() const;

                    /**
                     * 获取The information on private IP addresses, of which you can specify a maximum of 10 at a time. You should provide either this parameter or SecondaryPrivateIpAddressCount, or both.
                     * @return PrivateIpAddresses The information on private IP addresses, of which you can specify a maximum of 10 at a time. You should provide either this parameter or SecondaryPrivateIpAddressCount, or both.
                     * 
                     */
                    std::vector<PrivateIpAddressSpecification> GetPrivateIpAddresses() const;

                    /**
                     * 设置The information on private IP addresses, of which you can specify a maximum of 10 at a time. You should provide either this parameter or SecondaryPrivateIpAddressCount, or both.
                     * @param _privateIpAddresses The information on private IP addresses, of which you can specify a maximum of 10 at a time. You should provide either this parameter or SecondaryPrivateIpAddressCount, or both.
                     * 
                     */
                    void SetPrivateIpAddresses(const std::vector<PrivateIpAddressSpecification>& _privateIpAddresses);

                    /**
                     * 判断参数 PrivateIpAddresses 是否已赋值
                     * @return PrivateIpAddresses 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressesHasBeenSet() const;

                    /**
                     * 获取The number of newly-applied private IP addresses. You should provide either this parameter or PrivateIpAddresses, or both. The total number of private IP addresses cannot exceed the quota. For more information, see<a href="/document/product/576/18527">ENI Use Limits</a>.
                     * @return SecondaryPrivateIpAddressCount The number of newly-applied private IP addresses. You should provide either this parameter or PrivateIpAddresses, or both. The total number of private IP addresses cannot exceed the quota. For more information, see<a href="/document/product/576/18527">ENI Use Limits</a>.
                     * 
                     */
                    uint64_t GetSecondaryPrivateIpAddressCount() const;

                    /**
                     * 设置The number of newly-applied private IP addresses. You should provide either this parameter or PrivateIpAddresses, or both. The total number of private IP addresses cannot exceed the quota. For more information, see<a href="/document/product/576/18527">ENI Use Limits</a>.
                     * @param _secondaryPrivateIpAddressCount The number of newly-applied private IP addresses. You should provide either this parameter or PrivateIpAddresses, or both. The total number of private IP addresses cannot exceed the quota. For more information, see<a href="/document/product/576/18527">ENI Use Limits</a>.
                     * 
                     */
                    void SetSecondaryPrivateIpAddressCount(const uint64_t& _secondaryPrivateIpAddressCount);

                    /**
                     * 判断参数 SecondaryPrivateIpAddressCount 是否已赋值
                     * @return SecondaryPrivateIpAddressCount 是否已赋值
                     * 
                     */
                    bool SecondaryPrivateIpAddressCountHasBeenSet() const;

                    /**
                     * 获取IP service level. It is used together with `SecondaryPrivateIpAddressCount`. Values: PT` (Gold), `AU` (Silver), `AG `(Bronze) and DEFAULT (Default).
                     * @return QosLevel IP service level. It is used together with `SecondaryPrivateIpAddressCount`. Values: PT` (Gold), `AU` (Silver), `AG `(Bronze) and DEFAULT (Default).
                     * 
                     */
                    std::string GetQosLevel() const;

                    /**
                     * 设置IP service level. It is used together with `SecondaryPrivateIpAddressCount`. Values: PT` (Gold), `AU` (Silver), `AG `(Bronze) and DEFAULT (Default).
                     * @param _qosLevel IP service level. It is used together with `SecondaryPrivateIpAddressCount`. Values: PT` (Gold), `AU` (Silver), `AG `(Bronze) and DEFAULT (Default).
                     * 
                     */
                    void SetQosLevel(const std::string& _qosLevel);

                    /**
                     * 判断参数 QosLevel 是否已赋值
                     * @return QosLevel 是否已赋值
                     * 
                     */
                    bool QosLevelHasBeenSet() const;

                    /**
                     * 获取
                     * @return ClientToken 
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置
                     * @param _clientToken 
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                private:

                    /**
                     * The ID of the ENI instance, such as `eni-m6dyj72l`.
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * The information on private IP addresses, of which you can specify a maximum of 10 at a time. You should provide either this parameter or SecondaryPrivateIpAddressCount, or both.
                     */
                    std::vector<PrivateIpAddressSpecification> m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                    /**
                     * The number of newly-applied private IP addresses. You should provide either this parameter or PrivateIpAddresses, or both. The total number of private IP addresses cannot exceed the quota. For more information, see<a href="/document/product/576/18527">ENI Use Limits</a>.
                     */
                    uint64_t m_secondaryPrivateIpAddressCount;
                    bool m_secondaryPrivateIpAddressCountHasBeenSet;

                    /**
                     * IP service level. It is used together with `SecondaryPrivateIpAddressCount`. Values: PT` (Gold), `AU` (Silver), `AG `(Bronze) and DEFAULT (Default).
                     */
                    std::string m_qosLevel;
                    bool m_qosLevelHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ASSIGNPRIVATEIPADDRESSESREQUEST_H_
