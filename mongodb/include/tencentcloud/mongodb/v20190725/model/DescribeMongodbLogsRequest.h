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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEMONGODBLOGSREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEMONGODBLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeMongodbLogs request structure.
                */
                class DescribeMongodbLogsRequest : public AbstractModel
                {
                public:
                    DescribeMongodbLogsRequest();
                    ~DescribeMongodbLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb#/), and copy the instance ID from the instance list.
                     * @return InstanceId Instance ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb#/), and copy the instance ID from the instance list.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb#/), and copy the instance ID from the instance list.
                     * @param _instanceId Instance ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb#/), and copy the instance ID from the instance list.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Start time for querying logs.
- Format: yyyy-mm-dd hh:mm:ss. For example, 2019-06-01 10:00:00.
- Query time range: Only log data within the last 7 days can be queried.
                     * @return StartTime Start time for querying logs.
- Format: yyyy-mm-dd hh:mm:ss. For example, 2019-06-01 10:00:00.
- Query time range: Only log data within the last 7 days can be queried.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time for querying logs.
- Format: yyyy-mm-dd hh:mm:ss. For example, 2019-06-01 10:00:00.
- Query time range: Only log data within the last 7 days can be queried.
                     * @param _startTime Start time for querying logs.
- Format: yyyy-mm-dd hh:mm:ss. For example, 2019-06-01 10:00:00.
- Query time range: Only log data within the last 7 days can be queried.
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
                     * 获取End time for querying logs.
- Format: yyyy-mm-dd hh:mm:ss. For example, 2019-06-01 10:00:00.
- Query time range: Only log data within the last 7 days can be queried.
                     * @return EndTime End time for querying logs.
- Format: yyyy-mm-dd hh:mm:ss. For example, 2019-06-01 10:00:00.
- Query time range: Only log data within the last 7 days can be queried.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time for querying logs.
- Format: yyyy-mm-dd hh:mm:ss. For example, 2019-06-01 10:00:00.
- Query time range: Only log data within the last 7 days can be queried.
                     * @param _endTime End time for querying logs.
- Format: yyyy-mm-dd hh:mm:ss. For example, 2019-06-01 10:00:00.
- Query time range: Only log data within the last 7 days can be queried.
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
                     * 获取Node ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and go to the **Node Management** page to obtain the ID of the node to be queried.
                     * @return NodeNames Node ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and go to the **Node Management** page to obtain the ID of the node to be queried.
                     * 
                     */
                    std::vector<std::string> GetNodeNames() const;

                    /**
                     * 设置Node ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and go to the **Node Management** page to obtain the ID of the node to be queried.
                     * @param _nodeNames Node ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and go to the **Node Management** page to obtain the ID of the node to be queried.
                     * 
                     */
                    void SetNodeNames(const std::vector<std::string>& _nodeNames);

                    /**
                     * 判断参数 NodeNames 是否已赋值
                     * @return NodeNames 是否已赋值
                     * 
                     */
                    bool NodeNamesHasBeenSet() const;

                    /**
                     * 获取Log category.
- Log categories include but are not limited to COMMAND, ACCESS, CONTROL, FTDC, INDEX, NETWORK, QUERY, REPL, SHARDING, STORAGE, RECOVERY, JOURNAL, and WRITE. The specific supported categories may vary depending on the MongoDB version. For details, see Log Messages (https://www.mongodb.com/zh-cn/docs/v5.0/reference/log-messages/#log-message-examples).
- Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and view the **log category** on the **Error Log** tab of the **Log Management** page.
                     * @return LogComponents Log category.
- Log categories include but are not limited to COMMAND, ACCESS, CONTROL, FTDC, INDEX, NETWORK, QUERY, REPL, SHARDING, STORAGE, RECOVERY, JOURNAL, and WRITE. The specific supported categories may vary depending on the MongoDB version. For details, see Log Messages (https://www.mongodb.com/zh-cn/docs/v5.0/reference/log-messages/#log-message-examples).
- Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and view the **log category** on the **Error Log** tab of the **Log Management** page.
                     * 
                     */
                    std::vector<std::string> GetLogComponents() const;

                    /**
                     * 设置Log category.
- Log categories include but are not limited to COMMAND, ACCESS, CONTROL, FTDC, INDEX, NETWORK, QUERY, REPL, SHARDING, STORAGE, RECOVERY, JOURNAL, and WRITE. The specific supported categories may vary depending on the MongoDB version. For details, see Log Messages (https://www.mongodb.com/zh-cn/docs/v5.0/reference/log-messages/#log-message-examples).
- Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and view the **log category** on the **Error Log** tab of the **Log Management** page.
                     * @param _logComponents Log category.
- Log categories include but are not limited to COMMAND, ACCESS, CONTROL, FTDC, INDEX, NETWORK, QUERY, REPL, SHARDING, STORAGE, RECOVERY, JOURNAL, and WRITE. The specific supported categories may vary depending on the MongoDB version. For details, see Log Messages (https://www.mongodb.com/zh-cn/docs/v5.0/reference/log-messages/#log-message-examples).
- Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and view the **log category** on the **Error Log** tab of the **Log Management** page.
                     * 
                     */
                    void SetLogComponents(const std::vector<std::string>& _logComponents);

                    /**
                     * 判断参数 LogComponents 是否已赋值
                     * @return LogComponents 是否已赋值
                     * 
                     */
                    bool LogComponentsHasBeenSet() const;

                    /**
                     * 获取Log level.
- The log levels are ranked by severity from high to low: FATAL, ERROR, and WARNING.
-Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and view the **log level** on the **Error Log** tab of the **Log Management** page.
                     * @return LogLevels Log level.
- The log levels are ranked by severity from high to low: FATAL, ERROR, and WARNING.
-Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and view the **log level** on the **Error Log** tab of the **Log Management** page.
                     * 
                     */
                    std::vector<std::string> GetLogLevels() const;

                    /**
                     * 设置Log level.
- The log levels are ranked by severity from high to low: FATAL, ERROR, and WARNING.
-Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and view the **log level** on the **Error Log** tab of the **Log Management** page.
                     * @param _logLevels Log level.
- The log levels are ranked by severity from high to low: FATAL, ERROR, and WARNING.
-Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and view the **log level** on the **Error Log** tab of the **Log Management** page.
                     * 
                     */
                    void SetLogLevels(const std::vector<std::string>& _logLevels);

                    /**
                     * 判断参数 LogLevels 是否已赋值
                     * @return LogLevels 是否已赋值
                     * 
                     */
                    bool LogLevelsHasBeenSet() const;

                    /**
                     * 获取Log ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and view the **log ID** on the **Error Log** tab of the **Log Management** page.
                     * @return LogIds Log ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and view the **log ID** on the **Error Log** tab of the **Log Management** page.
                     * 
                     */
                    std::vector<std::string> GetLogIds() const;

                    /**
                     * 设置Log ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and view the **log ID** on the **Error Log** tab of the **Log Management** page.
                     * @param _logIds Log ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and view the **log ID** on the **Error Log** tab of the **Log Management** page.
                     * 
                     */
                    void SetLogIds(const std::vector<std::string>& _logIds);

                    /**
                     * 判断参数 LogIds 是否已赋值
                     * @return LogIds 是否已赋值
                     * 
                     */
                    bool LogIdsHasBeenSet() const;

                    /**
                     * 获取Log connection information. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and view the **log connection information** on the **Error Log** tab of the **Log Management** page.
                     * @return LogConnections Log connection information. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and view the **log connection information** on the **Error Log** tab of the **Log Management** page.
                     * 
                     */
                    std::vector<std::string> GetLogConnections() const;

                    /**
                     * 设置Log connection information. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and view the **log connection information** on the **Error Log** tab of the **Log Management** page.
                     * @param _logConnections Log connection information. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and view the **log connection information** on the **Error Log** tab of the **Log Management** page.
                     * 
                     */
                    void SetLogConnections(const std::vector<std::string>& _logConnections);

                    /**
                     * 判断参数 LogConnections 是否已赋值
                     * @return LogConnections 是否已赋值
                     * 
                     */
                    bool LogConnectionsHasBeenSet() const;

                    /**
                     * 获取Specifies the field for filtering the logs.
                     * @return LogDetailParams Specifies the field for filtering the logs.
                     * 
                     */
                    std::vector<std::string> GetLogDetailParams() const;

                    /**
                     * 设置Specifies the field for filtering the logs.
                     * @param _logDetailParams Specifies the field for filtering the logs.
                     * 
                     */
                    void SetLogDetailParams(const std::vector<std::string>& _logDetailParams);

                    /**
                     * 判断参数 LogDetailParams 是否已赋值
                     * @return LogDetailParams 是否已赋值
                     * 
                     */
                    bool LogDetailParamsHasBeenSet() const;

                    /**
                     * 获取Offset. The minimum value is 0, and the maximum value is 10000. The default value is 0.
                     * @return Offset Offset. The minimum value is 0, and the maximum value is 10000. The default value is 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. The minimum value is 0, and the maximum value is 10000. The default value is 0.
                     * @param _offset Offset. The minimum value is 0, and the maximum value is 10000. The default value is 0.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Pagination size. The minimum value is 1, and the maximum value is 100. The default value is 20.
                     * @return Limit Pagination size. The minimum value is 1, and the maximum value is 100. The default value is 20.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination size. The minimum value is 1, and the maximum value is 100. The default value is 20.
                     * @param _limit Pagination size. The minimum value is 1, and the maximum value is 100. The default value is 20.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Instance ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb#/), and copy the instance ID from the instance list.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Start time for querying logs.
- Format: yyyy-mm-dd hh:mm:ss. For example, 2019-06-01 10:00:00.
- Query time range: Only log data within the last 7 days can be queried.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time for querying logs.
- Format: yyyy-mm-dd hh:mm:ss. For example, 2019-06-01 10:00:00.
- Query time range: Only log data within the last 7 days can be queried.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Node ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and go to the **Node Management** page to obtain the ID of the node to be queried.
                     */
                    std::vector<std::string> m_nodeNames;
                    bool m_nodeNamesHasBeenSet;

                    /**
                     * Log category.
- Log categories include but are not limited to COMMAND, ACCESS, CONTROL, FTDC, INDEX, NETWORK, QUERY, REPL, SHARDING, STORAGE, RECOVERY, JOURNAL, and WRITE. The specific supported categories may vary depending on the MongoDB version. For details, see Log Messages (https://www.mongodb.com/zh-cn/docs/v5.0/reference/log-messages/#log-message-examples).
- Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and view the **log category** on the **Error Log** tab of the **Log Management** page.
                     */
                    std::vector<std::string> m_logComponents;
                    bool m_logComponentsHasBeenSet;

                    /**
                     * Log level.
- The log levels are ranked by severity from high to low: FATAL, ERROR, and WARNING.
-Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and view the **log level** on the **Error Log** tab of the **Log Management** page.
                     */
                    std::vector<std::string> m_logLevels;
                    bool m_logLevelsHasBeenSet;

                    /**
                     * Log ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and view the **log ID** on the **Error Log** tab of the **Log Management** page.
                     */
                    std::vector<std::string> m_logIds;
                    bool m_logIdsHasBeenSet;

                    /**
                     * Log connection information. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and view the **log connection information** on the **Error Log** tab of the **Log Management** page.
                     */
                    std::vector<std::string> m_logConnections;
                    bool m_logConnectionsHasBeenSet;

                    /**
                     * Specifies the field for filtering the logs.
                     */
                    std::vector<std::string> m_logDetailParams;
                    bool m_logDetailParamsHasBeenSet;

                    /**
                     * Offset. The minimum value is 0, and the maximum value is 10000. The default value is 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Pagination size. The minimum value is 1, and the maximum value is 100. The default value is 20.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEMONGODBLOGSREQUEST_H_
