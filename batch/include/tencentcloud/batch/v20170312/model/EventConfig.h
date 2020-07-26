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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_EVENTCONFIG_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_EVENTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/EventVar.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Event configuration
                */
                class EventConfig : public AbstractModel
                {
                public:
                    EventConfig();
                    ~EventConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event type. Value range: <br/><li>"JOB_RUNNING": the job is running, applicable to "SubmitJob". </li><li>"JOB_SUCCEED: the job succeeded, applicable to "SubmitJob". </li><li>"JOB_FAILED": the job failed, applicable to "SubmitJob". </li><li>"JOB_FAILED_INTERRUPTED": the job failed and the instance is retained, applicable to "SubmitJob". </li><li>"TASK_RUNNING": the task is running, applicable to "SubmitJob". </li><li>"TASK_SUCCEED": the task succeeded, applicable to "SubmitJob". </li><li>"TASK_FAILED": the task failed, applicable to "SubmitJob". </li><li>"TASK_FAILED_INTERRUPTED": the task failed and the instance is retained, applicable to "SubmitJob". </li><li>"TASK_INSTANCE_RUNNING": the task instance is running, applicable to "SubmitJob". </li><li>"TASK_INSTANCE_SUCCEED": the task instance succeeded, applicable to "SubmitJob". </li><li>"TASK_INSTANCE_FAILED": the task instance failed, applicable to "SubmitJob". </li><li>"TASK_INSTANCE_FAILED_INTERRUPTED": the task instance failed and the instance is retained, applicable to "SubmitJob". </li><li>"COMPUTE_ENV_CREATED": the compute environment has been created, applicable to "CreateComputeEnv". </li><li>"COMPUTE_ENV_DELETED": the compute environment has been deleted, applicable to "CreateComputeEnv". </li><li>"COMPUTE_NODE_CREATED": the compute node has been created, applicable to "CreateComputeEnv" and "SubmitJob". </li><li>"COMPUTE_NODE_CREATION_FAILED": the compute node creation failed, applicable to "CreateComputeEnv" and "SubmitJob". </li><li>"COMPUTE_NODE_RUNNING": the compute node is running, applicable to "CreateComputeEnv" and "SubmitJob". </li><li>"COMPUTE_NODE_ABNORMAL": the compute node is exceptional, applicable to "CreateComputeEnv" and "SubmitJob". </li><li>"COMPUTE_NODE_DELETING": the compute node has been deleted, applicable to "CreateComputeEnv" and "SubmitJob". </li>
                     * @return EventName Event type. Value range: <br/><li>"JOB_RUNNING": the job is running, applicable to "SubmitJob". </li><li>"JOB_SUCCEED: the job succeeded, applicable to "SubmitJob". </li><li>"JOB_FAILED": the job failed, applicable to "SubmitJob". </li><li>"JOB_FAILED_INTERRUPTED": the job failed and the instance is retained, applicable to "SubmitJob". </li><li>"TASK_RUNNING": the task is running, applicable to "SubmitJob". </li><li>"TASK_SUCCEED": the task succeeded, applicable to "SubmitJob". </li><li>"TASK_FAILED": the task failed, applicable to "SubmitJob". </li><li>"TASK_FAILED_INTERRUPTED": the task failed and the instance is retained, applicable to "SubmitJob". </li><li>"TASK_INSTANCE_RUNNING": the task instance is running, applicable to "SubmitJob". </li><li>"TASK_INSTANCE_SUCCEED": the task instance succeeded, applicable to "SubmitJob". </li><li>"TASK_INSTANCE_FAILED": the task instance failed, applicable to "SubmitJob". </li><li>"TASK_INSTANCE_FAILED_INTERRUPTED": the task instance failed and the instance is retained, applicable to "SubmitJob". </li><li>"COMPUTE_ENV_CREATED": the compute environment has been created, applicable to "CreateComputeEnv". </li><li>"COMPUTE_ENV_DELETED": the compute environment has been deleted, applicable to "CreateComputeEnv". </li><li>"COMPUTE_NODE_CREATED": the compute node has been created, applicable to "CreateComputeEnv" and "SubmitJob". </li><li>"COMPUTE_NODE_CREATION_FAILED": the compute node creation failed, applicable to "CreateComputeEnv" and "SubmitJob". </li><li>"COMPUTE_NODE_RUNNING": the compute node is running, applicable to "CreateComputeEnv" and "SubmitJob". </li><li>"COMPUTE_NODE_ABNORMAL": the compute node is exceptional, applicable to "CreateComputeEnv" and "SubmitJob". </li><li>"COMPUTE_NODE_DELETING": the compute node has been deleted, applicable to "CreateComputeEnv" and "SubmitJob". </li>
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置Event type. Value range: <br/><li>"JOB_RUNNING": the job is running, applicable to "SubmitJob". </li><li>"JOB_SUCCEED: the job succeeded, applicable to "SubmitJob". </li><li>"JOB_FAILED": the job failed, applicable to "SubmitJob". </li><li>"JOB_FAILED_INTERRUPTED": the job failed and the instance is retained, applicable to "SubmitJob". </li><li>"TASK_RUNNING": the task is running, applicable to "SubmitJob". </li><li>"TASK_SUCCEED": the task succeeded, applicable to "SubmitJob". </li><li>"TASK_FAILED": the task failed, applicable to "SubmitJob". </li><li>"TASK_FAILED_INTERRUPTED": the task failed and the instance is retained, applicable to "SubmitJob". </li><li>"TASK_INSTANCE_RUNNING": the task instance is running, applicable to "SubmitJob". </li><li>"TASK_INSTANCE_SUCCEED": the task instance succeeded, applicable to "SubmitJob". </li><li>"TASK_INSTANCE_FAILED": the task instance failed, applicable to "SubmitJob". </li><li>"TASK_INSTANCE_FAILED_INTERRUPTED": the task instance failed and the instance is retained, applicable to "SubmitJob". </li><li>"COMPUTE_ENV_CREATED": the compute environment has been created, applicable to "CreateComputeEnv". </li><li>"COMPUTE_ENV_DELETED": the compute environment has been deleted, applicable to "CreateComputeEnv". </li><li>"COMPUTE_NODE_CREATED": the compute node has been created, applicable to "CreateComputeEnv" and "SubmitJob". </li><li>"COMPUTE_NODE_CREATION_FAILED": the compute node creation failed, applicable to "CreateComputeEnv" and "SubmitJob". </li><li>"COMPUTE_NODE_RUNNING": the compute node is running, applicable to "CreateComputeEnv" and "SubmitJob". </li><li>"COMPUTE_NODE_ABNORMAL": the compute node is exceptional, applicable to "CreateComputeEnv" and "SubmitJob". </li><li>"COMPUTE_NODE_DELETING": the compute node has been deleted, applicable to "CreateComputeEnv" and "SubmitJob". </li>
                     * @param EventName Event type. Value range: <br/><li>"JOB_RUNNING": the job is running, applicable to "SubmitJob". </li><li>"JOB_SUCCEED: the job succeeded, applicable to "SubmitJob". </li><li>"JOB_FAILED": the job failed, applicable to "SubmitJob". </li><li>"JOB_FAILED_INTERRUPTED": the job failed and the instance is retained, applicable to "SubmitJob". </li><li>"TASK_RUNNING": the task is running, applicable to "SubmitJob". </li><li>"TASK_SUCCEED": the task succeeded, applicable to "SubmitJob". </li><li>"TASK_FAILED": the task failed, applicable to "SubmitJob". </li><li>"TASK_FAILED_INTERRUPTED": the task failed and the instance is retained, applicable to "SubmitJob". </li><li>"TASK_INSTANCE_RUNNING": the task instance is running, applicable to "SubmitJob". </li><li>"TASK_INSTANCE_SUCCEED": the task instance succeeded, applicable to "SubmitJob". </li><li>"TASK_INSTANCE_FAILED": the task instance failed, applicable to "SubmitJob". </li><li>"TASK_INSTANCE_FAILED_INTERRUPTED": the task instance failed and the instance is retained, applicable to "SubmitJob". </li><li>"COMPUTE_ENV_CREATED": the compute environment has been created, applicable to "CreateComputeEnv". </li><li>"COMPUTE_ENV_DELETED": the compute environment has been deleted, applicable to "CreateComputeEnv". </li><li>"COMPUTE_NODE_CREATED": the compute node has been created, applicable to "CreateComputeEnv" and "SubmitJob". </li><li>"COMPUTE_NODE_CREATION_FAILED": the compute node creation failed, applicable to "CreateComputeEnv" and "SubmitJob". </li><li>"COMPUTE_NODE_RUNNING": the compute node is running, applicable to "CreateComputeEnv" and "SubmitJob". </li><li>"COMPUTE_NODE_ABNORMAL": the compute node is exceptional, applicable to "CreateComputeEnv" and "SubmitJob". </li><li>"COMPUTE_NODE_DELETING": the compute node has been deleted, applicable to "CreateComputeEnv" and "SubmitJob". </li>
                     */
                    void SetEventName(const std::string& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     */
                    bool EventNameHasBeenSet() const;

                    /**
                     * 获取Custom key-value pair
                     * @return EventVars Custom key-value pair
                     */
                    std::vector<EventVar> GetEventVars() const;

                    /**
                     * 设置Custom key-value pair
                     * @param EventVars Custom key-value pair
                     */
                    void SetEventVars(const std::vector<EventVar>& _eventVars);

                    /**
                     * 判断参数 EventVars 是否已赋值
                     * @return EventVars 是否已赋值
                     */
                    bool EventVarsHasBeenSet() const;

                private:

                    /**
                     * Event type. Value range: <br/><li>"JOB_RUNNING": the job is running, applicable to "SubmitJob". </li><li>"JOB_SUCCEED: the job succeeded, applicable to "SubmitJob". </li><li>"JOB_FAILED": the job failed, applicable to "SubmitJob". </li><li>"JOB_FAILED_INTERRUPTED": the job failed and the instance is retained, applicable to "SubmitJob". </li><li>"TASK_RUNNING": the task is running, applicable to "SubmitJob". </li><li>"TASK_SUCCEED": the task succeeded, applicable to "SubmitJob". </li><li>"TASK_FAILED": the task failed, applicable to "SubmitJob". </li><li>"TASK_FAILED_INTERRUPTED": the task failed and the instance is retained, applicable to "SubmitJob". </li><li>"TASK_INSTANCE_RUNNING": the task instance is running, applicable to "SubmitJob". </li><li>"TASK_INSTANCE_SUCCEED": the task instance succeeded, applicable to "SubmitJob". </li><li>"TASK_INSTANCE_FAILED": the task instance failed, applicable to "SubmitJob". </li><li>"TASK_INSTANCE_FAILED_INTERRUPTED": the task instance failed and the instance is retained, applicable to "SubmitJob". </li><li>"COMPUTE_ENV_CREATED": the compute environment has been created, applicable to "CreateComputeEnv". </li><li>"COMPUTE_ENV_DELETED": the compute environment has been deleted, applicable to "CreateComputeEnv". </li><li>"COMPUTE_NODE_CREATED": the compute node has been created, applicable to "CreateComputeEnv" and "SubmitJob". </li><li>"COMPUTE_NODE_CREATION_FAILED": the compute node creation failed, applicable to "CreateComputeEnv" and "SubmitJob". </li><li>"COMPUTE_NODE_RUNNING": the compute node is running, applicable to "CreateComputeEnv" and "SubmitJob". </li><li>"COMPUTE_NODE_ABNORMAL": the compute node is exceptional, applicable to "CreateComputeEnv" and "SubmitJob". </li><li>"COMPUTE_NODE_DELETING": the compute node has been deleted, applicable to "CreateComputeEnv" and "SubmitJob". </li>
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * Custom key-value pair
                     */
                    std::vector<EventVar> m_eventVars;
                    bool m_eventVarsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_EVENTCONFIG_H_
