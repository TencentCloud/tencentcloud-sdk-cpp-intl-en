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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_UPDATEAUTOSNAPSHOTPOLICYREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_UPDATEAUTOSNAPSHOTPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * UpdateAutoSnapshotPolicy request structure.
                */
                class UpdateAutoSnapshotPolicyRequest : public AbstractModel
                {
                public:
                    UpdateAutoSnapshotPolicyRequest();
                    ~UpdateAutoSnapshotPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Snapshot policy ID
                     * @return AutoSnapshotPolicyId Snapshot policy ID
                     */
                    std::string GetAutoSnapshotPolicyId() const;

                    /**
                     * 设置Snapshot policy ID
                     * @param AutoSnapshotPolicyId Snapshot policy ID
                     */
                    void SetAutoSnapshotPolicyId(const std::string& _autoSnapshotPolicyId);

                    /**
                     * 判断参数 AutoSnapshotPolicyId 是否已赋值
                     * @return AutoSnapshotPolicyId 是否已赋值
                     */
                    bool AutoSnapshotPolicyIdHasBeenSet() const;

                    /**
                     * 获取Snapshot policy name
                     * @return PolicyName Snapshot policy name
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置Snapshot policy name
                     * @param PolicyName Snapshot policy name
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取The day of the week on which to regularly back up the snapshot
                     * @return DayOfWeek The day of the week on which to regularly back up the snapshot
                     */
                    std::string GetDayOfWeek() const;

                    /**
                     * 设置The day of the week on which to regularly back up the snapshot
                     * @param DayOfWeek The day of the week on which to regularly back up the snapshot
                     */
                    void SetDayOfWeek(const std::string& _dayOfWeek);

                    /**
                     * 判断参数 DayOfWeek 是否已赋值
                     * @return DayOfWeek 是否已赋值
                     */
                    bool DayOfWeekHasBeenSet() const;

                    /**
                     * 获取The hour of a day at which to regularly back up the snapshot
                     * @return Hour The hour of a day at which to regularly back up the snapshot
                     */
                    std::string GetHour() const;

                    /**
                     * 设置The hour of a day at which to regularly back up the snapshot
                     * @param Hour The hour of a day at which to regularly back up the snapshot
                     */
                    void SetHour(const std::string& _hour);

                    /**
                     * 判断参数 Hour 是否已赋值
                     * @return Hour 是否已赋值
                     */
                    bool HourHasBeenSet() const;

                    /**
                     * 获取Snapshot retention period
                     * @return AliveDays Snapshot retention period
                     */
                    uint64_t GetAliveDays() const;

                    /**
                     * 设置Snapshot retention period
                     * @param AliveDays Snapshot retention period
                     */
                    void SetAliveDays(const uint64_t& _aliveDays);

                    /**
                     * 判断参数 AliveDays 是否已赋值
                     * @return AliveDays 是否已赋值
                     */
                    bool AliveDaysHasBeenSet() const;

                    /**
                     * 获取Whether to activate the scheduled snapshot feature
                     * @return IsActivated Whether to activate the scheduled snapshot feature
                     */
                    uint64_t GetIsActivated() const;

                    /**
                     * 设置Whether to activate the scheduled snapshot feature
                     * @param IsActivated Whether to activate the scheduled snapshot feature
                     */
                    void SetIsActivated(const uint64_t& _isActivated);

                    /**
                     * 判断参数 IsActivated 是否已赋值
                     * @return IsActivated 是否已赋值
                     */
                    bool IsActivatedHasBeenSet() const;

                    /**
                     * 获取The specific day of the month on which to create a snapshot. This parameter is mutually exclusive with `DayOfWeek`.
                     * @return DayOfMonth The specific day of the month on which to create a snapshot. This parameter is mutually exclusive with `DayOfWeek`.
                     */
                    std::string GetDayOfMonth() const;

                    /**
                     * 设置The specific day of the month on which to create a snapshot. This parameter is mutually exclusive with `DayOfWeek`.
                     * @param DayOfMonth The specific day of the month on which to create a snapshot. This parameter is mutually exclusive with `DayOfWeek`.
                     */
                    void SetDayOfMonth(const std::string& _dayOfMonth);

                    /**
                     * 判断参数 DayOfMonth 是否已赋值
                     * @return DayOfMonth 是否已赋值
                     */
                    bool DayOfMonthHasBeenSet() const;

                    /**
                     * 获取The snapshot interval. This parameter is mutually exclusive with `DayOfWeek` and `DayOfMonth`.
                     * @return IntervalDays The snapshot interval. This parameter is mutually exclusive with `DayOfWeek` and `DayOfMonth`.
                     */
                    uint64_t GetIntervalDays() const;

                    /**
                     * 设置The snapshot interval. This parameter is mutually exclusive with `DayOfWeek` and `DayOfMonth`.
                     * @param IntervalDays The snapshot interval. This parameter is mutually exclusive with `DayOfWeek` and `DayOfMonth`.
                     */
                    void SetIntervalDays(const uint64_t& _intervalDays);

                    /**
                     * 判断参数 IntervalDays 是否已赋值
                     * @return IntervalDays 是否已赋值
                     */
                    bool IntervalDaysHasBeenSet() const;

                private:

                    /**
                     * Snapshot policy ID
                     */
                    std::string m_autoSnapshotPolicyId;
                    bool m_autoSnapshotPolicyIdHasBeenSet;

                    /**
                     * Snapshot policy name
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * The day of the week on which to regularly back up the snapshot
                     */
                    std::string m_dayOfWeek;
                    bool m_dayOfWeekHasBeenSet;

                    /**
                     * The hour of a day at which to regularly back up the snapshot
                     */
                    std::string m_hour;
                    bool m_hourHasBeenSet;

                    /**
                     * Snapshot retention period
                     */
                    uint64_t m_aliveDays;
                    bool m_aliveDaysHasBeenSet;

                    /**
                     * Whether to activate the scheduled snapshot feature
                     */
                    uint64_t m_isActivated;
                    bool m_isActivatedHasBeenSet;

                    /**
                     * The specific day of the month on which to create a snapshot. This parameter is mutually exclusive with `DayOfWeek`.
                     */
                    std::string m_dayOfMonth;
                    bool m_dayOfMonthHasBeenSet;

                    /**
                     * The snapshot interval. This parameter is mutually exclusive with `DayOfWeek` and `DayOfMonth`.
                     */
                    uint64_t m_intervalDays;
                    bool m_intervalDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_UPDATEAUTOSNAPSHOTPOLICYREQUEST_H_
