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
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取Old IP retention period in minutes. The old IP will be released after the specified time, and both the old and new IPs can be accessed before the release. The value `0` indicates that the old IP will be reclaimed immediately.
                     * @return OldIpExpiredTime Old IP retention period in minutes. The old IP will be released after the specified time, and both the old and new IPs can be accessed before the release. The value `0` indicates that the old IP will be reclaimed immediately.
                     * 
                     */
                    uint64_t GetOldIpExpiredTime() const;

                    /**
                     * 设置Old IP retention period in minutes. The old IP will be released after the specified time, and both the old and new IPs can be accessed before the release. The value `0` indicates that the old IP will be reclaimed immediately.
                     * @param _oldIpExpiredTime Old IP retention period in minutes. The old IP will be released after the specified time, and both the old and new IPs can be accessed before the release. The value `0` indicates that the old IP will be reclaimed immediately.
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
                     * 获取ID of the VPC to which the new IP belongs after the switch. When it is classic network, this field will be empty.
                     * @return NewUniqVpcId ID of the VPC to which the new IP belongs after the switch. When it is classic network, this field will be empty.
                     * 
                     */
                    std::string GetNewUniqVpcId() const;

                    /**
                     * 设置ID of the VPC to which the new IP belongs after the switch. When it is classic network, this field will be empty.
                     * @param _newUniqVpcId ID of the VPC to which the new IP belongs after the switch. When it is classic network, this field will be empty.
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
                     * 获取ID of the subnet to which the new IP belongs after the switch. When it is classic network, this field will be empty.
                     * @return NewUniqSubnetId ID of the subnet to which the new IP belongs after the switch. When it is classic network, this field will be empty.
                     * 
                     */
                    std::string GetNewUniqSubnetId() const;

                    /**
                     * 设置ID of the subnet to which the new IP belongs after the switch. When it is classic network, this field will be empty.
                     * @param _newUniqSubnetId ID of the subnet to which the new IP belongs after the switch. When it is classic network, this field will be empty.
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
                     * 获取IP information to be modified
                     * @return NetworkAddresses IP information to be modified
                     * 
                     */
                    std::vector<ModifyNetworkAddress> GetNetworkAddresses() const;

                    /**
                     * 设置IP information to be modified
                     * @param _networkAddresses IP information to be modified
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
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Old IP retention period in minutes. The old IP will be released after the specified time, and both the old and new IPs can be accessed before the release. The value `0` indicates that the old IP will be reclaimed immediately.
                     */
                    uint64_t m_oldIpExpiredTime;
                    bool m_oldIpExpiredTimeHasBeenSet;

                    /**
                     * ID of the VPC to which the new IP belongs after the switch. When it is classic network, this field will be empty.
                     */
                    std::string m_newUniqVpcId;
                    bool m_newUniqVpcIdHasBeenSet;

                    /**
                     * ID of the subnet to which the new IP belongs after the switch. When it is classic network, this field will be empty.
                     */
                    std::string m_newUniqSubnetId;
                    bool m_newUniqSubnetIdHasBeenSet;

                    /**
                     * IP information to be modified
                     */
                    std::vector<ModifyNetworkAddress> m_networkAddresses;
                    bool m_networkAddressesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYDBINSTANCENETWORKADDRESSREQUEST_H_
