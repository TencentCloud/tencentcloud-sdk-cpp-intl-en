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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CONFIGGROUPFUNCTIONTRIGGER_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CONFIGGROUPFUNCTIONTRIGGER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ConfigGroupFunctionRegionSelection.h>
#include <tencentcloud/teo/v20220901/model/ConfigGroupFunctionWeightedSelection.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Trigger rules for an edge function
                */
                class ConfigGroupFunctionTrigger : public AbstractModel
                {
                public:
                    ConfigGroupFunctionTrigger();
                    ~ConfigGroupFunctionTrigger() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p><a href="https://www.tencentcloud.com/document/product/1552/90438?from_cn_redirect=1#33f65828-c6c6-4b66-a011-25a20b548d5d">Match condition.</a></p>
                     * @return Condition <p><a href="https://www.tencentcloud.com/document/product/1552/90438?from_cn_redirect=1#33f65828-c6c6-4b66-a011-25a20b548d5d">Match condition.</a></p>
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置<p><a href="https://www.tencentcloud.com/document/product/1552/90438?from_cn_redirect=1#33f65828-c6c6-4b66-a011-25a20b548d5d">Match condition.</a></p>
                     * @param _condition <p><a href="https://www.tencentcloud.com/document/product/1552/90438?from_cn_redirect=1#33f65828-c6c6-4b66-a011-25a20b548d5d">Match condition.</a></p>
                     * 
                     */
                    void SetCondition(const std::string& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取<p>Function selection configuration type:</p><p>Enumeration values:</p><ul><li>direct: directly specify the execution function</li><li>weight: select a function based on weight ratio</li><li>region: select a function based on the client IP country/region</li></ul>
                     * @return TriggerType <p>Function selection configuration type:</p><p>Enumeration values:</p><ul><li>direct: directly specify the execution function</li><li>weight: select a function based on weight ratio</li><li>region: select a function based on the client IP country/region</li></ul>
                     * 
                     */
                    std::string GetTriggerType() const;

                    /**
                     * 设置<p>Function selection configuration type:</p><p>Enumeration values:</p><ul><li>direct: directly specify the execution function</li><li>weight: select a function based on weight ratio</li><li>region: select a function based on the client IP country/region</li></ul>
                     * @param _triggerType <p>Function selection configuration type:</p><p>Enumeration values:</p><ul><li>direct: directly specify the execution function</li><li>weight: select a function based on weight ratio</li><li>region: select a function based on the client IP country/region</li></ul>
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
                     * 获取<p>Specify the function executed. The value is the unique identifier of the function in the site. This parameter is valid only when TriggerType is direct.</p>
                     * @return Function <p>Specify the function executed. The value is the unique identifier of the function in the site. This parameter is valid only when TriggerType is direct.</p>
                     * 
                     */
                    std::string GetFunction() const;

                    /**
                     * 设置<p>Specify the function executed. The value is the unique identifier of the function in the site. This parameter is valid only when TriggerType is direct.</p>
                     * @param _function <p>Specify the function executed. The value is the unique identifier of the function in the site. This parameter is valid only when TriggerType is direct.</p>
                     * 
                     */
                    void SetFunction(const std::string& _function);

                    /**
                     * 判断参数 Function 是否已赋值
                     * @return Function 是否已赋值
                     * 
                     */
                    bool FunctionHasBeenSet() const;

                    /**
                     * 获取<p>Function selection configuration based on client IP country/region.</p>
                     * @return RegionMappingSelections <p>Function selection configuration based on client IP country/region.</p>
                     * 
                     */
                    std::vector<ConfigGroupFunctionRegionSelection> GetRegionMappingSelections() const;

                    /**
                     * 设置<p>Function selection configuration based on client IP country/region.</p>
                     * @param _regionMappingSelections <p>Function selection configuration based on client IP country/region.</p>
                     * 
                     */
                    void SetRegionMappingSelections(const std::vector<ConfigGroupFunctionRegionSelection>& _regionMappingSelections);

                    /**
                     * 判断参数 RegionMappingSelections 是否已赋值
                     * @return RegionMappingSelections 是否已赋值
                     * 
                     */
                    bool RegionMappingSelectionsHasBeenSet() const;

                    /**
                     * 获取<p>Weight-based function selection configuration.</p>
                     * @return WeightedSelections <p>Weight-based function selection configuration.</p>
                     * 
                     */
                    std::vector<ConfigGroupFunctionWeightedSelection> GetWeightedSelections() const;

                    /**
                     * 设置<p>Weight-based function selection configuration.</p>
                     * @param _weightedSelections <p>Weight-based function selection configuration.</p>
                     * 
                     */
                    void SetWeightedSelections(const std::vector<ConfigGroupFunctionWeightedSelection>& _weightedSelections);

                    /**
                     * 判断参数 WeightedSelections 是否已赋值
                     * @return WeightedSelections 是否已赋值
                     * 
                     */
                    bool WeightedSelectionsHasBeenSet() const;

                    /**
                     * 获取<p>Rule description.</p>
                     * @return Remark <p>Rule description.</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>Rule description.</p>
                     * @param _remark <p>Rule description.</p>
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
                     * <p><a href="https://www.tencentcloud.com/document/product/1552/90438?from_cn_redirect=1#33f65828-c6c6-4b66-a011-25a20b548d5d">Match condition.</a></p>
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * <p>Function selection configuration type:</p><p>Enumeration values:</p><ul><li>direct: directly specify the execution function</li><li>weight: select a function based on weight ratio</li><li>region: select a function based on the client IP country/region</li></ul>
                     */
                    std::string m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * <p>Specify the function executed. The value is the unique identifier of the function in the site. This parameter is valid only when TriggerType is direct.</p>
                     */
                    std::string m_function;
                    bool m_functionHasBeenSet;

                    /**
                     * <p>Function selection configuration based on client IP country/region.</p>
                     */
                    std::vector<ConfigGroupFunctionRegionSelection> m_regionMappingSelections;
                    bool m_regionMappingSelectionsHasBeenSet;

                    /**
                     * <p>Weight-based function selection configuration.</p>
                     */
                    std::vector<ConfigGroupFunctionWeightedSelection> m_weightedSelections;
                    bool m_weightedSelectionsHasBeenSet;

                    /**
                     * <p>Rule description.</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CONFIGGROUPFUNCTIONTRIGGER_H_
