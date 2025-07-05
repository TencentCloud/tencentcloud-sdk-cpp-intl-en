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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_UNASSIGNPRIVATEIPADDRESSESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_UNASSIGNPRIVATEIPADDRESSESREQUEST_H_

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
                * UnassignPrivateIpAddresses request structure.
                */
                class UnassignPrivateIpAddressesRequest : public AbstractModel
                {
                public:
                    UnassignPrivateIpAddressesRequest();
                    ~UnassignPrivateIpAddressesRequest() = default;
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
                     * 获取The information of the specified private IPs. You can specify a maximum of 10 each time.
                     * @return PrivateIpAddresses The information of the specified private IPs. You can specify a maximum of 10 each time.
                     * 
                     */
                    std::vector<PrivateIpAddressSpecification> GetPrivateIpAddresses() const;

                    /**
                     * 设置The information of the specified private IPs. You can specify a maximum of 10 each time.
                     * @param _privateIpAddresses The information of the specified private IPs. You can specify a maximum of 10 each time.
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
                     * 获取Instance ID of the server bound with this IP. This parameter is only applicable when you need to return an IP and unbind the related servers.
                     * @return InstanceId Instance ID of the server bound with this IP. This parameter is only applicable when you need to return an IP and unbind the related servers.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID of the server bound with this IP. This parameter is only applicable when you need to return an IP and unbind the related servers.
                     * @param _instanceId Instance ID of the server bound with this IP. This parameter is only applicable when you need to return an IP and unbind the related servers.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * The ID of the ENI instance, such as `eni-m6dyj72l`.
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * The information of the specified private IPs. You can specify a maximum of 10 each time.
                     */
                    std::vector<PrivateIpAddressSpecification> m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                    /**
                     * Instance ID of the server bound with this IP. This parameter is only applicable when you need to return an IP and unbind the related servers.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_UNASSIGNPRIVATEIPADDRESSESREQUEST_H_
