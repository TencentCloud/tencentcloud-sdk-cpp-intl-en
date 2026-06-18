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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_STATISTICALFILTER_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_STATISTICALFILTER_H_

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
                * User Behavior Analysis Statistical Condition
                */
                class StatisticalFilter : public AbstractModel
                {
                public:
                    StatisticalFilter();
                    ~StatisticalFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取0: Not based on statistical testing
1: Occurrence count higher than a fixed value
2: Occurrence count exceeds 100 percent of the period average
3: Occurrences higher than 50 percent of the user average
                     * @return OperatorType 0: Not based on statistical testing
1: Occurrence count higher than a fixed value
2: Occurrence count exceeds 100 percent of the period average
3: Occurrences higher than 50 percent of the user average
                     * 
                     */
                    int64_t GetOperatorType() const;

                    /**
                     * 设置0: Not based on statistical testing
1: Occurrence count higher than a fixed value
2: Occurrence count exceeds 100 percent of the period average
3: Occurrences higher than 50 percent of the user average
                     * @param _operatorType 0: Not based on statistical testing
1: Occurrence count higher than a fixed value
2: Occurrence count exceeds 100 percent of the period average
3: Occurrences higher than 50 percent of the user average
                     * 
                     */
                    void SetOperatorType(const int64_t& _operatorType);

                    /**
                     * 判断参数 OperatorType 是否已赋值
                     * @return OperatorType 是否已赋值
                     * 
                     */
                    bool OperatorTypeHasBeenSet() const;

                    /**
                     * 获取Statistical value
                     * @return Value Statistical value
                     * 
                     */
                    double GetValue() const;

                    /**
                     * 设置Statistical value
                     * @param _value Statistical value
                     * 
                     */
                    void SetValue(const double& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 0: Not based on statistical testing
1: Occurrence count higher than a fixed value
2: Occurrence count exceeds 100 percent of the period average
3: Occurrences higher than 50 percent of the user average
                     */
                    int64_t m_operatorType;
                    bool m_operatorTypeHasBeenSet;

                    /**
                     * Statistical value
                     */
                    double m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_STATISTICALFILTER_H_
