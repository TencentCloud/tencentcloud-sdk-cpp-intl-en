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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_ATTACHRESOURCESTAGREQUEST_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_ATTACHRESOURCESTAGREQUEST_H_

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
                * AttachResourcesTag request structure.
                */
                class AttachResourcesTagRequest : public AbstractModel
                {
                public:
                    AttachResourcesTagRequest();
                    ~AttachResourcesTagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Service short name, which is the third segment of the six-segment resource format. For more information on the format, see https://intl.cloud.tencent.com/document/product/651/89122?from_cn_redirect=1
                     * @return ServiceType Service short name, which is the third segment of the six-segment resource format. For more information on the format, see https://intl.cloud.tencent.com/document/product/651/89122?from_cn_redirect=1
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置Service short name, which is the third segment of the six-segment resource format. For more information on the format, see https://intl.cloud.tencent.com/document/product/651/89122?from_cn_redirect=1
                     * @param _serviceType Service short name, which is the third segment of the six-segment resource format. For more information on the format, see https://intl.cloud.tencent.com/document/product/651/89122?from_cn_redirect=1
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取Resource ID array, which can contain up to 50 resources
                     * @return ResourceIds Resource ID array, which can contain up to 50 resources
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置Resource ID array, which can contain up to 50 resources
                     * @param _resourceIds Resource ID array, which can contain up to 50 resources
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
                     * 获取The tag key that needs to be bound. For the requirements, refer to: https://intl.cloud.tencent.com/document/product/651/13354?from_cn_redirect=1
                     * @return TagKey The tag key that needs to be bound. For the requirements, refer to: https://intl.cloud.tencent.com/document/product/651/13354?from_cn_redirect=1
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置The tag key that needs to be bound. For the requirements, refer to: https://intl.cloud.tencent.com/document/product/651/13354?from_cn_redirect=1
                     * @param _tagKey The tag key that needs to be bound. For the requirements, refer to: https://intl.cloud.tencent.com/document/product/651/13354?from_cn_redirect=1
                     * 
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                    /**
                     * 获取The tag value that needs to be bound. For the requirements, refer to: https://intl.cloud.tencent.com/document/product/651/13354?from_cn_redirect=1
                     * @return TagValue The tag value that needs to be bound. For the requirements, refer to: https://intl.cloud.tencent.com/document/product/651/13354?from_cn_redirect=1
                     * 
                     */
                    std::string GetTagValue() const;

                    /**
                     * 设置The tag value that needs to be bound. For the requirements, refer to: https://intl.cloud.tencent.com/document/product/651/13354?from_cn_redirect=1
                     * @param _tagValue The tag value that needs to be bound. For the requirements, refer to: https://intl.cloud.tencent.com/document/product/651/13354?from_cn_redirect=1
                     * 
                     */
                    void SetTagValue(const std::string& _tagValue);

                    /**
                     * 判断参数 TagValue 是否已赋值
                     * @return TagValue 是否已赋值
                     * 
                     */
                    bool TagValueHasBeenSet() const;

                    /**
                     * 获取Region of the resource. This parameter can be left blank if region is not involved. The region must correspond to resources specified by ResourceIds.N. Once the region is specified, all resources specified by ResourceIds.N must locate in this region. Example: ap-beijing.
                     * @return ResourceRegion Region of the resource. This parameter can be left blank if region is not involved. The region must correspond to resources specified by ResourceIds.N. Once the region is specified, all resources specified by ResourceIds.N must locate in this region. Example: ap-beijing.
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置Region of the resource. This parameter can be left blank if region is not involved. The region must correspond to resources specified by ResourceIds.N. Once the region is specified, all resources specified by ResourceIds.N must locate in this region. Example: ap-beijing.
                     * @param _resourceRegion Region of the resource. This parameter can be left blank if region is not involved. The region must correspond to resources specified by ResourceIds.N. Once the region is specified, all resources specified by ResourceIds.N must locate in this region. Example: ap-beijing.
                     * 
                     */
                    void SetResourceRegion(const std::string& _resourceRegion);

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     * 
                     */
                    bool ResourceRegionHasBeenSet() const;

                    /**
                     * 获取Resource prefix (the part before "/" in the last segment in the six-segment resource description), which is optional for COS buckets but required for other Tencent Cloud resources.
                     * @return ResourcePrefix Resource prefix (the part before "/" in the last segment in the six-segment resource description), which is optional for COS buckets but required for other Tencent Cloud resources.
                     * 
                     */
                    std::string GetResourcePrefix() const;

                    /**
                     * 设置Resource prefix (the part before "/" in the last segment in the six-segment resource description), which is optional for COS buckets but required for other Tencent Cloud resources.
                     * @param _resourcePrefix Resource prefix (the part before "/" in the last segment in the six-segment resource description), which is optional for COS buckets but required for other Tencent Cloud resources.
                     * 
                     */
                    void SetResourcePrefix(const std::string& _resourcePrefix);

                    /**
                     * 判断参数 ResourcePrefix 是否已赋值
                     * @return ResourcePrefix 是否已赋值
                     * 
                     */
                    bool ResourcePrefixHasBeenSet() const;

                private:

                    /**
                     * Service short name, which is the third segment of the six-segment resource format. For more information on the format, see https://intl.cloud.tencent.com/document/product/651/89122?from_cn_redirect=1
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * Resource ID array, which can contain up to 50 resources
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * The tag key that needs to be bound. For the requirements, refer to: https://intl.cloud.tencent.com/document/product/651/13354?from_cn_redirect=1
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * The tag value that needs to be bound. For the requirements, refer to: https://intl.cloud.tencent.com/document/product/651/13354?from_cn_redirect=1
                     */
                    std::string m_tagValue;
                    bool m_tagValueHasBeenSet;

                    /**
                     * Region of the resource. This parameter can be left blank if region is not involved. The region must correspond to resources specified by ResourceIds.N. Once the region is specified, all resources specified by ResourceIds.N must locate in this region. Example: ap-beijing.
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * Resource prefix (the part before "/" in the last segment in the six-segment resource description), which is optional for COS buckets but required for other Tencent Cloud resources.
                     */
                    std::string m_resourcePrefix;
                    bool m_resourcePrefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_ATTACHRESOURCESTAGREQUEST_H_
