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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYFUNCTIONRULEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYFUNCTIONRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/FunctionRuleCondition.h>
#include <tencentcloud/teo/v20220901/model/FunctionRegionSelection.h>
#include <tencentcloud/teo/v20220901/model/FunctionWeightedSelection.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyFunctionRule request structure.
                */
                class ModifyFunctionRuleRequest : public AbstractModel
                {
                public:
                    ModifyFunctionRuleRequest();
                    ~ModifyFunctionRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Zone ID.</p>
                     * @return ZoneId <p>Zone ID.</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Zone ID.</p>
                     * @param _zoneId <p>Zone ID.</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>Rule ID. You can first use the DescribeFunctionRules API to get the RuleId of the rule that needs to be modified, then import the modified rule content. The original rule content will be overwritten.</p>
                     * @return RuleId <p>Rule ID. You can first use the DescribeFunctionRules API to get the RuleId of the rule that needs to be modified, then import the modified rule content. The original rule content will be overwritten.</p>
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置<p>Rule ID. You can first use the DescribeFunctionRules API to get the RuleId of the rule that needs to be modified, then import the modified rule content. The original rule content will be overwritten.</p>
                     * @param _ruleId <p>Rule ID. You can first use the DescribeFunctionRules API to get the RuleId of the rule that needs to be modified, then import the modified rule content. The original rule content will be overwritten.</p>
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取<p>Rule condition list. There is an OR relationship between different conditions of the same trigger rule. If not specified, the original configuration is maintained.</p>
                     * @return FunctionRuleConditions <p>Rule condition list. There is an OR relationship between different conditions of the same trigger rule. If not specified, the original configuration is maintained.</p>
                     * 
                     */
                    std::vector<FunctionRuleCondition> GetFunctionRuleConditions() const;

                    /**
                     * 设置<p>Rule condition list. There is an OR relationship between different conditions of the same trigger rule. If not specified, the original configuration is maintained.</p>
                     * @param _functionRuleConditions <p>Rule condition list. There is an OR relationship between different conditions of the same trigger rule. If not specified, the original configuration is maintained.</p>
                     * 
                     */
                    void SetFunctionRuleConditions(const std::vector<FunctionRuleCondition>& _functionRuleConditions);

                    /**
                     * 判断参数 FunctionRuleConditions 是否已赋值
                     * @return FunctionRuleConditions 是否已赋值
                     * 
                     */
                    bool FunctionRuleConditionsHasBeenSet() const;

                    /**
                     * 获取<p>Function selection configuration type:</p><li> direct: directly specify the execution function;</li><li> weight: select a function based on weight ratio;</li><li> region: select a function based on the client IP country/region.</li>Defaults to direct if not specified.
                     * @return TriggerType <p>Function selection configuration type:</p><li> direct: directly specify the execution function;</li><li> weight: select a function based on weight ratio;</li><li> region: select a function based on the client IP country/region.</li>Defaults to direct if not specified.
                     * 
                     */
                    std::string GetTriggerType() const;

                    /**
                     * 设置<p>Function selection configuration type:</p><li> direct: directly specify the execution function;</li><li> weight: select a function based on weight ratio;</li><li> region: select a function based on the client IP country/region.</li>Defaults to direct if not specified.
                     * @param _triggerType <p>Function selection configuration type:</p><li> direct: directly specify the execution function;</li><li> weight: select a function based on weight ratio;</li><li> region: select a function based on the client IP country/region.</li>Defaults to direct if not specified.
                     * 
                     */
                    void SetTriggerType(const std::string& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取<p>Specify the function ID to be executed. This parameter is valid only when TriggerType is direct or left empty.</p>
                     * @return FunctionId <p>Specify the function ID to be executed. This parameter is valid only when TriggerType is direct or left empty.</p>
                     * 
                     */
                    std::string GetFunctionId() const;

                    /**
                     * 设置<p>Specify the function ID to be executed. This parameter is valid only when TriggerType is direct or left empty.</p>
                     * @param _functionId <p>Specify the function ID to be executed. This parameter is valid only when TriggerType is direct or left empty.</p>
                     * 
                     */
                    void SetFunctionId(const std::string& _functionId);

                    /**
                     * 判断参数 FunctionId 是否已赋值
                     * @return FunctionId 是否已赋值
                     * 
                     */
                    bool FunctionIdHasBeenSet() const;

                    /**
                     * 获取<p>Function selection configuration based on client IP country/region. This parameter is valid only when TriggerType is region, and RegionMappingSelections is required. RegionMappingSelections must contain one configuration with Regions as Default, and requires at least one other specific Region.</p>
                     * @return RegionMappingSelections <p>Function selection configuration based on client IP country/region. This parameter is valid only when TriggerType is region, and RegionMappingSelections is required. RegionMappingSelections must contain one configuration with Regions as Default, and requires at least one other specific Region.</p>
                     * 
                     */
                    std::vector<FunctionRegionSelection> GetRegionMappingSelections() const;

                    /**
                     * 设置<p>Function selection configuration based on client IP country/region. This parameter is valid only when TriggerType is region, and RegionMappingSelections is required. RegionMappingSelections must contain one configuration with Regions as Default, and requires at least one other specific Region.</p>
                     * @param _regionMappingSelections <p>Function selection configuration based on client IP country/region. This parameter is valid only when TriggerType is region, and RegionMappingSelections is required. RegionMappingSelections must contain one configuration with Regions as Default, and requires at least one other specific Region.</p>
                     * 
                     */
                    void SetRegionMappingSelections(const std::vector<FunctionRegionSelection>& _regionMappingSelections);

                    /**
                     * 判断参数 RegionMappingSelections 是否已赋值
                     * @return RegionMappingSelections 是否已赋值
                     * 
                     */
                    bool RegionMappingSelectionsHasBeenSet() const;

                    /**
                     * 获取<p>Weight-based function selection configuration. This parameter is valid only when TriggerType is weight and WeightedSelections is required. The sum of all weights in WeightedSelections need to be 100.</p>
                     * @return WeightedSelections <p>Weight-based function selection configuration. This parameter is valid only when TriggerType is weight and WeightedSelections is required. The sum of all weights in WeightedSelections need to be 100.</p>
                     * 
                     */
                    std::vector<FunctionWeightedSelection> GetWeightedSelections() const;

                    /**
                     * 设置<p>Weight-based function selection configuration. This parameter is valid only when TriggerType is weight and WeightedSelections is required. The sum of all weights in WeightedSelections need to be 100.</p>
                     * @param _weightedSelections <p>Weight-based function selection configuration. This parameter is valid only when TriggerType is weight and WeightedSelections is required. The sum of all weights in WeightedSelections need to be 100.</p>
                     * 
                     */
                    void SetWeightedSelections(const std::vector<FunctionWeightedSelection>& _weightedSelections);

                    /**
                     * 判断参数 WeightedSelections 是否已赋值
                     * @return WeightedSelections 是否已赋值
                     * 
                     */
                    bool WeightedSelectionsHasBeenSet() const;

                    /**
                     * 获取<p>Rule description, which can contain up to 60 characters. If this parameter is not input, the original configuration is maintained.</p>
                     * @return Remark <p>Rule description, which can contain up to 60 characters. If this parameter is not input, the original configuration is maintained.</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>Rule description, which can contain up to 60 characters. If this parameter is not input, the original configuration is maintained.</p>
                     * @param _remark <p>Rule description, which can contain up to 60 characters. If this parameter is not input, the original configuration is maintained.</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * <p>Zone ID.</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>Rule ID. You can first use the DescribeFunctionRules API to get the RuleId of the rule that needs to be modified, then import the modified rule content. The original rule content will be overwritten.</p>
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>Rule condition list. There is an OR relationship between different conditions of the same trigger rule. If not specified, the original configuration is maintained.</p>
                     */
                    std::vector<FunctionRuleCondition> m_functionRuleConditions;
                    bool m_functionRuleConditionsHasBeenSet;

                    /**
                     * <p>Function selection configuration type:</p><li> direct: directly specify the execution function;</li><li> weight: select a function based on weight ratio;</li><li> region: select a function based on the client IP country/region.</li>Defaults to direct if not specified.
                     */
                    std::string m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * <p>Specify the function ID to be executed. This parameter is valid only when TriggerType is direct or left empty.</p>
                     */
                    std::string m_functionId;
                    bool m_functionIdHasBeenSet;

                    /**
                     * <p>Function selection configuration based on client IP country/region. This parameter is valid only when TriggerType is region, and RegionMappingSelections is required. RegionMappingSelections must contain one configuration with Regions as Default, and requires at least one other specific Region.</p>
                     */
                    std::vector<FunctionRegionSelection> m_regionMappingSelections;
                    bool m_regionMappingSelectionsHasBeenSet;

                    /**
                     * <p>Weight-based function selection configuration. This parameter is valid only when TriggerType is weight and WeightedSelections is required. The sum of all weights in WeightedSelections need to be 100.</p>
                     */
                    std::vector<FunctionWeightedSelection> m_weightedSelections;
                    bool m_weightedSelectionsHasBeenSet;

                    /**
                     * <p>Rule description, which can contain up to 60 characters. If this parameter is not input, the original configuration is maintained.</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYFUNCTIONRULEREQUEST_H_
