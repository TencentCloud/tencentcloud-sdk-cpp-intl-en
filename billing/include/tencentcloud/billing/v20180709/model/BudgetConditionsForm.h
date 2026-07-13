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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETCONDITIONSFORM_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETCONDITIONSFORM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/TagsForm.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Budget management custom fee range parameter
                */
                class BudgetConditionsForm : public AbstractModel
                {
                public:
                    BudgetConditionsForm();
                    ~BudgetConditionsForm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Product.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Business <p>Product.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetBusiness() const;

                    /**
                     * 设置<p>Product.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _business <p>Product.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBusiness(const std::vector<std::string>& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取<p>Billing mode</p><p>Enumeration value:</p><ul><li>prePay: Monthly Subscription</li><li>postPay: Pay-As-You-Go</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PayMode <p>Billing mode</p><p>Enumeration value:</p><ul><li>prePay: Monthly Subscription</li><li>postPay: Pay-As-You-Go</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetPayMode() const;

                    /**
                     * 设置<p>Billing mode</p><p>Enumeration value:</p><ul><li>prePay: Monthly Subscription</li><li>postPay: Pay-As-You-Go</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _payMode <p>Billing mode</p><p>Enumeration value:</p><ul><li>prePay: Monthly Subscription</li><li>postPay: Pay-As-You-Go</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPayMode(const std::vector<std::string>& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>Subproduct</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProductCodes <p>Subproduct</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetProductCodes() const;

                    /**
                     * 设置<p>Subproduct</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _productCodes <p>Subproduct</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProductCodes(const std::vector<std::string>& _productCodes);

                    /**
                     * 判断参数 ProductCodes 是否已赋值
                     * @return ProductCodes 是否已赋值
                     * 
                     */
                    bool ProductCodesHasBeenSet() const;

                    /**
                     * 获取<p>Component code</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ComponentCodes <p>Component code</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetComponentCodes() const;

                    /**
                     * 设置<p>Component code</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _componentCodes <p>Component code</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetComponentCodes(const std::vector<std::string>& _componentCodes);

                    /**
                     * 判断参数 ComponentCodes 是否已赋值
                     * @return ComponentCodes 是否已赋值
                     * 
                     */
                    bool ComponentCodesHasBeenSet() const;

                    /**
                     * 获取<p>Region.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ZoneIds <p>Region.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置<p>Region.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _zoneIds <p>Region.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetZoneIds(const std::vector<std::string>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取<p>AZ.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RegionIds <p>AZ.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetRegionIds() const;

                    /**
                     * 设置<p>AZ.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _regionIds <p>AZ.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegionIds(const std::vector<std::string>& _regionIds);

                    /**
                     * 判断参数 RegionIds 是否已赋值
                     * @return RegionIds 是否已赋值
                     * 
                     */
                    bool RegionIdsHasBeenSet() const;

                    /**
                     * 获取<p>Project</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectIds <p>Project</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetProjectIds() const;

                    /**
                     * 设置<p>Project</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _projectIds <p>Project</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProjectIds(const std::vector<std::string>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取<p>Transaction type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ActionTypes <p>Transaction type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetActionTypes() const;

                    /**
                     * 设置<p>Transaction type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _actionTypes <p>Transaction type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetActionTypes(const std::vector<std::string>& _actionTypes);

                    /**
                     * 判断参数 ActionTypes 是否已赋值
                     * @return ActionTypes 是否已赋值
                     * 
                     */
                    bool ActionTypesHasBeenSet() const;

                    /**
                     * 获取<p>Consumption type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConsumptionTypes <p>Consumption type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetConsumptionTypes() const;

                    /**
                     * 设置<p>Consumption type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _consumptionTypes <p>Consumption type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConsumptionTypes(const std::vector<std::string>& _consumptionTypes);

                    /**
                     * 判断参数 ConsumptionTypes 是否已赋值
                     * @return ConsumptionTypes 是否已赋值
                     * 
                     */
                    bool ConsumptionTypesHasBeenSet() const;

                    /**
                     * 获取<p>Tag.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags <p>Tag.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TagsForm> GetTags() const;

                    /**
                     * 设置<p>Tag.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags <p>Tag.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTags(const std::vector<TagsForm>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>Leaf-level cost allocation unit</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PayerUins <p>Leaf-level cost allocation unit</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetPayerUins() const;

                    /**
                     * 设置<p>Leaf-level cost allocation unit</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _payerUins <p>Leaf-level cost allocation unit</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPayerUins(const std::vector<std::string>& _payerUins);

                    /**
                     * 判断参数 PayerUins 是否已赋值
                     * @return PayerUins 是否已赋值
                     * 
                     */
                    bool PayerUinsHasBeenSet() const;

                    /**
                     * 获取<p>Primary user Uin</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OwnerUins <p>Primary user Uin</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetOwnerUins() const;

                    /**
                     * 设置<p>Primary user Uin</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ownerUins <p>Primary user Uin</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOwnerUins(const std::vector<std::string>& _ownerUins);

                    /**
                     * 判断参数 OwnerUins 是否已赋值
                     * @return OwnerUins 是否已赋值
                     * 
                     */
                    bool OwnerUinsHasBeenSet() const;

                    /**
                     * 获取<p>Unique key of the leaf-level cost allocation unit</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TreeNodeUniqKeys <p>Unique key of the leaf-level cost allocation unit</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetTreeNodeUniqKeys() const;

                    /**
                     * 设置<p>Unique key of the leaf-level cost allocation unit</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _treeNodeUniqKeys <p>Unique key of the leaf-level cost allocation unit</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTreeNodeUniqKeys(const std::vector<std::string>& _treeNodeUniqKeys);

                    /**
                     * 判断参数 TreeNodeUniqKeys 是否已赋值
                     * @return TreeNodeUniqKeys 是否已赋值
                     * 
                     */
                    bool TreeNodeUniqKeysHasBeenSet() const;

                private:

                    /**
                     * <p>Product.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * <p>Billing mode</p><p>Enumeration value:</p><ul><li>prePay: Monthly Subscription</li><li>postPay: Pay-As-You-Go</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>Subproduct</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_productCodes;
                    bool m_productCodesHasBeenSet;

                    /**
                     * <p>Component code</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_componentCodes;
                    bool m_componentCodesHasBeenSet;

                    /**
                     * <p>Region.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * <p>AZ.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_regionIds;
                    bool m_regionIdsHasBeenSet;

                    /**
                     * <p>Project</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * <p>Transaction type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_actionTypes;
                    bool m_actionTypesHasBeenSet;

                    /**
                     * <p>Consumption type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_consumptionTypes;
                    bool m_consumptionTypesHasBeenSet;

                    /**
                     * <p>Tag.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TagsForm> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Leaf-level cost allocation unit</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_payerUins;
                    bool m_payerUinsHasBeenSet;

                    /**
                     * <p>Primary user Uin</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_ownerUins;
                    bool m_ownerUinsHasBeenSet;

                    /**
                     * <p>Unique key of the leaf-level cost allocation unit</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_treeNodeUniqKeys;
                    bool m_treeNodeUniqKeysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETCONDITIONSFORM_H_
