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
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
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
                     * 获取Rule ID. you can first use the DescribeFunctionRules API to get the RuleId that needs to be modified, then input the modified rule content. the original rule content will be overwritten.
                     * @return RuleId Rule ID. you can first use the DescribeFunctionRules API to get the RuleId that needs to be modified, then input the modified rule content. the original rule content will be overwritten.
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Rule ID. you can first use the DescribeFunctionRules API to get the RuleId that needs to be modified, then input the modified rule content. the original rule content will be overwritten.
                     * @param _ruleId Rule ID. you can first use the DescribeFunctionRules API to get the RuleId that needs to be modified, then input the modified rule content. the original rule content will be overwritten.
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
                     * 获取Rule condition list. There is an OR relationship between different conditions of the same trigger rule. If this parameter is not input, the original configuration is maintained.
                     * @return FunctionRuleConditions Rule condition list. There is an OR relationship between different conditions of the same trigger rule. If this parameter is not input, the original configuration is maintained.
                     * 
                     */
                    std::vector<FunctionRuleCondition> GetFunctionRuleConditions() const;

                    /**
                     * 设置Rule condition list. There is an OR relationship between different conditions of the same trigger rule. If this parameter is not input, the original configuration is maintained.
                     * @param _functionRuleConditions Rule condition list. There is an OR relationship between different conditions of the same trigger rule. If this parameter is not input, the original configuration is maintained.
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
                     * 获取Function selection configuration type.
<Li>Direct: specifies the execution function directly.</li>.
<Li>Weight: selects the function based on weight ratio.</li>.
<li> region: specifies the country/region selection function based on client IP.</li>.
Specifies the default value as direct when left blank.
                     * @return TriggerType Function selection configuration type.
<Li>Direct: specifies the execution function directly.</li>.
<Li>Weight: selects the function based on weight ratio.</li>.
<li> region: specifies the country/region selection function based on client IP.</li>.
Specifies the default value as direct when left blank.
                     * 
                     */
                    std::string GetTriggerType() const;

                    /**
                     * 设置Function selection configuration type.
<Li>Direct: specifies the execution function directly.</li>.
<Li>Weight: selects the function based on weight ratio.</li>.
<li> region: specifies the country/region selection function based on client IP.</li>.
Specifies the default value as direct when left blank.
                     * @param _triggerType Function selection configuration type.
<Li>Direct: specifies the execution function directly.</li>.
<Li>Weight: selects the function based on weight ratio.</li>.
<li> region: specifies the country/region selection function based on client IP.</li>.
Specifies the default value as direct when left blank.
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
                     * 获取Specifies the function ID to be executed. this parameter is valid only when TriggerType is direct or left empty.
                     * @return FunctionId Specifies the function ID to be executed. this parameter is valid only when TriggerType is direct or left empty.
                     * 
                     */
                    std::string GetFunctionId() const;

                    /**
                     * 设置Specifies the function ID to be executed. this parameter is valid only when TriggerType is direct or left empty.
                     * @param _functionId Specifies the function ID to be executed. this parameter is valid only when TriggerType is direct or left empty.
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
                     * 获取Function selection configuration based on client IP country/region. this parameter is valid only when TriggerType is region and RegionMappingSelections is required. RegionMappingSelections must include at least one configuration with Regions set to Default.
                     * @return RegionMappingSelections Function selection configuration based on client IP country/region. this parameter is valid only when TriggerType is region and RegionMappingSelections is required. RegionMappingSelections must include at least one configuration with Regions set to Default.
                     * 
                     */
                    std::vector<FunctionRegionSelection> GetRegionMappingSelections() const;

                    /**
                     * 设置Function selection configuration based on client IP country/region. this parameter is valid only when TriggerType is region and RegionMappingSelections is required. RegionMappingSelections must include at least one configuration with Regions set to Default.
                     * @param _regionMappingSelections Function selection configuration based on client IP country/region. this parameter is valid only when TriggerType is region and RegionMappingSelections is required. RegionMappingSelections must include at least one configuration with Regions set to Default.
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
                     * 获取Weighted function selection configuration. this parameter is valid only when TriggerType is weight and WeightedSelections is required. the sum of all weights in WeightedSelections need to be 100.
                     * @return WeightedSelections Weighted function selection configuration. this parameter is valid only when TriggerType is weight and WeightedSelections is required. the sum of all weights in WeightedSelections need to be 100.
                     * 
                     */
                    std::vector<FunctionWeightedSelection> GetWeightedSelections() const;

                    /**
                     * 设置Weighted function selection configuration. this parameter is valid only when TriggerType is weight and WeightedSelections is required. the sum of all weights in WeightedSelections need to be 100.
                     * @param _weightedSelections Weighted function selection configuration. this parameter is valid only when TriggerType is weight and WeightedSelections is required. the sum of all weights in WeightedSelections need to be 100.
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
                     * 获取Rule description, which can contain up to 60 characters. If this parameter is not input, the original configuration is maintained.
                     * @return Remark Rule description, which can contain up to 60 characters. If this parameter is not input, the original configuration is maintained.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Rule description, which can contain up to 60 characters. If this parameter is not input, the original configuration is maintained.
                     * @param _remark Rule description, which can contain up to 60 characters. If this parameter is not input, the original configuration is maintained.
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
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Rule ID. you can first use the DescribeFunctionRules API to get the RuleId that needs to be modified, then input the modified rule content. the original rule content will be overwritten.
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Rule condition list. There is an OR relationship between different conditions of the same trigger rule. If this parameter is not input, the original configuration is maintained.
                     */
                    std::vector<FunctionRuleCondition> m_functionRuleConditions;
                    bool m_functionRuleConditionsHasBeenSet;

                    /**
                     * Function selection configuration type.
<Li>Direct: specifies the execution function directly.</li>.
<Li>Weight: selects the function based on weight ratio.</li>.
<li> region: specifies the country/region selection function based on client IP.</li>.
Specifies the default value as direct when left blank.
                     */
                    std::string m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * Specifies the function ID to be executed. this parameter is valid only when TriggerType is direct or left empty.
                     */
                    std::string m_functionId;
                    bool m_functionIdHasBeenSet;

                    /**
                     * Function selection configuration based on client IP country/region. this parameter is valid only when TriggerType is region and RegionMappingSelections is required. RegionMappingSelections must include at least one configuration with Regions set to Default.
                     */
                    std::vector<FunctionRegionSelection> m_regionMappingSelections;
                    bool m_regionMappingSelectionsHasBeenSet;

                    /**
                     * Weighted function selection configuration. this parameter is valid only when TriggerType is weight and WeightedSelections is required. the sum of all weights in WeightedSelections need to be 100.
                     */
                    std::vector<FunctionWeightedSelection> m_weightedSelections;
                    bool m_weightedSelectionsHasBeenSet;

                    /**
                     * Rule description, which can contain up to 60 characters. If this parameter is not input, the original configuration is maintained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYFUNCTIONRULEREQUEST_H_
