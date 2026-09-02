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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMRISKSTRATEGY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMRISKSTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Dspm risk policy
                */
                class DspmRiskStrategy : public AbstractModel
                {
                public:
                    DspmRiskStrategy();
                    ~DspmRiskStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Policy type</p>
                     * @return StrategyType <p>Policy type</p>
                     * 
                     */
                    std::string GetStrategyType() const;

                    /**
                     * 设置<p>Policy type</p>
                     * @param _strategyType <p>Policy type</p>
                     * 
                     */
                    void SetStrategyType(const std::string& _strategyType);

                    /**
                     * 判断参数 StrategyType 是否已赋值
                     * @return StrategyType 是否已赋值
                     * 
                     */
                    bool StrategyTypeHasBeenSet() const;

                    /**
                     * 获取<p>Policy name.</p>
                     * @return Name <p>Policy name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Policy name.</p>
                     * @param _name <p>Policy name.</p>
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
                     * 获取<p>Policy type</p>
                     * @return StrategyCategory <p>Policy type</p>
                     * 
                     */
                    std::string GetStrategyCategory() const;

                    /**
                     * 设置<p>Policy type</p>
                     * @param _strategyCategory <p>Policy type</p>
                     * 
                     */
                    void SetStrategyCategory(const std::string& _strategyCategory);

                    /**
                     * 判断参数 StrategyCategory 是否已赋值
                     * @return StrategyCategory 是否已赋值
                     * 
                     */
                    bool StrategyCategoryHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable. 0-Disable 1-Enable</p>
                     * @return IsEnabled <p>Whether to enable. 0-Disable 1-Enable</p>
                     * 
                     */
                    int64_t GetIsEnabled() const;

                    /**
                     * 设置<p>Whether to enable. 0-Disable 1-Enable</p>
                     * @param _isEnabled <p>Whether to enable. 0-Disable 1-Enable</p>
                     * 
                     */
                    void SetIsEnabled(const int64_t& _isEnabled);

                    /**
                     * 判断参数 IsEnabled 是否已赋值
                     * @return IsEnabled 是否已赋值
                     * 
                     */
                    bool IsEnabledHasBeenSet() const;

                    /**
                     * 获取<p>Risk level.</p>
                     * @return RiskLevel <p>Risk level.</p>
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置<p>Risk level.</p>
                     * @param _riskLevel <p>Risk level.</p>
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取<p>Policy rule</p>
                     * @return Rule <p>Policy rule</p>
                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置<p>Policy rule</p>
                     * @param _rule <p>Policy rule</p>
                     * 
                     */
                    void SetRule(const std::string& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取<p>Remarks.</p>
                     * @return Remark <p>Remarks.</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>Remarks.</p>
                     * @param _remark <p>Remarks.</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>Policy content.</p>
                     * @return Description <p>Policy content.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Policy content.</p>
                     * @param _description <p>Policy content.</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Number of hits</p>
                     * @return HitCount <p>Number of hits</p>
                     * 
                     */
                    int64_t GetHitCount() const;

                    /**
                     * 设置<p>Number of hits</p>
                     * @param _hitCount <p>Number of hits</p>
                     * 
                     */
                    void SetHitCount(const int64_t& _hitCount);

                    /**
                     * 判断参数 HitCount 是否已赋值
                     * @return HitCount 是否已赋值
                     * 
                     */
                    bool HitCountHasBeenSet() const;

                    /**
                     * 获取<p>Risk type. risk: Risk; alarm: Alarm.</p>
                     * @return RiskType <p>Risk type. risk: Risk; alarm: Alarm.</p>
                     * 
                     */
                    std::string GetRiskType() const;

                    /**
                     * 设置<p>Risk type. risk: Risk; alarm: Alarm.</p>
                     * @param _riskType <p>Risk type. risk: Risk; alarm: Alarm.</p>
                     * 
                     */
                    void SetRiskType(const std::string& _riskType);

                    /**
                     * 判断参数 RiskType 是否已赋值
                     * @return RiskType 是否已赋值
                     * 
                     */
                    bool RiskTypeHasBeenSet() const;

                    /**
                     * 获取<p>app id of the asset ownership account</p>
                     * @return AppId <p>app id of the asset ownership account</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>app id of the asset ownership account</p>
                     * @param _appId <p>app id of the asset ownership account</p>
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>Account nickname</p>
                     * @return NickName <p>Account nickname</p>
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置<p>Account nickname</p>
                     * @param _nickName <p>Account nickname</p>
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取<p>uin of the account to which the asset belongs</p>
                     * @return Uin <p>uin of the account to which the asset belongs</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>uin of the account to which the asset belongs</p>
                     * @param _uin <p>uin of the account to which the asset belongs</p>
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>Policy ID.</p>
                     * @return StrategyId <p>Policy ID.</p>
                     * 
                     */
                    uint64_t GetStrategyId() const;

                    /**
                     * 设置<p>Policy ID.</p>
                     * @param _strategyId <p>Policy ID.</p>
                     * 
                     */
                    void SetStrategyId(const uint64_t& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取<p>Rule source</p>
                     * @return RuleSource <p>Rule source</p>
                     * 
                     */
                    std::string GetRuleSource() const;

                    /**
                     * 设置<p>Rule source</p>
                     * @param _ruleSource <p>Rule source</p>
                     * 
                     */
                    void SetRuleSource(const std::string& _ruleSource);

                    /**
                     * 判断参数 RuleSource 是否已赋值
                     * @return RuleSource 是否已赋值
                     * 
                     */
                    bool RuleSourceHasBeenSet() const;

                    /**
                     * 获取<p>Supported asset types</p>
                     * @return AssetTypes <p>Supported asset types</p>
                     * 
                     */
                    std::vector<std::string> GetAssetTypes() const;

                    /**
                     * 设置<p>Supported asset types</p>
                     * @param _assetTypes <p>Supported asset types</p>
                     * 
                     */
                    void SetAssetTypes(const std::vector<std::string>& _assetTypes);

                    /**
                     * 判断参数 AssetTypes 是否已赋值
                     * @return AssetTypes 是否已赋值
                     * 
                     */
                    bool AssetTypesHasBeenSet() const;

                    /**
                     * 获取<p>Risk description</p>
                     * @return RiskDescription <p>Risk description</p>
                     * 
                     */
                    std::string GetRiskDescription() const;

                    /**
                     * 设置<p>Risk description</p>
                     * @param _riskDescription <p>Risk description</p>
                     * 
                     */
                    void SetRiskDescription(const std::string& _riskDescription);

                    /**
                     * 判断参数 RiskDescription 是否已赋值
                     * @return RiskDescription 是否已赋值
                     * 
                     */
                    bool RiskDescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>Policy type</p>
                     */
                    std::string m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * <p>Policy name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Policy type</p>
                     */
                    std::string m_strategyCategory;
                    bool m_strategyCategoryHasBeenSet;

                    /**
                     * <p>Whether to enable. 0-Disable 1-Enable</p>
                     */
                    int64_t m_isEnabled;
                    bool m_isEnabledHasBeenSet;

                    /**
                     * <p>Risk level.</p>
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>Policy rule</p>
                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * <p>Remarks.</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>Policy content.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Number of hits</p>
                     */
                    int64_t m_hitCount;
                    bool m_hitCountHasBeenSet;

                    /**
                     * <p>Risk type. risk: Risk; alarm: Alarm.</p>
                     */
                    std::string m_riskType;
                    bool m_riskTypeHasBeenSet;

                    /**
                     * <p>app id of the asset ownership account</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Account nickname</p>
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * <p>uin of the account to which the asset belongs</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>Policy ID.</p>
                     */
                    uint64_t m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * <p>Rule source</p>
                     */
                    std::string m_ruleSource;
                    bool m_ruleSourceHasBeenSet;

                    /**
                     * <p>Supported asset types</p>
                     */
                    std::vector<std::string> m_assetTypes;
                    bool m_assetTypesHasBeenSet;

                    /**
                     * <p>Risk description</p>
                     */
                    std::string m_riskDescription;
                    bool m_riskDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMRISKSTRATEGY_H_
