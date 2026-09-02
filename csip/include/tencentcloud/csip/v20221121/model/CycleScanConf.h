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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CYCLESCANCONF_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CYCLESCANCONF_H_

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
                * Period scanning configuration of the policy (interval type + interval value + scanning time window).
                */
                class CycleScanConf : public AbstractModel
                {
                public:
                    CycleScanConf();
                    ~CycleScanConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Period scanning switch. 0: off, 1: on.</p>
                     * @return Enable <p>Period scanning switch. 0: off, 1: on.</p>
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置<p>Period scanning switch. 0: off, 1: on.</p>
                     * @param _enable <p>Period scanning switch. 0: off, 1: on.</p>
                     * 
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>Interval type for period scanning. Values:</p><ul><li>DAY: Every several days. For IntervalValueList, take the number of interval days (for example, ["1"] means every day)</li><li>WEEK: Specified weekdays. For IntervalValueList, take 1–7 (Monday–Sunday)</li><li>MONTH: Specified date per month. For IntervalValueList, take 1–31</li></ul>
                     * @return IntervalType <p>Interval type for period scanning. Values:</p><ul><li>DAY: Every several days. For IntervalValueList, take the number of interval days (for example, ["1"] means every day)</li><li>WEEK: Specified weekdays. For IntervalValueList, take 1–7 (Monday–Sunday)</li><li>MONTH: Specified date per month. For IntervalValueList, take 1–31</li></ul>
                     * 
                     */
                    std::string GetIntervalType() const;

                    /**
                     * 设置<p>Interval type for period scanning. Values:</p><ul><li>DAY: Every several days. For IntervalValueList, take the number of interval days (for example, ["1"] means every day)</li><li>WEEK: Specified weekdays. For IntervalValueList, take 1–7 (Monday–Sunday)</li><li>MONTH: Specified date per month. For IntervalValueList, take 1–31</li></ul>
                     * @param _intervalType <p>Interval type for period scanning. Values:</p><ul><li>DAY: Every several days. For IntervalValueList, take the number of interval days (for example, ["1"] means every day)</li><li>WEEK: Specified weekdays. For IntervalValueList, take 1–7 (Monday–Sunday)</li><li>MONTH: Specified date per month. For IntervalValueList, take 1–31</li></ul>
                     * 
                     */
                    void SetIntervalType(const std::string& _intervalType);

                    /**
                     * 判断参数 IntervalType 是否已赋值
                     * @return IntervalType 是否已赋值
                     * 
                     */
                    bool IntervalTypeHasBeenSet() const;

                    /**
                     * 获取<p>Period value list. The meaning varies with IntervalType:</p><ul><li>IntervalType=DAY: every how many days. For example, ["1"] means every day</li><li>IntervalType=WEEK: day of the week, with values from 1 to 7 (Monday to Sunday)</li><li>IntervalType=MONTH: day of the month, with values from 1 to 31</li></ul>
                     * @return IntervalValueList <p>Period value list. The meaning varies with IntervalType:</p><ul><li>IntervalType=DAY: every how many days. For example, ["1"] means every day</li><li>IntervalType=WEEK: day of the week, with values from 1 to 7 (Monday to Sunday)</li><li>IntervalType=MONTH: day of the month, with values from 1 to 31</li></ul>
                     * 
                     */
                    std::vector<std::string> GetIntervalValueList() const;

                    /**
                     * 设置<p>Period value list. The meaning varies with IntervalType:</p><ul><li>IntervalType=DAY: every how many days. For example, ["1"] means every day</li><li>IntervalType=WEEK: day of the week, with values from 1 to 7 (Monday to Sunday)</li><li>IntervalType=MONTH: day of the month, with values from 1 to 31</li></ul>
                     * @param _intervalValueList <p>Period value list. The meaning varies with IntervalType:</p><ul><li>IntervalType=DAY: every how many days. For example, ["1"] means every day</li><li>IntervalType=WEEK: day of the week, with values from 1 to 7 (Monday to Sunday)</li><li>IntervalType=MONTH: day of the month, with values from 1 to 31</li></ul>
                     * 
                     */
                    void SetIntervalValueList(const std::vector<std::string>& _intervalValueList);

                    /**
                     * 判断参数 IntervalValueList 是否已赋值
                     * @return IntervalValueList 是否已赋值
                     * 
                     */
                    bool IntervalValueListHasBeenSet() const;

                    /**
                     * 获取<p>Scan period start time. Format: HH:mm. Example: 02:00.</p>
                     * @return ScanStart <p>Scan period start time. Format: HH:mm. Example: 02:00.</p>
                     * 
                     */
                    std::string GetScanStart() const;

                    /**
                     * 设置<p>Scan period start time. Format: HH:mm. Example: 02:00.</p>
                     * @param _scanStart <p>Scan period start time. Format: HH:mm. Example: 02:00.</p>
                     * 
                     */
                    void SetScanStart(const std::string& _scanStart);

                    /**
                     * 判断参数 ScanStart 是否已赋值
                     * @return ScanStart 是否已赋值
                     * 
                     */
                    bool ScanStartHasBeenSet() const;

                    /**
                     * 获取<p>Scan period end time. Format: HH:mm. For example, 06:00.</p>
                     * @return ScanEnd <p>Scan period end time. Format: HH:mm. For example, 06:00.</p>
                     * 
                     */
                    std::string GetScanEnd() const;

                    /**
                     * 设置<p>Scan period end time. Format: HH:mm. For example, 06:00.</p>
                     * @param _scanEnd <p>Scan period end time. Format: HH:mm. For example, 06:00.</p>
                     * 
                     */
                    void SetScanEnd(const std::string& _scanEnd);

                    /**
                     * 判断参数 ScanEnd 是否已赋值
                     * @return ScanEnd 是否已赋值
                     * 
                     */
                    bool ScanEndHasBeenSet() const;

                private:

                    /**
                     * <p>Period scanning switch. 0: off, 1: on.</p>
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>Interval type for period scanning. Values:</p><ul><li>DAY: Every several days. For IntervalValueList, take the number of interval days (for example, ["1"] means every day)</li><li>WEEK: Specified weekdays. For IntervalValueList, take 1–7 (Monday–Sunday)</li><li>MONTH: Specified date per month. For IntervalValueList, take 1–31</li></ul>
                     */
                    std::string m_intervalType;
                    bool m_intervalTypeHasBeenSet;

                    /**
                     * <p>Period value list. The meaning varies with IntervalType:</p><ul><li>IntervalType=DAY: every how many days. For example, ["1"] means every day</li><li>IntervalType=WEEK: day of the week, with values from 1 to 7 (Monday to Sunday)</li><li>IntervalType=MONTH: day of the month, with values from 1 to 31</li></ul>
                     */
                    std::vector<std::string> m_intervalValueList;
                    bool m_intervalValueListHasBeenSet;

                    /**
                     * <p>Scan period start time. Format: HH:mm. Example: 02:00.</p>
                     */
                    std::string m_scanStart;
                    bool m_scanStartHasBeenSet;

                    /**
                     * <p>Scan period end time. Format: HH:mm. For example, 06:00.</p>
                     */
                    std::string m_scanEnd;
                    bool m_scanEndHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CYCLESCANCONF_H_
