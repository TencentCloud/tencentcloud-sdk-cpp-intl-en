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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGESCANSCHEDULECONFIG_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGESCANSCHEDULECONFIG_H_

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
                * Image scanning cycle configuration
                */
                class ImageScanScheduleConfig : public AbstractModel
                {
                public:
                    ImageScanScheduleConfig();
                    ~ImageScanScheduleConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Cycle type</p><p>Enumeration values:</p><ul><li>DAILY: Daily</li><li>WEEKLY: Weekly</li><li>MONTHLY: Monthly</li></ul>
                     * @return CycleType <p>Cycle type</p><p>Enumeration values:</p><ul><li>DAILY: Daily</li><li>WEEKLY: Weekly</li><li>MONTHLY: Monthly</li></ul>
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置<p>Cycle type</p><p>Enumeration values:</p><ul><li>DAILY: Daily</li><li>WEEKLY: Weekly</li><li>MONTHLY: Monthly</li></ul>
                     * @param _cycleType <p>Cycle type</p><p>Enumeration values:</p><ul><li>DAILY: Daily</li><li>WEEKLY: Weekly</li><li>MONTHLY: Monthly</li></ul>
                     * 
                     */
                    void SetCycleType(const std::string& _cycleType);

                    /**
                     * 判断参数 CycleType 是否已赋值
                     * @return CycleType 是否已赋值
                     * 
                     */
                    bool CycleTypeHasBeenSet() const;

                    /**
                     * 获取<p>Specific date. For weekly type: 1-7 (Monday to Sunday); for monthly type: 1-31; disabled for daily type.</p>
                     * @return CycleDays <p>Specific date. For weekly type: 1-7 (Monday to Sunday); for monthly type: 1-31; disabled for daily type.</p>
                     * 
                     */
                    std::vector<uint64_t> GetCycleDays() const;

                    /**
                     * 设置<p>Specific date. For weekly type: 1-7 (Monday to Sunday); for monthly type: 1-31; disabled for daily type.</p>
                     * @param _cycleDays <p>Specific date. For weekly type: 1-7 (Monday to Sunday); for monthly type: 1-31; disabled for daily type.</p>
                     * 
                     */
                    void SetCycleDays(const std::vector<uint64_t>& _cycleDays);

                    /**
                     * 判断参数 CycleDays 是否已赋值
                     * @return CycleDays 是否已赋值
                     * 
                     */
                    bool CycleDaysHasBeenSet() const;

                    /**
                     * 获取<p>Scan start time</p><p>Parameter format: hh:mm</p>
                     * @return StartTime <p>Scan start time</p><p>Parameter format: hh:mm</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Scan start time</p><p>Parameter format: hh:mm</p>
                     * @param _startTime <p>Scan start time</p><p>Parameter format: hh:mm</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>Time zone</p>
                     * @return Timezone <p>Time zone</p>
                     * 
                     */
                    std::string GetTimezone() const;

                    /**
                     * 设置<p>Time zone</p>
                     * @param _timezone <p>Time zone</p>
                     * 
                     */
                    void SetTimezone(const std::string& _timezone);

                    /**
                     * 判断参数 Timezone 是否已赋值
                     * @return Timezone 是否已赋值
                     * 
                     */
                    bool TimezoneHasBeenSet() const;

                private:

                    /**
                     * <p>Cycle type</p><p>Enumeration values:</p><ul><li>DAILY: Daily</li><li>WEEKLY: Weekly</li><li>MONTHLY: Monthly</li></ul>
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * <p>Specific date. For weekly type: 1-7 (Monday to Sunday); for monthly type: 1-31; disabled for daily type.</p>
                     */
                    std::vector<uint64_t> m_cycleDays;
                    bool m_cycleDaysHasBeenSet;

                    /**
                     * <p>Scan start time</p><p>Parameter format: hh:mm</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>Time zone</p>
                     */
                    std::string m_timezone;
                    bool m_timezoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGESCANSCHEDULECONFIG_H_
