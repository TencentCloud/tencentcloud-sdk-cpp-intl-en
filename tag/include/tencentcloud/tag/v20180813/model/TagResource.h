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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_TAGRESOURCE_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_TAGRESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Tag key-value pair and resource ID.
                */
                class TagResource : public AbstractModel
                {
                public:
                    TagResource();
                    ~TagResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tag key.
                     * @return TagKey Tag key.
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置Tag key.
                     * @param _tagKey Tag key.
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
                     * 获取Tag value.
                     * @return TagValue Tag value.
                     * 
                     */
                    std::string GetTagValue() const;

                    /**
                     * 设置Tag value.
                     * @param _tagValue Tag value.
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
                     * 获取Resource ID.
                     * @return ResourceId Resource ID.
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource ID.
                     * @param _resourceId Resource ID.
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
                     * 获取Tag key MD5 value.
                     * @return TagKeyMd5 Tag key MD5 value.
                     * 
                     */
                    std::string GetTagKeyMd5() const;

                    /**
                     * 设置Tag key MD5 value.
                     * @param _tagKeyMd5 Tag key MD5 value.
                     * 
                     */
                    void SetTagKeyMd5(const std::string& _tagKeyMd5);

                    /**
                     * 判断参数 TagKeyMd5 是否已赋值
                     * @return TagKeyMd5 是否已赋值
                     * 
                     */
                    bool TagKeyMd5HasBeenSet() const;

                    /**
                     * 获取Tag value MD5 value.
                     * @return TagValueMd5 Tag value MD5 value.
                     * 
                     */
                    std::string GetTagValueMd5() const;

                    /**
                     * 设置Tag value MD5 value.
                     * @param _tagValueMd5 Tag value MD5 value.
                     * 
                     */
                    void SetTagValueMd5(const std::string& _tagValueMd5);

                    /**
                     * 判断参数 TagValueMd5 是否已赋值
                     * @return TagValueMd5 是否已赋值
                     * 
                     */
                    bool TagValueMd5HasBeenSet() const;

                    /**
                     * 获取Resource type
Note: this field may return null, indicating that no valid values found.
                     * @return ServiceType Resource type
Note: this field may return null, indicating that no valid values found.
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置Resource type
Note: this field may return null, indicating that no valid values found.
                     * @param _serviceType Resource type
Note: this field may return null, indicating that no valid values found.
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
                     * 获取Tag type. Valid values: Custom: custom tag; System: system tag.Note: This field may return null, indicating that no value is obtained.
                     * @return Category Tag type. Valid values: Custom: custom tag; System: system tag.Note: This field may return null, indicating that no value is obtained.
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置Tag type. Valid values: Custom: custom tag; System: system tag.Note: This field may return null, indicating that no value is obtained.
                     * @param _category Tag type. Valid values: Custom: custom tag; System: system tag.Note: This field may return null, indicating that no value is obtained.
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                private:

                    /**
                     * Tag key.
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * Tag value.
                     */
                    std::string m_tagValue;
                    bool m_tagValueHasBeenSet;

                    /**
                     * Resource ID.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Tag key MD5 value.
                     */
                    std::string m_tagKeyMd5;
                    bool m_tagKeyMd5HasBeenSet;

                    /**
                     * Tag value MD5 value.
                     */
                    std::string m_tagValueMd5;
                    bool m_tagValueMd5HasBeenSet;

                    /**
                     * Resource type
Note: this field may return null, indicating that no valid values found.
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * Tag type. Valid values: Custom: custom tag; System: system tag.Note: This field may return null, indicating that no value is obtained.
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_TAGRESOURCE_H_
