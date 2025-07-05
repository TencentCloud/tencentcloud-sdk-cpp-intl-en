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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CLONEITEM_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CLONEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Clone task information.
                */
                class CloneItem : public AbstractModel
                {
                public:
                    CloneItem();
                    ~CloneItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the original instance in a clone task
                     * @return SrcInstanceId ID of the original instance in a clone task
                     * 
                     */
                    std::string GetSrcInstanceId() const;

                    /**
                     * 设置ID of the original instance in a clone task
                     * @param _srcInstanceId ID of the original instance in a clone task
                     * 
                     */
                    void SetSrcInstanceId(const std::string& _srcInstanceId);

                    /**
                     * 判断参数 SrcInstanceId 是否已赋值
                     * @return SrcInstanceId 是否已赋值
                     * 
                     */
                    bool SrcInstanceIdHasBeenSet() const;

                    /**
                     * 获取ID of the cloned instance in a clone task
                     * @return DstInstanceId ID of the cloned instance in a clone task
                     * 
                     */
                    std::string GetDstInstanceId() const;

                    /**
                     * 设置ID of the cloned instance in a clone task
                     * @param _dstInstanceId ID of the cloned instance in a clone task
                     * 
                     */
                    void SetDstInstanceId(const std::string& _dstInstanceId);

                    /**
                     * 判断参数 DstInstanceId 是否已赋值
                     * @return DstInstanceId 是否已赋值
                     * 
                     */
                    bool DstInstanceIdHasBeenSet() const;

                    /**
                     * 获取Clone task ID
                     * @return CloneJobId Clone task ID
                     * 
                     */
                    int64_t GetCloneJobId() const;

                    /**
                     * 设置Clone task ID
                     * @param _cloneJobId Clone task ID
                     * 
                     */
                    void SetCloneJobId(const int64_t& _cloneJobId);

                    /**
                     * 判断参数 CloneJobId 是否已赋值
                     * @return CloneJobId 是否已赋值
                     * 
                     */
                    bool CloneJobIdHasBeenSet() const;

                    /**
                     * 获取The policy used in a clone task. Valid values: `timepoint` (roll back to a specific point in time), `backupset` (roll back by using a specific backup file).
                     * @return RollbackStrategy The policy used in a clone task. Valid values: `timepoint` (roll back to a specific point in time), `backupset` (roll back by using a specific backup file).
                     * 
                     */
                    std::string GetRollbackStrategy() const;

                    /**
                     * 设置The policy used in a clone task. Valid values: `timepoint` (roll back to a specific point in time), `backupset` (roll back by using a specific backup file).
                     * @param _rollbackStrategy The policy used in a clone task. Valid values: `timepoint` (roll back to a specific point in time), `backupset` (roll back by using a specific backup file).
                     * 
                     */
                    void SetRollbackStrategy(const std::string& _rollbackStrategy);

                    /**
                     * 判断参数 RollbackStrategy 是否已赋值
                     * @return RollbackStrategy 是否已赋值
                     * 
                     */
                    bool RollbackStrategyHasBeenSet() const;

                    /**
                     * 获取The point in time to which the cloned instance will be rolled back
                     * @return RollbackTargetTime The point in time to which the cloned instance will be rolled back
                     * 
                     */
                    std::string GetRollbackTargetTime() const;

                    /**
                     * 设置The point in time to which the cloned instance will be rolled back
                     * @param _rollbackTargetTime The point in time to which the cloned instance will be rolled back
                     * 
                     */
                    void SetRollbackTargetTime(const std::string& _rollbackTargetTime);

                    /**
                     * 判断参数 RollbackTargetTime 是否已赋值
                     * @return RollbackTargetTime 是否已赋值
                     * 
                     */
                    bool RollbackTargetTimeHasBeenSet() const;

                    /**
                     * 获取Task start time
                     * @return StartTime Task start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Task start time
                     * @param _startTime Task start time
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
                     * 获取Task end time
                     * @return EndTime Task end time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Task end time
                     * @param _endTime Task end time
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
                     * 获取Task status. Valid values: `initial`, `running`, `wait_complete`, `success`, `failed`.
                     * @return TaskStatus Task status. Valid values: `initial`, `running`, `wait_complete`, `success`, `failed`.
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置Task status. Valid values: `initial`, `running`, `wait_complete`, `success`, `failed`.
                     * @param _taskStatus Task status. Valid values: `initial`, `running`, `wait_complete`, `success`, `failed`.
                     * 
                     */
                    void SetTaskStatus(const std::string& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取Clone instance region ID
                     * @return NewRegionId Clone instance region ID
                     * 
                     */
                    int64_t GetNewRegionId() const;

                    /**
                     * 设置Clone instance region ID
                     * @param _newRegionId Clone instance region ID
                     * 
                     */
                    void SetNewRegionId(const int64_t& _newRegionId);

                    /**
                     * 判断参数 NewRegionId 是否已赋值
                     * @return NewRegionId 是否已赋值
                     * 
                     */
                    bool NewRegionIdHasBeenSet() const;

                    /**
                     * 获取Source instance region ID
                     * @return SrcRegionId Source instance region ID
                     * 
                     */
                    int64_t GetSrcRegionId() const;

                    /**
                     * 设置Source instance region ID
                     * @param _srcRegionId Source instance region ID
                     * 
                     */
                    void SetSrcRegionId(const int64_t& _srcRegionId);

                    /**
                     * 判断参数 SrcRegionId 是否已赋值
                     * @return SrcRegionId 是否已赋值
                     * 
                     */
                    bool SrcRegionIdHasBeenSet() const;

                private:

                    /**
                     * ID of the original instance in a clone task
                     */
                    std::string m_srcInstanceId;
                    bool m_srcInstanceIdHasBeenSet;

                    /**
                     * ID of the cloned instance in a clone task
                     */
                    std::string m_dstInstanceId;
                    bool m_dstInstanceIdHasBeenSet;

                    /**
                     * Clone task ID
                     */
                    int64_t m_cloneJobId;
                    bool m_cloneJobIdHasBeenSet;

                    /**
                     * The policy used in a clone task. Valid values: `timepoint` (roll back to a specific point in time), `backupset` (roll back by using a specific backup file).
                     */
                    std::string m_rollbackStrategy;
                    bool m_rollbackStrategyHasBeenSet;

                    /**
                     * The point in time to which the cloned instance will be rolled back
                     */
                    std::string m_rollbackTargetTime;
                    bool m_rollbackTargetTimeHasBeenSet;

                    /**
                     * Task start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Task end time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Task status. Valid values: `initial`, `running`, `wait_complete`, `success`, `failed`.
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * Clone instance region ID
                     */
                    int64_t m_newRegionId;
                    bool m_newRegionIdHasBeenSet;

                    /**
                     * Source instance region ID
                     */
                    int64_t m_srcRegionId;
                    bool m_srcRegionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CLONEITEM_H_
