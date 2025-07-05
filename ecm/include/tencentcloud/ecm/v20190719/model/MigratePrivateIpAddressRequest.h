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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_MIGRATEPRIVATEIPADDRESSREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_MIGRATEPRIVATEIPADDRESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
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
                     * 获取ID of the ENI instance bound to the private IP, such as `eni-11112222`.
                     * @return SourceNetworkInterfaceId ID of the ENI instance bound to the private IP, such as `eni-11112222`.
                     * 
                     */
                    std::string GetSourceNetworkInterfaceId() const;

                    /**
                     * 设置ID of the ENI instance bound to the private IP, such as `eni-11112222`.
                     * @param _sourceNetworkInterfaceId ID of the ENI instance bound to the private IP, such as `eni-11112222`.
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
                     * 获取Private IP address to be migrated, such as `10.0.0.6`.
                     * @return PrivateIpAddress Private IP address to be migrated, such as `10.0.0.6`.
                     * 
                     */
                    std::string GetPrivateIpAddress() const;

                    /**
                     * 设置Private IP address to be migrated, such as `10.0.0.6`.
                     * @param _privateIpAddress Private IP address to be migrated, such as `10.0.0.6`.
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
                     * ECM region, such as `ap-xian-ecm`.
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                    /**
                     * ID of the ENI instance bound to the private IP, such as `eni-11112222`.
                     */
                    std::string m_sourceNetworkInterfaceId;
                    bool m_sourceNetworkInterfaceIdHasBeenSet;

                    /**
                     * ID of the destination ENI instance to be migrated.
                     */
                    std::string m_destinationNetworkInterfaceId;
                    bool m_destinationNetworkInterfaceIdHasBeenSet;

                    /**
                     * Private IP address to be migrated, such as `10.0.0.6`.
                     */
                    std::string m_privateIpAddress;
                    bool m_privateIpAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_MIGRATEPRIVATEIPADDRESSREQUEST_H_
