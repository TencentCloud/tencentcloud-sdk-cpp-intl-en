/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_CONSUMPTIONSUMMARYTREND_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_CONSUMPTIONSUMMARYTREND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Consumption cost trend
                */
                class ConsumptionSummaryTrend : public AbstractModel
                {
                public:
                    ConsumptionSummaryTrend();
                    ~ConsumptionSummaryTrend() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Trend type, upward for rising, downward for falling, none for no change
                     * @return Type Trend type, upward for rising, downward for falling, none for no change
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Trend type, upward for rising, downward for falling, none for no change
                     * @param _type Trend type, upward for rising, downward for falling, none for no change
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Trend value. The value is null when Type is none.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Value Trend value. The value is null when Type is none.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Trend value. The value is null when Type is none.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _value Trend value. The value is null when Type is none.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Trend type, upward for rising, downward for falling, none for no change
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Trend value. The value is null when Type is none.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_CONSUMPTIONSUMMARYTREND_H_
