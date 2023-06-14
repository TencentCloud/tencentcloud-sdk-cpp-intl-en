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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTCONFIGMANUALCALCVALUE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTCONFIGMANUALCALCVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePolicyConditionList.ConfigManual.CalcValue
                */
                class DescribePolicyConditionListConfigManualCalcValue : public AbstractModel
                {
                public:
                    DescribePolicyConditionListConfigManualCalcValue();
                    ~DescribePolicyConditionListConfigManualCalcValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Default value.
Note: This field may return null, indicating that no valid value was found.
                     * @return Default Default value.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetDefault() const;

                    /**
                     * 设置Default value.
Note: This field may return null, indicating that no valid value was found.
                     * @param _default Default value.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetDefault(const std::string& _default);

                    /**
                     * 判断参数 Default 是否已赋值
                     * @return Default 是否已赋值
                     * 
                     */
                    bool DefaultHasBeenSet() const;

                    /**
                     * 获取Fixed value.
Note: This field may return null, indicating that no valid value was found.
                     * @return Fixed Fixed value.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetFixed() const;

                    /**
                     * 设置Fixed value.
Note: This field may return null, indicating that no valid value was found.
                     * @param _fixed Fixed value.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetFixed(const std::string& _fixed);

                    /**
                     * 判断参数 Fixed 是否已赋值
                     * @return Fixed 是否已赋值
                     * 
                     */
                    bool FixedHasBeenSet() const;

                    /**
                     * 获取Maximum value.
Note: This field may return null, indicating that no valid value was found.
                     * @return Max Maximum value.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetMax() const;

                    /**
                     * 设置Maximum value.
Note: This field may return null, indicating that no valid value was found.
                     * @param _max Maximum value.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetMax(const std::string& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     * 
                     */
                    bool MaxHasBeenSet() const;

                    /**
                     * 获取Minimum value.
Note: This field may return null, indicating that no valid value was found.
                     * @return Min Minimum value.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetMin() const;

                    /**
                     * 设置Minimum value.
Note: This field may return null, indicating that no valid value was found.
                     * @param _min Minimum value.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetMin(const std::string& _min);

                    /**
                     * 判断参数 Min 是否已赋值
                     * @return Min 是否已赋值
                     * 
                     */
                    bool MinHasBeenSet() const;

                    /**
                     * 获取Required or not.
                     * @return Need Required or not.
                     * 
                     */
                    bool GetNeed() const;

                    /**
                     * 设置Required or not.
                     * @param _need Required or not.
                     * 
                     */
                    void SetNeed(const bool& _need);

                    /**
                     * 判断参数 Need 是否已赋值
                     * @return Need 是否已赋值
                     * 
                     */
                    bool NeedHasBeenSet() const;

                private:

                    /**
                     * Default value.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_default;
                    bool m_defaultHasBeenSet;

                    /**
                     * Fixed value.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_fixed;
                    bool m_fixedHasBeenSet;

                    /**
                     * Maximum value.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * Minimum value.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_min;
                    bool m_minHasBeenSet;

                    /**
                     * Required or not.
                     */
                    bool m_need;
                    bool m_needHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTCONFIGMANUALCALCVALUE_H_
