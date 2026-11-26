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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTIONWEIGHTEDSELECTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTIONWEIGHTEDSELECTION_H_

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
                class FunctionWeightedSelection : public AbstractModel
                {
                public:
                    FunctionWeightedSelection();
                    ~FunctionWeightedSelection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Function ID.
                     * @return FunctionId Function ID.
                     * 
                     */
                    std::string GetFunctionId() const;

                    /**
                     * 设置Function ID.
                     * @param _functionId Function ID.
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
                     * 获取Select a weight. Value range: 0-100. The sum of all weights must be 100.
Probability calculation method when selected:
weight/100. For example, if two functions A and B are set, and the weight of A is 30, then the weight of B must be 70. Finally, the probability of selecting A is 30%, and the probability of selecting B is 70%.
                     * @return Weight Select a weight. Value range: 0-100. The sum of all weights must be 100.
Probability calculation method when selected:
weight/100. For example, if two functions A and B are set, and the weight of A is 30, then the weight of B must be 70. Finally, the probability of selecting A is 30%, and the probability of selecting B is 70%.
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置Select a weight. Value range: 0-100. The sum of all weights must be 100.
Probability calculation method when selected:
weight/100. For example, if two functions A and B are set, and the weight of A is 30, then the weight of B must be 70. Finally, the probability of selecting A is 30%, and the probability of selecting B is 70%.
                     * @param _weight Select a weight. Value range: 0-100. The sum of all weights must be 100.
Probability calculation method when selected:
weight/100. For example, if two functions A and B are set, and the weight of A is 30, then the weight of B must be 70. Finally, the probability of selecting A is 30%, and the probability of selecting B is 70%.
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
                     * Function ID.
                     */
                    std::string m_functionId;
                    bool m_functionIdHasBeenSet;

                    /**
                     * Select a weight. Value range: 0-100. The sum of all weights must be 100.
Probability calculation method when selected:
weight/100. For example, if two functions A and B are set, and the weight of A is 30, then the weight of B must be 70. Finally, the probability of selecting A is 30%, and the probability of selecting B is 70%.
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTIONWEIGHTEDSELECTION_H_
