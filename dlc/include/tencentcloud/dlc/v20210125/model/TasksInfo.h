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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_TASKSINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_TASKSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/KVPair.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Collection of tasks executed sequentially in batches
                */
                class TasksInfo : public AbstractModel
                {
                public:
                    TasksInfo();
                    ~TasksInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task type. Valid values: `SQLTask` (SQL query task), `SparkSQLTask` (Spark SQL query task).
                     * @return TaskType Task type. Valid values: `SQLTask` (SQL query task), `SparkSQLTask` (Spark SQL query task).
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置Task type. Valid values: `SQLTask` (SQL query task), `SparkSQLTask` (Spark SQL query task).
                     * @param TaskType Task type. Valid values: `SQLTask` (SQL query task), `SparkSQLTask` (Spark SQL query task).
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Fault tolerance policy. `Proceed`: continues to execute subsequent tasks after the current task fails or is canceled. `Terminate`: terminates the execution of subsequent tasks after the current task fails or is canceled, and marks all subsequent tasks as canceled.
                     * @return FailureTolerance Fault tolerance policy. `Proceed`: continues to execute subsequent tasks after the current task fails or is canceled. `Terminate`: terminates the execution of subsequent tasks after the current task fails or is canceled, and marks all subsequent tasks as canceled.
                     */
                    std::string GetFailureTolerance() const;

                    /**
                     * 设置Fault tolerance policy. `Proceed`: continues to execute subsequent tasks after the current task fails or is canceled. `Terminate`: terminates the execution of subsequent tasks after the current task fails or is canceled, and marks all subsequent tasks as canceled.
                     * @param FailureTolerance Fault tolerance policy. `Proceed`: continues to execute subsequent tasks after the current task fails or is canceled. `Terminate`: terminates the execution of subsequent tasks after the current task fails or is canceled, and marks all subsequent tasks as canceled.
                     */
                    void SetFailureTolerance(const std::string& _failureTolerance);

                    /**
                     * 判断参数 FailureTolerance 是否已赋值
                     * @return FailureTolerance 是否已赋值
                     */
                    bool FailureToleranceHasBeenSet() const;

                    /**
                     * 获取Base64-encrypted SQL statements separated by ";". Up to 50 tasks can be submitted at a time, and they will be executed strictly in sequence.
                     * @return SQL Base64-encrypted SQL statements separated by ";". Up to 50 tasks can be submitted at a time, and they will be executed strictly in sequence.
                     */
                    std::string GetSQL() const;

                    /**
                     * 设置Base64-encrypted SQL statements separated by ";". Up to 50 tasks can be submitted at a time, and they will be executed strictly in sequence.
                     * @param SQL Base64-encrypted SQL statements separated by ";". Up to 50 tasks can be submitted at a time, and they will be executed strictly in sequence.
                     */
                    void SetSQL(const std::string& _sQL);

                    /**
                     * 判断参数 SQL 是否已赋值
                     * @return SQL 是否已赋值
                     */
                    bool SQLHasBeenSet() const;

                    /**
                     * 获取Configuration information of the task. Currently, only `SparkSQLTask` tasks are supported.
                     * @return Config Configuration information of the task. Currently, only `SparkSQLTask` tasks are supported.
                     */
                    std::vector<KVPair> GetConfig() const;

                    /**
                     * 设置Configuration information of the task. Currently, only `SparkSQLTask` tasks are supported.
                     * @param Config Configuration information of the task. Currently, only `SparkSQLTask` tasks are supported.
                     */
                    void SetConfig(const std::vector<KVPair>& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取User-defined parameters of the task
                     * @return Params User-defined parameters of the task
                     */
                    std::vector<KVPair> GetParams() const;

                    /**
                     * 设置User-defined parameters of the task
                     * @param Params User-defined parameters of the task
                     */
                    void SetParams(const std::vector<KVPair>& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     */
                    bool ParamsHasBeenSet() const;

                private:

                    /**
                     * Task type. Valid values: `SQLTask` (SQL query task), `SparkSQLTask` (Spark SQL query task).
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Fault tolerance policy. `Proceed`: continues to execute subsequent tasks after the current task fails or is canceled. `Terminate`: terminates the execution of subsequent tasks after the current task fails or is canceled, and marks all subsequent tasks as canceled.
                     */
                    std::string m_failureTolerance;
                    bool m_failureToleranceHasBeenSet;

                    /**
                     * Base64-encrypted SQL statements separated by ";". Up to 50 tasks can be submitted at a time, and they will be executed strictly in sequence.
                     */
                    std::string m_sQL;
                    bool m_sQLHasBeenSet;

                    /**
                     * Configuration information of the task. Currently, only `SparkSQLTask` tasks are supported.
                     */
                    std::vector<KVPair> m_config;
                    bool m_configHasBeenSet;

                    /**
                     * User-defined parameters of the task
                     */
                    std::vector<KVPair> m_params;
                    bool m_paramsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_TASKSINFO_H_
