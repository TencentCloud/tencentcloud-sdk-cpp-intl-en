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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYCOMPLIANCECATEGORYRELATION_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYCOMPLIANCECATEGORYRELATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmIdentifyComplianceRuleRelation.h>
#include <tencentcloud/csip/v20221121/model/DspmIdentifyComplianceCategoryRelation.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * dspm data identification template classification association
                */
                class DspmIdentifyComplianceCategoryRelation : public AbstractModel
                {
                public:
                    DspmIdentifyComplianceCategoryRelation();
                    ~DspmIdentifyComplianceCategoryRelation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Category ID</p>
                     * @return CategoryId <p>Category ID</p>
                     * 
                     */
                    uint64_t GetCategoryId() const;

                    /**
                     * 设置<p>Category ID</p>
                     * @param _categoryId <p>Category ID</p>
                     * 
                     */
                    void SetCategoryId(const uint64_t& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取<p>Category name</p>
                     * @return CategoryName <p>Category name</p>
                     * 
                     */
                    std::string GetCategoryName() const;

                    /**
                     * 设置<p>Category name</p>
                     * @param _categoryName <p>Category name</p>
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
                     * 获取<p>Parent category ID</p>
                     * @return CategoryParentId <p>Parent category ID</p>
                     * 
                     */
                    std::string GetCategoryParentId() const;

                    /**
                     * 设置<p>Parent category ID</p>
                     * @param _categoryParentId <p>Parent category ID</p>
                     * 
                     */
                    void SetCategoryParentId(const std::string& _categoryParentId);

                    /**
                     * 判断参数 CategoryParentId 是否已赋值
                     * @return CategoryParentId 是否已赋值
                     * 
                     */
                    bool CategoryParentIdHasBeenSet() const;

                    /**
                     * 获取<p>is leaf node</p>
                     * @return IsLeaf <p>is leaf node</p>
                     * 
                     */
                    bool GetIsLeaf() const;

                    /**
                     * 设置<p>is leaf node</p>
                     * @param _isLeaf <p>is leaf node</p>
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
                     * 获取<p>Classification type</p><p>Enumeration values:</p><ul><li>0: Built-in</li><li>1: Custom</li></ul>
                     * @return CategoryType <p>Classification type</p><p>Enumeration values:</p><ul><li>0: Built-in</li><li>1: Custom</li></ul>
                     * 
                     */
                    uint64_t GetCategoryType() const;

                    /**
                     * 设置<p>Classification type</p><p>Enumeration values:</p><ul><li>0: Built-in</li><li>1: Custom</li></ul>
                     * @param _categoryType <p>Classification type</p><p>Enumeration values:</p><ul><li>0: Built-in</li><li>1: Custom</li></ul>
                     * 
                     */
                    void SetCategoryType(const uint64_t& _categoryType);

                    /**
                     * 判断参数 CategoryType 是否已赋值
                     * @return CategoryType 是否已赋值
                     * 
                     */
                    bool CategoryTypeHasBeenSet() const;

                    /**
                     * 获取<p>Classification levels</p><p>Unit: level</p>
                     * @return CategoryGrade <p>Classification levels</p><p>Unit: level</p>
                     * 
                     */
                    uint64_t GetCategoryGrade() const;

                    /**
                     * 设置<p>Classification levels</p><p>Unit: level</p>
                     * @param _categoryGrade <p>Classification levels</p><p>Unit: level</p>
                     * 
                     */
                    void SetCategoryGrade(const uint64_t& _categoryGrade);

                    /**
                     * 判断参数 CategoryGrade 是否已赋值
                     * @return CategoryGrade 是否已赋值
                     * 
                     */
                    bool CategoryGradeHasBeenSet() const;

                    /**
                     * 获取<p>Associated data item information</p>
                     * @return RuleRelations <p>Associated data item information</p>
                     * 
                     */
                    std::vector<DspmIdentifyComplianceRuleRelation> GetRuleRelations() const;

                    /**
                     * 设置<p>Associated data item information</p>
                     * @param _ruleRelations <p>Associated data item information</p>
                     * 
                     */
                    void SetRuleRelations(const std::vector<DspmIdentifyComplianceRuleRelation>& _ruleRelations);

                    /**
                     * 判断参数 RuleRelations 是否已赋值
                     * @return RuleRelations 是否已赋值
                     * 
                     */
                    bool RuleRelationsHasBeenSet() const;

                    /**
                     * 获取<p>Sub-node information</p>
                     * @return Children <p>Sub-node information</p>
                     * 
                     */
                    std::vector<DspmIdentifyComplianceCategoryRelation> GetChildren() const;

                    /**
                     * 设置<p>Sub-node information</p>
                     * @param _children <p>Sub-node information</p>
                     * 
                     */
                    void SetChildren(const std::vector<DspmIdentifyComplianceCategoryRelation>& _children);

                    /**
                     * 判断参数 Children 是否已赋值
                     * @return Children 是否已赋值
                     * 
                     */
                    bool ChildrenHasBeenSet() const;

                private:

                    /**
                     * <p>Category ID</p>
                     */
                    uint64_t m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * <p>Category name</p>
                     */
                    std::string m_categoryName;
                    bool m_categoryNameHasBeenSet;

                    /**
                     * <p>Parent category ID</p>
                     */
                    std::string m_categoryParentId;
                    bool m_categoryParentIdHasBeenSet;

                    /**
                     * <p>is leaf node</p>
                     */
                    bool m_isLeaf;
                    bool m_isLeafHasBeenSet;

                    /**
                     * <p>Classification type</p><p>Enumeration values:</p><ul><li>0: Built-in</li><li>1: Custom</li></ul>
                     */
                    uint64_t m_categoryType;
                    bool m_categoryTypeHasBeenSet;

                    /**
                     * <p>Classification levels</p><p>Unit: level</p>
                     */
                    uint64_t m_categoryGrade;
                    bool m_categoryGradeHasBeenSet;

                    /**
                     * <p>Associated data item information</p>
                     */
                    std::vector<DspmIdentifyComplianceRuleRelation> m_ruleRelations;
                    bool m_ruleRelationsHasBeenSet;

                    /**
                     * <p>Sub-node information</p>
                     */
                    std::vector<DspmIdentifyComplianceCategoryRelation> m_children;
                    bool m_childrenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYCOMPLIANCECATEGORYRELATION_H_
