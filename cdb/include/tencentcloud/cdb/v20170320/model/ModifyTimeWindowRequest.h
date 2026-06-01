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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYTIMEWINDOWREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYTIMEWINDOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * ModifyTimeWindow request structure.
                */
                class ModifyTimeWindowRequest : public AbstractModel
                {
                public:
                    ModifyTimeWindowRequest();
                    ~ModifyTimeWindowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * @return InstanceId Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * @param _instanceId Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取The modified maintenance time slot. Among them, each time period is in the format of 10:00-12:00. The start and end time is aligned by half hour. The shortest is half hour and the longest is three hours. Up to two time periods can be set. The start and end time ranges from [00:00, 24:00].
Description: The following is an example of setting two time periods in json.
[
    "01:00-01:30",
    "02:00-02:30"
  ]
                     * @return TimeRanges The modified maintenance time slot. Among them, each time period is in the format of 10:00-12:00. The start and end time is aligned by half hour. The shortest is half hour and the longest is three hours. Up to two time periods can be set. The start and end time ranges from [00:00, 24:00].
Description: The following is an example of setting two time periods in json.
[
    "01:00-01:30",
    "02:00-02:30"
  ]
                     * 
                     */
                    std::vector<std::string> GetTimeRanges() const;

                    /**
                     * 设置The modified maintenance time slot. Among them, each time period is in the format of 10:00-12:00. The start and end time is aligned by half hour. The shortest is half hour and the longest is three hours. Up to two time periods can be set. The start and end time ranges from [00:00, 24:00].
Description: The following is an example of setting two time periods in json.
[
    "01:00-01:30",
    "02:00-02:30"
  ]
                     * @param _timeRanges The modified maintenance time slot. Among them, each time period is in the format of 10:00-12:00. The start and end time is aligned by half hour. The shortest is half hour and the longest is three hours. Up to two time periods can be set. The start and end time ranges from [00:00, 24:00].
Description: The following is an example of setting two time periods in json.
[
    "01:00-01:30",
    "02:00-02:30"
  ]
                     * 
                     */
                    void SetTimeRanges(const std::vector<std::string>& _timeRanges);

                    /**
                     * 判断参数 TimeRanges 是否已赋值
                     * @return TimeRanges 是否已赋值
                     * 
                     */
                    bool TimeRangesHasBeenSet() const;

                    /**
                     * 获取Specify which day to modify the maintenance time slot. Possible values are: monday, tuesday, wednesday, thursday, friday, saturday, sunday. If not specified or empty, modify all seven days of the week by default.
Description: The json example for modifying more than one day is as follows.
[
    "monday",
    "tuesday"
  ]
                     * @return Weekdays Specify which day to modify the maintenance time slot. Possible values are: monday, tuesday, wednesday, thursday, friday, saturday, sunday. If not specified or empty, modify all seven days of the week by default.
Description: The json example for modifying more than one day is as follows.
[
    "monday",
    "tuesday"
  ]
                     * 
                     */
                    std::vector<std::string> GetWeekdays() const;

                    /**
                     * 设置Specify which day to modify the maintenance time slot. Possible values are: monday, tuesday, wednesday, thursday, friday, saturday, sunday. If not specified or empty, modify all seven days of the week by default.
Description: The json example for modifying more than one day is as follows.
[
    "monday",
    "tuesday"
  ]
                     * @param _weekdays Specify which day to modify the maintenance time slot. Possible values are: monday, tuesday, wednesday, thursday, friday, saturday, sunday. If not specified or empty, modify all seven days of the week by default.
Description: The json example for modifying more than one day is as follows.
[
    "monday",
    "tuesday"
  ]
                     * 
                     */
                    void SetWeekdays(const std::vector<std::string>& _weekdays);

                    /**
                     * 判断参数 Weekdays 是否已赋值
                     * @return Weekdays 是否已赋值
                     * 
                     */
                    bool WeekdaysHasBeenSet() const;

                    /**
                     * 获取Data latency threshold (seconds), only applicable to primary instance and disaster recovery instance. No modification by default to keep the original threshold. Value ranges from 1 to 10 integers.
                     * @return MaxDelayTime Data latency threshold (seconds), only applicable to primary instance and disaster recovery instance. No modification by default to keep the original threshold. Value ranges from 1 to 10 integers.
                     * 
                     */
                    uint64_t GetMaxDelayTime() const;

                    /**
                     * 设置Data latency threshold (seconds), only applicable to primary instance and disaster recovery instance. No modification by default to keep the original threshold. Value ranges from 1 to 10 integers.
                     * @param _maxDelayTime Data latency threshold (seconds), only applicable to primary instance and disaster recovery instance. No modification by default to keep the original threshold. Value ranges from 1 to 10 integers.
                     * 
                     */
                    void SetMaxDelayTime(const uint64_t& _maxDelayTime);

                    /**
                     * 判断参数 MaxDelayTime 是否已赋值
                     * @return MaxDelayTime 是否已赋值
                     * 
                     */
                    bool MaxDelayTimeHasBeenSet() const;

                private:

                    /**
                     * Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * The modified maintenance time slot. Among them, each time period is in the format of 10:00-12:00. The start and end time is aligned by half hour. The shortest is half hour and the longest is three hours. Up to two time periods can be set. The start and end time ranges from [00:00, 24:00].
Description: The following is an example of setting two time periods in json.
[
    "01:00-01:30",
    "02:00-02:30"
  ]
                     */
                    std::vector<std::string> m_timeRanges;
                    bool m_timeRangesHasBeenSet;

                    /**
                     * Specify which day to modify the maintenance time slot. Possible values are: monday, tuesday, wednesday, thursday, friday, saturday, sunday. If not specified or empty, modify all seven days of the week by default.
Description: The json example for modifying more than one day is as follows.
[
    "monday",
    "tuesday"
  ]
                     */
                    std::vector<std::string> m_weekdays;
                    bool m_weekdaysHasBeenSet;

                    /**
                     * Data latency threshold (seconds), only applicable to primary instance and disaster recovery instance. No modification by default to keep the original threshold. Value ranges from 1 to 10 integers.
                     */
                    uint64_t m_maxDelayTime;
                    bool m_maxDelayTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYTIMEWINDOWREQUEST_H_
