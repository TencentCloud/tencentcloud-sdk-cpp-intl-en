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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYMIGRATIONJOBREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYMIGRATIONJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/MigrateOption.h>
#include <tencentcloud/dts/v20211206/model/DBEndpointInfo.h>
#include <tencentcloud/dts/v20211206/model/TagItem.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * ModifyMigrationJob request structure.
                */
                class ModifyMigrationJobRequest : public AbstractModel
                {
                public:
                    ModifyMigrationJobRequest();
                    ~ModifyMigrationJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Task ID
                     * @return JobId Task ID
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Task ID
                     * @param _jobId Task ID
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取Running mode. Valid values: `immediate`, `timed`.
                     * @return RunMode Running mode. Valid values: `immediate`, `timed`.
                     * 
                     */
                    std::string GetRunMode() const;

                    /**
                     * 设置Running mode. Valid values: `immediate`, `timed`.
                     * @param _runMode Running mode. Valid values: `immediate`, `timed`.
                     * 
                     */
                    void SetRunMode(const std::string& _runMode);

                    /**
                     * 判断参数 RunMode 是否已赋值
                     * @return RunMode 是否已赋值
                     * 
                     */
                    bool RunModeHasBeenSet() const;

                    /**
                     * 获取Migration task configuration options, which describe how the task performs migration. The `RateLimitOption` option cannot be configured. To modify the speed limit settings of the task, use the `ModifyMigrateRateLimit` API after the task starts running.
                     * @return MigrateOption Migration task configuration options, which describe how the task performs migration. The `RateLimitOption` option cannot be configured. To modify the speed limit settings of the task, use the `ModifyMigrateRateLimit` API after the task starts running.
                     * 
                     */
                    MigrateOption GetMigrateOption() const;

                    /**
                     * 设置Migration task configuration options, which describe how the task performs migration. The `RateLimitOption` option cannot be configured. To modify the speed limit settings of the task, use the `ModifyMigrateRateLimit` API after the task starts running.
                     * @param _migrateOption Migration task configuration options, which describe how the task performs migration. The `RateLimitOption` option cannot be configured. To modify the speed limit settings of the task, use the `ModifyMigrateRateLimit` API after the task starts running.
                     * 
                     */
                    void SetMigrateOption(const MigrateOption& _migrateOption);

                    /**
                     * 判断参数 MigrateOption 是否已赋值
                     * @return MigrateOption 是否已赋值
                     * 
                     */
                    bool MigrateOptionHasBeenSet() const;

                    /**
                     * 获取Source instance information
                     * @return SrcInfo Source instance information
                     * 
                     */
                    DBEndpointInfo GetSrcInfo() const;

                    /**
                     * 设置Source instance information
                     * @param _srcInfo Source instance information
                     * 
                     */
                    void SetSrcInfo(const DBEndpointInfo& _srcInfo);

                    /**
                     * 判断参数 SrcInfo 是否已赋值
                     * @return SrcInfo 是否已赋值
                     * 
                     */
                    bool SrcInfoHasBeenSet() const;

                    /**
                     * 获取Target instance information
                     * @return DstInfo Target instance information
                     * 
                     */
                    DBEndpointInfo GetDstInfo() const;

                    /**
                     * 设置Target instance information
                     * @param _dstInfo Target instance information
                     * 
                     */
                    void SetDstInfo(const DBEndpointInfo& _dstInfo);

                    /**
                     * 判断参数 DstInfo 是否已赋值
                     * @return DstInfo 是否已赋值
                     * 
                     */
                    bool DstInfoHasBeenSet() const;

                    /**
                     * 获取Migration task name, which can contain up to 128 characters.
                     * @return JobName Migration task name, which can contain up to 128 characters.
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置Migration task name, which can contain up to 128 characters.
                     * @param _jobName Migration task name, which can contain up to 128 characters.
                     * 
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取Expected start time in the format of "2006-01-02 15:04:05", which is required if `RunMode` is `timed`.
                     * @return ExpectRunTime Expected start time in the format of "2006-01-02 15:04:05", which is required if `RunMode` is `timed`.
                     * 
                     */
                    std::string GetExpectRunTime() const;

                    /**
                     * 设置Expected start time in the format of "2006-01-02 15:04:05", which is required if `RunMode` is `timed`.
                     * @param _expectRunTime Expected start time in the format of "2006-01-02 15:04:05", which is required if `RunMode` is `timed`.
                     * 
                     */
                    void SetExpectRunTime(const std::string& _expectRunTime);

                    /**
                     * 判断参数 ExpectRunTime 是否已赋值
                     * @return ExpectRunTime 是否已赋值
                     * 
                     */
                    bool ExpectRunTimeHasBeenSet() const;

                    /**
                     * 获取Tag information
                     * @return Tags Tag information
                     * 
                     */
                    std::vector<TagItem> GetTags() const;

                    /**
                     * 设置Tag information
                     * @param _tags Tag information
                     * 
                     */
                    void SetTags(const std::vector<TagItem>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Automatic retry time, which can be set to 5-720 minutes. 0 indicates that retry is disabled.
                     * @return AutoRetryTimeRangeMinutes Automatic retry time, which can be set to 5-720 minutes. 0 indicates that retry is disabled.
                     * 
                     */
                    int64_t GetAutoRetryTimeRangeMinutes() const;

                    /**
                     * 设置Automatic retry time, which can be set to 5-720 minutes. 0 indicates that retry is disabled.
                     * @param _autoRetryTimeRangeMinutes Automatic retry time, which can be set to 5-720 minutes. 0 indicates that retry is disabled.
                     * 
                     */
                    void SetAutoRetryTimeRangeMinutes(const int64_t& _autoRetryTimeRangeMinutes);

                    /**
                     * 判断参数 AutoRetryTimeRangeMinutes 是否已赋值
                     * @return AutoRetryTimeRangeMinutes 是否已赋值
                     * 
                     */
                    bool AutoRetryTimeRangeMinutesHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Running mode. Valid values: `immediate`, `timed`.
                     */
                    std::string m_runMode;
                    bool m_runModeHasBeenSet;

                    /**
                     * Migration task configuration options, which describe how the task performs migration. The `RateLimitOption` option cannot be configured. To modify the speed limit settings of the task, use the `ModifyMigrateRateLimit` API after the task starts running.
                     */
                    MigrateOption m_migrateOption;
                    bool m_migrateOptionHasBeenSet;

                    /**
                     * Source instance information
                     */
                    DBEndpointInfo m_srcInfo;
                    bool m_srcInfoHasBeenSet;

                    /**
                     * Target instance information
                     */
                    DBEndpointInfo m_dstInfo;
                    bool m_dstInfoHasBeenSet;

                    /**
                     * Migration task name, which can contain up to 128 characters.
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * Expected start time in the format of "2006-01-02 15:04:05", which is required if `RunMode` is `timed`.
                     */
                    std::string m_expectRunTime;
                    bool m_expectRunTimeHasBeenSet;

                    /**
                     * Tag information
                     */
                    std::vector<TagItem> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Automatic retry time, which can be set to 5-720 minutes. 0 indicates that retry is disabled.
                     */
                    int64_t m_autoRetryTimeRangeMinutes;
                    bool m_autoRetryTimeRangeMinutesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYMIGRATIONJOBREQUEST_H_
