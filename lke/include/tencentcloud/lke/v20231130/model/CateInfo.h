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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CATEINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/CateInfo.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Category information.
                */
                class CateInfo : public AbstractModel
                {
                public:
                    CateInfo();
                    ~CateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Category ID.
                     * @return CateBizId Category ID.
                     * 
                     */
                    std::string GetCateBizId() const;

                    /**
                     * 设置Category ID.
                     * @param _cateBizId Category ID.
                     * 
                     */
                    void SetCateBizId(const std::string& _cateBizId);

                    /**
                     * 判断参数 CateBizId 是否已赋值
                     * @return CateBizId 是否已赋值
                     * 
                     */
                    bool CateBizIdHasBeenSet() const;

                    /**
                     * 获取Category name.
                     * @return Name Category name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Category name.
                     * @param _name Category name.
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
                     * 获取Quantity of records (such as documents, synonyms, etc.) under the category.
                     * @return Total Quantity of records (such as documents, synonyms, etc.) under the category.
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置Quantity of records (such as documents, synonyms, etc.) under the category.
                     * @param _total Quantity of records (such as documents, synonyms, etc.) under the category.
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Whether it is possible to add.
                     * @return CanAdd Whether it is possible to add.
                     * 
                     */
                    bool GetCanAdd() const;

                    /**
                     * 设置Whether it is possible to add.
                     * @param _canAdd Whether it is possible to add.
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
                     * 获取Whether it can be edited.
                     * @return CanEdit Whether it can be edited.
                     * 
                     */
                    bool GetCanEdit() const;

                    /**
                     * 设置Whether it can be edited.
                     * @param _canEdit Whether it can be edited.
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
                     * 获取Whether it can be deleted.
                     * @return CanDelete Whether it can be deleted.
                     * 
                     */
                    bool GetCanDelete() const;

                    /**
                     * 设置Whether it can be deleted.
                     * @param _canDelete Whether it can be deleted.
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
                     * 获取Subcategory.
                     * @return Children Subcategory.
                     * 
                     */
                    std::vector<CateInfo> GetChildren() const;

                    /**
                     * 设置Subcategory.
                     * @param _children Subcategory.
                     * 
                     */
                    void SetChildren(const std::vector<CateInfo>& _children);

                    /**
                     * 判断参数 Children 是否已赋值
                     * @return Children 是否已赋值
                     * 
                     */
                    bool ChildrenHasBeenSet() const;

                private:

                    /**
                     * Category ID.
                     */
                    std::string m_cateBizId;
                    bool m_cateBizIdHasBeenSet;

                    /**
                     * Category name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Quantity of records (such as documents, synonyms, etc.) under the category.
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Whether it is possible to add.
                     */
                    bool m_canAdd;
                    bool m_canAddHasBeenSet;

                    /**
                     * Whether it can be edited.
                     */
                    bool m_canEdit;
                    bool m_canEditHasBeenSet;

                    /**
                     * Whether it can be deleted.
                     */
                    bool m_canDelete;
                    bool m_canDeleteHasBeenSet;

                    /**
                     * Subcategory.
                     */
                    std::vector<CateInfo> m_children;
                    bool m_childrenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CATEINFO_H_
