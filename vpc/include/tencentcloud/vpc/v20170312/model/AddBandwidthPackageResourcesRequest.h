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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ADDBANDWIDTHPACKAGERESOURCESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ADDBANDWIDTHPACKAGERESOURCESREQUEST_H_

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
                * AddBandwidthPackageResources request structure.
                */
                class AddBandwidthPackageResourcesRequest : public AbstractModel
                {
                public:
                    AddBandwidthPackageResourcesRequest();
                    ~AddBandwidthPackageResourcesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The unique ID of the source, such as 'eip-xxxx' and 'lb-xxxx'. EIP and LB resources are currently supported.
                     * @return ResourceIds The unique ID of the source, such as 'eip-xxxx' and 'lb-xxxx'. EIP and LB resources are currently supported.
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置The unique ID of the source, such as 'eip-xxxx' and 'lb-xxxx'. EIP and LB resources are currently supported.
                     * @param _resourceIds The unique ID of the source, such as 'eip-xxxx' and 'lb-xxxx'. EIP and LB resources are currently supported.
                     * 
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取The unique ID of the bandwidth package, such as 'bwp-xxxx'.
                     * @return BandwidthPackageId The unique ID of the bandwidth package, such as 'bwp-xxxx'.
                     * 
                     */
                    std::string GetBandwidthPackageId() const;

                    /**
                     * 设置The unique ID of the bandwidth package, such as 'bwp-xxxx'.
                     * @param _bandwidthPackageId The unique ID of the bandwidth package, such as 'bwp-xxxx'.
                     * 
                     */
                    void SetBandwidthPackageId(const std::string& _bandwidthPackageId);

                    /**
                     * 判断参数 BandwidthPackageId 是否已赋值
                     * @return BandwidthPackageId 是否已赋值
                     * 
                     */
                    bool BandwidthPackageIdHasBeenSet() const;

                    /**
                     * 获取The network type of the bandwidth package. Valid value: `BGP`, indicating that the internal resource is a BGP IP.
                     * @return NetworkType The network type of the bandwidth package. Valid value: `BGP`, indicating that the internal resource is a BGP IP.
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置The network type of the bandwidth package. Valid value: `BGP`, indicating that the internal resource is a BGP IP.
                     * @param _networkType The network type of the bandwidth package. Valid value: `BGP`, indicating that the internal resource is a BGP IP.
                     * 
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     * 
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取The resource type, including `Address` and `LoadBalance`.
                     * @return ResourceType The resource type, including `Address` and `LoadBalance`.
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置The resource type, including `Address` and `LoadBalance`.
                     * @param _resourceType The resource type, including `Address` and `LoadBalance`.
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取The protocol type of the bandwidth package. Valid values: `ipv4` and `ipv6`.
                     * @return Protocol The protocol type of the bandwidth package. Valid values: `ipv4` and `ipv6`.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置The protocol type of the bandwidth package. Valid values: `ipv4` and `ipv6`.
                     * @param _protocol The protocol type of the bandwidth package. Valid values: `ipv4` and `ipv6`.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                private:

                    /**
                     * The unique ID of the source, such as 'eip-xxxx' and 'lb-xxxx'. EIP and LB resources are currently supported.
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * The unique ID of the bandwidth package, such as 'bwp-xxxx'.
                     */
                    std::string m_bandwidthPackageId;
                    bool m_bandwidthPackageIdHasBeenSet;

                    /**
                     * The network type of the bandwidth package. Valid value: `BGP`, indicating that the internal resource is a BGP IP.
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * The resource type, including `Address` and `LoadBalance`.
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * The protocol type of the bandwidth package. Valid values: `ipv4` and `ipv6`.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ADDBANDWIDTHPACKAGERESOURCESREQUEST_H_
