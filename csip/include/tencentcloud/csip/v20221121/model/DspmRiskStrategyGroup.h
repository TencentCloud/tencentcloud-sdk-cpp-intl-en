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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMRISKSTRATEGYGROUP_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMRISKSTRATEGYGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmRiskStrategy.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Dspm risk group policy
                */
                class DspmRiskStrategyGroup : public AbstractModel
                {
                public:
                    DspmRiskStrategyGroup();
                    ~DspmRiskStrategyGroup() = default;
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
                     * 获取<p>Whether to enable. 0 - disable, 1 - enable</p>
                     * @return IsEnabled <p>Whether to enable. 0 - disable, 1 - enable</p>
                     * 
                     */
                    int64_t GetIsEnabled() const;

                    /**
                     * 设置<p>Whether to enable. 0 - disable, 1 - enable</p>
                     * @param _isEnabled <p>Whether to enable. 0 - disable, 1 - enable</p>
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
                     * 获取<p>Risk type. risk: risk; alarm: alarm.</p>
                     * @return RiskType <p>Risk type. risk: risk; alarm: alarm.</p>
                     * 
                     */
                    std::string GetRiskType() const;

                    /**
                     * 设置<p>Risk type. risk: risk; alarm: alarm.</p>
                     * @param _riskType <p>Risk type. risk: risk; alarm: alarm.</p>
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
                     * 获取<p>Policy list.</p>
                     * @return StrategyList <p>Policy list.</p>
                     * 
                     */
                    std::vector<DspmRiskStrategy> GetStrategyList() const;

                    /**
                     * 设置<p>Policy list.</p>
                     * @param _strategyList <p>Policy list.</p>
                     * 
                     */
                    void SetStrategyList(const std::vector<DspmRiskStrategy>& _strategyList);

                    /**
                     * 判断参数 StrategyList 是否已赋值
                     * @return StrategyList 是否已赋值
                     * 
                     */
                    bool StrategyListHasBeenSet() const;

                    /**
                     * 获取<p>Rule source.</p>
                     * @return RuleSource <p>Rule source.</p>
                     * 
                     */
                    std::string GetRuleSource() const;

                    /**
                     * 设置<p>Rule source.</p>
                     * @param _ruleSource <p>Rule source.</p>
                     * 
                     */
                    void SetRuleSource(const std::string& _ruleSource);

                    /**
                     * 判断参数 RuleSource 是否已赋值
                     * @return RuleSource 是否已赋值
                     * 
                     */
                    bool RuleSourceHasBeenSet() const;

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
                     * <p>Whether to enable. 0 - disable, 1 - enable</p>
                     */
                    int64_t m_isEnabled;
                    bool m_isEnabledHasBeenSet;

                    /**
                     * <p>Number of hits</p>
                     */
                    int64_t m_hitCount;
                    bool m_hitCountHasBeenSet;

                    /**
                     * <p>Risk type. risk: risk; alarm: alarm.</p>
                     */
                    std::string m_riskType;
                    bool m_riskTypeHasBeenSet;

                    /**
                     * <p>Policy list.</p>
                     */
                    std::vector<DspmRiskStrategy> m_strategyList;
                    bool m_strategyListHasBeenSet;

                    /**
                     * <p>Rule source.</p>
                     */
                    std::string m_ruleSource;
                    bool m_ruleSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMRISKSTRATEGYGROUP_H_
