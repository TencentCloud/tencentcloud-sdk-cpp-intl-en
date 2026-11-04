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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MSGRECORDCATEGORY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MSGRECORDCATEGORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/MsgRecordCategory.h>
#include <tencentcloud/adp/v20260520/model/CategoryPermission.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * MsgRecordCategory
                */
                class MsgRecordCategory : public AbstractModel
                {
                public:
                    MsgRecordCategory();
                    ~MsgRecordCategory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Business ID of the category</p>
                     * @return CategoryId <p>Business ID of the category</p>
                     * 
                     */
                    std::string GetCategoryId() const;

                    /**
                     * 设置<p>Business ID of the category</p>
                     * @param _categoryId <p>Business ID of the category</p>
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
                     * 获取<p>Subcategory list, tree nesting</p>
                     * @return Children <p>Subcategory list, tree nesting</p>
                     * 
                     */
                    std::vector<MsgRecordCategory> GetChildren() const;

                    /**
                     * 设置<p>Subcategory list, tree nesting</p>
                     * @param _children <p>Subcategory list, tree nesting</p>
                     * 
                     */
                    void SetChildren(const std::vector<MsgRecordCategory>& _children);

                    /**
                     * 判断参数 Children 是否已赋值
                     * @return Children 是否已赋值
                     * 
                     */
                    bool ChildrenHasBeenSet() const;

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

                    /**
                     * 获取<p>Operation permissions of the current user on this category.</p>
                     * @return Permission <p>Operation permissions of the current user on this category.</p>
                     * 
                     */
                    CategoryPermission GetPermission() const;

                    /**
                     * 设置<p>Operation permissions of the current user on this category.</p>
                     * @param _permission <p>Operation permissions of the current user on this category.</p>
                     * 
                     */
                    void SetPermission(const CategoryPermission& _permission);

                    /**
                     * 判断参数 Permission 是否已赋值
                     * @return Permission 是否已赋值
                     * 
                     */
                    bool PermissionHasBeenSet() const;

                    /**
                     * 获取<p>The number of message records in this category</p>
                     * @return TotalCount <p>The number of message records in this category</p>
                     * 
                     */
                    std::string GetTotalCount() const;

                    /**
                     * 设置<p>The number of message records in this category</p>
                     * @param _totalCount <p>The number of message records in this category</p>
                     * 
                     */
                    void SetTotalCount(const std::string& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>Business ID of the category</p>
                     */
                    std::string m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * <p>Subcategory list, tree nesting</p>
                     */
                    std::vector<MsgRecordCategory> m_children;
                    bool m_childrenHasBeenSet;

                    /**
                     * <p>Category name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Operation permissions of the current user on this category.</p>
                     */
                    CategoryPermission m_permission;
                    bool m_permissionHasBeenSet;

                    /**
                     * <p>The number of message records in this category</p>
                     */
                    std::string m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MSGRECORDCATEGORY_H_
