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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINECATEGORY_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINECATEGORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Classification of Baseline Rules or Items
                */
                class BaselineCategory : public AbstractModel
                {
                public:
                    BaselineCategory();
                    ~BaselineCategory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Category ID
                     * @return CategoryId Category ID
                     * 
                     */
                    int64_t GetCategoryId() const;

                    /**
                     * 设置Category ID
                     * @param _categoryId Category ID
                     * 
                     */
                    void SetCategoryId(const int64_t& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

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

                    /**
                     * 获取Parent Category ID. No parent category if it is 0.
                     * @return ParentCategoryId Parent Category ID. No parent category if it is 0.
                     * 
                     */
                    int64_t GetParentCategoryId() const;

                    /**
                     * 设置Parent Category ID. No parent category if it is 0.
                     * @param _parentCategoryId Parent Category ID. No parent category if it is 0.
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
                     * 获取Total number of detection items under a subcategory.
                     * @return ItemCount Total number of detection items under a subcategory.
                     * 
                     */
                    uint64_t GetItemCount() const;

                    /**
                     * 设置Total number of detection items under a subcategory.
                     * @param _itemCount Total number of detection items under a subcategory.
                     * 
                     */
                    void SetItemCount(const uint64_t& _itemCount);

                    /**
                     * 判断参数 ItemCount 是否已赋值
                     * @return ItemCount 是否已赋值
                     * 
                     */
                    bool ItemCountHasBeenSet() const;

                private:

                    /**
                     * Category ID
                     */
                    int64_t m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * Category name
                     */
                    std::string m_categoryName;
                    bool m_categoryNameHasBeenSet;

                    /**
                     * Parent Category ID. No parent category if it is 0.
                     */
                    int64_t m_parentCategoryId;
                    bool m_parentCategoryIdHasBeenSet;

                    /**
                     * Total number of detection items under a subcategory.
                     */
                    uint64_t m_itemCount;
                    bool m_itemCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINECATEGORY_H_
