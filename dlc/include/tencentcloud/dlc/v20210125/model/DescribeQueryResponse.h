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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEQUERYRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEQUERYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeQuery response structure.
                */
                class DescribeQueryResponse : public AbstractModel
                {
                public:
                    DescribeQueryResponse();
                    ~DescribeQueryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Task ID
                     * @return TaskId Task ID
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
                     * 获取The SQL being executed currently. A task contains one SQL.
                     * @return SQL The SQL being executed currently. A task contains one SQL.
                     * 
                     */
                    std::string GetSQL() const;

                    /**
                     * 判断参数 SQL 是否已赋值
                     * @return SQL 是否已赋值
                     * 
                     */
                    bool SQLHasBeenSet() const;

                    /**
                     * 获取The currently executed task types are divided into DDL, DML, and DQL.
                     * @return SQLType The currently executed task types are divided into DDL, DML, and DQL.
                     * 
                     */
                    std::string GetSQLType() const;

                    /**
                     * 判断参数 SQLType 是否已赋值
                     * @return SQLType 是否已赋值
                     * 
                     */
                    bool SQLTypeHasBeenSet() const;

                    /**
                     * 获取The current status of the task is 0: initializing; 1: running; 2: executed; 3: writing data; 4: queuing; -1: task execution failed; -3: manually terminated. The task execution result is returned only when the task is successfully executed.
                     * @return State The current status of the task is 0: initializing; 1: running; 2: executed; 3: writing data; 4: queuing; -1: task execution failed; -3: manually terminated. The task execution result is returned only when the task is successfully executed.
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Default data set of query results
                     * @return DataSet Default data set of query results
                     * 
                     */
                    std::string GetDataSet() const;

                    /**
                     * 判断参数 DataSet 是否已赋值
                     * @return DataSet 是否已赋值
                     * 
                     */
                    bool DataSetHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * The SQL being executed currently. A task contains one SQL.
                     */
                    std::string m_sQL;
                    bool m_sQLHasBeenSet;

                    /**
                     * The currently executed task types are divided into DDL, DML, and DQL.
                     */
                    std::string m_sQLType;
                    bool m_sQLTypeHasBeenSet;

                    /**
                     * The current status of the task is 0: initializing; 1: running; 2: executed; 3: writing data; 4: queuing; -1: task execution failed; -3: manually terminated. The task execution result is returned only when the task is successfully executed.
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Default data set of query results
                     */
                    std::string m_dataSet;
                    bool m_dataSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEQUERYRESPONSE_H_
