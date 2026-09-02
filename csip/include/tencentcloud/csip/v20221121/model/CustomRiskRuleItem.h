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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CUSTOMRISKRULEITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CUSTOMRISKRULEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/StandardTerm.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Description of the custom policy
                */
                class CustomRiskRuleItem : public AbstractModel
                {
                public:
                    CustomRiskRuleItem();
                    ~CustomRiskRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Risk rule ID</p>
                     * @return RuleID <p>Risk rule ID</p>
                     * 
                     */
                    std::string GetRuleID() const;

                    /**
                     * 设置<p>Risk rule ID</p>
                     * @param _ruleID <p>Risk rule ID</p>
                     * 
                     */
                    void SetRuleID(const std::string& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取<p>Tencent Cloud</p>
                     * @return Provider <p>Tencent Cloud</p>
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置<p>Tencent Cloud</p>
                     * @param _provider <p>Tencent Cloud</p>
                     * 
                     */
                    void SetProvider(const std::string& _provider);

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     * 
                     */
                    bool ProviderHasBeenSet() const;

                    /**
                     * 获取<p>Risk title</p>
                     * @return RiskTitle <p>Risk title</p>
                     * 
                     */
                    std::string GetRiskTitle() const;

                    /**
                     * 设置<p>Risk title</p>
                     * @param _riskTitle <p>Risk title</p>
                     * 
                     */
                    void SetRiskTitle(const std::string& _riskTitle);

                    /**
                     * 判断参数 RiskTitle 是否已赋值
                     * @return RiskTitle 是否已赋值
                     * 
                     */
                    bool RiskTitleHasBeenSet() const;

                    /**
                     * 获取<p>Risk classification</p>
                     * @return Classify <p>Risk classification</p>
                     * 
                     */
                    std::string GetClassify() const;

                    /**
                     * 设置<p>Risk classification</p>
                     * @param _classify <p>Risk classification</p>
                     * 
                     */
                    void SetClassify(const std::string& _classify);

                    /**
                     * 判断参数 Classify 是否已赋值
                     * @return Classify 是否已赋值
                     * 
                     */
                    bool ClassifyHasBeenSet() const;

                    /**
                     * 获取<p>Risk level.</p>
                     * @return Severity <p>Risk level.</p>
                     * 
                     */
                    std::string GetSeverity() const;

                    /**
                     * 设置<p>Risk level.</p>
                     * @param _severity <p>Risk level.</p>
                     * 
                     */
                    void SetSeverity(const std::string& _severity);

                    /**
                     * 判断参数 Severity 是否已赋值
                     * @return Severity 是否已赋值
                     * 
                     */
                    bool SeverityHasBeenSet() const;

                    /**
                     * 获取<p>Risk rule opening status</p>
                     * @return Status <p>Risk rule opening status</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Risk rule opening status</p>
                     * @param _status <p>Risk rule opening status</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Number of associated accounts</p>
                     * @return RelatedUinCount <p>Number of associated accounts</p>
                     * 
                     */
                    uint64_t GetRelatedUinCount() const;

                    /**
                     * 设置<p>Number of associated accounts</p>
                     * @param _relatedUinCount <p>Number of associated accounts</p>
                     * 
                     */
                    void SetRelatedUinCount(const uint64_t& _relatedUinCount);

                    /**
                     * 判断参数 RelatedUinCount 是否已赋值
                     * @return RelatedUinCount 是否已赋值
                     * 
                     */
                    bool RelatedUinCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of accounts with policy activation</p>
                     * @return PolicyEnableCount <p>Number of accounts with policy activation</p>
                     * 
                     */
                    uint64_t GetPolicyEnableCount() const;

                    /**
                     * 设置<p>Number of accounts with policy activation</p>
                     * @param _policyEnableCount <p>Number of accounts with policy activation</p>
                     * 
                     */
                    void SetPolicyEnableCount(const uint64_t& _policyEnableCount);

                    /**
                     * 判断参数 PolicyEnableCount 是否已赋值
                     * @return PolicyEnableCount 是否已赋值
                     * 
                     */
                    bool PolicyEnableCountHasBeenSet() const;

                    /**
                     * 获取<p>Asset type</p>
                     * @return AssetType <p>Asset type</p>
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置<p>Asset type</p>
                     * @param _assetType <p>Asset type</p>
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取<p>Whether the rule is free</p>
                     * @return IsFree <p>Whether the rule is free</p>
                     * 
                     */
                    uint64_t GetIsFree() const;

                    /**
                     * 设置<p>Whether the rule is free</p>
                     * @param _isFree <p>Whether the rule is free</p>
                     * 
                     */
                    void SetIsFree(const uint64_t& _isFree);

                    /**
                     * 判断参数 IsFree 是否已赋值
                     * @return IsFree 是否已赋值
                     * 
                     */
                    bool IsFreeHasBeenSet() const;

                    /**
                     * 获取<p>Check type</p>
                     * @return CheckType <p>Check type</p>
                     * 
                     */
                    std::string GetCheckType() const;

                    /**
                     * 设置<p>Check type</p>
                     * @param _checkType <p>Check type</p>
                     * 
                     */
                    void SetCheckType(const std::string& _checkType);

                    /**
                     * 判断参数 CheckType 是否已赋值
                     * @return CheckType 是否已赋值
                     * 
                     */
                    bool CheckTypeHasBeenSet() const;

                    /**
                     * 获取<p>Security clause specification</p>
                     * @return StandardTerms <p>Security clause specification</p>
                     * 
                     */
                    std::vector<StandardTerm> GetStandardTerms() const;

                    /**
                     * 设置<p>Security clause specification</p>
                     * @param _standardTerms <p>Security clause specification</p>
                     * 
                     */
                    void SetStandardTerms(const std::vector<StandardTerm>& _standardTerms);

                    /**
                     * 判断参数 StandardTerms 是否已赋值
                     * @return StandardTerms 是否已赋值
                     * 
                     */
                    bool StandardTermsHasBeenSet() const;

                    /**
                     * 获取<p>Asset type icon</p>
                     * @return AssetTypeIconURL <p>Asset type icon</p>
                     * 
                     */
                    std::string GetAssetTypeIconURL() const;

                    /**
                     * 设置<p>Asset type icon</p>
                     * @param _assetTypeIconURL <p>Asset type icon</p>
                     * 
                     */
                    void SetAssetTypeIconURL(const std::string& _assetTypeIconURL);

                    /**
                     * 判断参数 AssetTypeIconURL 是否已赋值
                     * @return AssetTypeIconURL 是否已赋值
                     * 
                     */
                    bool AssetTypeIconURLHasBeenSet() const;

                    /**
                     * 获取<p>Rule enabled by default</p>
                     * @return EnableDefault <p>Rule enabled by default</p>
                     * 
                     */
                    uint64_t GetEnableDefault() const;

                    /**
                     * 设置<p>Rule enabled by default</p>
                     * @param _enableDefault <p>Rule enabled by default</p>
                     * 
                     */
                    void SetEnableDefault(const uint64_t& _enableDefault);

                    /**
                     * 判断参数 EnableDefault 是否已赋值
                     * @return EnableDefault 是否已赋值
                     * 
                     */
                    bool EnableDefaultHasBeenSet() const;

                private:

                    /**
                     * <p>Risk rule ID</p>
                     */
                    std::string m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * <p>Tencent Cloud</p>
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * <p>Risk title</p>
                     */
                    std::string m_riskTitle;
                    bool m_riskTitleHasBeenSet;

                    /**
                     * <p>Risk classification</p>
                     */
                    std::string m_classify;
                    bool m_classifyHasBeenSet;

                    /**
                     * <p>Risk level.</p>
                     */
                    std::string m_severity;
                    bool m_severityHasBeenSet;

                    /**
                     * <p>Risk rule opening status</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Number of associated accounts</p>
                     */
                    uint64_t m_relatedUinCount;
                    bool m_relatedUinCountHasBeenSet;

                    /**
                     * <p>Number of accounts with policy activation</p>
                     */
                    uint64_t m_policyEnableCount;
                    bool m_policyEnableCountHasBeenSet;

                    /**
                     * <p>Asset type</p>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * <p>Whether the rule is free</p>
                     */
                    uint64_t m_isFree;
                    bool m_isFreeHasBeenSet;

                    /**
                     * <p>Check type</p>
                     */
                    std::string m_checkType;
                    bool m_checkTypeHasBeenSet;

                    /**
                     * <p>Security clause specification</p>
                     */
                    std::vector<StandardTerm> m_standardTerms;
                    bool m_standardTermsHasBeenSet;

                    /**
                     * <p>Asset type icon</p>
                     */
                    std::string m_assetTypeIconURL;
                    bool m_assetTypeIconURLHasBeenSet;

                    /**
                     * <p>Rule enabled by default</p>
                     */
                    uint64_t m_enableDefault;
                    bool m_enableDefaultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CUSTOMRISKRULEITEM_H_
