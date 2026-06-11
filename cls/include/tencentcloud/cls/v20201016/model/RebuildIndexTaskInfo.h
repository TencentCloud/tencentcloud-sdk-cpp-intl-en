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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_REBUILDINDEXTASKINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_REBUILDINDEXTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Index rebuild task information
                */
                class RebuildIndexTaskInfo : public AbstractModel
                {
                public:
                    RebuildIndexTaskInfo();
                    ~RebuildIndexTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Reindexing task ID
                     * @return TaskId Reindexing task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Reindexing task ID
                     * @param _taskId Reindexing task ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Current status of the reindexing task. 0: reindexing task created; 1: creating reindexing resources; 2: reindexing resources created; 3: reindexing; 4: paused; 5: reindexing completed; 6: reindexing succeeded (searchable); 7: reindexing failed; 8: revoked; 9: deleting the metadata and index.
                     * @return Status Current status of the reindexing task. 0: reindexing task created; 1: creating reindexing resources; 2: reindexing resources created; 3: reindexing; 4: paused; 5: reindexing completed; 6: reindexing succeeded (searchable); 7: reindexing failed; 8: revoked; 9: deleting the metadata and index.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Current status of the reindexing task. 0: reindexing task created; 1: creating reindexing resources; 2: reindexing resources created; 3: reindexing; 4: paused; 5: reindexing completed; 6: reindexing succeeded (searchable); 7: reindexing failed; 8: revoked; 9: deleting the metadata and index.
                     * @param _status Current status of the reindexing task. 0: reindexing task created; 1: creating reindexing resources; 2: reindexing resources created; 3: reindexing; 4: paused; 5: reindexing completed; 6: reindexing succeeded (searchable); 7: reindexing failed; 8: revoked; 9: deleting the metadata and index.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Start timestamp of the reindexing task
                     * @return StartTime Start timestamp of the reindexing task
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置Start timestamp of the reindexing task
                     * @param _startTime Start timestamp of the reindexing task
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Rebuild task end timestamp
                     * @return EndTime Rebuild task end timestamp
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置Rebuild task end timestamp
                     * @param _endTime Rebuild task end timestamp
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Estimated remaining time for reshipping, in seconds
                     * @return RemainTime Estimated remaining time for reshipping, in seconds
                     * 
                     */
                    int64_t GetRemainTime() const;

                    /**
                     * 设置Estimated remaining time for reshipping, in seconds
                     * @param _remainTime Estimated remaining time for reshipping, in seconds
                     * 
                     */
                    void SetRemainTime(const int64_t& _remainTime);

                    /**
                     * 判断参数 RemainTime 是否已赋值
                     * @return RemainTime 是否已赋值
                     * 
                     */
                    bool RemainTimeHasBeenSet() const;

                    /**
                     * 获取Rebuild task creation timestamp
                     * @return CreateTime Rebuild task creation timestamp
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Rebuild task creation timestamp
                     * @param _createTime Rebuild task creation timestamp
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Re-shipping completion degree, in percentages.
                     * @return Progress Re-shipping completion degree, in percentages.
                     * 
                     */
                    double GetProgress() const;

                    /**
                     * 设置Re-shipping completion degree, in percentages.
                     * @param _progress Re-shipping completion degree, in percentages.
                     * 
                     */
                    void SetProgress(const double& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取Update time of the reindexing task
                     * @return UpdateTime Update time of the reindexing task
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置Update time of the reindexing task
                     * @param _updateTime Update time of the reindexing task
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Additional status description. Currently, it only describes the reason for failure.
                     * @return StatusMessage Additional status description. Currently, it only describes the reason for failure.
                     * 
                     */
                    std::string GetStatusMessage() const;

                    /**
                     * 设置Additional status description. Currently, it only describes the reason for failure.
                     * @param _statusMessage Additional status description. Currently, it only describes the reason for failure.
                     * 
                     */
                    void SetStatusMessage(const std::string& _statusMessage);

                    /**
                     * 判断参数 StatusMessage 是否已赋值
                     * @return StatusMessage 是否已赋值
                     * 
                     */
                    bool StatusMessageHasBeenSet() const;

                private:

                    /**
                     * Reindexing task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Current status of the reindexing task. 0: reindexing task created; 1: creating reindexing resources; 2: reindexing resources created; 3: reindexing; 4: paused; 5: reindexing completed; 6: reindexing succeeded (searchable); 7: reindexing failed; 8: revoked; 9: deleting the metadata and index.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Start timestamp of the reindexing task
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Rebuild task end timestamp
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Estimated remaining time for reshipping, in seconds
                     */
                    int64_t m_remainTime;
                    bool m_remainTimeHasBeenSet;

                    /**
                     * Rebuild task creation timestamp
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Re-shipping completion degree, in percentages.
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Update time of the reindexing task
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Additional status description. Currently, it only describes the reason for failure.
                     */
                    std::string m_statusMessage;
                    bool m_statusMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_REBUILDINDEXTASKINFO_H_
