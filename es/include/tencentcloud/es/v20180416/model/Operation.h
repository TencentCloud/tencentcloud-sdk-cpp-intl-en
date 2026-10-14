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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_OPERATION_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_OPERATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/OperationDetail.h>
#include <tencentcloud/es/v20180416/model/TaskDetail.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Detailed ES cluster operation information
                */
                class Operation : public AbstractModel
                {
                public:
                    Operation();
                    ~Operation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Unique id of the operation</p>
                     * @return Id <p>Unique id of the operation</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>Unique id of the operation</p>
                     * @param _id <p>Unique id of the operation</p>
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>Operation start time.</p>
                     * @return StartTime <p>Operation start time.</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Operation start time.</p>
                     * @param _startTime <p>Operation start time.</p>
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
                     * 获取<p>Operation type.</p>
                     * @return Type <p>Operation type.</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Operation type.</p>
                     * @param _type <p>Operation type.</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>Operation details.</p>
                     * @return Detail <p>Operation details.</p>
                     * 
                     */
                    OperationDetail GetDetail() const;

                    /**
                     * 设置<p>Operation details.</p>
                     * @param _detail <p>Operation details.</p>
                     * 
                     */
                    void SetDetail(const OperationDetail& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取<p>Operation result.</p>
                     * @return Result <p>Operation result.</p>
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置<p>Operation result.</p>
                     * @param _result <p>Operation result.</p>
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取<p>Process task info</p>
                     * @return Tasks <p>Process task info</p>
                     * 
                     */
                    std::vector<TaskDetail> GetTasks() const;

                    /**
                     * 设置<p>Process task info</p>
                     * @param _tasks <p>Process task info</p>
                     * 
                     */
                    void SetTasks(const std::vector<TaskDetail>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取<p>Operation progress.</p>
                     * @return Progress <p>Operation progress.</p>
                     * 
                     */
                    double GetProgress() const;

                    /**
                     * 设置<p>Operation progress.</p>
                     * @param _progress <p>Operation progress.</p>
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
                     * 获取<p>Rollback tag. 0: not rolled back, 1: rolling back, 2: rolled back</p>
                     * @return RollbackTag <p>Rollback tag. 0: not rolled back, 1: rolling back, 2: rolled back</p>
                     * 
                     */
                    int64_t GetRollbackTag() const;

                    /**
                     * 设置<p>Rollback tag. 0: not rolled back, 1: rolling back, 2: rolled back</p>
                     * @param _rollbackTag <p>Rollback tag. 0: not rolled back, 1: rolling back, 2: rolled back</p>
                     * 
                     */
                    void SetRollbackTag(const int64_t& _rollbackTag);

                    /**
                     * 判断参数 RollbackTag 是否已赋值
                     * @return RollbackTag 是否已赋值
                     * 
                     */
                    bool RollbackTagHasBeenSet() const;

                    /**
                     * 获取<p>Operator Uin</p>
                     * @return SubAccountUin <p>Operator Uin</p>
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置<p>Operator Uin</p>
                     * @param _subAccountUin <p>Operator Uin</p>
                     * 
                     */
                    void SetSubAccountUin(const std::string& _subAccountUin);

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     * 
                     */
                    bool SubAccountUinHasBeenSet() const;

                    /**
                     * 获取<p>Auto scaling flag. Valid values: 0 (non-auto) and 1 (auto).</p>
                     * @return AutoScaleTag <p>Auto scaling flag. Valid values: 0 (non-auto) and 1 (auto).</p>
                     * 
                     */
                    uint64_t GetAutoScaleTag() const;

                    /**
                     * 设置<p>Auto scaling flag. Valid values: 0 (non-auto) and 1 (auto).</p>
                     * @param _autoScaleTag <p>Auto scaling flag. Valid values: 0 (non-auto) and 1 (auto).</p>
                     * 
                     */
                    void SetAutoScaleTag(const uint64_t& _autoScaleTag);

                    /**
                     * 判断参数 AutoScaleTag 是否已赋值
                     * @return AutoScaleTag 是否已赋值
                     * 
                     */
                    bool AutoScaleTagHasBeenSet() const;

                    /**
                     * 获取<p>Process exception cause</p>
                     * @return SuspendedReason <p>Process exception cause</p>
                     * 
                     */
                    std::string GetSuspendedReason() const;

                    /**
                     * 设置<p>Process exception cause</p>
                     * @param _suspendedReason <p>Process exception cause</p>
                     * 
                     */
                    void SetSuspendedReason(const std::string& _suspendedReason);

                    /**
                     * 判断参数 SuspendedReason 是否已赋值
                     * @return SuspendedReason 是否已赋值
                     * 
                     */
                    bool SuspendedReasonHasBeenSet() const;

                private:

                    /**
                     * <p>Unique id of the operation</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Operation start time.</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>Operation type.</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Operation details.</p>
                     */
                    OperationDetail m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * <p>Operation result.</p>
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * <p>Process task info</p>
                     */
                    std::vector<TaskDetail> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * <p>Operation progress.</p>
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * <p>Rollback tag. 0: not rolled back, 1: rolling back, 2: rolled back</p>
                     */
                    int64_t m_rollbackTag;
                    bool m_rollbackTagHasBeenSet;

                    /**
                     * <p>Operator Uin</p>
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                    /**
                     * <p>Auto scaling flag. Valid values: 0 (non-auto) and 1 (auto).</p>
                     */
                    uint64_t m_autoScaleTag;
                    bool m_autoScaleTagHasBeenSet;

                    /**
                     * <p>Process exception cause</p>
                     */
                    std::string m_suspendedReason;
                    bool m_suspendedReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_OPERATION_H_
