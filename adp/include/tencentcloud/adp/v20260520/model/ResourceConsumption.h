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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_RESOURCECONSUMPTION_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_RESOURCECONSUMPTION_H_

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
                * Single item consumption measurement
                */
                class ResourceConsumption : public AbstractModel
                {
                public:
                    ResourceConsumption();
                    ~ResourceConsumption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Feature tag. For the PLATFORM scenario, use the PlatformBizType enumeration name; for MODEL/PLUGIN scenarios, leave it empty</p>
                     * @return Label <p>Feature tag. For the PLATFORM scenario, use the PlatformBizType enumeration name; for MODEL/PLUGIN scenarios, leave it empty</p>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置<p>Feature tag. For the PLATFORM scenario, use the PlatformBizType enumeration name; for MODEL/PLUGIN scenarios, leave it empty</p>
                     * @param _label <p>Feature tag. For the PLATFORM scenario, use the PlatformBizType enumeration name; for MODEL/PLUGIN scenarios, leave it empty</p>
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取<p>Consumption measurement unit</p><table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>DOSAGE_UNIT_TOKEN</td><td>0</td><td>token (default)</td></tr><tr><td>DOSAGE_UNIT_PAGE_COUNT</td><td>1</td><td>page_count (page number)</td></tr><tr><td>DOSAGE_UNIT_TIMES</td><td>2</td><td>times (count)</td></tr><tr><td>DOSAGE_UNIT_SECOND</td><td>3</td><td>second (second)</td></tr><tr><td>DOSAGE_UNIT_ITEM</td><td>4</td><td>item (item)</td></tr><tr><td>DOSAGE_UNIT_SHEET</td><td>5</td><td>sheet (sheet)</td></tr><tr><td>DOSAGE_UNIT_CHARACTER</td><td>6</td><td>character (character)</td></tr><tr><td>DOSAGE_UNIT_GB</td><td>7</td><td>GB</td></tr><tr><td>DOSAGE_UNIT_NUMBER</td><td>8</td><td>number (count)</td></tr><tr><td>DOSAGE_UNIT_MILL_SECOND</td><td>9</td><td>mill_second (millisecond)</td></tr></tbody></table>
                     * @return Unit <p>Consumption measurement unit</p><table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>DOSAGE_UNIT_TOKEN</td><td>0</td><td>token (default)</td></tr><tr><td>DOSAGE_UNIT_PAGE_COUNT</td><td>1</td><td>page_count (page number)</td></tr><tr><td>DOSAGE_UNIT_TIMES</td><td>2</td><td>times (count)</td></tr><tr><td>DOSAGE_UNIT_SECOND</td><td>3</td><td>second (second)</td></tr><tr><td>DOSAGE_UNIT_ITEM</td><td>4</td><td>item (item)</td></tr><tr><td>DOSAGE_UNIT_SHEET</td><td>5</td><td>sheet (sheet)</td></tr><tr><td>DOSAGE_UNIT_CHARACTER</td><td>6</td><td>character (character)</td></tr><tr><td>DOSAGE_UNIT_GB</td><td>7</td><td>GB</td></tr><tr><td>DOSAGE_UNIT_NUMBER</td><td>8</td><td>number (count)</td></tr><tr><td>DOSAGE_UNIT_MILL_SECOND</td><td>9</td><td>mill_second (millisecond)</td></tr></tbody></table>
                     * 
                     */
                    int64_t GetUnit() const;

                    /**
                     * 设置<p>Consumption measurement unit</p><table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>DOSAGE_UNIT_TOKEN</td><td>0</td><td>token (default)</td></tr><tr><td>DOSAGE_UNIT_PAGE_COUNT</td><td>1</td><td>page_count (page number)</td></tr><tr><td>DOSAGE_UNIT_TIMES</td><td>2</td><td>times (count)</td></tr><tr><td>DOSAGE_UNIT_SECOND</td><td>3</td><td>second (second)</td></tr><tr><td>DOSAGE_UNIT_ITEM</td><td>4</td><td>item (item)</td></tr><tr><td>DOSAGE_UNIT_SHEET</td><td>5</td><td>sheet (sheet)</td></tr><tr><td>DOSAGE_UNIT_CHARACTER</td><td>6</td><td>character (character)</td></tr><tr><td>DOSAGE_UNIT_GB</td><td>7</td><td>GB</td></tr><tr><td>DOSAGE_UNIT_NUMBER</td><td>8</td><td>number (count)</td></tr><tr><td>DOSAGE_UNIT_MILL_SECOND</td><td>9</td><td>mill_second (millisecond)</td></tr></tbody></table>
                     * @param _unit <p>Consumption measurement unit</p><table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>DOSAGE_UNIT_TOKEN</td><td>0</td><td>token (default)</td></tr><tr><td>DOSAGE_UNIT_PAGE_COUNT</td><td>1</td><td>page_count (page number)</td></tr><tr><td>DOSAGE_UNIT_TIMES</td><td>2</td><td>times (count)</td></tr><tr><td>DOSAGE_UNIT_SECOND</td><td>3</td><td>second (second)</td></tr><tr><td>DOSAGE_UNIT_ITEM</td><td>4</td><td>item (item)</td></tr><tr><td>DOSAGE_UNIT_SHEET</td><td>5</td><td>sheet (sheet)</td></tr><tr><td>DOSAGE_UNIT_CHARACTER</td><td>6</td><td>character (character)</td></tr><tr><td>DOSAGE_UNIT_GB</td><td>7</td><td>GB</td></tr><tr><td>DOSAGE_UNIT_NUMBER</td><td>8</td><td>number (count)</td></tr><tr><td>DOSAGE_UNIT_MILL_SECOND</td><td>9</td><td>mill_second (millisecond)</td></tr></tbody></table>
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
                     * 获取<p>Consumption value</p>
                     * @return Value <p>Consumption value</p>
                     * 
                     */
                    double GetValue() const;

                    /**
                     * 设置<p>Consumption value</p>
                     * @param _value <p>Consumption value</p>
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
                     * <p>Feature tag. For the PLATFORM scenario, use the PlatformBizType enumeration name; for MODEL/PLUGIN scenarios, leave it empty</p>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * <p>Consumption measurement unit</p><table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>DOSAGE_UNIT_TOKEN</td><td>0</td><td>token (default)</td></tr><tr><td>DOSAGE_UNIT_PAGE_COUNT</td><td>1</td><td>page_count (page number)</td></tr><tr><td>DOSAGE_UNIT_TIMES</td><td>2</td><td>times (count)</td></tr><tr><td>DOSAGE_UNIT_SECOND</td><td>3</td><td>second (second)</td></tr><tr><td>DOSAGE_UNIT_ITEM</td><td>4</td><td>item (item)</td></tr><tr><td>DOSAGE_UNIT_SHEET</td><td>5</td><td>sheet (sheet)</td></tr><tr><td>DOSAGE_UNIT_CHARACTER</td><td>6</td><td>character (character)</td></tr><tr><td>DOSAGE_UNIT_GB</td><td>7</td><td>GB</td></tr><tr><td>DOSAGE_UNIT_NUMBER</td><td>8</td><td>number (count)</td></tr><tr><td>DOSAGE_UNIT_MILL_SECOND</td><td>9</td><td>mill_second (millisecond)</td></tr></tbody></table>
                     */
                    int64_t m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * <p>Consumption value</p>
                     */
                    double m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_RESOURCECONSUMPTION_H_
