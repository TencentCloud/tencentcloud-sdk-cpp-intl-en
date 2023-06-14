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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MIGRATENETWORKINTERFACEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MIGRATENETWORKINTERFACEREQUEST_H_

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
                * MigrateNetworkInterface request structure.
                */
                class MigrateNetworkInterfaceRequest : public AbstractModel
                {
                public:
                    MigrateNetworkInterfaceRequest();
                    ~MigrateNetworkInterfaceRequest() = default;
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
                     * 获取The ID of the CVM bound to the ENI, such as `ins-r8hr2upy`.
                     * @return SourceInstanceId The ID of the CVM bound to the ENI, such as `ins-r8hr2upy`.
                     * 
                     */
                    std::string GetSourceInstanceId() const;

                    /**
                     * 设置The ID of the CVM bound to the ENI, such as `ins-r8hr2upy`.
                     * @param _sourceInstanceId The ID of the CVM bound to the ENI, such as `ins-r8hr2upy`.
                     * 
                     */
                    void SetSourceInstanceId(const std::string& _sourceInstanceId);

                    /**
                     * 判断参数 SourceInstanceId 是否已赋值
                     * @return SourceInstanceId 是否已赋值
                     * 
                     */
                    bool SourceInstanceIdHasBeenSet() const;

                    /**
                     * 获取ID of the destination CVM instance to be migrated.
                     * @return DestinationInstanceId ID of the destination CVM instance to be migrated.
                     * 
                     */
                    std::string GetDestinationInstanceId() const;

                    /**
                     * 设置ID of the destination CVM instance to be migrated.
                     * @param _destinationInstanceId ID of the destination CVM instance to be migrated.
                     * 
                     */
                    void SetDestinationInstanceId(const std::string& _destinationInstanceId);

                    /**
                     * 判断参数 DestinationInstanceId 是否已赋值
                     * @return DestinationInstanceId 是否已赋值
                     * 
                     */
                    bool DestinationInstanceIdHasBeenSet() const;

                    /**
                     * 获取ENI mount method. Valid values: 0: standard; 1: extension; default value: 0
                     * @return AttachType ENI mount method. Valid values: 0: standard; 1: extension; default value: 0
                     * 
                     */
                    uint64_t GetAttachType() const;

                    /**
                     * 设置ENI mount method. Valid values: 0: standard; 1: extension; default value: 0
                     * @param _attachType ENI mount method. Valid values: 0: standard; 1: extension; default value: 0
                     * 
                     */
                    void SetAttachType(const uint64_t& _attachType);

                    /**
                     * 判断参数 AttachType 是否已赋值
                     * @return AttachType 是否已赋值
                     * 
                     */
                    bool AttachTypeHasBeenSet() const;

                private:

                    /**
                     * The ID of the ENI instance, such as `eni-m6dyj72l`.
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * The ID of the CVM bound to the ENI, such as `ins-r8hr2upy`.
                     */
                    std::string m_sourceInstanceId;
                    bool m_sourceInstanceIdHasBeenSet;

                    /**
                     * ID of the destination CVM instance to be migrated.
                     */
                    std::string m_destinationInstanceId;
                    bool m_destinationInstanceIdHasBeenSet;

                    /**
                     * ENI mount method. Valid values: 0: standard; 1: extension; default value: 0
                     */
                    uint64_t m_attachType;
                    bool m_attachTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MIGRATENETWORKINTERFACEREQUEST_H_
