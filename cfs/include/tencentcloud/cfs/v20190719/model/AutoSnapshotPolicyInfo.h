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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_AUTOSNAPSHOTPOLICYINFO_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_AUTOSNAPSHOTPOLICYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/FileSystemByPolicy.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Snapshot policy information
                */
                class AutoSnapshotPolicyInfo : public AbstractModel
                {
                public:
                    AutoSnapshotPolicyInfo();
                    ~AutoSnapshotPolicyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Snapshot policy creation time
                     * @return CreationTime Snapshot policy creation time
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置Snapshot policy creation time
                     * @param CreationTime Snapshot policy creation time
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取Number of bound file systems
                     * @return FileSystemNums Number of bound file systems
                     */
                    uint64_t GetFileSystemNums() const;

                    /**
                     * 设置Number of bound file systems
                     * @param FileSystemNums Number of bound file systems
                     */
                    void SetFileSystemNums(const uint64_t& _fileSystemNums);

                    /**
                     * 判断参数 FileSystemNums 是否已赋值
                     * @return FileSystemNums 是否已赋值
                     */
                    bool FileSystemNumsHasBeenSet() const;

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
                     * 获取Next time to trigger snapshot
                     * @return NextActiveTime Next time to trigger snapshot
                     */
                    std::string GetNextActiveTime() const;

                    /**
                     * 设置Next time to trigger snapshot
                     * @param NextActiveTime Next time to trigger snapshot
                     */
                    void SetNextActiveTime(const std::string& _nextActiveTime);

                    /**
                     * 判断参数 NextActiveTime 是否已赋值
                     * @return NextActiveTime 是否已赋值
                     */
                    bool NextActiveTimeHasBeenSet() const;

                    /**
                     * 获取Snapshot policy status
                     * @return Status Snapshot policy status
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Snapshot policy status
                     * @param Status Snapshot policy status
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Account ID
                     * @return AppId Account ID
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置Account ID
                     * @param AppId Account ID
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Retention period
                     * @return AliveDays Retention period
                     */
                    uint64_t GetAliveDays() const;

                    /**
                     * 设置Retention period
                     * @param AliveDays Retention period
                     */
                    void SetAliveDays(const uint64_t& _aliveDays);

                    /**
                     * 判断参数 AliveDays 是否已赋值
                     * @return AliveDays 是否已赋值
                     */
                    bool AliveDaysHasBeenSet() const;

                    /**
                     * 获取Region
                     * @return RegionName Region
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置Region
                     * @param RegionName Region
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取File system information
                     * @return FileSystems File system information
                     */
                    std::vector<FileSystemByPolicy> GetFileSystems() const;

                    /**
                     * 设置File system information
                     * @param FileSystems File system information
                     */
                    void SetFileSystems(const std::vector<FileSystemByPolicy>& _fileSystems);

                    /**
                     * 判断参数 FileSystems 是否已赋值
                     * @return FileSystems 是否已赋值
                     */
                    bool FileSystemsHasBeenSet() const;

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
                     * Snapshot policy creation time
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * Number of bound file systems
                     */
                    uint64_t m_fileSystemNums;
                    bool m_fileSystemNumsHasBeenSet;

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
                     * Whether to activate the scheduled snapshot feature
                     */
                    uint64_t m_isActivated;
                    bool m_isActivatedHasBeenSet;

                    /**
                     * Next time to trigger snapshot
                     */
                    std::string m_nextActiveTime;
                    bool m_nextActiveTimeHasBeenSet;

                    /**
                     * Snapshot policy status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Account ID
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Retention period
                     */
                    uint64_t m_aliveDays;
                    bool m_aliveDaysHasBeenSet;

                    /**
                     * Region
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * File system information
                     */
                    std::vector<FileSystemByPolicy> m_fileSystems;
                    bool m_fileSystemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_AUTOSNAPSHOTPOLICYINFO_H_
