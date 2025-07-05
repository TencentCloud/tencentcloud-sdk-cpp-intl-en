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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_APMFIELD_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_APMFIELD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/APMKVItem.h>
#include <tencentcloud/apm/v20210622/model/APMKV.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * Metric dimension information.
                */
                class ApmField : public AbstractModel
                {
                public:
                    ApmField();
                    ~ApmField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Metric name.
                     * @return Key Metric name.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Metric name.
                     * @param _key Metric name.
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Indicator numerical value.
                     * @return Value Indicator numerical value.
                     * 
                     */
                    double GetValue() const;

                    /**
                     * 设置Indicator numerical value.
                     * @param _value Indicator numerical value.
                     * 
                     */
                    void SetValue(const double& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Units corresponding to the metric.
                     * @return Unit Units corresponding to the metric.
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置Units corresponding to the metric.
                     * @param _unit Units corresponding to the metric.
                     * 
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取Year-Over-Year result array, recommended to use.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CompareVals Year-Over-Year result array, recommended to use.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<APMKVItem> GetCompareVals() const;

                    /**
                     * 设置Year-Over-Year result array, recommended to use.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _compareVals Year-Over-Year result array, recommended to use.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCompareVals(const std::vector<APMKVItem>& _compareVals);

                    /**
                     * 判断参数 CompareVals 是否已赋值
                     * @return CompareVals 是否已赋值
                     * 
                     */
                    bool CompareValsHasBeenSet() const;

                    /**
                     * 获取Indicator numerical value of the previous period in year-over-year comparison.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LastPeriodValue Indicator numerical value of the previous period in year-over-year comparison.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<APMKV> GetLastPeriodValue() const;

                    /**
                     * 设置Indicator numerical value of the previous period in year-over-year comparison.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _lastPeriodValue Indicator numerical value of the previous period in year-over-year comparison.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLastPeriodValue(const std::vector<APMKV>& _lastPeriodValue);

                    /**
                     * 判断参数 LastPeriodValue 是否已赋值
                     * @return LastPeriodValue 是否已赋值
                     * 
                     */
                    bool LastPeriodValueHasBeenSet() const;

                    /**
                     * 获取Year-On-Year metric value. deprecated, not recommended for use.
                     * @return CompareVal Year-On-Year metric value. deprecated, not recommended for use.
                     * 
                     */
                    std::string GetCompareVal() const;

                    /**
                     * 设置Year-On-Year metric value. deprecated, not recommended for use.
                     * @param _compareVal Year-On-Year metric value. deprecated, not recommended for use.
                     * 
                     */
                    void SetCompareVal(const std::string& _compareVal);

                    /**
                     * 判断参数 CompareVal 是否已赋值
                     * @return CompareVal 是否已赋值
                     * 
                     */
                    bool CompareValHasBeenSet() const;

                private:

                    /**
                     * Metric name.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Indicator numerical value.
                     */
                    double m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Units corresponding to the metric.
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * Year-Over-Year result array, recommended to use.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<APMKVItem> m_compareVals;
                    bool m_compareValsHasBeenSet;

                    /**
                     * Indicator numerical value of the previous period in year-over-year comparison.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<APMKV> m_lastPeriodValue;
                    bool m_lastPeriodValueHasBeenSet;

                    /**
                     * Year-On-Year metric value. deprecated, not recommended for use.
                     */
                    std::string m_compareVal;
                    bool m_compareValHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_APMFIELD_H_
