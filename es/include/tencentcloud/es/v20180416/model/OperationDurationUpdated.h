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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_OPERATIONDURATIONUPDATED_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_OPERATIONDURATIONUPDATED_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * The maintenance time slot of the cluster
                */
                class OperationDurationUpdated : public AbstractModel
                {
                public:
                    OperationDurationUpdated();
                    ~OperationDurationUpdated() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Maintenance period, which can be one or more days from Monday to Sunday. Valid values: [0, 6].
                     * @return Periods Maintenance period, which can be one or more days from Monday to Sunday. Valid values: [0, 6].
                     * 
                     */
                    std::vector<uint64_t> GetPeriods() const;

                    /**
                     * 设置Maintenance period, which can be one or more days from Monday to Sunday. Valid values: [0, 6].
                     * @param _periods Maintenance period, which can be one or more days from Monday to Sunday. Valid values: [0, 6].
                     * 
                     */
                    void SetPeriods(const std::vector<uint64_t>& _periods);

                    /**
                     * 判断参数 Periods 是否已赋值
                     * @return Periods 是否已赋值
                     * 
                     */
                    bool PeriodsHasBeenSet() const;

                    /**
                     * 获取The maintenance start time
                     * @return TimeStart The maintenance start time
                     * 
                     */
                    std::string GetTimeStart() const;

                    /**
                     * 设置The maintenance start time
                     * @param _timeStart The maintenance start time
                     * 
                     */
                    void SetTimeStart(const std::string& _timeStart);

                    /**
                     * 判断参数 TimeStart 是否已赋值
                     * @return TimeStart 是否已赋值
                     * 
                     */
                    bool TimeStartHasBeenSet() const;

                    /**
                     * 获取The maintenance end time
                     * @return TimeEnd The maintenance end time
                     * 
                     */
                    std::string GetTimeEnd() const;

                    /**
                     * 设置The maintenance end time
                     * @param _timeEnd The maintenance end time
                     * 
                     */
                    void SetTimeEnd(const std::string& _timeEnd);

                    /**
                     * 判断参数 TimeEnd 是否已赋值
                     * @return TimeEnd 是否已赋值
                     * 
                     */
                    bool TimeEndHasBeenSet() const;

                    /**
                     * 获取The time zone expressed in UTC.
                     * @return TimeZone The time zone expressed in UTC.
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置The time zone expressed in UTC.
                     * @param _timeZone The time zone expressed in UTC.
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                    /**
                     * 获取The array of ES cluster IDs
                     * @return MoreInstances The array of ES cluster IDs
                     * 
                     */
                    std::vector<std::string> GetMoreInstances() const;

                    /**
                     * 设置The array of ES cluster IDs
                     * @param _moreInstances The array of ES cluster IDs
                     * 
                     */
                    void SetMoreInstances(const std::vector<std::string>& _moreInstances);

                    /**
                     * 判断参数 MoreInstances 是否已赋值
                     * @return MoreInstances 是否已赋值
                     * 
                     */
                    bool MoreInstancesHasBeenSet() const;

                private:

                    /**
                     * Maintenance period, which can be one or more days from Monday to Sunday. Valid values: [0, 6].
                     */
                    std::vector<uint64_t> m_periods;
                    bool m_periodsHasBeenSet;

                    /**
                     * The maintenance start time
                     */
                    std::string m_timeStart;
                    bool m_timeStartHasBeenSet;

                    /**
                     * The maintenance end time
                     */
                    std::string m_timeEnd;
                    bool m_timeEndHasBeenSet;

                    /**
                     * The time zone expressed in UTC.
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * The array of ES cluster IDs
                     */
                    std::vector<std::string> m_moreInstances;
                    bool m_moreInstancesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_OPERATIONDURATIONUPDATED_H_
