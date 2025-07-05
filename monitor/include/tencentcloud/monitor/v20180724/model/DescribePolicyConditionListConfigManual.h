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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTCONFIGMANUAL_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTCONFIGMANUAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyConditionListConfigManualCalcType.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyConditionListConfigManualCalcValue.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyConditionListConfigManualContinueTime.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyConditionListConfigManualPeriod.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyConditionListConfigManualPeriodNum.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyConditionListConfigManualStatType.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePolicyConditionList.ConfigManual
                */
                class DescribePolicyConditionListConfigManual : public AbstractModel
                {
                public:
                    DescribePolicyConditionListConfigManual();
                    ~DescribePolicyConditionListConfigManual() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Check method.
Note: This field may return null, indicating that no valid value was found.
                     * @return CalcType Check method.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    DescribePolicyConditionListConfigManualCalcType GetCalcType() const;

                    /**
                     * 设置Check method.
Note: This field may return null, indicating that no valid value was found.
                     * @param _calcType Check method.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetCalcType(const DescribePolicyConditionListConfigManualCalcType& _calcType);

                    /**
                     * 判断参数 CalcType 是否已赋值
                     * @return CalcType 是否已赋值
                     * 
                     */
                    bool CalcTypeHasBeenSet() const;

                    /**
                     * 获取Threshold.
Note: This field may return null, indicating that no valid value was found.
                     * @return CalcValue Threshold.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    DescribePolicyConditionListConfigManualCalcValue GetCalcValue() const;

                    /**
                     * 设置Threshold.
Note: This field may return null, indicating that no valid value was found.
                     * @param _calcValue Threshold.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetCalcValue(const DescribePolicyConditionListConfigManualCalcValue& _calcValue);

                    /**
                     * 判断参数 CalcValue 是否已赋值
                     * @return CalcValue 是否已赋值
                     * 
                     */
                    bool CalcValueHasBeenSet() const;

                    /**
                     * 获取Duration.
Note: This field may return null, indicating that no valid value was found.
                     * @return ContinueTime Duration.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    DescribePolicyConditionListConfigManualContinueTime GetContinueTime() const;

                    /**
                     * 设置Duration.
Note: This field may return null, indicating that no valid value was found.
                     * @param _continueTime Duration.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetContinueTime(const DescribePolicyConditionListConfigManualContinueTime& _continueTime);

                    /**
                     * 判断参数 ContinueTime 是否已赋值
                     * @return ContinueTime 是否已赋值
                     * 
                     */
                    bool ContinueTimeHasBeenSet() const;

                    /**
                     * 获取Data period.
Note: This field may return null, indicating that no valid value was found.
                     * @return Period Data period.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    DescribePolicyConditionListConfigManualPeriod GetPeriod() const;

                    /**
                     * 设置Data period.
Note: This field may return null, indicating that no valid value was found.
                     * @param _period Data period.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetPeriod(const DescribePolicyConditionListConfigManualPeriod& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Number of periods.
Note: This field may return null, indicating that no valid value was found.
                     * @return PeriodNum Number of periods.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    DescribePolicyConditionListConfigManualPeriodNum GetPeriodNum() const;

                    /**
                     * 设置Number of periods.
Note: This field may return null, indicating that no valid value was found.
                     * @param _periodNum Number of periods.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetPeriodNum(const DescribePolicyConditionListConfigManualPeriodNum& _periodNum);

                    /**
                     * 判断参数 PeriodNum 是否已赋值
                     * @return PeriodNum 是否已赋值
                     * 
                     */
                    bool PeriodNumHasBeenSet() const;

                    /**
                     * 获取Statistics method.
Note: This field may return null, indicating that no valid value was found.
                     * @return StatType Statistics method.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    DescribePolicyConditionListConfigManualStatType GetStatType() const;

                    /**
                     * 设置Statistics method.
Note: This field may return null, indicating that no valid value was found.
                     * @param _statType Statistics method.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetStatType(const DescribePolicyConditionListConfigManualStatType& _statType);

                    /**
                     * 判断参数 StatType 是否已赋值
                     * @return StatType 是否已赋值
                     * 
                     */
                    bool StatTypeHasBeenSet() const;

                private:

                    /**
                     * Check method.
Note: This field may return null, indicating that no valid value was found.
                     */
                    DescribePolicyConditionListConfigManualCalcType m_calcType;
                    bool m_calcTypeHasBeenSet;

                    /**
                     * Threshold.
Note: This field may return null, indicating that no valid value was found.
                     */
                    DescribePolicyConditionListConfigManualCalcValue m_calcValue;
                    bool m_calcValueHasBeenSet;

                    /**
                     * Duration.
Note: This field may return null, indicating that no valid value was found.
                     */
                    DescribePolicyConditionListConfigManualContinueTime m_continueTime;
                    bool m_continueTimeHasBeenSet;

                    /**
                     * Data period.
Note: This field may return null, indicating that no valid value was found.
                     */
                    DescribePolicyConditionListConfigManualPeriod m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Number of periods.
Note: This field may return null, indicating that no valid value was found.
                     */
                    DescribePolicyConditionListConfigManualPeriodNum m_periodNum;
                    bool m_periodNumHasBeenSet;

                    /**
                     * Statistics method.
Note: This field may return null, indicating that no valid value was found.
                     */
                    DescribePolicyConditionListConfigManualStatType m_statType;
                    bool m_statTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTCONFIGMANUAL_H_
