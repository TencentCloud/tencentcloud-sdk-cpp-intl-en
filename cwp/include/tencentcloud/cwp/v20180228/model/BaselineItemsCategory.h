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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEITEMSCATEGORY_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEITEMSCATEGORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/BaselineCategory.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Baseline detection item category tree structure.
                */
                class BaselineItemsCategory : public AbstractModel
                {
                public:
                    BaselineItemsCategory();
                    ~BaselineItemsCategory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Parent category ID of a baseline detection item.
                     * @return ParentCategoryId Parent category ID of a baseline detection item.
                     * 
                     */
                    int64_t GetParentCategoryId() const;

                    /**
                     * 设置Parent category ID of a baseline detection item.
                     * @param _parentCategoryId Parent category ID of a baseline detection item.
                     * 
                     */
                    void SetParentCategoryId(const int64_t& _parentCategoryId);

                    /**
                     * 判断参数 ParentCategoryId 是否已赋值
                     * @return ParentCategoryId 是否已赋值
                     * 
                     */
                    bool ParentCategoryIdHasBeenSet() const;

                    /**
                     * 获取Parent category name of a baseline detection item.
                     * @return ParentCategoryName Parent category name of a baseline detection item.
                     * 
                     */
                    std::string GetParentCategoryName() const;

                    /**
                     * 设置Parent category name of a baseline detection item.
                     * @param _parentCategoryName Parent category name of a baseline detection item.
                     * 
                     */
                    void SetParentCategoryName(const std::string& _parentCategoryName);

                    /**
                     * 判断参数 ParentCategoryName 是否已赋值
                     * @return ParentCategoryName 是否已赋值
                     * 
                     */
                    bool ParentCategoryNameHasBeenSet() const;

                    /**
                     * 获取Number of baseline detection item subcategories.
                     * @return CategoryCount Number of baseline detection item subcategories.
                     * 
                     */
                    int64_t GetCategoryCount() const;

                    /**
                     * 设置Number of baseline detection item subcategories.
                     * @param _categoryCount Number of baseline detection item subcategories.
                     * 
                     */
                    void SetCategoryCount(const int64_t& _categoryCount);

                    /**
                     * 判断参数 CategoryCount 是否已赋值
                     * @return CategoryCount 是否已赋值
                     * 
                     */
                    bool CategoryCountHasBeenSet() const;

                    /**
                     * 获取Baseline detection item subcategory list.
                     * @return CategoryLists Baseline detection item subcategory list.
                     * 
                     */
                    std::vector<BaselineCategory> GetCategoryLists() const;

                    /**
                     * 设置Baseline detection item subcategory list.
                     * @param _categoryLists Baseline detection item subcategory list.
                     * 
                     */
                    void SetCategoryLists(const std::vector<BaselineCategory>& _categoryLists);

                    /**
                     * 判断参数 CategoryLists 是否已赋值
                     * @return CategoryLists 是否已赋值
                     * 
                     */
                    bool CategoryListsHasBeenSet() const;

                private:

                    /**
                     * Parent category ID of a baseline detection item.
                     */
                    int64_t m_parentCategoryId;
                    bool m_parentCategoryIdHasBeenSet;

                    /**
                     * Parent category name of a baseline detection item.
                     */
                    std::string m_parentCategoryName;
                    bool m_parentCategoryNameHasBeenSet;

                    /**
                     * Number of baseline detection item subcategories.
                     */
                    int64_t m_categoryCount;
                    bool m_categoryCountHasBeenSet;

                    /**
                     * Baseline detection item subcategory list.
                     */
                    std::vector<BaselineCategory> m_categoryLists;
                    bool m_categoryListsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEITEMSCATEGORY_H_
