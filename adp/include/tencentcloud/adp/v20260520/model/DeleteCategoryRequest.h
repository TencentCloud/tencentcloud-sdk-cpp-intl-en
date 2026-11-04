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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DELETECATEGORYREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DELETECATEGORYREQUEST_H_

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
                * DeleteCategory request structure.
                */
                class DeleteCategoryRequest : public AbstractModel
                {
                public:
                    DeleteCategoryRequest();
                    ~DeleteCategoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Category ID to be deleted</p>
                     * @return CategoryId <p>Category ID to be deleted</p>
                     * 
                     */
                    std::string GetCategoryId() const;

                    /**
                     * 设置<p>Category ID to be deleted</p>
                     * @param _categoryId <p>Category ID to be deleted</p>
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
                     * 获取<p>Classification type (cannot be 0. Value: 1=document classification, 2=QA classification)<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>CATEGORY_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>CATEGORY_TYPE_DOC</td><td>1</td><td>Document classification</td></tr><tr><td>CATEGORY_TYPE_QA</td><td>2</td><td>QA classification</td></tr></tbody></table></p>
                     * @return CategoryType <p>Classification type (cannot be 0. Value: 1=document classification, 2=QA classification)<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>CATEGORY_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>CATEGORY_TYPE_DOC</td><td>1</td><td>Document classification</td></tr><tr><td>CATEGORY_TYPE_QA</td><td>2</td><td>QA classification</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetCategoryType() const;

                    /**
                     * 设置<p>Classification type (cannot be 0. Value: 1=document classification, 2=QA classification)<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>CATEGORY_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>CATEGORY_TYPE_DOC</td><td>1</td><td>Document classification</td></tr><tr><td>CATEGORY_TYPE_QA</td><td>2</td><td>QA classification</td></tr></tbody></table></p>
                     * @param _categoryType <p>Classification type (cannot be 0. Value: 1=document classification, 2=QA classification)<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>CATEGORY_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>CATEGORY_TYPE_DOC</td><td>1</td><td>Document classification</td></tr><tr><td>CATEGORY_TYPE_QA</td><td>2</td><td>QA classification</td></tr></tbody></table></p>
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
                     * 获取<p>Knowledge base ID</p>
                     * @return KbId <p>Knowledge base ID</p>
                     * 
                     */
                    std::string GetKbId() const;

                    /**
                     * 设置<p>Knowledge base ID</p>
                     * @param _kbId <p>Knowledge base ID</p>
                     * 
                     */
                    void SetKbId(const std::string& _kbId);

                    /**
                     * 判断参数 KbId 是否已赋值
                     * @return KbId 是否已赋值
                     * 
                     */
                    bool KbIdHasBeenSet() const;

                private:

                    /**
                     * <p>Category ID to be deleted</p>
                     */
                    std::string m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * <p>Classification type (cannot be 0. Value: 1=document classification, 2=QA classification)<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>CATEGORY_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>CATEGORY_TYPE_DOC</td><td>1</td><td>Document classification</td></tr><tr><td>CATEGORY_TYPE_QA</td><td>2</td><td>QA classification</td></tr></tbody></table></p>
                     */
                    int64_t m_categoryType;
                    bool m_categoryTypeHasBeenSet;

                    /**
                     * <p>Knowledge base ID</p>
                     */
                    std::string m_kbId;
                    bool m_kbIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DELETECATEGORYREQUEST_H_
