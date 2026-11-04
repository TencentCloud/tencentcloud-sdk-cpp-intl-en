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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_KBCATEGORY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_KBCATEGORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/KBCategory.h>
#include <tencentcloud/adp/v20260520/model/MetaValue.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Knowledge base classification info (including metadata configuration)
                */
                class KBCategory : public AbstractModel
                {
                public:
                    KBCategory();
                    ~KBCategory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Whether it can be added</p>
                     * @return CanAdd <p>Whether it can be added</p>
                     * 
                     */
                    bool GetCanAdd() const;

                    /**
                     * 设置<p>Whether it can be added</p>
                     * @param _canAdd <p>Whether it can be added</p>
                     * 
                     */
                    void SetCanAdd(const bool& _canAdd);

                    /**
                     * 判断参数 CanAdd 是否已赋值
                     * @return CanAdd 是否已赋值
                     * 
                     */
                    bool CanAddHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is deletable</p>
                     * @return CanDelete <p>Whether it is deletable</p>
                     * 
                     */
                    bool GetCanDelete() const;

                    /**
                     * 设置<p>Whether it is deletable</p>
                     * @param _canDelete <p>Whether it is deletable</p>
                     * 
                     */
                    void SetCanDelete(const bool& _canDelete);

                    /**
                     * 判断参数 CanDelete 是否已赋值
                     * @return CanDelete 是否已赋值
                     * 
                     */
                    bool CanDeleteHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is editable</p>
                     * @return CanEdit <p>Whether it is editable</p>
                     * 
                     */
                    bool GetCanEdit() const;

                    /**
                     * 设置<p>Whether it is editable</p>
                     * @param _canEdit <p>Whether it is editable</p>
                     * 
                     */
                    void SetCanEdit(const bool& _canEdit);

                    /**
                     * 判断参数 CanEdit 是否已赋值
                     * @return CanEdit 是否已赋值
                     * 
                     */
                    bool CanEditHasBeenSet() const;

                    /**
                     * 获取<p>Category ID</p>
                     * @return CategoryId <p>Category ID</p>
                     * 
                     */
                    std::string GetCategoryId() const;

                    /**
                     * 设置<p>Category ID</p>
                     * @param _categoryId <p>Category ID</p>
                     * 
                     */
                    void SetCategoryId(const std::string& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取<p>Subcategory list.</p>
                     * @return ChildList <p>Subcategory list.</p>
                     * 
                     */
                    std::vector<KBCategory> GetChildList() const;

                    /**
                     * 设置<p>Subcategory list.</p>
                     * @param _childList <p>Subcategory list.</p>
                     * 
                     */
                    void SetChildList(const std::vector<KBCategory>& _childList);

                    /**
                     * 判断参数 ChildList 是否已赋值
                     * @return ChildList 是否已赋值
                     * 
                     */
                    bool ChildListHasBeenSet() const;

                    /**
                     * 获取<p>Is leaf node (no subcategory)</p>
                     * @return IsLeaf <p>Is leaf node (no subcategory)</p>
                     * 
                     */
                    bool GetIsLeaf() const;

                    /**
                     * 设置<p>Is leaf node (no subcategory)</p>
                     * @param _isLeaf <p>Is leaf node (no subcategory)</p>
                     * 
                     */
                    void SetIsLeaf(const bool& _isLeaf);

                    /**
                     * 判断参数 IsLeaf 是否已赋值
                     * @return IsLeaf 是否已赋值
                     * 
                     */
                    bool IsLeafHasBeenSet() const;

                    /**
                     * 获取<p>The number of category objects</p>
                     * @return ItemCount <p>The number of category objects</p>
                     * 
                     */
                    uint64_t GetItemCount() const;

                    /**
                     * 设置<p>The number of category objects</p>
                     * @param _itemCount <p>The number of category objects</p>
                     * 
                     */
                    void SetItemCount(const uint64_t& _itemCount);

                    /**
                     * 判断参数 ItemCount 是否已赋值
                     * @return ItemCount 是否已赋值
                     * 
                     */
                    bool ItemCountHasBeenSet() const;

                    /**
                     * 获取<p>Metadata configuration (configuration message when this category is set as metadata)</p>
                     * @return MetaValue <p>Metadata configuration (configuration message when this category is set as metadata)</p>
                     * 
                     */
                    MetaValue GetMetaValue() const;

                    /**
                     * 设置<p>Metadata configuration (configuration message when this category is set as metadata)</p>
                     * @param _metaValue <p>Metadata configuration (configuration message when this category is set as metadata)</p>
                     * 
                     */
                    void SetMetaValue(const MetaValue& _metaValue);

                    /**
                     * 判断参数 MetaValue 是否已赋值
                     * @return MetaValue 是否已赋值
                     * 
                     */
                    bool MetaValueHasBeenSet() const;

                    /**
                     * 获取<p>Category name</p>
                     * @return Name <p>Category name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Category name</p>
                     * @param _name <p>Category name</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * <p>Whether it can be added</p>
                     */
                    bool m_canAdd;
                    bool m_canAddHasBeenSet;

                    /**
                     * <p>Whether it is deletable</p>
                     */
                    bool m_canDelete;
                    bool m_canDeleteHasBeenSet;

                    /**
                     * <p>Whether it is editable</p>
                     */
                    bool m_canEdit;
                    bool m_canEditHasBeenSet;

                    /**
                     * <p>Category ID</p>
                     */
                    std::string m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * <p>Subcategory list.</p>
                     */
                    std::vector<KBCategory> m_childList;
                    bool m_childListHasBeenSet;

                    /**
                     * <p>Is leaf node (no subcategory)</p>
                     */
                    bool m_isLeaf;
                    bool m_isLeafHasBeenSet;

                    /**
                     * <p>The number of category objects</p>
                     */
                    uint64_t m_itemCount;
                    bool m_itemCountHasBeenSet;

                    /**
                     * <p>Metadata configuration (configuration message when this category is set as metadata)</p>
                     */
                    MetaValue m_metaValue;
                    bool m_metaValueHasBeenSet;

                    /**
                     * <p>Category name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_KBCATEGORY_H_
