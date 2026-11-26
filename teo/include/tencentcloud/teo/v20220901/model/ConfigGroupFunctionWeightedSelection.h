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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CONFIGGROUPFUNCTIONWEIGHTEDSELECTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CONFIGGROUPFUNCTIONWEIGHTEDSELECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Weight strategy configuration.
                */
                class ConfigGroupFunctionWeightedSelection : public AbstractModel
                {
                public:
                    ConfigGroupFunctionWeightedSelection();
                    ~ConfigGroupFunctionWeightedSelection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>Select the weight. The value ranges from 0 to 100, and the sum of all weights must be 100. The probability of being selected is calculated as: weight/100. For example, if two functions A and B are set, where the weight of A is 30, then the weight of B must be 70. Finally, the probability of selecting A is 30%, and the probability of selecting B is 70%.</p>
                     * @return Weight <p>Select the weight. The value ranges from 0 to 100, and the sum of all weights must be 100. The probability of being selected is calculated as: weight/100. For example, if two functions A and B are set, where the weight of A is 30, then the weight of B must be 70. Finally, the probability of selecting A is 30%, and the probability of selecting B is 70%.</p>
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置<p>Select the weight. The value ranges from 0 to 100, and the sum of all weights must be 100. The probability of being selected is calculated as: weight/100. For example, if two functions A and B are set, where the weight of A is 30, then the weight of B must be 70. Finally, the probability of selecting A is 30%, and the probability of selecting B is 70%.</p>
                     * @param _weight <p>Select the weight. The value ranges from 0 to 100, and the sum of all weights must be 100. The probability of being selected is calculated as: weight/100. For example, if two functions A and B are set, where the weight of A is 30, then the weight of B must be 70. Finally, the probability of selecting A is 30%, and the probability of selecting B is 70%.</p>
                     * 
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                private:

                    /**
                     * <p>Specify the function executed. The value is the unique identifier of the function in the site. This parameter is valid only when TriggerType is direct.</p>
                     */
                    std::string m_function;
                    bool m_functionHasBeenSet;

                    /**
                     * <p>Select the weight. The value ranges from 0 to 100, and the sum of all weights must be 100. The probability of being selected is calculated as: weight/100. For example, if two functions A and B are set, where the weight of A is 30, then the weight of B must be 70. Finally, the probability of selecting A is 30%, and the probability of selecting B is 70%.</p>
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CONFIGGROUPFUNCTIONWEIGHTEDSELECTION_H_
