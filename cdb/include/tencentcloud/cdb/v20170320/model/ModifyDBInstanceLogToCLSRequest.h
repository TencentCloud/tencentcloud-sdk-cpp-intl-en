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
#include <tencentcloud/cdb/v20170320/model/TagInfoItem.h>


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
                     * 获取<p>Instance ID, which can be obtained through the <a href="https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1">DescribeDBInstances</a> API.</p>
                     * @return InstanceId <p>Instance ID, which can be obtained through the <a href="https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1">DescribeDBInstances</a> API.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID, which can be obtained through the <a href="https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1">DescribeDBInstances</a> API.</p>
                     * @param _instanceId <p>Instance ID, which can be obtained through the <a href="https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1">DescribeDBInstances</a> API.</p>
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
                     * 获取<p>Log type. Error: error log, slowlog: slow log.</p>
                     * @return LogType <p>Log type. Error: error log, slowlog: slow log.</p>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>Log type. Error: error log, slowlog: slow log.</p>
                     * @param _logType <p>Log type. Error: error log, slowlog: slow log.</p>
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
                     * 获取<p>Delivery status. ON: enabled, OFF: disabled.</p>
                     * @return Status <p>Delivery status. ON: enabled, OFF: disabled.</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Delivery status. ON: enabled, OFF: disabled.</p>
                     * @param _status <p>Delivery status. ON: enabled, OFF: disabled.</p>
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
                     * 获取<p>Whether required to create logset. Default to false.</p>
                     * @return CreateLogset <p>Whether required to create logset. Default to false.</p>
                     * 
                     */
                    bool GetCreateLogset() const;

                    /**
                     * 设置<p>Whether required to create logset. Default to false.</p>
                     * @param _createLogset <p>Whether required to create logset. Default to false.</p>
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
                     * 获取<p>Logset name when creating a logset; logset ID when selecting an existing logset. Empty by default.<br>Description: When the Status parameter is ON, either the Logset or LogTopic parameter must be filled.</p>
                     * @return Logset <p>Logset name when creating a logset; logset ID when selecting an existing logset. Empty by default.<br>Description: When the Status parameter is ON, either the Logset or LogTopic parameter must be filled.</p>
                     * 
                     */
                    std::string GetLogset() const;

                    /**
                     * 设置<p>Logset name when creating a logset; logset ID when selecting an existing logset. Empty by default.<br>Description: When the Status parameter is ON, either the Logset or LogTopic parameter must be filled.</p>
                     * @param _logset <p>Logset name when creating a logset; logset ID when selecting an existing logset. Empty by default.<br>Description: When the Status parameter is ON, either the Logset or LogTopic parameter must be filled.</p>
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
                     * 获取<p>Whether required to create log topic. Default to false.</p>
                     * @return CreateLogTopic <p>Whether required to create log topic. Default to false.</p>
                     * 
                     */
                    bool GetCreateLogTopic() const;

                    /**
                     * 设置<p>Whether required to create log topic. Default to false.</p>
                     * @param _createLogTopic <p>Whether required to create log topic. Default to false.</p>
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
                     * 获取<p>Enter a log topic name when creating a log topic, or enter a log topic ID when selecting an existing log topic. Empty by default.<br>Description: When the Status parameter is set to ON, either the Logset or LogTopic parameter must be specified.</p>
                     * @return LogTopic <p>Enter a log topic name when creating a log topic, or enter a log topic ID when selecting an existing log topic. Empty by default.<br>Description: When the Status parameter is set to ON, either the Logset or LogTopic parameter must be specified.</p>
                     * 
                     */
                    std::string GetLogTopic() const;

                    /**
                     * 设置<p>Enter a log topic name when creating a log topic, or enter a log topic ID when selecting an existing log topic. Empty by default.<br>Description: When the Status parameter is set to ON, either the Logset or LogTopic parameter must be specified.</p>
                     * @param _logTopic <p>Enter a log topic name when creating a log topic, or enter a log topic ID when selecting an existing log topic. Empty by default.<br>Description: When the Status parameter is set to ON, either the Logset or LogTopic parameter must be specified.</p>
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
                     * 获取<p>Valid period of the log topic. Default value: 30 days if left empty. Maximum value: 3600 days.</p>
                     * @return Period <p>Valid period of the log topic. Default value: 30 days if left empty. Maximum value: 3600 days.</p>
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置<p>Valid period of the log topic. Default value: 30 days if left empty. Maximum value: 3600 days.</p>
                     * @param _period <p>Valid period of the log topic. Default value: 30 days if left empty. Maximum value: 3600 days.</p>
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
                     * 获取<p>Whether to create an index when creating a log topic. Defaults to false.</p>
                     * @return CreateIndex <p>Whether to create an index when creating a log topic. Defaults to false.</p>
                     * 
                     */
                    bool GetCreateIndex() const;

                    /**
                     * 设置<p>Whether to create an index when creating a log topic. Defaults to false.</p>
                     * @param _createIndex <p>Whether to create an index when creating a log topic. Defaults to false.</p>
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
                     * 获取<p>CLS region. If left empty, it defaults to the Region parameter value.</p>
                     * @return ClsRegion <p>CLS region. If left empty, it defaults to the Region parameter value.</p>
                     * 
                     */
                    std::string GetClsRegion() const;

                    /**
                     * 设置<p>CLS region. If left empty, it defaults to the Region parameter value.</p>
                     * @param _clsRegion <p>CLS region. If left empty, it defaults to the Region parameter value.</p>
                     * 
                     */
                    void SetClsRegion(const std::string& _clsRegion);

                    /**
                     * 判断参数 ClsRegion 是否已赋值
                     * @return ClsRegion 是否已赋值
                     * 
                     */
                    bool ClsRegionHasBeenSet() const;

                    /**
                     * 获取<p>Selectable when creating a log topic. Cannot exceed 10 tags</p>
                     * @return ResourceTags <p>Selectable when creating a log topic. Cannot exceed 10 tags</p>
                     * 
                     */
                    std::vector<TagInfoItem> GetResourceTags() const;

                    /**
                     * 设置<p>Selectable when creating a log topic. Cannot exceed 10 tags</p>
                     * @param _resourceTags <p>Selectable when creating a log topic. Cannot exceed 10 tags</p>
                     * 
                     */
                    void SetResourceTags(const std::vector<TagInfoItem>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID, which can be obtained through the <a href="https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1">DescribeDBInstances</a> API.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Log type. Error: error log, slowlog: slow log.</p>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>Delivery status. ON: enabled, OFF: disabled.</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Whether required to create logset. Default to false.</p>
                     */
                    bool m_createLogset;
                    bool m_createLogsetHasBeenSet;

                    /**
                     * <p>Logset name when creating a logset; logset ID when selecting an existing logset. Empty by default.<br>Description: When the Status parameter is ON, either the Logset or LogTopic parameter must be filled.</p>
                     */
                    std::string m_logset;
                    bool m_logsetHasBeenSet;

                    /**
                     * <p>Whether required to create log topic. Default to false.</p>
                     */
                    bool m_createLogTopic;
                    bool m_createLogTopicHasBeenSet;

                    /**
                     * <p>Enter a log topic name when creating a log topic, or enter a log topic ID when selecting an existing log topic. Empty by default.<br>Description: When the Status parameter is set to ON, either the Logset or LogTopic parameter must be specified.</p>
                     */
                    std::string m_logTopic;
                    bool m_logTopicHasBeenSet;

                    /**
                     * <p>Valid period of the log topic. Default value: 30 days if left empty. Maximum value: 3600 days.</p>
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>Whether to create an index when creating a log topic. Defaults to false.</p>
                     */
                    bool m_createIndex;
                    bool m_createIndexHasBeenSet;

                    /**
                     * <p>CLS region. If left empty, it defaults to the Region parameter value.</p>
                     */
                    std::string m_clsRegion;
                    bool m_clsRegionHasBeenSet;

                    /**
                     * <p>Selectable when creating a log topic. Cannot exceed 10 tags</p>
                     */
                    std::vector<TagInfoItem> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYDBINSTANCELOGTOCLSREQUEST_H_
