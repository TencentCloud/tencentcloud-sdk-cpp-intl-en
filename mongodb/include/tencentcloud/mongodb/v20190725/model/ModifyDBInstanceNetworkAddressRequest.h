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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYDBINSTANCENETWORKADDRESSREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYDBINSTANCENETWORKADDRESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/ModifyNetworkAddress.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * ModifyDBInstanceNetworkAddress request structure.
                */
                class ModifyDBInstanceNetworkAddressRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceNetworkAddressRequest();
                    ~ModifyDBInstanceNetworkAddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the ID of the instance for modifying the network. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB) and copy the instance ID from the instance list.

                     * @return InstanceId Specifies the ID of the instance for modifying the network. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB) and copy the instance ID from the instance list.

                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Specifies the ID of the instance for modifying the network. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB) and copy the instance ID from the instance list.

                     * @param _instanceId Specifies the ID of the instance for modifying the network. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB) and copy the instance ID from the instance list.

                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Retention period of the original IP address.
 - Unit: minutes. 0 means that the IP address is immediately repossessed.
 - The original IP address will be released after a scheduled period. Both the original and new IP addresses are accessible before release.

                     * @return OldIpExpiredTime Retention period of the original IP address.
 - Unit: minutes. 0 means that the IP address is immediately repossessed.
 - The original IP address will be released after a scheduled period. Both the original and new IP addresses are accessible before release.

                     * 
                     */
                    uint64_t GetOldIpExpiredTime() const;

                    /**
                     * 设置Retention period of the original IP address.
 - Unit: minutes. 0 means that the IP address is immediately repossessed.
 - The original IP address will be released after a scheduled period. Both the original and new IP addresses are accessible before release.

                     * @param _oldIpExpiredTime Retention period of the original IP address.
 - Unit: minutes. 0 means that the IP address is immediately repossessed.
 - The original IP address will be released after a scheduled period. Both the original and new IP addresses are accessible before release.

                     * 
                     */
                    void SetOldIpExpiredTime(const uint64_t& _oldIpExpiredTime);

                    /**
                     * 判断参数 OldIpExpiredTime 是否已赋值
                     * @return OldIpExpiredTime 是否已赋值
                     * 
                     */
                    bool OldIpExpiredTimeHasBeenSet() const;

                    /**
                     * 获取VPC ID after the switch. If the instance is using a basic network, this field is not required. The [DescribeDBInstances](https://www.tencentcloud.comom/document/product/240/38568?from_cn_redirect=1) API can be called to obtain the VPC ID.
                     * @return NewUniqVpcId VPC ID after the switch. If the instance is using a basic network, this field is not required. The [DescribeDBInstances](https://www.tencentcloud.comom/document/product/240/38568?from_cn_redirect=1) API can be called to obtain the VPC ID.
                     * 
                     */
                    std::string GetNewUniqVpcId() const;

                    /**
                     * 设置VPC ID after the switch. If the instance is using a basic network, this field is not required. The [DescribeDBInstances](https://www.tencentcloud.comom/document/product/240/38568?from_cn_redirect=1) API can be called to obtain the VPC ID.
                     * @param _newUniqVpcId VPC ID after the switch. If the instance is using a basic network, this field is not required. The [DescribeDBInstances](https://www.tencentcloud.comom/document/product/240/38568?from_cn_redirect=1) API can be called to obtain the VPC ID.
                     * 
                     */
                    void SetNewUniqVpcId(const std::string& _newUniqVpcId);

                    /**
                     * 判断参数 NewUniqVpcId 是否已赋值
                     * @return NewUniqVpcId 是否已赋值
                     * 
                     */
                    bool NewUniqVpcIdHasBeenSet() const;

                    /**
                     * 获取VPC subnet ID after the switch. If the instance is using a basic network, this field is not required. The [DescribeDBInstances](https://www.tencentcloud.comom/document/product/240/38568?from_cn_redirect=1) API can be called to obtain the subnet ID of the VPC.
                     * @return NewUniqSubnetId VPC subnet ID after the switch. If the instance is using a basic network, this field is not required. The [DescribeDBInstances](https://www.tencentcloud.comom/document/product/240/38568?from_cn_redirect=1) API can be called to obtain the subnet ID of the VPC.
                     * 
                     */
                    std::string GetNewUniqSubnetId() const;

                    /**
                     * 设置VPC subnet ID after the switch. If the instance is using a basic network, this field is not required. The [DescribeDBInstances](https://www.tencentcloud.comom/document/product/240/38568?from_cn_redirect=1) API can be called to obtain the subnet ID of the VPC.
                     * @param _newUniqSubnetId VPC subnet ID after the switch. If the instance is using a basic network, this field is not required. The [DescribeDBInstances](https://www.tencentcloud.comom/document/product/240/38568?from_cn_redirect=1) API can be called to obtain the subnet ID of the VPC.
                     * 
                     */
                    void SetNewUniqSubnetId(const std::string& _newUniqSubnetId);

                    /**
                     * 判断参数 NewUniqSubnetId 是否已赋值
                     * @return NewUniqSubnetId 是否已赋值
                     * 
                     */
                    bool NewUniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取IP address information, including the new IP address and the original IP address.
                     * @return NetworkAddresses IP address information, including the new IP address and the original IP address.
                     * 
                     */
                    std::vector<ModifyNetworkAddress> GetNetworkAddresses() const;

                    /**
                     * 设置IP address information, including the new IP address and the original IP address.
                     * @param _networkAddresses IP address information, including the new IP address and the original IP address.
                     * 
                     */
                    void SetNetworkAddresses(const std::vector<ModifyNetworkAddress>& _networkAddresses);

                    /**
                     * 判断参数 NetworkAddresses 是否已赋值
                     * @return NetworkAddresses 是否已赋值
                     * 
                     */
                    bool NetworkAddressesHasBeenSet() const;

                private:

                    /**
                     * Specifies the ID of the instance for modifying the network. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB) and copy the instance ID from the instance list.

                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Retention period of the original IP address.
 - Unit: minutes. 0 means that the IP address is immediately repossessed.
 - The original IP address will be released after a scheduled period. Both the original and new IP addresses are accessible before release.

                     */
                    uint64_t m_oldIpExpiredTime;
                    bool m_oldIpExpiredTimeHasBeenSet;

                    /**
                     * VPC ID after the switch. If the instance is using a basic network, this field is not required. The [DescribeDBInstances](https://www.tencentcloud.comom/document/product/240/38568?from_cn_redirect=1) API can be called to obtain the VPC ID.
                     */
                    std::string m_newUniqVpcId;
                    bool m_newUniqVpcIdHasBeenSet;

                    /**
                     * VPC subnet ID after the switch. If the instance is using a basic network, this field is not required. The [DescribeDBInstances](https://www.tencentcloud.comom/document/product/240/38568?from_cn_redirect=1) API can be called to obtain the subnet ID of the VPC.
                     */
                    std::string m_newUniqSubnetId;
                    bool m_newUniqSubnetIdHasBeenSet;

                    /**
                     * IP address information, including the new IP address and the original IP address.
                     */
                    std::vector<ModifyNetworkAddress> m_networkAddresses;
                    bool m_networkAddressesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYDBINSTANCENETWORKADDRESSREQUEST_H_
