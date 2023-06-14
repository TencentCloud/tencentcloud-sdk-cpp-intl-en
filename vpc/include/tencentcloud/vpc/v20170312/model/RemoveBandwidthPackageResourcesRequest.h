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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_REMOVEBANDWIDTHPACKAGERESOURCESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_REMOVEBANDWIDTHPACKAGERESOURCESREQUEST_H_

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
                * RemoveBandwidthPackageResources request structure.
                */
                class RemoveBandwidthPackageResourcesRequest : public AbstractModel
                {
                public:
                    RemoveBandwidthPackageResourcesRequest();
                    ~RemoveBandwidthPackageResourcesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The unique ID of the bandwidth package, such as `bwp-xxxx`.
                     * @return BandwidthPackageId The unique ID of the bandwidth package, such as `bwp-xxxx`.
                     * 
                     */
                    std::string GetBandwidthPackageId() const;

                    /**
                     * 设置The unique ID of the bandwidth package, such as `bwp-xxxx`.
                     * @param _bandwidthPackageId The unique ID of the bandwidth package, such as `bwp-xxxx`.
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
                     * 获取The resource type. Valid values: `Address` and `LoadBalance`.
                     * @return ResourceType The resource type. Valid values: `Address` and `LoadBalance`.
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置The resource type. Valid values: `Address` and `LoadBalance`.
                     * @param _resourceType The resource type. Valid values: `Address` and `LoadBalance`.
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
                     * 获取The resource IP, such as `eip-xxxx` and `lb-xxxx`.
                     * @return ResourceIds The resource IP, such as `eip-xxxx` and `lb-xxxx`.
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置The resource IP, such as `eip-xxxx` and `lb-xxxx`.
                     * @param _resourceIds The resource IP, such as `eip-xxxx` and `lb-xxxx`.
                     * 
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                private:

                    /**
                     * The unique ID of the bandwidth package, such as `bwp-xxxx`.
                     */
                    std::string m_bandwidthPackageId;
                    bool m_bandwidthPackageIdHasBeenSet;

                    /**
                     * The resource type. Valid values: `Address` and `LoadBalance`.
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * The resource IP, such as `eip-xxxx` and `lb-xxxx`.
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_REMOVEBANDWIDTHPACKAGERESOURCESREQUEST_H_
