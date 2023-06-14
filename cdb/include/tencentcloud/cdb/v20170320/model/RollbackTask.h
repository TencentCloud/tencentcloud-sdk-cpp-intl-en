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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_ROLLBACKTASK_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_ROLLBACKTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/RollbackInstancesInfo.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Rollback task details
                */
                class RollbackTask : public AbstractModel
                {
                public:
                    RollbackTask();
                    ~RollbackTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task execution information.
                     * @return Info Task execution information.
                     * 
                     */
                    std::string GetInfo() const;

                    /**
                     * 设置Task execution information.
                     * @param _info Task execution information.
                     * 
                     */
                    void SetInfo(const std::string& _info);

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                    /**
                     * 获取Task execution result. Valid values: INITIAL: initializing, RUNNING: running, SUCCESS: succeeded, FAILED: failed, KILLED: terminated, REMOVED: deleted, PAUSED: paused.
                     * @return Status Task execution result. Valid values: INITIAL: initializing, RUNNING: running, SUCCESS: succeeded, FAILED: failed, KILLED: terminated, REMOVED: deleted, PAUSED: paused.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task execution result. Valid values: INITIAL: initializing, RUNNING: running, SUCCESS: succeeded, FAILED: failed, KILLED: terminated, REMOVED: deleted, PAUSED: paused.
                     * @param _status Task execution result. Valid values: INITIAL: initializing, RUNNING: running, SUCCESS: succeeded, FAILED: failed, KILLED: terminated, REMOVED: deleted, PAUSED: paused.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Task execution progress. Value range: [0,100].
                     * @return Progress Task execution progress. Value range: [0,100].
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置Task execution progress. Value range: [0,100].
                     * @param _progress Task execution progress. Value range: [0,100].
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取Task start time.
                     * @return StartTime Task start time.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Task start time.
                     * @param _startTime Task start time.
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
                     * 获取Task end time.
                     * @return EndTime Task end time.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Task end time.
                     * @param _endTime Task end time.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Rollback task details.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Detail Rollback task details.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<RollbackInstancesInfo> GetDetail() const;

                    /**
                     * 设置Rollback task details.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _detail Rollback task details.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDetail(const std::vector<RollbackInstancesInfo>& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                private:

                    /**
                     * Task execution information.
                     */
                    std::string m_info;
                    bool m_infoHasBeenSet;

                    /**
                     * Task execution result. Valid values: INITIAL: initializing, RUNNING: running, SUCCESS: succeeded, FAILED: failed, KILLED: terminated, REMOVED: deleted, PAUSED: paused.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Task execution progress. Value range: [0,100].
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Task start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Task end time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Rollback task details.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<RollbackInstancesInfo> m_detail;
                    bool m_detailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_ROLLBACKTASK_H_
