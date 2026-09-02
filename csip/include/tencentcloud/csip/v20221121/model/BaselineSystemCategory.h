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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINESYSTEMCATEGORY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINESYSTEMCATEGORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/BaselineSubCategory.h>
#include <tencentcloud/csip/v20221121/model/BaselineCategory.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Baseline system main category (including all its subcategories and detection item ID list).
                */
                class BaselineSystemCategory : public AbstractModel
                {
                public:
                    BaselineSystemCategory();
                    ~BaselineSystemCategory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>List of subcategories under the parent category (each subcategory includes its built-in detection item ID list).</p>
                     * @return SubCategoryList <p>List of subcategories under the parent category (each subcategory includes its built-in detection item ID list).</p>
                     * 
                     */
                    std::vector<BaselineSubCategory> GetSubCategoryList() const;

                    /**
                     * 设置<p>List of subcategories under the parent category (each subcategory includes its built-in detection item ID list).</p>
                     * @param _subCategoryList <p>List of subcategories under the parent category (each subcategory includes its built-in detection item ID list).</p>
                     * 
                     */
                    void SetSubCategoryList(const std::vector<BaselineSubCategory>& _subCategoryList);

                    /**
                     * 判断参数 SubCategoryList 是否已赋值
                     * @return SubCategoryList 是否已赋值
                     * 
                     */
                    bool SubCategoryListHasBeenSet() const;

                    /**
                     * 获取<p>System parent category basic information (ID, name, description, CheckAssetType).</p>
                     * @return Category <p>System parent category basic information (ID, name, description, CheckAssetType).</p>
                     * 
                     */
                    BaselineCategory GetCategory() const;

                    /**
                     * 设置<p>System parent category basic information (ID, name, description, CheckAssetType).</p>
                     * @param _category <p>System parent category basic information (ID, name, description, CheckAssetType).</p>
                     * 
                     */
                    void SetCategory(const BaselineCategory& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取<p>Detection item count</p>
                     * @return ItemCount <p>Detection item count</p>
                     * 
                     */
                    uint64_t GetItemCount() const;

                    /**
                     * 设置<p>Detection item count</p>
                     * @param _itemCount <p>Detection item count</p>
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
                     * <p>List of subcategories under the parent category (each subcategory includes its built-in detection item ID list).</p>
                     */
                    std::vector<BaselineSubCategory> m_subCategoryList;
                    bool m_subCategoryListHasBeenSet;

                    /**
                     * <p>System parent category basic information (ID, name, description, CheckAssetType).</p>
                     */
                    BaselineCategory m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>Detection item count</p>
                     */
                    uint64_t m_itemCount;
                    bool m_itemCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINESYSTEMCATEGORY_H_
