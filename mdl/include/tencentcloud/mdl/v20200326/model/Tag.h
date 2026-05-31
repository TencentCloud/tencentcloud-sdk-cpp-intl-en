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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_TAG_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_TAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Console tag, documentation link: https://www.tencentcloud.com/document/product/651.?from_cn_redirect=1
                */
                class Tag : public AbstractModel
                {
                public:
                    Tag();
                    ~Tag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tag key. Refer to the tag document (https://www.tencentcloud.com/document/product/651/13354?from_cn_redirect=1) for limits.
                     * @return TagKey Tag key. Refer to the tag document (https://www.tencentcloud.com/document/product/651/13354?from_cn_redirect=1) for limits.
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置Tag key. Refer to the tag document (https://www.tencentcloud.com/document/product/651/13354?from_cn_redirect=1) for limits.
                     * @param _tagKey Tag key. Refer to the tag document (https://www.tencentcloud.com/document/product/651/13354?from_cn_redirect=1) for limits.
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
                     * 获取Tag value. For reference, see the tag document at https://www.tencentcloud.com/document/product/651/13354.?from_cn_redirect=1
                     * @return TagValue Tag value. For reference, see the tag document at https://www.tencentcloud.com/document/product/651/13354.?from_cn_redirect=1
                     * 
                     */
                    std::string GetTagValue() const;

                    /**
                     * 设置Tag value. For reference, see the tag document at https://www.tencentcloud.com/document/product/651/13354.?from_cn_redirect=1
                     * @param _tagValue Tag value. For reference, see the tag document at https://www.tencentcloud.com/document/product/651/13354.?from_cn_redirect=1
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
                     * 获取Tag type, optional. See the tag document for reference (https://www.tencentcloud.com/document/product/651/35327?from_cn_redirect=1#Tag).
                     * @return Category Tag type, optional. See the tag document for reference (https://www.tencentcloud.com/document/product/651/35327?from_cn_redirect=1#Tag).
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置Tag type, optional. See the tag document for reference (https://www.tencentcloud.com/document/product/651/35327?from_cn_redirect=1#Tag).
                     * @param _category Tag type, optional. See the tag document for reference (https://www.tencentcloud.com/document/product/651/35327?from_cn_redirect=1#Tag).
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
                     * Tag key. Refer to the tag document (https://www.tencentcloud.com/document/product/651/13354?from_cn_redirect=1) for limits.
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * Tag value. For reference, see the tag document at https://www.tencentcloud.com/document/product/651/13354.?from_cn_redirect=1
                     */
                    std::string m_tagValue;
                    bool m_tagValueHasBeenSet;

                    /**
                     * Tag type, optional. See the tag document for reference (https://www.tencentcloud.com/document/product/651/35327?from_cn_redirect=1#Tag).
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_TAG_H_
