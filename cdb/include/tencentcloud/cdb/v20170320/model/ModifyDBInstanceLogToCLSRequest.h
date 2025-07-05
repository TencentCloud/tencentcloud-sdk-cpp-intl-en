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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYDBINSTANCELOGTOCLSREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYDBINSTANCELOGTOCLSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyDBInstanceLogToCLS request structure.
                */
                class ModifyDBInstanceLogToCLSRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceLogToCLSRequest();
                    ~ModifyDBInstanceLogToCLSRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
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
                     * 获取Log type. Valid values: error and slowLog.
                     * @return LogType Log type. Valid values: error and slowLog.
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置Log type. Valid values: error and slowLog.
                     * @param _logType Log type. Valid values: error and slowLog.
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取Enabling status. Valid values: ON and OFF.
                     * @return Status Enabling status. Valid values: ON and OFF.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Enabling status. Valid values: ON and OFF.
                     * @param _status Enabling status. Valid values: ON and OFF.
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
                     * 获取Indicates whether a log set needs to be created.
                     * @return CreateLogset Indicates whether a log set needs to be created.
                     * 
                     */
                    bool GetCreateLogset() const;

                    /**
                     * 设置Indicates whether a log set needs to be created.
                     * @param _createLogset Indicates whether a log set needs to be created.
                     * 
                     */
                    void SetCreateLogset(const bool& _createLogset);

                    /**
                     * 判断参数 CreateLogset 是否已赋值
                     * @return CreateLogset 是否已赋值
                     * 
                     */
                    bool CreateLogsetHasBeenSet() const;

                    /**
                     * 获取Log set name if the log set is to be created or ID of the selected existing log set.
                     * @return Logset Log set name if the log set is to be created or ID of the selected existing log set.
                     * 
                     */
                    std::string GetLogset() const;

                    /**
                     * 设置Log set name if the log set is to be created or ID of the selected existing log set.
                     * @param _logset Log set name if the log set is to be created or ID of the selected existing log set.
                     * 
                     */
                    void SetLogset(const std::string& _logset);

                    /**
                     * 判断参数 Logset 是否已赋值
                     * @return Logset 是否已赋值
                     * 
                     */
                    bool LogsetHasBeenSet() const;

                    /**
                     * 获取Indicates whether a log topic needs to be created.
                     * @return CreateLogTopic Indicates whether a log topic needs to be created.
                     * 
                     */
                    bool GetCreateLogTopic() const;

                    /**
                     * 设置Indicates whether a log topic needs to be created.
                     * @param _createLogTopic Indicates whether a log topic needs to be created.
                     * 
                     */
                    void SetCreateLogTopic(const bool& _createLogTopic);

                    /**
                     * 判断参数 CreateLogTopic 是否已赋值
                     * @return CreateLogTopic 是否已赋值
                     * 
                     */
                    bool CreateLogTopicHasBeenSet() const;

                    /**
                     * 获取Log topic name if the topic is to be created or ID of the selected existing topic.
                     * @return LogTopic Log topic name if the topic is to be created or ID of the selected existing topic.
                     * 
                     */
                    std::string GetLogTopic() const;

                    /**
                     * 设置Log topic name if the topic is to be created or ID of the selected existing topic.
                     * @param _logTopic Log topic name if the topic is to be created or ID of the selected existing topic.
                     * 
                     */
                    void SetLogTopic(const std::string& _logTopic);

                    /**
                     * 判断参数 LogTopic 是否已赋值
                     * @return LogTopic 是否已赋值
                     * 
                     */
                    bool LogTopicHasBeenSet() const;

                    /**
                     * 获取Log topic validity period, which is 30 days by default if not specified.
                     * @return Period Log topic validity period, which is 30 days by default if not specified.
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Log topic validity period, which is 30 days by default if not specified.
                     * @param _period Log topic validity period, which is 30 days by default if not specified.
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Indicates whether to create an index when creating the log topic.
                     * @return CreateIndex Indicates whether to create an index when creating the log topic.
                     * 
                     */
                    bool GetCreateIndex() const;

                    /**
                     * 设置Indicates whether to create an index when creating the log topic.
                     * @param _createIndex Indicates whether to create an index when creating the log topic.
                     * 
                     */
                    void SetCreateIndex(const bool& _createIndex);

                    /**
                     * 判断参数 CreateIndex 是否已赋值
                     * @return CreateIndex 是否已赋值
                     * 
                     */
                    bool CreateIndexHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Log type. Valid values: error and slowLog.
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * Enabling status. Valid values: ON and OFF.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Indicates whether a log set needs to be created.
                     */
                    bool m_createLogset;
                    bool m_createLogsetHasBeenSet;

                    /**
                     * Log set name if the log set is to be created or ID of the selected existing log set.
                     */
                    std::string m_logset;
                    bool m_logsetHasBeenSet;

                    /**
                     * Indicates whether a log topic needs to be created.
                     */
                    bool m_createLogTopic;
                    bool m_createLogTopicHasBeenSet;

                    /**
                     * Log topic name if the topic is to be created or ID of the selected existing topic.
                     */
                    std::string m_logTopic;
                    bool m_logTopicHasBeenSet;

                    /**
                     * Log topic validity period, which is 30 days by default if not specified.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Indicates whether to create an index when creating the log topic.
                     */
                    bool m_createIndex;
                    bool m_createIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYDBINSTANCELOGTOCLSREQUEST_H_
