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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MIGRATEPRIVATEIPADDRESSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MIGRATEPRIVATEIPADDRESSREQUEST_H_

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
                * MigratePrivateIpAddress request structure.
                */
                class MigratePrivateIpAddressRequest : public AbstractModel
                {
                public:
                    MigratePrivateIpAddressRequest();
                    ~MigratePrivateIpAddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the ENI instance bound with the private IP, such as `eni-m6dyj72l`.
                     * @return SourceNetworkInterfaceId ID of the ENI instance bound with the private IP, such as `eni-m6dyj72l`.
                     * 
                     */
                    std::string GetSourceNetworkInterfaceId() const;

                    /**
                     * 设置ID of the ENI instance bound with the private IP, such as `eni-m6dyj72l`.
                     * @param _sourceNetworkInterfaceId ID of the ENI instance bound with the private IP, such as `eni-m6dyj72l`.
                     * 
                     */
                    void SetSourceNetworkInterfaceId(const std::string& _sourceNetworkInterfaceId);

                    /**
                     * 判断参数 SourceNetworkInterfaceId 是否已赋值
                     * @return SourceNetworkInterfaceId 是否已赋值
                     * 
                     */
                    bool SourceNetworkInterfaceIdHasBeenSet() const;

                    /**
                     * 获取ID of the destination ENI instance to be migrated.
                     * @return DestinationNetworkInterfaceId ID of the destination ENI instance to be migrated.
                     * 
                     */
                    std::string GetDestinationNetworkInterfaceId() const;

                    /**
                     * 设置ID of the destination ENI instance to be migrated.
                     * @param _destinationNetworkInterfaceId ID of the destination ENI instance to be migrated.
                     * 
                     */
                    void SetDestinationNetworkInterfaceId(const std::string& _destinationNetworkInterfaceId);

                    /**
                     * 判断参数 DestinationNetworkInterfaceId 是否已赋值
                     * @return DestinationNetworkInterfaceId 是否已赋值
                     * 
                     */
                    bool DestinationNetworkInterfaceIdHasBeenSet() const;

                    /**
                     * 获取The private IP to be migrated, such as 10.0.0.6.
                     * @return PrivateIpAddress The private IP to be migrated, such as 10.0.0.6.
                     * 
                     */
                    std::string GetPrivateIpAddress() const;

                    /**
                     * 设置The private IP to be migrated, such as 10.0.0.6.
                     * @param _privateIpAddress The private IP to be migrated, such as 10.0.0.6.
                     * 
                     */
                    void SetPrivateIpAddress(const std::string& _privateIpAddress);

                    /**
                     * 判断参数 PrivateIpAddress 是否已赋值
                     * @return PrivateIpAddress 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressHasBeenSet() const;

                private:

                    /**
                     * ID of the ENI instance bound with the private IP, such as `eni-m6dyj72l`.
                     */
                    std::string m_sourceNetworkInterfaceId;
                    bool m_sourceNetworkInterfaceIdHasBeenSet;

                    /**
                     * ID of the destination ENI instance to be migrated.
                     */
                    std::string m_destinationNetworkInterfaceId;
                    bool m_destinationNetworkInterfaceIdHasBeenSet;

                    /**
                     * The private IP to be migrated, such as 10.0.0.6.
                     */
                    std::string m_privateIpAddress;
                    bool m_privateIpAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MIGRATEPRIVATEIPADDRESSREQUEST_H_
