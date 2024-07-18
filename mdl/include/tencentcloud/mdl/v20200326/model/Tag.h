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
                * Console Tag, for documentation please refer to: https://www.tencentcloud.com/document/product/651.
                */
                class Tag : public AbstractModel
                {
                public:
                    Tag();
                    ~Tag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tag key, for restrictions please refer to the tag documentation: https://www.tencentcloud.com/document/product/651/13354.
                     * @return TagKey Tag key, for restrictions please refer to the tag documentation: https://www.tencentcloud.com/document/product/651/13354.
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置Tag key, for restrictions please refer to the tag documentation: https://www.tencentcloud.com/document/product/651/13354.
                     * @param _tagKey Tag key, for restrictions please refer to the tag documentation: https://www.tencentcloud.com/document/product/651/13354.
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
                     * 获取Tag value, for restrictions please refer to the tag documentation: https://www.tencentcloud.com/document/product/651/13354.
                     * @return TagValue Tag value, for restrictions please refer to the tag documentation: https://www.tencentcloud.com/document/product/651/13354.
                     * 
                     */
                    std::string GetTagValue() const;

                    /**
                     * 设置Tag value, for restrictions please refer to the tag documentation: https://www.tencentcloud.com/document/product/651/13354.
                     * @param _tagValue Tag value, for restrictions please refer to the tag documentation: https://www.tencentcloud.com/document/product/651/13354.
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
                     * 获取Tag type, optional; for documentation please refer to: https://www.tencentcloud.com/document/product/651/33023#tag.
                     * @return Category Tag type, optional; for documentation please refer to: https://www.tencentcloud.com/document/product/651/33023#tag.
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置Tag type, optional; for documentation please refer to: https://www.tencentcloud.com/document/product/651/33023#tag.
                     * @param _category Tag type, optional; for documentation please refer to: https://www.tencentcloud.com/document/product/651/33023#tag.
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
                     * Tag key, for restrictions please refer to the tag documentation: https://www.tencentcloud.com/document/product/651/13354.
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * Tag value, for restrictions please refer to the tag documentation: https://www.tencentcloud.com/document/product/651/13354.
                     */
                    std::string m_tagValue;
                    bool m_tagValueHasBeenSet;

                    /**
                     * Tag type, optional; for documentation please refer to: https://www.tencentcloud.com/document/product/651/33023#tag.
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_TAG_H_
