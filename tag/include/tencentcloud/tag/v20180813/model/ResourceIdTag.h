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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_RESOURCEIDTAG_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_RESOURCEIDTAG_H_

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
                * Resource tag key value
                */
                class ResourceIdTag : public AbstractModel
                {
                public:
                    ResourceIdTag();
                    ~ResourceIdTag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique resource ID
Note: this field may return null, indicating that no valid values can be obtained
                     * @return ResourceId Unique resource ID
Note: this field may return null, indicating that no valid values can be obtained
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Unique resource ID
Note: this field may return null, indicating that no valid values can be obtained
                     * @param _resourceId Unique resource ID
Note: this field may return null, indicating that no valid values can be obtained
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
                     * 获取Tag key-value pair
Note: this field may return null, indicating that no valid values can be obtained
                     * @return TagKeyValues Tag key-value pair
Note: this field may return null, indicating that no valid values can be obtained
                     * 
                     */
                    std::vector<Tag> GetTagKeyValues() const;

                    /**
                     * 设置Tag key-value pair
Note: this field may return null, indicating that no valid values can be obtained
                     * @param _tagKeyValues Tag key-value pair
Note: this field may return null, indicating that no valid values can be obtained
                     * 
                     */
                    void SetTagKeyValues(const std::vector<Tag>& _tagKeyValues);

                    /**
                     * 判断参数 TagKeyValues 是否已赋值
                     * @return TagKeyValues 是否已赋值
                     * 
                     */
                    bool TagKeyValuesHasBeenSet() const;

                private:

                    /**
                     * Unique resource ID
Note: this field may return null, indicating that no valid values can be obtained
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Tag key-value pair
Note: this field may return null, indicating that no valid values can be obtained
                     */
                    std::vector<Tag> m_tagKeyValues;
                    bool m_tagKeyValuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_RESOURCEIDTAG_H_
