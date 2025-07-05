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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEBATCHTASKDETAILRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEBATCHTASKDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/BatchSubTaskResult.h>
#include <tencentcloud/mps/v20190612/model/TaskNotifyConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeBatchTaskDetail response structure.
                */
                class DescribeBatchTaskDetailResponse : public AbstractModel
                {
                public:
                    DescribeBatchTaskDetailResponse();
                    ~DescribeBatchTaskDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Task type. Currently, the valid values include:
<Li>BatchTask: batch processing task for video workflows.</li>.
                     * @return TaskType Task type. Currently, the valid values include:
<Li>BatchTask: batch processing task for video workflows.</li>.
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Task status. Valid values:
<Li>WAITING: waiting.</li>
<Li>PROCESSING: processing.</li>
<li>FINISH: completed.</li>
                     * @return Status Task status. Valid values:
<Li>WAITING: waiting.</li>
<Li>PROCESSING: processing.</li>
<li>FINISH: completed.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Task creation time in [ISO datetime format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
                     * @return CreateTime Task creation time in [ISO datetime format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Task execution start time in [ISO datetime format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
                     * @return BeginProcessTime Task execution start time in [ISO datetime format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
                     * 
                     */
                    std::string GetBeginProcessTime() const;

                    /**
                     * 判断参数 BeginProcessTime 是否已赋值
                     * @return BeginProcessTime 是否已赋值
                     * 
                     */
                    bool BeginProcessTimeHasBeenSet() const;

                    /**
                     * 获取Task execution completion time in [ISO datetime format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
                     * @return FinishTime Task execution completion time in [ISO datetime format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取Media processing task ID.
                     * @return TaskId Media processing task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Video processing task information. This field has a value only when TaskType is BatchTask.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return BatchTaskResult Video processing task information. This field has a value only when TaskType is BatchTask.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    BatchSubTaskResult GetBatchTaskResult() const;

                    /**
                     * 判断参数 BatchTaskResult 是否已赋值
                     * @return BatchTaskResult 是否已赋值
                     * 
                     */
                    bool BatchTaskResultHasBeenSet() const;

                    /**
                     * 获取Event notification information of the task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskNotifyConfig Event notification information of the task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    TaskNotifyConfig GetTaskNotifyConfig() const;

                    /**
                     * 判断参数 TaskNotifyConfig 是否已赋值
                     * @return TaskNotifyConfig 是否已赋值
                     * 
                     */
                    bool TaskNotifyConfigHasBeenSet() const;

                    /**
                     * 获取Priority of the task flow, with a value range of [-10, 10].
                     * @return TasksPriority Priority of the task flow, with a value range of [-10, 10].
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 判断参数 TasksPriority 是否已赋值
                     * @return TasksPriority 是否已赋值
                     * 
                     */
                    bool TasksPriorityHasBeenSet() const;

                    /**
                     * 获取An identifier for deduplication. If there has been a request with the same identifier within the past seven days, an error will be returned for the current request. The maximum length is 50 characters. Leaving it blank or using a null string indicates no deduplication is required.
                     * @return SessionId An identifier for deduplication. If there has been a request with the same identifier within the past seven days, an error will be returned for the current request. The maximum length is 50 characters. Leaving it blank or using a null string indicates no deduplication is required.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取Source context, which is used to pass through user request information. The callback for task flow status changes will return the value of this field. The maximum length is 1,000 characters.
                     * @return SessionContext Source context, which is used to pass through user request information. The callback for task flow status changes will return the value of this field. The maximum length is 1,000 characters.
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取Additional information field, only used in specific scenarios.
                     * @return ExtInfo Additional information field, only used in specific scenarios.
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                private:

                    /**
                     * Task type. Currently, the valid values include:
<Li>BatchTask: batch processing task for video workflows.</li>.
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Task status. Valid values:
<Li>WAITING: waiting.</li>
<Li>PROCESSING: processing.</li>
<li>FINISH: completed.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Task creation time in [ISO datetime format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Task execution start time in [ISO datetime format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
                     */
                    std::string m_beginProcessTime;
                    bool m_beginProcessTimeHasBeenSet;

                    /**
                     * Task execution completion time in [ISO datetime format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * Media processing task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Video processing task information. This field has a value only when TaskType is BatchTask.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    BatchSubTaskResult m_batchTaskResult;
                    bool m_batchTaskResultHasBeenSet;

                    /**
                     * Event notification information of the task.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    TaskNotifyConfig m_taskNotifyConfig;
                    bool m_taskNotifyConfigHasBeenSet;

                    /**
                     * Priority of the task flow, with a value range of [-10, 10].
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * An identifier for deduplication. If there has been a request with the same identifier within the past seven days, an error will be returned for the current request. The maximum length is 50 characters. Leaving it blank or using a null string indicates no deduplication is required.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Source context, which is used to pass through user request information. The callback for task flow status changes will return the value of this field. The maximum length is 1,000 characters.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * Additional information field, only used in specific scenarios.
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEBATCHTASKDETAILRESPONSE_H_
