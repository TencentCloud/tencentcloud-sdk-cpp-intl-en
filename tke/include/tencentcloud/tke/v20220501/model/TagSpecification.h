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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_TAGSPECIFICATION_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_TAGSPECIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20220501/model/Tag.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * List of tag descriptions. By specifying this parameter, you can bind tags to corresponding resource instances at the same time. Currently, only tags can be bound to cloud host instances.
                */
                class TagSpecification : public AbstractModel
                {
                public:
                    TagSpecification();
                    ~TagSpecification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The type of resources the label is bound to. Type currently supported: "cluster".

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return ResourceType The type of resources the label is bound to. Type currently supported: "cluster".

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置The type of resources the label is bound to. Type currently supported: "cluster".

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _resourceType The type of resources the label is bound to. Type currently supported: "cluster".

Note: This field may return "null", indicating that no valid value can be obtained.
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
                     * 获取Tag pair list

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Tags Tag pair list

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag pair list

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _tags Tag pair list

Note: This field may return "null", indicating that no valid value can be obtained.
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
                     * The type of resources the label is bound to. Type currently supported: "cluster".

Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Tag pair list

Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_TAGSPECIFICATION_H_
