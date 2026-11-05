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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_METRICOVERVIEW_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_METRICOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Overview KPI card metric items
                */
                class MetricOverview : public AbstractModel
                {
                public:
                    MetricOverview();
                    ~MetricOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Metric key. For the value, see the key allowlist in the MetricOverview note.</p>
                     * @return Key <p>Metric key. For the value, see the key allowlist in the MetricOverview note.</p>
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置<p>Metric key. For the value, see the key allowlist in the MetricOverview note.</p>
                     * @param _key <p>Metric key. For the value, see the key allowlist in the MetricOverview note.</p>
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
                     * 获取<p>Month-over-month percentage. Enter 0 if there is no month-over-month comparison</p>
                     * @return Mom <p>Month-over-month percentage. Enter 0 if there is no month-over-month comparison</p>
                     * 
                     */
                    double GetMom() const;

                    /**
                     * 设置<p>Month-over-month percentage. Enter 0 if there is no month-over-month comparison</p>
                     * @param _mom <p>Month-over-month percentage. Enter 0 if there is no month-over-month comparison</p>
                     * 
                     */
                    void SetMom(const double& _mom);

                    /**
                     * 判断参数 Mom 是否已赋值
                     * @return Mom 是否已赋值
                     * 
                     */
                    bool MomHasBeenSet() const;

                    /**
                     * 获取<p>Metric unit, enumeration value DosageUnit; for the mapping between key and unit, see the MetricOverview comment allowlist</p><table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>DOSAGE_UNIT_TOKEN</td><td>0</td><td>token (default)</td></tr><tr><td>DOSAGE_UNIT_PAGE_COUNT</td><td>1</td><td>page_count (page number)</td></tr><tr><td>DOSAGE_UNIT_TIMES</td><td>2</td><td>times (count)</td></tr><tr><td>DOSAGE_UNIT_SECOND</td><td>3</td><td>second</td></tr><tr><td>DOSAGE_UNIT_ITEM</td><td>4</td><td>item</td></tr><tr><td>DOSAGE_UNIT_SHEET</td><td>5</td><td>sheet</td></tr><tr><td>DOSAGE_UNIT_CHARACTER</td><td>6</td><td>character</td></tr><tr><td>DOSAGE_UNIT_GB</td><td>7</td><td>GB</td></tr><tr><td>DOSAGE_UNIT_NUMBER</td><td>8</td><td>number (count)</td></tr><tr><td>DOSAGE_UNIT_MILL_SECOND</td><td>9</td><td>mill_second (ms)</td></tr></tbody></table>
                     * @return Unit <p>Metric unit, enumeration value DosageUnit; for the mapping between key and unit, see the MetricOverview comment allowlist</p><table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>DOSAGE_UNIT_TOKEN</td><td>0</td><td>token (default)</td></tr><tr><td>DOSAGE_UNIT_PAGE_COUNT</td><td>1</td><td>page_count (page number)</td></tr><tr><td>DOSAGE_UNIT_TIMES</td><td>2</td><td>times (count)</td></tr><tr><td>DOSAGE_UNIT_SECOND</td><td>3</td><td>second</td></tr><tr><td>DOSAGE_UNIT_ITEM</td><td>4</td><td>item</td></tr><tr><td>DOSAGE_UNIT_SHEET</td><td>5</td><td>sheet</td></tr><tr><td>DOSAGE_UNIT_CHARACTER</td><td>6</td><td>character</td></tr><tr><td>DOSAGE_UNIT_GB</td><td>7</td><td>GB</td></tr><tr><td>DOSAGE_UNIT_NUMBER</td><td>8</td><td>number (count)</td></tr><tr><td>DOSAGE_UNIT_MILL_SECOND</td><td>9</td><td>mill_second (ms)</td></tr></tbody></table>
                     * 
                     */
                    int64_t GetUnit() const;

                    /**
                     * 设置<p>Metric unit, enumeration value DosageUnit; for the mapping between key and unit, see the MetricOverview comment allowlist</p><table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>DOSAGE_UNIT_TOKEN</td><td>0</td><td>token (default)</td></tr><tr><td>DOSAGE_UNIT_PAGE_COUNT</td><td>1</td><td>page_count (page number)</td></tr><tr><td>DOSAGE_UNIT_TIMES</td><td>2</td><td>times (count)</td></tr><tr><td>DOSAGE_UNIT_SECOND</td><td>3</td><td>second</td></tr><tr><td>DOSAGE_UNIT_ITEM</td><td>4</td><td>item</td></tr><tr><td>DOSAGE_UNIT_SHEET</td><td>5</td><td>sheet</td></tr><tr><td>DOSAGE_UNIT_CHARACTER</td><td>6</td><td>character</td></tr><tr><td>DOSAGE_UNIT_GB</td><td>7</td><td>GB</td></tr><tr><td>DOSAGE_UNIT_NUMBER</td><td>8</td><td>number (count)</td></tr><tr><td>DOSAGE_UNIT_MILL_SECOND</td><td>9</td><td>mill_second (ms)</td></tr></tbody></table>
                     * @param _unit <p>Metric unit, enumeration value DosageUnit; for the mapping between key and unit, see the MetricOverview comment allowlist</p><table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>DOSAGE_UNIT_TOKEN</td><td>0</td><td>token (default)</td></tr><tr><td>DOSAGE_UNIT_PAGE_COUNT</td><td>1</td><td>page_count (page number)</td></tr><tr><td>DOSAGE_UNIT_TIMES</td><td>2</td><td>times (count)</td></tr><tr><td>DOSAGE_UNIT_SECOND</td><td>3</td><td>second</td></tr><tr><td>DOSAGE_UNIT_ITEM</td><td>4</td><td>item</td></tr><tr><td>DOSAGE_UNIT_SHEET</td><td>5</td><td>sheet</td></tr><tr><td>DOSAGE_UNIT_CHARACTER</td><td>6</td><td>character</td></tr><tr><td>DOSAGE_UNIT_GB</td><td>7</td><td>GB</td></tr><tr><td>DOSAGE_UNIT_NUMBER</td><td>8</td><td>number (count)</td></tr><tr><td>DOSAGE_UNIT_MILL_SECOND</td><td>9</td><td>mill_second (ms)</td></tr></tbody></table>
                     * 
                     */
                    void SetUnit(const int64_t& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取<p>Metric value.</p>
                     * @return Value <p>Metric value.</p>
                     * 
                     */
                    double GetValue() const;

                    /**
                     * 设置<p>Metric value.</p>
                     * @param _value <p>Metric value.</p>
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
                     * <p>Metric key. For the value, see the key allowlist in the MetricOverview note.</p>
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>Month-over-month percentage. Enter 0 if there is no month-over-month comparison</p>
                     */
                    double m_mom;
                    bool m_momHasBeenSet;

                    /**
                     * <p>Metric unit, enumeration value DosageUnit; for the mapping between key and unit, see the MetricOverview comment allowlist</p><table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>DOSAGE_UNIT_TOKEN</td><td>0</td><td>token (default)</td></tr><tr><td>DOSAGE_UNIT_PAGE_COUNT</td><td>1</td><td>page_count (page number)</td></tr><tr><td>DOSAGE_UNIT_TIMES</td><td>2</td><td>times (count)</td></tr><tr><td>DOSAGE_UNIT_SECOND</td><td>3</td><td>second</td></tr><tr><td>DOSAGE_UNIT_ITEM</td><td>4</td><td>item</td></tr><tr><td>DOSAGE_UNIT_SHEET</td><td>5</td><td>sheet</td></tr><tr><td>DOSAGE_UNIT_CHARACTER</td><td>6</td><td>character</td></tr><tr><td>DOSAGE_UNIT_GB</td><td>7</td><td>GB</td></tr><tr><td>DOSAGE_UNIT_NUMBER</td><td>8</td><td>number (count)</td></tr><tr><td>DOSAGE_UNIT_MILL_SECOND</td><td>9</td><td>mill_second (ms)</td></tr></tbody></table>
                     */
                    int64_t m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * <p>Metric value.</p>
                     */
                    double m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_METRICOVERVIEW_H_
