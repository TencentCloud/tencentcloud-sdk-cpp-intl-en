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
                     * 获取Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * @return InstanceId Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * @param _instanceId Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
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
                     * 获取Log type. error: error log. slowlog: slow log.
                     * @return LogType Log type. error: error log. slowlog: slow log.
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置Log type. error: error log. slowlog: slow log.
                     * @param _logType Log type. error: error log. slowlog: slow log.
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
                     * 获取Delivery status. ON: Enabled, OFF: Disabled.
                     * @return Status Delivery status. ON: Enabled, OFF: Disabled.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Delivery status. ON: Enabled, OFF: Disabled.
                     * @param _status Delivery status. ON: Enabled, OFF: Disabled.
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
                     * 获取Whether required to create logset. Default to false.
                     * @return CreateLogset Whether required to create logset. Default to false.
                     * 
                     */
                    bool GetCreateLogset() const;

                    /**
                     * 设置Whether required to create logset. Default to false.
                     * @param _createLogset Whether required to create logset. Default to false.
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
                     * 获取Logset name when creating a logset; logset ID when selecting an existing log set. Empty by default.
Description: When the parameter Status is set to ON, you must fill in either the Logset or LogTopic parameter.
                     * @return Logset Logset name when creating a logset; logset ID when selecting an existing log set. Empty by default.
Description: When the parameter Status is set to ON, you must fill in either the Logset or LogTopic parameter.
                     * 
                     */
                    std::string GetLogset() const;

                    /**
                     * 设置Logset name when creating a logset; logset ID when selecting an existing log set. Empty by default.
Description: When the parameter Status is set to ON, you must fill in either the Logset or LogTopic parameter.
                     * @param _logset Logset name when creating a logset; logset ID when selecting an existing log set. Empty by default.
Description: When the parameter Status is set to ON, you must fill in either the Logset or LogTopic parameter.
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
                     * 获取Whether required to create log topic. Default to false.
                     * @return CreateLogTopic Whether required to create log topic. Default to false.
                     * 
                     */
                    bool GetCreateLogTopic() const;

                    /**
                     * 设置Whether required to create log topic. Default to false.
                     * @param _createLogTopic Whether required to create log topic. Default to false.
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
                     * 获取Log topic name when creating a log topic; log topic ID when selecting an existing log topic. Empty by default.
Description: When the parameter Status is set to ON, you must fill in either the Logset or LogTopic parameter.
                     * @return LogTopic Log topic name when creating a log topic; log topic ID when selecting an existing log topic. Empty by default.
Description: When the parameter Status is set to ON, you must fill in either the Logset or LogTopic parameter.
                     * 
                     */
                    std::string GetLogTopic() const;

                    /**
                     * 设置Log topic name when creating a log topic; log topic ID when selecting an existing log topic. Empty by default.
Description: When the parameter Status is set to ON, you must fill in either the Logset or LogTopic parameter.
                     * @param _logTopic Log topic name when creating a log topic; log topic ID when selecting an existing log topic. Empty by default.
Description: When the parameter Status is set to ON, you must fill in either the Logset or LogTopic parameter.
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
                     * 获取Log topic valid period. Default value: 30 days if left empty. Maximum value: 3600.
                     * @return Period Log topic valid period. Default value: 30 days if left empty. Maximum value: 3600.
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Log topic valid period. Default value: 30 days if left empty. Maximum value: 3600.
                     * @param _period Log topic valid period. Default value: 30 days if left empty. Maximum value: 3600.
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
                     * 获取Whether to create an index when creating a log topic. Default to false.
                     * @return CreateIndex Whether to create an index when creating a log topic. Default to false.
                     * 
                     */
                    bool GetCreateIndex() const;

                    /**
                     * 设置Whether to create an index when creating a log topic. Default to false.
                     * @param _createIndex Whether to create an index when creating a log topic. Default to false.
                     * 
                     */
                    void SetCreateIndex(const bool& _createIndex);

                    /**
                     * 判断参数 CreateIndex 是否已赋值
                     * @return CreateIndex 是否已赋值
                     * 
                     */
                    bool CreateIndexHasBeenSet() const;

                    /**
                     * 获取The region of CLS. If left empty, it defaults to the parameter value of Region.
                     * @return ClsRegion The region of CLS. If left empty, it defaults to the parameter value of Region.
                     * 
                     */
                    std::string GetClsRegion() const;

                    /**
                     * 设置The region of CLS. If left empty, it defaults to the parameter value of Region.
                     * @param _clsRegion The region of CLS. If left empty, it defaults to the parameter value of Region.
                     * 
                     */
                    void SetClsRegion(const std::string& _clsRegion);

                    /**
                     * 判断参数 ClsRegion 是否已赋值
                     * @return ClsRegion 是否已赋值
                     * 
                     */
                    bool ClsRegionHasBeenSet() const;

                private:

                    /**
                     * Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Log type. error: error log. slowlog: slow log.
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * Delivery status. ON: Enabled, OFF: Disabled.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Whether required to create logset. Default to false.
                     */
                    bool m_createLogset;
                    bool m_createLogsetHasBeenSet;

                    /**
                     * Logset name when creating a logset; logset ID when selecting an existing log set. Empty by default.
Description: When the parameter Status is set to ON, you must fill in either the Logset or LogTopic parameter.
                     */
                    std::string m_logset;
                    bool m_logsetHasBeenSet;

                    /**
                     * Whether required to create log topic. Default to false.
                     */
                    bool m_createLogTopic;
                    bool m_createLogTopicHasBeenSet;

                    /**
                     * Log topic name when creating a log topic; log topic ID when selecting an existing log topic. Empty by default.
Description: When the parameter Status is set to ON, you must fill in either the Logset or LogTopic parameter.
                     */
                    std::string m_logTopic;
                    bool m_logTopicHasBeenSet;

                    /**
                     * Log topic valid period. Default value: 30 days if left empty. Maximum value: 3600.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Whether to create an index when creating a log topic. Default to false.
                     */
                    bool m_createIndex;
                    bool m_createIndexHasBeenSet;

                    /**
                     * The region of CLS. If left empty, it defaults to the parameter value of Region.
                     */
                    std::string m_clsRegion;
                    bool m_clsRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYDBINSTANCELOGTOCLSREQUEST_H_
