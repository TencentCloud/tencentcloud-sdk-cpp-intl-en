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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SKILLCATEGORY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SKILLCATEGORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * SkillCategory classification information.
                */
                class SkillCategory : public AbstractModel
                {
                public:
                    SkillCategory();
                    ~SkillCategory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Category identifier
                     * @return CategoryKey Category identifier
                     * 
                     */
                    std::string GetCategoryKey() const;

                    /**
                     * 设置Category identifier
                     * @param _categoryKey Category identifier
                     * 
                     */
                    void SetCategoryKey(const std::string& _categoryKey);

                    /**
                     * 判断参数 CategoryKey 是否已赋值
                     * @return CategoryKey 是否已赋值
                     * 
                     */
                    bool CategoryKeyHasBeenSet() const;

                    /**
                     * 获取Category name
                     * @return CategoryName Category name
                     * 
                     */
                    std::string GetCategoryName() const;

                    /**
                     * 设置Category name
                     * @param _categoryName Category name
                     * 
                     */
                    void SetCategoryName(const std::string& _categoryName);

                    /**
                     * 判断参数 CategoryName 是否已赋值
                     * @return CategoryName 是否已赋值
                     * 
                     */
                    bool CategoryNameHasBeenSet() const;

                private:

                    /**
                     * Category identifier
                     */
                    std::string m_categoryKey;
                    bool m_categoryKeyHasBeenSet;

                    /**
                     * Category name
                     */
                    std::string m_categoryName;
                    bool m_categoryNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SKILLCATEGORY_H_
