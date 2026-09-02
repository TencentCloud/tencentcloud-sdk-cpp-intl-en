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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CATEGORYITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CATEGORYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/SeverityItem.h>
#include <tencentcloud/csip/v20221121/model/ProtectionDetail.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Point deduction and to-do information for sub-items.
                */
                class CategoryItem : public AbstractModel
                {
                public:
                    CategoryItem();
                    ~CategoryItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Sub-item ID<br>Enumeration values:<br>vulnerability: Vulnerability governance<br>cloud_config: Cloud product configuration governance<br>system_baseline: System baseline risk<br>intrusion_alert: Intrusion threat alarm<br>cloud_api_alert: Cloud API alarm<br>ai_agent_alert: AI Agent security alarm<br>object_storage_alert: Object storage exception alarm<br>database_alert: Database security alarm<br>protection_config: Recommended protection configuration not enabled<br>edition_coverage: Insufficient Pro/Ultimate edition coverage<br>product_expiry: Product expires within 7 days</p>
                     * @return CategoryId <p>Sub-item ID<br>Enumeration values:<br>vulnerability: Vulnerability governance<br>cloud_config: Cloud product configuration governance<br>system_baseline: System baseline risk<br>intrusion_alert: Intrusion threat alarm<br>cloud_api_alert: Cloud API alarm<br>ai_agent_alert: AI Agent security alarm<br>object_storage_alert: Object storage exception alarm<br>database_alert: Database security alarm<br>protection_config: Recommended protection configuration not enabled<br>edition_coverage: Insufficient Pro/Ultimate edition coverage<br>product_expiry: Product expires within 7 days</p>
                     * 
                     */
                    std::string GetCategoryId() const;

                    /**
                     * 设置<p>Sub-item ID<br>Enumeration values:<br>vulnerability: Vulnerability governance<br>cloud_config: Cloud product configuration governance<br>system_baseline: System baseline risk<br>intrusion_alert: Intrusion threat alarm<br>cloud_api_alert: Cloud API alarm<br>ai_agent_alert: AI Agent security alarm<br>object_storage_alert: Object storage exception alarm<br>database_alert: Database security alarm<br>protection_config: Recommended protection configuration not enabled<br>edition_coverage: Insufficient Pro/Ultimate edition coverage<br>product_expiry: Product expires within 7 days</p>
                     * @param _categoryId <p>Sub-item ID<br>Enumeration values:<br>vulnerability: Vulnerability governance<br>cloud_config: Cloud product configuration governance<br>system_baseline: System baseline risk<br>intrusion_alert: Intrusion threat alarm<br>cloud_api_alert: Cloud API alarm<br>ai_agent_alert: AI Agent security alarm<br>object_storage_alert: Object storage exception alarm<br>database_alert: Database security alarm<br>protection_config: Recommended protection configuration not enabled<br>edition_coverage: Insufficient Pro/Ultimate edition coverage<br>product_expiry: Product expires within 7 days</p>
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
                     * 获取<p>Sub-item name</p>
                     * @return CategoryName <p>Sub-item name</p>
                     * 
                     */
                    std::string GetCategoryName() const;

                    /**
                     * 设置<p>Sub-item name</p>
                     * @param _categoryName <p>Sub-item name</p>
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
                     * 获取<p>Subclass description</p>
                     * @return CategoryDesc <p>Subclass description</p>
                     * 
                     */
                    std::string GetCategoryDesc() const;

                    /**
                     * 设置<p>Subclass description</p>
                     * @param _categoryDesc <p>Subclass description</p>
                     * 
                     */
                    void SetCategoryDesc(const std::string& _categoryDesc);

                    /**
                     * 判断参数 CategoryDesc 是否已赋值
                     * @return CategoryDesc 是否已赋值
                     * 
                     */
                    bool CategoryDescHasBeenSet() const;

                    /**
                     * 获取<p>Sub-item deduction limit</p>
                     * @return MaxDeductScore <p>Sub-item deduction limit</p>
                     * 
                     */
                    int64_t GetMaxDeductScore() const;

                    /**
                     * 设置<p>Sub-item deduction limit</p>
                     * @param _maxDeductScore <p>Sub-item deduction limit</p>
                     * 
                     */
                    void SetMaxDeductScore(const int64_t& _maxDeductScore);

                    /**
                     * 判断参数 MaxDeductScore 是否已赋值
                     * @return MaxDeductScore 是否已赋值
                     * 
                     */
                    bool MaxDeductScoreHasBeenSet() const;

                    /**
                     * 获取<p>Actual point deduction for sub-items</p>
                     * @return DeductScore <p>Actual point deduction for sub-items</p>
                     * 
                     */
                    int64_t GetDeductScore() const;

                    /**
                     * 设置<p>Actual point deduction for sub-items</p>
                     * @param _deductScore <p>Actual point deduction for sub-items</p>
                     * 
                     */
                    void SetDeductScore(const int64_t& _deductScore);

                    /**
                     * 判断参数 DeductScore 是否已赋值
                     * @return DeductScore 是否已赋值
                     * 
                     */
                    bool DeductScoreHasBeenSet() const;

                    /**
                     * 获取<p>Total number of risks</p>
                     * @return RiskCount <p>Total number of risks</p>
                     * 
                     */
                    int64_t GetRiskCount() const;

                    /**
                     * 设置<p>Total number of risks</p>
                     * @param _riskCount <p>Total number of risks</p>
                     * 
                     */
                    void SetRiskCount(const int64_t& _riskCount);

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     * 
                     */
                    bool RiskCountHasBeenSet() const;

                    /**
                     * 获取<p>Level details, sub-items of risk/threat type have values</p>
                     * @return SeverityItems <p>Level details, sub-items of risk/threat type have values</p>
                     * 
                     */
                    std::vector<SeverityItem> GetSeverityItems() const;

                    /**
                     * 设置<p>Level details, sub-items of risk/threat type have values</p>
                     * @param _severityItems <p>Level details, sub-items of risk/threat type have values</p>
                     * 
                     */
                    void SetSeverityItems(const std::vector<SeverityItem>& _severityItems);

                    /**
                     * 判断参数 SeverityItems 是否已赋值
                     * @return SeverityItems 是否已赋值
                     * 
                     */
                    bool SeverityItemsHasBeenSet() const;

                    /**
                     * 获取<p>Reason for deduction description</p>
                     * @return DeductReason <p>Reason for deduction description</p>
                     * 
                     */
                    std::string GetDeductReason() const;

                    /**
                     * 设置<p>Reason for deduction description</p>
                     * @param _deductReason <p>Reason for deduction description</p>
                     * 
                     */
                    void SetDeductReason(const std::string& _deductReason);

                    /**
                     * 判断参数 DeductReason 是否已赋值
                     * @return DeductReason 是否已赋值
                     * 
                     */
                    bool DeductReasonHasBeenSet() const;

                    /**
                     * 获取<p>Handling suggestion copywriting</p>
                     * @return ActionText <p>Handling suggestion copywriting</p>
                     * 
                     */
                    std::string GetActionText() const;

                    /**
                     * 设置<p>Handling suggestion copywriting</p>
                     * @param _actionText <p>Handling suggestion copywriting</p>
                     * 
                     */
                    void SetActionText(const std::string& _actionText);

                    /**
                     * 判断参数 ActionText 是否已赋值
                     * @return ActionText 是否已赋值
                     * 
                     */
                    bool ActionTextHasBeenSet() const;

                    /**
                     * 获取<p>Protection configuration detail, returned only for protection configuration dimension sub-items</p>
                     * @return ProtectionDetail <p>Protection configuration detail, returned only for protection configuration dimension sub-items</p>
                     * 
                     */
                    ProtectionDetail GetProtectionDetail() const;

                    /**
                     * 设置<p>Protection configuration detail, returned only for protection configuration dimension sub-items</p>
                     * @param _protectionDetail <p>Protection configuration detail, returned only for protection configuration dimension sub-items</p>
                     * 
                     */
                    void SetProtectionDetail(const ProtectionDetail& _protectionDetail);

                    /**
                     * 判断参数 ProtectionDetail 是否已赋值
                     * @return ProtectionDetail 是否已赋值
                     * 
                     */
                    bool ProtectionDetailHasBeenSet() const;

                private:

                    /**
                     * <p>Sub-item ID<br>Enumeration values:<br>vulnerability: Vulnerability governance<br>cloud_config: Cloud product configuration governance<br>system_baseline: System baseline risk<br>intrusion_alert: Intrusion threat alarm<br>cloud_api_alert: Cloud API alarm<br>ai_agent_alert: AI Agent security alarm<br>object_storage_alert: Object storage exception alarm<br>database_alert: Database security alarm<br>protection_config: Recommended protection configuration not enabled<br>edition_coverage: Insufficient Pro/Ultimate edition coverage<br>product_expiry: Product expires within 7 days</p>
                     */
                    std::string m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * <p>Sub-item name</p>
                     */
                    std::string m_categoryName;
                    bool m_categoryNameHasBeenSet;

                    /**
                     * <p>Subclass description</p>
                     */
                    std::string m_categoryDesc;
                    bool m_categoryDescHasBeenSet;

                    /**
                     * <p>Sub-item deduction limit</p>
                     */
                    int64_t m_maxDeductScore;
                    bool m_maxDeductScoreHasBeenSet;

                    /**
                     * <p>Actual point deduction for sub-items</p>
                     */
                    int64_t m_deductScore;
                    bool m_deductScoreHasBeenSet;

                    /**
                     * <p>Total number of risks</p>
                     */
                    int64_t m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * <p>Level details, sub-items of risk/threat type have values</p>
                     */
                    std::vector<SeverityItem> m_severityItems;
                    bool m_severityItemsHasBeenSet;

                    /**
                     * <p>Reason for deduction description</p>
                     */
                    std::string m_deductReason;
                    bool m_deductReasonHasBeenSet;

                    /**
                     * <p>Handling suggestion copywriting</p>
                     */
                    std::string m_actionText;
                    bool m_actionTextHasBeenSet;

                    /**
                     * <p>Protection configuration detail, returned only for protection configuration dimension sub-items</p>
                     */
                    ProtectionDetail m_protectionDetail;
                    bool m_protectionDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CATEGORYITEM_H_
