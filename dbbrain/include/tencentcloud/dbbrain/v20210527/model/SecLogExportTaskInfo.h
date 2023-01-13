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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SECLOGEXPORTTASKINFO_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SECLOGEXPORTTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * Security audit log export task information.
                */
                class SecLogExportTaskInfo : public AbstractModel
                {
                public:
                    SecLogExportTaskInfo();
                    ~SecLogExportTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Async task Id.
                     * @return AsyncRequestId Async task Id.
                     */
                    uint64_t GetAsyncRequestId() const;

                    /**
                     * 设置Async task Id.
                     * @param AsyncRequestId Async task Id.
                     */
                    void SetAsyncRequestId(const uint64_t& _asyncRequestId);

                    /**
                     * 判断参数 AsyncRequestId 是否已赋值
                     * @return AsyncRequestId 是否已赋值
                     */
                    bool AsyncRequestIdHasBeenSet() const;

                    /**
                     * 获取Task start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartTime Task start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Task start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param StartTime Task start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Task end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndTime Task end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Task end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param EndTime Task end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Task creation time.
                     * @return CreateTime Task creation time.
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Task creation time.
                     * @param CreateTime Task creation time.
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Task status.
                     * @return Status Task status.
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task status.
                     * @param Status Task status.
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Task progress.
                     * @return Progress Task progress.
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置Task progress.
                     * @param Progress Task progress.
                     */
                    void SetProgress(const uint64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取Exported log start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogStartTime Exported log start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetLogStartTime() const;

                    /**
                     * 设置Exported log start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param LogStartTime Exported log start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLogStartTime(const std::string& _logStartTime);

                    /**
                     * 判断参数 LogStartTime 是否已赋值
                     * @return LogStartTime 是否已赋值
                     */
                    bool LogStartTimeHasBeenSet() const;

                    /**
                     * 获取Exported log end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogEndTime Exported log end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetLogEndTime() const;

                    /**
                     * 设置Exported log end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param LogEndTime Exported log end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLogEndTime(const std::string& _logEndTime);

                    /**
                     * 判断参数 LogEndTime 是否已赋值
                     * @return LogEndTime 是否已赋值
                     */
                    bool LogEndTimeHasBeenSet() const;

                    /**
                     * 获取Total size of log files in KB.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalSize Total size of log files in KB.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetTotalSize() const;

                    /**
                     * 设置Total size of log files in KB.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TotalSize Total size of log files in KB.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTotalSize(const uint64_t& _totalSize);

                    /**
                     * 判断参数 TotalSize 是否已赋值
                     * @return TotalSize 是否已赋值
                     */
                    bool TotalSizeHasBeenSet() const;

                    /**
                     * 获取List of risk levels. Valid values: `0` (no risk), `1` (low risk), `2` (medium risk), `3` (high risk).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DangerLevels List of risk levels. Valid values: `0` (no risk), `1` (low risk), `2` (medium risk), `3` (high risk).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<uint64_t> GetDangerLevels() const;

                    /**
                     * 设置List of risk levels. Valid values: `0` (no risk), `1` (low risk), `2` (medium risk), `3` (high risk).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DangerLevels List of risk levels. Valid values: `0` (no risk), `1` (low risk), `2` (medium risk), `3` (high risk).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDangerLevels(const std::vector<uint64_t>& _dangerLevels);

                    /**
                     * 判断参数 DangerLevels 是否已赋值
                     * @return DangerLevels 是否已赋值
                     */
                    bool DangerLevelsHasBeenSet() const;

                private:

                    /**
                     * Async task Id.
                     */
                    uint64_t m_asyncRequestId;
                    bool m_asyncRequestIdHasBeenSet;

                    /**
                     * Task start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Task end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Task creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Task status.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Task progress.
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Exported log start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_logStartTime;
                    bool m_logStartTimeHasBeenSet;

                    /**
                     * Exported log end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_logEndTime;
                    bool m_logEndTimeHasBeenSet;

                    /**
                     * Total size of log files in KB.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_totalSize;
                    bool m_totalSizeHasBeenSet;

                    /**
                     * List of risk levels. Valid values: `0` (no risk), `1` (low risk), `2` (medium risk), `3` (high risk).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<uint64_t> m_dangerLevels;
                    bool m_dangerLevelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SECLOGEXPORTTASKINFO_H_
