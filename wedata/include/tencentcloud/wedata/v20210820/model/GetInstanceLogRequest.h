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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_GETINSTANCELOGREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_GETINSTANCELOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * GetInstanceLog request structure.
                */
                class GetInstanceLogRequest : public AbstractModel
                {
                public:
                    GetInstanceLogRequest();
                    ~GetInstanceLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取**Project ID**.
                     * @return ProjectId **Project ID**.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置**Project ID**.
                     * @param _projectId **Project ID**.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Unique identifier of an instance.
                     * @return InstanceKey Unique identifier of an instance.
                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置Unique identifier of an instance.
                     * @param _instanceKey Unique identifier of an instance.
                     * 
                     */
                    void SetInstanceKey(const std::string& _instanceKey);

                    /**
                     * 判断参数 InstanceKey 是否已赋值
                     * @return InstanceKey 是否已赋值
                     * 
                     */
                    bool InstanceKeyHasBeenSet() const;

                    /**
                     * 获取Instance lifetime number, which identifies one-time execution of the instance.

For example: the number of the first run of a periodic instance is 0. when the user reruns the instance later, the number of the second execution is 1.
                     * @return LifeRoundNum Instance lifetime number, which identifies one-time execution of the instance.

For example: the number of the first run of a periodic instance is 0. when the user reruns the instance later, the number of the second execution is 1.
                     * 
                     */
                    uint64_t GetLifeRoundNum() const;

                    /**
                     * 设置Instance lifetime number, which identifies one-time execution of the instance.

For example: the number of the first run of a periodic instance is 0. when the user reruns the instance later, the number of the second execution is 1.
                     * @param _lifeRoundNum Instance lifetime number, which identifies one-time execution of the instance.

For example: the number of the first run of a periodic instance is 0. when the user reruns the instance later, the number of the second execution is 1.
                     * 
                     */
                    void SetLifeRoundNum(const uint64_t& _lifeRoundNum);

                    /**
                     * 判断参数 LifeRoundNum 是否已赋值
                     * @return LifeRoundNum 是否已赋值
                     * 
                     */
                    bool LifeRoundNumHasBeenSet() const;

                    /**
                     * 获取Time zone.
Time zone. specifies the time zone. the default value is UTC+8.
                     * @return ScheduleTimeZone Time zone.
Time zone. specifies the time zone. the default value is UTC+8.
                     * 
                     */
                    std::string GetScheduleTimeZone() const;

                    /**
                     * 设置Time zone.
Time zone. specifies the time zone. the default value is UTC+8.
                     * @param _scheduleTimeZone Time zone.
Time zone. specifies the time zone. the default value is UTC+8.
                     * 
                     */
                    void SetScheduleTimeZone(const std::string& _scheduleTimeZone);

                    /**
                     * 判断参数 ScheduleTimeZone 是否已赋值
                     * @return ScheduleTimeZone 是否已赋值
                     * 
                     */
                    bool ScheduleTimeZoneHasBeenSet() const;

                    /**
                     * 获取Indicates the Ip address of the executor where the log is located.
                     * @return BrokerIp Indicates the Ip address of the executor where the log is located.
                     * 
                     */
                    std::string GetBrokerIp() const;

                    /**
                     * 设置Indicates the Ip address of the executor where the log is located.
                     * @param _brokerIp Indicates the Ip address of the executor where the log is located.
                     * 
                     */
                    void SetBrokerIp(const std::string& _brokerIp);

                    /**
                     * 判断参数 BrokerIp 是否已赋值
                     * @return BrokerIp 是否已赋值
                     * 
                     */
                    bool BrokerIpHasBeenSet() const;

                    /**
                     * 获取Log file.
When executionJobId in instance details is empty but originFileName is not empty, originFileName and brokerIp must be included in the input parameters.
If both executionJobId and originFileName are empty, it indicates that the instance has not been dispatched for execution or has not generated logs. for example, branch node or merge node.
                     * @return OriginFileName Log file.
When executionJobId in instance details is empty but originFileName is not empty, originFileName and brokerIp must be included in the input parameters.
If both executionJobId and originFileName are empty, it indicates that the instance has not been dispatched for execution or has not generated logs. for example, branch node or merge node.
                     * 
                     */
                    std::string GetOriginFileName() const;

                    /**
                     * 设置Log file.
When executionJobId in instance details is empty but originFileName is not empty, originFileName and brokerIp must be included in the input parameters.
If both executionJobId and originFileName are empty, it indicates that the instance has not been dispatched for execution or has not generated logs. for example, branch node or merge node.
                     * @param _originFileName Log file.
When executionJobId in instance details is empty but originFileName is not empty, originFileName and brokerIp must be included in the input parameters.
If both executionJobId and originFileName are empty, it indicates that the instance has not been dispatched for execution or has not generated logs. for example, branch node or merge node.
                     * 
                     */
                    void SetOriginFileName(const std::string& _originFileName);

                    /**
                     * 判断参数 OriginFileName 是否已赋值
                     * @return OriginFileName 是否已赋值
                     * 
                     */
                    bool OriginFileNameHasBeenSet() const;

                    /**
                     * 获取**Execution ID**.

When executionJobId in instance details is not empty, executionJobId needs to be included in the input parameters. originFileName and brokerIp are not required parameters.
                     * @return ExecutionJobId **Execution ID**.

When executionJobId in instance details is not empty, executionJobId needs to be included in the input parameters. originFileName and brokerIp are not required parameters.
                     * 
                     */
                    std::string GetExecutionJobId() const;

                    /**
                     * 设置**Execution ID**.

When executionJobId in instance details is not empty, executionJobId needs to be included in the input parameters. originFileName and brokerIp are not required parameters.
                     * @param _executionJobId **Execution ID**.

When executionJobId in instance details is not empty, executionJobId needs to be included in the input parameters. originFileName and brokerIp are not required parameters.
                     * 
                     */
                    void SetExecutionJobId(const std::string& _executionJobId);

                    /**
                     * 判断参数 ExecutionJobId 是否已赋值
                     * @return ExecutionJobId 是否已赋值
                     * 
                     */
                    bool ExecutionJobIdHasBeenSet() const;

                    /**
                     * 获取Log level.
Default All.

- Info
- Debug
- Warn
- Error
- All
                     * @return LogLevel Log level.
Default All.

- Info
- Debug
- Warn
- Error
- All
                     * 
                     */
                    std::string GetLogLevel() const;

                    /**
                     * 设置Log level.
Default All.

- Info
- Debug
- Warn
- Error
- All
                     * @param _logLevel Log level.
Default All.

- Info
- Debug
- Warn
- Error
- All
                     * 
                     */
                    void SetLogLevel(const std::string& _logLevel);

                    /**
                     * 判断参数 LogLevel 是否已赋值
                     * @return LogLevel 是否已赋值
                     * 
                     */
                    bool LogLevelHasBeenSet() const;

                    /**
                     * 获取Start row number for obtaining logs.
The default is 1.
                     * @return StartLineNum Start row number for obtaining logs.
The default is 1.
                     * 
                     */
                    uint64_t GetStartLineNum() const;

                    /**
                     * 设置Start row number for obtaining logs.
The default is 1.
                     * @param _startLineNum Start row number for obtaining logs.
The default is 1.
                     * 
                     */
                    void SetStartLineNum(const uint64_t& _startLineNum);

                    /**
                     * 判断参数 StartLineNum 是否已赋值
                     * @return StartLineNum 是否已赋值
                     * 
                     */
                    bool StartLineNumHasBeenSet() const;

                    /**
                     * 获取End line number for obtaining logs.
The default value is 10000.
                     * @return EndLineCount End line number for obtaining logs.
The default value is 10000.
                     * 
                     */
                    uint64_t GetEndLineCount() const;

                    /**
                     * 设置End line number for obtaining logs.
The default value is 10000.
                     * @param _endLineCount End line number for obtaining logs.
The default value is 10000.
                     * 
                     */
                    void SetEndLineCount(const uint64_t& _endLineCount);

                    /**
                     * 判断参数 EndLineCount 是否已赋值
                     * @return EndLineCount 是否已赋值
                     * 
                     */
                    bool EndLineCountHasBeenSet() const;

                    /**
                     * 获取Used when performing a paging query for logs. it has no specific business meaning.

Specifies that the value is null for the first query. 
Use the ExtInfo field value in the returned information from the previous query for the second and subsequent queries.
                     * @return ExtInfo Used when performing a paging query for logs. it has no specific business meaning.

Specifies that the value is null for the first query. 
Use the ExtInfo field value in the returned information from the previous query for the second and subsequent queries.
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置Used when performing a paging query for logs. it has no specific business meaning.

Specifies that the value is null for the first query. 
Use the ExtInfo field value in the returned information from the previous query for the second and subsequent queries.
                     * @param _extInfo Used when performing a paging query for logs. it has no specific business meaning.

Specifies that the value is null for the first query. 
Use the ExtInfo field value in the returned information from the previous query for the second and subsequent queries.
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                private:

                    /**
                     * **Project ID**.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Unique identifier of an instance.
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * Instance lifetime number, which identifies one-time execution of the instance.

For example: the number of the first run of a periodic instance is 0. when the user reruns the instance later, the number of the second execution is 1.
                     */
                    uint64_t m_lifeRoundNum;
                    bool m_lifeRoundNumHasBeenSet;

                    /**
                     * Time zone.
Time zone. specifies the time zone. the default value is UTC+8.
                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                    /**
                     * Indicates the Ip address of the executor where the log is located.
                     */
                    std::string m_brokerIp;
                    bool m_brokerIpHasBeenSet;

                    /**
                     * Log file.
When executionJobId in instance details is empty but originFileName is not empty, originFileName and brokerIp must be included in the input parameters.
If both executionJobId and originFileName are empty, it indicates that the instance has not been dispatched for execution or has not generated logs. for example, branch node or merge node.
                     */
                    std::string m_originFileName;
                    bool m_originFileNameHasBeenSet;

                    /**
                     * **Execution ID**.

When executionJobId in instance details is not empty, executionJobId needs to be included in the input parameters. originFileName and brokerIp are not required parameters.
                     */
                    std::string m_executionJobId;
                    bool m_executionJobIdHasBeenSet;

                    /**
                     * Log level.
Default All.

- Info
- Debug
- Warn
- Error
- All
                     */
                    std::string m_logLevel;
                    bool m_logLevelHasBeenSet;

                    /**
                     * Start row number for obtaining logs.
The default is 1.
                     */
                    uint64_t m_startLineNum;
                    bool m_startLineNumHasBeenSet;

                    /**
                     * End line number for obtaining logs.
The default value is 10000.
                     */
                    uint64_t m_endLineCount;
                    bool m_endLineCountHasBeenSet;

                    /**
                     * Used when performing a paging query for logs. it has no specific business meaning.

Specifies that the value is null for the first query. 
Use the ExtInfo field value in the returned information from the previous query for the second and subsequent queries.
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_GETINSTANCELOGREQUEST_H_
