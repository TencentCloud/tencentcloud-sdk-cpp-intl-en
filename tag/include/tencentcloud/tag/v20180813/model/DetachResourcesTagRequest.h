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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_DETACHRESOURCESTAGREQUEST_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_DETACHRESOURCESTAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tag
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * DetachResourcesTag request structure.
                */
                class DetachResourcesTagRequest : public AbstractModel
                {
                public:
                    DetachResourcesTagRequest();
                    ~DetachResourcesTagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Resource service name
                     * @return ServiceType Resource service name
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置Resource service name
                     * @param ServiceType Resource service name
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取Resource ID array, which can contain up to 50 resources
                     * @return ResourceIds Resource ID array, which can contain up to 50 resources
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置Resource ID array, which can contain up to 50 resources
                     * @param ResourceIds Resource ID array, which can contain up to 50 resources
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取Tag key to be unbound
                     * @return TagKey Tag key to be unbound
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置Tag key to be unbound
                     * @param TagKey Tag key to be unbound
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     */
                    bool TagKeyHasBeenSet() const;

                    /**
                     * 获取Resource region. This field is not required for resources that do not have the region attribute
                     * @return ResourceRegion Resource region. This field is not required for resources that do not have the region attribute
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置Resource region. This field is not required for resources that do not have the region attribute
                     * @param ResourceRegion Resource region. This field is not required for resources that do not have the region attribute
                     */
                    void SetResourceRegion(const std::string& _resourceRegion);

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     */
                    bool ResourceRegionHasBeenSet() const;

                    /**
                     * 获取Resource prefix, which is not required for COS buckets
                     * @return ResourcePrefix Resource prefix, which is not required for COS buckets
                     */
                    std::string GetResourcePrefix() const;

                    /**
                     * 设置Resource prefix, which is not required for COS buckets
                     * @param ResourcePrefix Resource prefix, which is not required for COS buckets
                     */
                    void SetResourcePrefix(const std::string& _resourcePrefix);

                    /**
                     * 判断参数 ResourcePrefix 是否已赋值
                     * @return ResourcePrefix 是否已赋值
                     */
                    bool ResourcePrefixHasBeenSet() const;

                private:

                    /**
                     * Resource service name
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * Resource ID array, which can contain up to 50 resources
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * Tag key to be unbound
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * Resource region. This field is not required for resources that do not have the region attribute
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * Resource prefix, which is not required for COS buckets
                     */
                    std::string m_resourcePrefix;
                    bool m_resourcePrefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_DETACHRESOURCESTAGREQUEST_H_
