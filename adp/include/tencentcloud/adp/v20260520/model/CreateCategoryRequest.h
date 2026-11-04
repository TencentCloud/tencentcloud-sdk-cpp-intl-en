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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CREATECATEGORYREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CREATECATEGORYREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateCategory request structure.
                */
                class CreateCategoryRequest : public AbstractModel
                {
                public:
                    CreateCategoryRequest();
                    ~CreateCategoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Classification type (0 is not allowed. Value: 1=document classification, 2=QA classification)<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>CATEGORY_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>CATEGORY_TYPE_DOC</td><td>1</td><td>Document classification</td></tr><tr><td>CATEGORY_TYPE_QA</td><td>2</td><td>QA classification</td></tr></tbody></table></p>
                     * @return CategoryType <p>Classification type (0 is not allowed. Value: 1=document classification, 2=QA classification)<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>CATEGORY_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>CATEGORY_TYPE_DOC</td><td>1</td><td>Document classification</td></tr><tr><td>CATEGORY_TYPE_QA</td><td>2</td><td>QA classification</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetCategoryType() const;

                    /**
                     * 设置<p>Classification type (0 is not allowed. Value: 1=document classification, 2=QA classification)<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>CATEGORY_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>CATEGORY_TYPE_DOC</td><td>1</td><td>Document classification</td></tr><tr><td>CATEGORY_TYPE_QA</td><td>2</td><td>QA classification</td></tr></tbody></table></p>
                     * @param _categoryType <p>Classification type (0 is not allowed. Value: 1=document classification, 2=QA classification)<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>CATEGORY_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>CATEGORY_TYPE_DOC</td><td>1</td><td>Document classification</td></tr><tr><td>CATEGORY_TYPE_QA</td><td>2</td><td>QA classification</td></tr></tbody></table></p>
                     * 
                     */
                    void SetCategoryType(const int64_t& _categoryType);

                    /**
                     * 判断参数 CategoryType 是否已赋值
                     * @return CategoryType 是否已赋值
                     * 
                     */
                    bool CategoryTypeHasBeenSet() const;

                    /**
                     * 获取<p>Associated knowledge base ID</p>
                     * @return KbId <p>Associated knowledge base ID</p>
                     * 
                     */
                    std::string GetKbId() const;

                    /**
                     * 设置<p>Associated knowledge base ID</p>
                     * @param _kbId <p>Associated knowledge base ID</p>
                     * 
                     */
                    void SetKbId(const std::string& _kbId);

                    /**
                     * 判断参数 KbId 是否已赋值
                     * @return KbId 是否已赋值
                     * 
                     */
                    bool KbIdHasBeenSet() const;

                    /**
                     * 获取<p>Category name (length: 1–64 characters)</p>
                     * @return Name <p>Category name (length: 1–64 characters)</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Category name (length: 1–64 characters)</p>
                     * @param _name <p>Category name (length: 1–64 characters)</p>
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
                     * 获取<p>Parent category ID</p>
                     * @return ParentCategoryId <p>Parent category ID</p>
                     * 
                     */
                    std::string GetParentCategoryId() const;

                    /**
                     * 设置<p>Parent category ID</p>
                     * @param _parentCategoryId <p>Parent category ID</p>
                     * 
                     */
                    void SetParentCategoryId(const std::string& _parentCategoryId);

                    /**
                     * 判断参数 ParentCategoryId 是否已赋值
                     * @return ParentCategoryId 是否已赋值
                     * 
                     */
                    bool ParentCategoryIdHasBeenSet() const;

                private:

                    /**
                     * <p>Classification type (0 is not allowed. Value: 1=document classification, 2=QA classification)<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>CATEGORY_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>CATEGORY_TYPE_DOC</td><td>1</td><td>Document classification</td></tr><tr><td>CATEGORY_TYPE_QA</td><td>2</td><td>QA classification</td></tr></tbody></table></p>
                     */
                    int64_t m_categoryType;
                    bool m_categoryTypeHasBeenSet;

                    /**
                     * <p>Associated knowledge base ID</p>
                     */
                    std::string m_kbId;
                    bool m_kbIdHasBeenSet;

                    /**
                     * <p>Category name (length: 1–64 characters)</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Parent category ID</p>
                     */
                    std::string m_parentCategoryId;
                    bool m_parentCategoryIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CREATECATEGORYREQUEST_H_
