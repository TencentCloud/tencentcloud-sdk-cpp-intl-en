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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_ASSIGNPRIVATEIPADDRESSESREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_ASSIGNPRIVATEIPADDRESSESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/PrivateIpAddressSpecification.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
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
                     * 获取ENI instance ID, such as `eni-m6dyj72l`.
                     * @return NetworkInterfaceId ENI instance ID, such as `eni-m6dyj72l`.
                     * 
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置ENI instance ID, such as `eni-m6dyj72l`.
                     * @param _networkInterfaceId ENI instance ID, such as `eni-m6dyj72l`.
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
                     * 获取ECM region, such as `ap-xian-ecm`.
                     * @return EcmRegion ECM region, such as `ap-xian-ecm`.
                     * 
                     */
                    std::string GetEcmRegion() const;

                    /**
                     * 设置ECM region, such as `ap-xian-ecm`.
                     * @param _ecmRegion ECM region, such as `ap-xian-ecm`.
                     * 
                     */
                    void SetEcmRegion(const std::string& _ecmRegion);

                    /**
                     * 判断参数 EcmRegion 是否已赋值
                     * @return EcmRegion 是否已赋值
                     * 
                     */
                    bool EcmRegionHasBeenSet() const;

                    /**
                     * 获取Information of the specified private IPs. You can specify up to 10 IPs at a time. You must provide either this parameter or `SecondaryPrivateIpAddressCount`, or both.
                     * @return PrivateIpAddresses Information of the specified private IPs. You can specify up to 10 IPs at a time. You must provide either this parameter or `SecondaryPrivateIpAddressCount`, or both.
                     * 
                     */
                    std::vector<PrivateIpAddressSpecification> GetPrivateIpAddresses() const;

                    /**
                     * 设置Information of the specified private IPs. You can specify up to 10 IPs at a time. You must provide either this parameter or `SecondaryPrivateIpAddressCount`, or both.
                     * @param _privateIpAddresses Information of the specified private IPs. You can specify up to 10 IPs at a time. You must provide either this parameter or `SecondaryPrivateIpAddressCount`, or both.
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
                     * 获取Number of private IP addresses applied for. You must provide either this parameter or `PrivateIpAddresses`, or both. The total number of private IP addresses cannot exceed the quota.
                     * @return SecondaryPrivateIpAddressCount Number of private IP addresses applied for. You must provide either this parameter or `PrivateIpAddresses`, or both. The total number of private IP addresses cannot exceed the quota.
                     * 
                     */
                    uint64_t GetSecondaryPrivateIpAddressCount() const;

                    /**
                     * 设置Number of private IP addresses applied for. You must provide either this parameter or `PrivateIpAddresses`, or both. The total number of private IP addresses cannot exceed the quota.
                     * @param _secondaryPrivateIpAddressCount Number of private IP addresses applied for. You must provide either this parameter or `PrivateIpAddresses`, or both. The total number of private IP addresses cannot exceed the quota.
                     * 
                     */
                    void SetSecondaryPrivateIpAddressCount(const uint64_t& _secondaryPrivateIpAddressCount);

                    /**
                     * 判断参数 SecondaryPrivateIpAddressCount 是否已赋值
                     * @return SecondaryPrivateIpAddressCount 是否已赋值
                     * 
                     */
                    bool SecondaryPrivateIpAddressCountHasBeenSet() const;

                private:

                    /**
                     * ENI instance ID, such as `eni-m6dyj72l`.
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * ECM region, such as `ap-xian-ecm`.
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                    /**
                     * Information of the specified private IPs. You can specify up to 10 IPs at a time. You must provide either this parameter or `SecondaryPrivateIpAddressCount`, or both.
                     */
                    std::vector<PrivateIpAddressSpecification> m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                    /**
                     * Number of private IP addresses applied for. You must provide either this parameter or `PrivateIpAddresses`, or both. The total number of private IP addresses cannot exceed the quota.
                     */
                    uint64_t m_secondaryPrivateIpAddressCount;
                    bool m_secondaryPrivateIpAddressCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_ASSIGNPRIVATEIPADDRESSESREQUEST_H_
