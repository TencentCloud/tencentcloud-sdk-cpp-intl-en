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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_RESOURCETAG_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_RESOURCETAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tag/v20180813/model/Tag.h>


namespace TencentCloud
{
    namespace Tag
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * Resource tag.
                */
                class ResourceTag : public AbstractModel
                {
                public:
                    ResourceTag();
                    ~ResourceTag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The resource's region.
Note: This field may return null, indicating that no valid value is found.
                     * @return ResourceRegion The resource's region.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置The resource's region.
Note: This field may return null, indicating that no valid value is found.
                     * @param _resourceRegion The resource's region.
Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Service type.
Note: This field may return null, indicating that no valid value is found.
                     * @return ServiceType Service type.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置Service type.
Note: This field may return null, indicating that no valid value is found.
                     * @param _serviceType Service type.
Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Resource prefix.
Note: This field may return null, indicating that no valid value is found.
                     * @return ResourcePrefix Resource prefix.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetResourcePrefix() const;

                    /**
                     * 设置Resource prefix.
Note: This field may return null, indicating that no valid value is found.
                     * @param _resourcePrefix Resource prefix.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetResourcePrefix(const std::string& _resourcePrefix);

                    /**
                     * 判断参数 ResourcePrefix 是否已赋值
                     * @return ResourcePrefix 是否已赋值
                     * 
                     */
                    bool ResourcePrefixHasBeenSet() const;

                    /**
                     * 获取Unique resource ID.
Note: This field may return null, indicating that no valid value is found.
                     * @return ResourceId Unique resource ID.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Unique resource ID.
Note: This field may return null, indicating that no valid value is found.
                     * @param _resourceId Unique resource ID.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取Resource tag.
Note: This field may return null, indicating that no valid value is found.
                     * @return Tags Resource tag.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Resource tag.
Note: This field may return null, indicating that no valid value is found.
                     * @param _tags Resource tag.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * The resource's region.
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * Service type.
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * Resource prefix.
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_resourcePrefix;
                    bool m_resourcePrefixHasBeenSet;

                    /**
                     * Unique resource ID.
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Resource tag.
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_RESOURCETAG_H_
