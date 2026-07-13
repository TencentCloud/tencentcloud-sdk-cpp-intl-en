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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_WAVETHRESHOLDFORM_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_WAVETHRESHOLDFORM_H_

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
                * Threshold fluctuation warning information
                */
                class WaveThresholdForm : public AbstractModel
                {
                public:
                    WaveThresholdForm();
                    ~WaveThresholdForm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ACTUAL actual amount, FORECAST forecast amount
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WarnType ACTUAL actual amount, FORECAST forecast amount
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWarnType() const;

                    /**
                     * 设置ACTUAL actual amount, FORECAST forecast amount
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _warnType ACTUAL actual amount, FORECAST forecast amount
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWarnType(const std::string& _warnType);

                    /**
                     * 判断参数 WarnType 是否已赋值
                     * @return WarnType 是否已赋值
                     * 
                     */
                    bool WarnTypeHasBeenSet() const;

                    /**
                     * 获取Fluctuation threshold (equal to or greater than 0)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Threshold Fluctuation threshold (equal to or greater than 0)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetThreshold() const;

                    /**
                     * 设置Fluctuation threshold (equal to or greater than 0)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _threshold Fluctuation threshold (equal to or greater than 0)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetThreshold(const std::string& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     * 
                     */
                    bool ThresholdHasBeenSet() const;

                    /**
                     * 获取Alarm type: chain period-over-period, yoy year-over-year, fix fixed value
Supported types: day-on-day comparison chain day, day-on-day comparison chain weekday, year-on-year comparison by month yoy day, daily fixed value fix day, month-on-month comparison chain month, fixed monthly value fix month
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MetaType Alarm type: chain period-over-period, yoy year-over-year, fix fixed value
Supported types: day-on-day comparison chain day, day-on-day comparison chain weekday, year-on-year comparison by month yoy day, daily fixed value fix day, month-on-month comparison chain month, fixed monthly value fix month
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMetaType() const;

                    /**
                     * 设置Alarm type: chain period-over-period, yoy year-over-year, fix fixed value
Supported types: day-on-day comparison chain day, day-on-day comparison chain weekday, year-on-year comparison by month yoy day, daily fixed value fix day, month-on-month comparison chain month, fixed monthly value fix month
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _metaType Alarm type: chain period-over-period, yoy year-over-year, fix fixed value
Supported types: day-on-day comparison chain day, day-on-day comparison chain weekday, year-on-year comparison by month yoy day, daily fixed value fix day, month-on-month comparison chain month, fixed monthly value fix month
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMetaType(const std::string& _metaType);

                    /**
                     * 判断参数 MetaType 是否已赋值
                     * @return MetaType 是否已赋值
                     * 
                     */
                    bool MetaTypeHasBeenSet() const;

                    /**
                     * 获取Alarm dimension: day, month, weekday
Supported types: day-on-day comparison chain day, day-on-day comparison chain weekday, year-on-year comparison by month yoy day, daily fixed value fix day, month-on-month comparison chain month, fixed monthly value fix month
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PeriodType Alarm dimension: day, month, weekday
Supported types: day-on-day comparison chain day, day-on-day comparison chain weekday, year-on-year comparison by month yoy day, daily fixed value fix day, month-on-month comparison chain month, fixed monthly value fix month
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPeriodType() const;

                    /**
                     * 设置Alarm dimension: day, month, weekday
Supported types: day-on-day comparison chain day, day-on-day comparison chain weekday, year-on-year comparison by month yoy day, daily fixed value fix day, month-on-month comparison chain month, fixed monthly value fix month
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _periodType Alarm dimension: day, month, weekday
Supported types: day-on-day comparison chain day, day-on-day comparison chain weekday, year-on-year comparison by month yoy day, daily fixed value fix day, month-on-month comparison chain month, fixed monthly value fix month
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPeriodType(const std::string& _periodType);

                    /**
                     * 判断参数 PeriodType 是否已赋值
                     * @return PeriodType 是否已赋值
                     * 
                     */
                    bool PeriodTypeHasBeenSet() const;

                private:

                    /**
                     * ACTUAL actual amount, FORECAST forecast amount
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_warnType;
                    bool m_warnTypeHasBeenSet;

                    /**
                     * Fluctuation threshold (equal to or greater than 0)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_threshold;
                    bool m_thresholdHasBeenSet;

                    /**
                     * Alarm type: chain period-over-period, yoy year-over-year, fix fixed value
Supported types: day-on-day comparison chain day, day-on-day comparison chain weekday, year-on-year comparison by month yoy day, daily fixed value fix day, month-on-month comparison chain month, fixed monthly value fix month
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_metaType;
                    bool m_metaTypeHasBeenSet;

                    /**
                     * Alarm dimension: day, month, weekday
Supported types: day-on-day comparison chain day, day-on-day comparison chain weekday, year-on-year comparison by month yoy day, daily fixed value fix day, month-on-month comparison chain month, fixed monthly value fix month
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_periodType;
                    bool m_periodTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_WAVETHRESHOLDFORM_H_
