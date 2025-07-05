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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATESPARKSESSIONBATCHSQLREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATESPARKSESSIONBATCHSQLREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateSparkSessionBatchSQL request structure.
                */
                class CreateSparkSessionBatchSQLRequest : public AbstractModel
                {
                public:
                    CreateSparkSessionBatchSQLRequest();
                    ~CreateSparkSessionBatchSQLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The name of the engine for executing the Spark job.
                     * @return DataEngineName The name of the engine for executing the Spark job.
                     * 
                     */
                    std::string GetDataEngineName() const;

                    /**
                     * 设置The name of the engine for executing the Spark job.
                     * @param _dataEngineName The name of the engine for executing the Spark job.
                     * 
                     */
                    void SetDataEngineName(const std::string& _dataEngineName);

                    /**
                     * 判断参数 DataEngineName 是否已赋值
                     * @return DataEngineName 是否已赋值
                     * 
                     */
                    bool DataEngineNameHasBeenSet() const;

                    /**
                     * 获取Run SQL. The base64 encoding is needed.
                     * @return ExecuteSQL Run SQL. The base64 encoding is needed.
                     * 
                     */
                    std::string GetExecuteSQL() const;

                    /**
                     * 设置Run SQL. The base64 encoding is needed.
                     * @param _executeSQL Run SQL. The base64 encoding is needed.
                     * 
                     */
                    void SetExecuteSQL(const std::string& _executeSQL);

                    /**
                     * 判断参数 ExecuteSQL 是否已赋值
                     * @return ExecuteSQL 是否已赋值
                     * 
                     */
                    bool ExecuteSQLHasBeenSet() const;

                    /**
                     * 获取The driver size. Valid values: `small` (default, 1 CU), `medium` (2 CUs), `large` (4 CUs), and `xlarge` (8 CUs).
                     * @return DriverSize The driver size. Valid values: `small` (default, 1 CU), `medium` (2 CUs), `large` (4 CUs), and `xlarge` (8 CUs).
                     * 
                     */
                    std::string GetDriverSize() const;

                    /**
                     * 设置The driver size. Valid values: `small` (default, 1 CU), `medium` (2 CUs), `large` (4 CUs), and `xlarge` (8 CUs).
                     * @param _driverSize The driver size. Valid values: `small` (default, 1 CU), `medium` (2 CUs), `large` (4 CUs), and `xlarge` (8 CUs).
                     * 
                     */
                    void SetDriverSize(const std::string& _driverSize);

                    /**
                     * 判断参数 DriverSize 是否已赋值
                     * @return DriverSize 是否已赋值
                     * 
                     */
                    bool DriverSizeHasBeenSet() const;

                    /**
                     * 获取The executor size. Valid values: `small` (default, 1 CU), `medium` (2 CUs), `large` (4 CUs), and `xlarge` (8 CUs).
                     * @return ExecutorSize The executor size. Valid values: `small` (default, 1 CU), `medium` (2 CUs), `large` (4 CUs), and `xlarge` (8 CUs).
                     * 
                     */
                    std::string GetExecutorSize() const;

                    /**
                     * 设置The executor size. Valid values: `small` (default, 1 CU), `medium` (2 CUs), `large` (4 CUs), and `xlarge` (8 CUs).
                     * @param _executorSize The executor size. Valid values: `small` (default, 1 CU), `medium` (2 CUs), `large` (4 CUs), and `xlarge` (8 CUs).
                     * 
                     */
                    void SetExecutorSize(const std::string& _executorSize);

                    /**
                     * 判断参数 ExecutorSize 是否已赋值
                     * @return ExecutorSize 是否已赋值
                     * 
                     */
                    bool ExecutorSizeHasBeenSet() const;

                    /**
                     * 获取The executor count, which defaults to 1.
                     * @return ExecutorNumbers The executor count, which defaults to 1.
                     * 
                     */
                    uint64_t GetExecutorNumbers() const;

                    /**
                     * 设置The executor count, which defaults to 1.
                     * @param _executorNumbers The executor count, which defaults to 1.
                     * 
                     */
                    void SetExecutorNumbers(const uint64_t& _executorNumbers);

                    /**
                     * 判断参数 ExecutorNumbers 是否已赋值
                     * @return ExecutorNumbers 是否已赋值
                     * 
                     */
                    bool ExecutorNumbersHasBeenSet() const;

                    /**
                     * 获取The maximum executor count, which defaults to 1. This parameter applies if the "Dynamic" mode is selected. If the "Dynamic" mode is not selected, the value of this parameter is the same as that of `ExecutorNumbers`.
                     * @return ExecutorMaxNumbers The maximum executor count, which defaults to 1. This parameter applies if the "Dynamic" mode is selected. If the "Dynamic" mode is not selected, the value of this parameter is the same as that of `ExecutorNumbers`.
                     * 
                     */
                    uint64_t GetExecutorMaxNumbers() const;

                    /**
                     * 设置The maximum executor count, which defaults to 1. This parameter applies if the "Dynamic" mode is selected. If the "Dynamic" mode is not selected, the value of this parameter is the same as that of `ExecutorNumbers`.
                     * @param _executorMaxNumbers The maximum executor count, which defaults to 1. This parameter applies if the "Dynamic" mode is selected. If the "Dynamic" mode is not selected, the value of this parameter is the same as that of `ExecutorNumbers`.
                     * 
                     */
                    void SetExecutorMaxNumbers(const uint64_t& _executorMaxNumbers);

                    /**
                     * 判断参数 ExecutorMaxNumbers 是否已赋值
                     * @return ExecutorMaxNumbers 是否已赋值
                     * 
                     */
                    bool ExecutorMaxNumbersHasBeenSet() const;

                    /**
                     * 获取The session timeout period in seconds. Default value: 3600
                     * @return TimeoutInSecond The session timeout period in seconds. Default value: 3600
                     * 
                     */
                    int64_t GetTimeoutInSecond() const;

                    /**
                     * 设置The session timeout period in seconds. Default value: 3600
                     * @param _timeoutInSecond The session timeout period in seconds. Default value: 3600
                     * 
                     */
                    void SetTimeoutInSecond(const int64_t& _timeoutInSecond);

                    /**
                     * 判断参数 TimeoutInSecond 是否已赋值
                     * @return TimeoutInSecond 是否已赋值
                     * 
                     */
                    bool TimeoutInSecondHasBeenSet() const;

                    /**
                     * 获取The unique ID of a session. If this parameter is specified, the task will be run using the specified session.
                     * @return SessionId The unique ID of a session. If this parameter is specified, the task will be run using the specified session.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置The unique ID of a session. If this parameter is specified, the task will be run using the specified session.
                     * @param _sessionId The unique ID of a session. If this parameter is specified, the task will be run using the specified session.
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取The name of the session to create.
                     * @return SessionName The name of the session to create.
                     * 
                     */
                    std::string GetSessionName() const;

                    /**
                     * 设置The name of the session to create.
                     * @param _sessionName The name of the session to create.
                     * 
                     */
                    void SetSessionName(const std::string& _sessionName);

                    /**
                     * 判断参数 SessionName 是否已赋值
                     * @return SessionName 是否已赋值
                     * 
                     */
                    bool SessionNameHasBeenSet() const;

                    /**
                     * 获取The session configurations. Valid values: `1.dlc.eni` for user-defined ENI gateway information;
`2.dlc.role.arn` for user-defined roleArn configurations;
and `3.dlc.sql.set.config` for user-defined cluster configurations.
                     * @return Arguments The session configurations. Valid values: `1.dlc.eni` for user-defined ENI gateway information;
`2.dlc.role.arn` for user-defined roleArn configurations;
and `3.dlc.sql.set.config` for user-defined cluster configurations.
                     * 
                     */
                    std::vector<KVPair> GetArguments() const;

                    /**
                     * 设置The session configurations. Valid values: `1.dlc.eni` for user-defined ENI gateway information;
`2.dlc.role.arn` for user-defined roleArn configurations;
and `3.dlc.sql.set.config` for user-defined cluster configurations.
                     * @param _arguments The session configurations. Valid values: `1.dlc.eni` for user-defined ENI gateway information;
`2.dlc.role.arn` for user-defined roleArn configurations;
and `3.dlc.sql.set.config` for user-defined cluster configurations.
                     * 
                     */
                    void SetArguments(const std::vector<KVPair>& _arguments);

                    /**
                     * 判断参数 Arguments 是否已赋值
                     * @return Arguments 是否已赋值
                     * 
                     */
                    bool ArgumentsHasBeenSet() const;

                    /**
                     * 获取Whether to inherit the resource configuration of clusters; 0: not inherit (by default); 1: inherit clusters.
                     * @return IsInherit Whether to inherit the resource configuration of clusters; 0: not inherit (by default); 1: inherit clusters.
                     * 
                     */
                    int64_t GetIsInherit() const;

                    /**
                     * 设置Whether to inherit the resource configuration of clusters; 0: not inherit (by default); 1: inherit clusters.
                     * @param _isInherit Whether to inherit the resource configuration of clusters; 0: not inherit (by default); 1: inherit clusters.
                     * 
                     */
                    void SetIsInherit(const int64_t& _isInherit);

                    /**
                     * 判断参数 IsInherit 是否已赋值
                     * @return IsInherit 是否已赋值
                     * 
                     */
                    bool IsInheritHasBeenSet() const;

                    /**
                     * 获取User-defined primary key, and it should be unique.
                     * @return CustomKey User-defined primary key, and it should be unique.
                     * 
                     */
                    std::string GetCustomKey() const;

                    /**
                     * 设置User-defined primary key, and it should be unique.
                     * @param _customKey User-defined primary key, and it should be unique.
                     * 
                     */
                    void SetCustomKey(const std::string& _customKey);

                    /**
                     * 判断参数 CustomKey 是否已赋值
                     * @return CustomKey 是否已赋值
                     * 
                     */
                    bool CustomKeyHasBeenSet() const;

                private:

                    /**
                     * The name of the engine for executing the Spark job.
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                    /**
                     * Run SQL. The base64 encoding is needed.
                     */
                    std::string m_executeSQL;
                    bool m_executeSQLHasBeenSet;

                    /**
                     * The driver size. Valid values: `small` (default, 1 CU), `medium` (2 CUs), `large` (4 CUs), and `xlarge` (8 CUs).
                     */
                    std::string m_driverSize;
                    bool m_driverSizeHasBeenSet;

                    /**
                     * The executor size. Valid values: `small` (default, 1 CU), `medium` (2 CUs), `large` (4 CUs), and `xlarge` (8 CUs).
                     */
                    std::string m_executorSize;
                    bool m_executorSizeHasBeenSet;

                    /**
                     * The executor count, which defaults to 1.
                     */
                    uint64_t m_executorNumbers;
                    bool m_executorNumbersHasBeenSet;

                    /**
                     * The maximum executor count, which defaults to 1. This parameter applies if the "Dynamic" mode is selected. If the "Dynamic" mode is not selected, the value of this parameter is the same as that of `ExecutorNumbers`.
                     */
                    uint64_t m_executorMaxNumbers;
                    bool m_executorMaxNumbersHasBeenSet;

                    /**
                     * The session timeout period in seconds. Default value: 3600
                     */
                    int64_t m_timeoutInSecond;
                    bool m_timeoutInSecondHasBeenSet;

                    /**
                     * The unique ID of a session. If this parameter is specified, the task will be run using the specified session.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * The name of the session to create.
                     */
                    std::string m_sessionName;
                    bool m_sessionNameHasBeenSet;

                    /**
                     * The session configurations. Valid values: `1.dlc.eni` for user-defined ENI gateway information;
`2.dlc.role.arn` for user-defined roleArn configurations;
and `3.dlc.sql.set.config` for user-defined cluster configurations.
                     */
                    std::vector<KVPair> m_arguments;
                    bool m_argumentsHasBeenSet;

                    /**
                     * Whether to inherit the resource configuration of clusters; 0: not inherit (by default); 1: inherit clusters.
                     */
                    int64_t m_isInherit;
                    bool m_isInheritHasBeenSet;

                    /**
                     * User-defined primary key, and it should be unique.
                     */
                    std::string m_customKey;
                    bool m_customKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATESPARKSESSIONBATCHSQLREQUEST_H_
