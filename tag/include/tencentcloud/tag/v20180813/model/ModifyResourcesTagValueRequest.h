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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_MODIFYRESOURCESTAGVALUEREQUEST_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_MODIFYRESOURCESTAGVALUEREQUEST_H_

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
                * ModifyResourcesTagValue request structure.
                */
                class ModifyResourcesTagValueRequest : public AbstractModel
                {
                public:
                    ModifyResourcesTagValueRequest();
                    ~ModifyResourcesTagValueRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Resource service name (the third segment in the six-segment resource description)
                     * @return ServiceType Resource service name (the third segment in the six-segment resource description)
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置Resource service name (the third segment in the six-segment resource description)
                     * @param _serviceType Resource service name (the third segment in the six-segment resource description)
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
                     * 获取Tag key
                     * @return TagKey Tag key
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置Tag key
                     * @param _tagKey Tag key
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
                     * 获取Tag value
                     * @return TagValue Tag value
                     * 
                     */
                    std::string GetTagValue() const;

                    /**
                     * 设置Tag value
                     * @param _tagValue Tag value
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
                     * 获取Resource region. If resources have the region attribute, this field is required; otherwise, it is optional.
                     * @return ResourceRegion Resource region. If resources have the region attribute, this field is required; otherwise, it is optional.
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置Resource region. If resources have the region attribute, this field is required; otherwise, it is optional.
                     * @param _resourceRegion Resource region. If resources have the region attribute, this field is required; otherwise, it is optional.
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
                     * Resource service name (the third segment in the six-segment resource description)
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * Resource ID array, which can contain up to 50 resources
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * Tag key
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * Tag value
                     */
                    std::string m_tagValue;
                    bool m_tagValueHasBeenSet;

                    /**
                     * Resource region. If resources have the region attribute, this field is required; otherwise, it is optional.
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

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_MODIFYRESOURCESTAGVALUEREQUEST_H_
