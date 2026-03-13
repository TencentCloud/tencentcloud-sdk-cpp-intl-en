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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_CREATEAUTOSNAPSHOTPOLICYREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_CREATEAUTOSNAPSHOTPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/TagInfo.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * CreateAutoSnapshotPolicy request structure.
                */
                class CreateAutoSnapshotPolicyRequest : public AbstractModel
                {
                public:
                    CreateAutoSnapshotPolicyRequest();
                    ~CreateAutoSnapshotPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Snapshot repeat time point. value range: 0-23 hr.
                     * @return Hour Snapshot repeat time point. value range: 0-23 hr.
                     * 
                     */
                    std::string GetHour() const;

                    /**
                     * 设置Snapshot repeat time point. value range: 0-23 hr.
                     * @param _hour Snapshot repeat time point. value range: 0-23 hr.
                     * 
                     */
                    void SetHour(const std::string& _hour);

                    /**
                     * 判断参数 Hour 是否已赋值
                     * @return Hour 是否已赋值
                     * 
                     */
                    bool HourHasBeenSet() const;

                    /**
                     * 获取Policy name, limited to 64 characters, only supports input of chinese, letters, numbers, _, or -.
                     * @return PolicyName Policy name, limited to 64 characters, only supports input of chinese, letters, numbers, _, or -.
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置Policy name, limited to 64 characters, only supports input of chinese, letters, numbers, _, or -.
                     * @param _policyName Policy name, limited to 64 characters, only supports input of chinese, letters, numbers, _, or -.
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取Snapshot repeat date, monday to sunday. 1 represents monday, 7 represents sunday. choose one from three: DayOfMonth, IntervalDays.
                     * @return DayOfWeek Snapshot repeat date, monday to sunday. 1 represents monday, 7 represents sunday. choose one from three: DayOfMonth, IntervalDays.
                     * 
                     */
                    std::string GetDayOfWeek() const;

                    /**
                     * 设置Snapshot repeat date, monday to sunday. 1 represents monday, 7 represents sunday. choose one from three: DayOfMonth, IntervalDays.
                     * @param _dayOfWeek Snapshot repeat date, monday to sunday. 1 represents monday, 7 represents sunday. choose one from three: DayOfMonth, IntervalDays.
                     * 
                     */
                    void SetDayOfWeek(const std::string& _dayOfWeek);

                    /**
                     * 判断参数 DayOfWeek 是否已赋值
                     * @return DayOfWeek 是否已赋值
                     * 
                     */
                    bool DayOfWeekHasBeenSet() const;

                    /**
                     * 获取Specifies the snapshot retention duration in days. the default value is 0 (permanent).
                     * @return AliveDays Specifies the snapshot retention duration in days. the default value is 0 (permanent).
                     * 
                     */
                    uint64_t GetAliveDays() const;

                    /**
                     * 设置Specifies the snapshot retention duration in days. the default value is 0 (permanent).
                     * @param _aliveDays Specifies the snapshot retention duration in days. the default value is 0 (permanent).
                     * 
                     */
                    void SetAliveDays(const uint64_t& _aliveDays);

                    /**
                     * 判断参数 AliveDays 是否已赋值
                     * @return AliveDays 是否已赋值
                     * 
                     */
                    bool AliveDaysHasBeenSet() const;

                    /**
                     * 获取Snapshot monthly recurrence, select a day from the 1st to the 31st of each month, and a snapshot will be automatically created on that day. for example, 1 represents the 1st. choose one of the three: DayOfWeek, IntervalDays.
                     * @return DayOfMonth Snapshot monthly recurrence, select a day from the 1st to the 31st of each month, and a snapshot will be automatically created on that day. for example, 1 represents the 1st. choose one of the three: DayOfWeek, IntervalDays.
                     * 
                     */
                    std::string GetDayOfMonth() const;

                    /**
                     * 设置Snapshot monthly recurrence, select a day from the 1st to the 31st of each month, and a snapshot will be automatically created on that day. for example, 1 represents the 1st. choose one of the three: DayOfWeek, IntervalDays.
                     * @param _dayOfMonth Snapshot monthly recurrence, select a day from the 1st to the 31st of each month, and a snapshot will be automatically created on that day. for example, 1 represents the 1st. choose one of the three: DayOfWeek, IntervalDays.
                     * 
                     */
                    void SetDayOfMonth(const std::string& _dayOfMonth);

                    /**
                     * 判断参数 DayOfMonth 是否已赋值
                     * @return DayOfMonth 是否已赋值
                     * 
                     */
                    bool DayOfMonthHasBeenSet() const;

                    /**
                     * 获取Interval days. choose one of the three with DayOfWeek and DayOfMonth.
                     * @return IntervalDays Interval days. choose one of the three with DayOfWeek and DayOfMonth.
                     * 
                     */
                    uint64_t GetIntervalDays() const;

                    /**
                     * 设置Interval days. choose one of the three with DayOfWeek and DayOfMonth.
                     * @param _intervalDays Interval days. choose one of the three with DayOfWeek and DayOfMonth.
                     * 
                     */
                    void SetIntervalDays(const uint64_t& _intervalDays);

                    /**
                     * 判断参数 IntervalDays 是否已赋值
                     * @return IntervalDays 是否已赋值
                     * 
                     */
                    bool IntervalDaysHasBeenSet() const;

                    /**
                     * 获取Snapshot policy tag.
                     * @return ResourceTags Snapshot policy tag.
                     * 
                     */
                    std::vector<TagInfo> GetResourceTags() const;

                    /**
                     * 设置Snapshot policy tag.
                     * @param _resourceTags Snapshot policy tag.
                     * 
                     */
                    void SetResourceTags(const std::vector<TagInfo>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                private:

                    /**
                     * Snapshot repeat time point. value range: 0-23 hr.
                     */
                    std::string m_hour;
                    bool m_hourHasBeenSet;

                    /**
                     * Policy name, limited to 64 characters, only supports input of chinese, letters, numbers, _, or -.
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * Snapshot repeat date, monday to sunday. 1 represents monday, 7 represents sunday. choose one from three: DayOfMonth, IntervalDays.
                     */
                    std::string m_dayOfWeek;
                    bool m_dayOfWeekHasBeenSet;

                    /**
                     * Specifies the snapshot retention duration in days. the default value is 0 (permanent).
                     */
                    uint64_t m_aliveDays;
                    bool m_aliveDaysHasBeenSet;

                    /**
                     * Snapshot monthly recurrence, select a day from the 1st to the 31st of each month, and a snapshot will be automatically created on that day. for example, 1 represents the 1st. choose one of the three: DayOfWeek, IntervalDays.
                     */
                    std::string m_dayOfMonth;
                    bool m_dayOfMonthHasBeenSet;

                    /**
                     * Interval days. choose one of the three with DayOfWeek and DayOfMonth.
                     */
                    uint64_t m_intervalDays;
                    bool m_intervalDaysHasBeenSet;

                    /**
                     * Snapshot policy tag.
                     */
                    std::vector<TagInfo> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_CREATEAUTOSNAPSHOTPOLICYREQUEST_H_
