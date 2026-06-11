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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_SPLUNKDELIVERINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_SPLUNKDELIVERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/NetInfo.h>
#include <tencentcloud/cls/v20201016/model/MetadataInfo.h>
#include <tencentcloud/cls/v20201016/model/ExternalRole.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Delivery task information of Splunk
                */
                class SplunkDeliverInfo : public AbstractModel
                {
                public:
                    SplunkDeliverInfo();
                    ~SplunkDeliverInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Task ID.</p>
                     * @return TaskId <p>Task ID.</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>Task ID.</p>
                     * @param _taskId <p>Task ID.</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>Task Name</p>
                     * @return Name <p>Task Name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Task Name</p>
                     * @param _name <p>Task Name</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>User id</p>
                     * @return Uin <p>User id</p>
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置<p>User id</p>
                     * @param _uin <p>User id</p>
                     * 
                     */
                    void SetUin(const uint64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>Log topic id</p>
                     * @return TopicId <p>Log topic id</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>Log topic id</p>
                     * @param _topicId <p>Log topic id</p>
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取<p>Task status; 1. Running; 2. Suspended; 3. Exception</p>
                     * @return Status <p>Task status; 1. Running; 2. Suspended; 3. Exception</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Task status; 1. Running; 2. Suspended; 3. Exception</p>
                     * @param _status <p>Task status; 1. Running; 2. Suspended; 3. Exception</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Enable status; 0: Disabled; 1: Enabled</p>
                     * @return Enable <p>Enable status; 0: Disabled; 1: Enabled</p>
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置<p>Enable status; 0: Disabled; 1: Enabled</p>
                     * @param _enable <p>Enable status; 0: Disabled; 1: Enabled</p>
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>Creation time; unit: second</p>
                     * @return CreateTime <p>Creation time; unit: second</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>Creation time; unit: second</p>
                     * @param _createTime <p>Creation time; unit: second</p>
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Update time; Unit: seconds</p>
                     * @return UpdateTime <p>Update time; Unit: seconds</p>
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置<p>Update time; Unit: seconds</p>
                     * @param _updateTime <p>Update time; Unit: seconds</p>
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>splunk delivery task - target configuration</p>
                     * @return NetInfo <p>splunk delivery task - target configuration</p>
                     * 
                     */
                    NetInfo GetNetInfo() const;

                    /**
                     * 设置<p>splunk delivery task - target configuration</p>
                     * @param _netInfo <p>splunk delivery task - target configuration</p>
                     * 
                     */
                    void SetNetInfo(const NetInfo& _netInfo);

                    /**
                     * 判断参数 NetInfo 是否已赋值
                     * @return NetInfo 是否已赋值
                     * 
                     */
                    bool NetInfoHasBeenSet() const;

                    /**
                     * 获取<p>splunk delivery task meta-information</p>
                     * @return Metadata <p>splunk delivery task meta-information</p>
                     * 
                     */
                    MetadataInfo GetMetadata() const;

                    /**
                     * 设置<p>splunk delivery task meta-information</p>
                     * @param _metadata <p>splunk delivery task meta-information</p>
                     * 
                     */
                    void SetMetadata(const MetadataInfo& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable service logs; 1: disable; 2: enable</p>
                     * @return HasServiceLog <p>Whether to enable service logs; 1: disable; 2: enable</p>
                     * 
                     */
                    int64_t GetHasServiceLog() const;

                    /**
                     * 设置<p>Whether to enable service logs; 1: disable; 2: enable</p>
                     * @param _hasServiceLog <p>Whether to enable service logs; 1: disable; 2: enable</p>
                     * 
                     */
                    void SetHasServiceLog(const int64_t& _hasServiceLog);

                    /**
                     * 判断参数 HasServiceLog 是否已赋值
                     * @return HasServiceLog 是否已赋值
                     * 
                     */
                    bool HasServiceLogHasBeenSet() const;

                    /**
                     * 获取<p>Advanced configuration - data source;</p>
                     * @return Source <p>Advanced configuration - data source;</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>Advanced configuration - data source;</p>
                     * @param _source <p>Advanced configuration - data source;</p>
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>Advanced configuration - data source type;</p>
                     * @return SourceType <p>Advanced configuration - data source type;</p>
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置<p>Advanced configuration - data source type;</p>
                     * @param _sourceType <p>Advanced configuration - data source type;</p>
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Advanced configuration - Splunk write indexes</p>
                     * @return Index <p>Advanced configuration - Splunk write indexes</p>
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置<p>Advanced configuration - Splunk write indexes</p>
                     * @param _index <p>Advanced configuration - Splunk write indexes</p>
                     * 
                     */
                    void SetIndex(const std::string& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取<p>Advanced configuration - Whether to enable indexer; 1 - not enabled; 2 - enable;</p>
                     * @return IndexAck <p>Advanced configuration - Whether to enable indexer; 1 - not enabled; 2 - enable;</p>
                     * 
                     */
                    int64_t GetIndexAck() const;

                    /**
                     * 设置<p>Advanced configuration - Whether to enable indexer; 1 - not enabled; 2 - enable;</p>
                     * @param _indexAck <p>Advanced configuration - Whether to enable indexer; 1 - not enabled; 2 - enable;</p>
                     * 
                     */
                    void SetIndexAck(const int64_t& _indexAck);

                    /**
                     * 判断参数 IndexAck 是否已赋值
                     * @return IndexAck 是否已赋值
                     * 
                     */
                    bool IndexAckHasBeenSet() const;

                    /**
                     * 获取<p>Advanced configuration - Channel</p>
                     * @return Channel <p>Advanced configuration - Channel</p>
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置<p>Advanced configuration - Channel</p>
                     * @param _channel <p>Advanced configuration - Channel</p>
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取<p>Pre-filtering process - perform pre-filtering statements on original data written to Splunk</p>
                     * @return DSLFilter <p>Pre-filtering process - perform pre-filtering statements on original data written to Splunk</p>
                     * 
                     */
                    std::string GetDSLFilter() const;

                    /**
                     * 设置<p>Pre-filtering process - perform pre-filtering statements on original data written to Splunk</p>
                     * @param _dSLFilter <p>Pre-filtering process - perform pre-filtering statements on original data written to Splunk</p>
                     * 
                     */
                    void SetDSLFilter(const std::string& _dSLFilter);

                    /**
                     * 判断参数 DSLFilter 是否已赋值
                     * @return DSLFilter 是否已赋值
                     * 
                     */
                    bool DSLFilterHasBeenSet() const;

                    /**
                     * 获取<p>Advanced configuration - Cross-account delivery parameter</p>
                     * @return ExternalRole <p>Advanced configuration - Cross-account delivery parameter</p>
                     * 
                     */
                    ExternalRole GetExternalRole() const;

                    /**
                     * 设置<p>Advanced configuration - Cross-account delivery parameter</p>
                     * @param _externalRole <p>Advanced configuration - Cross-account delivery parameter</p>
                     * 
                     */
                    void SetExternalRole(const ExternalRole& _externalRole);

                    /**
                     * 判断参数 ExternalRole 是否已赋值
                     * @return ExternalRole 是否已赋值
                     * 
                     */
                    bool ExternalRoleHasBeenSet() const;

                private:

                    /**
                     * <p>Task ID.</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>Task Name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>User id</p>
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>Log topic id</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>Task status; 1. Running; 2. Suspended; 3. Exception</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Enable status; 0: Disabled; 1: Enabled</p>
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>Creation time; unit: second</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Update time; Unit: seconds</p>
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>splunk delivery task - target configuration</p>
                     */
                    NetInfo m_netInfo;
                    bool m_netInfoHasBeenSet;

                    /**
                     * <p>splunk delivery task meta-information</p>
                     */
                    MetadataInfo m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * <p>Whether to enable service logs; 1: disable; 2: enable</p>
                     */
                    int64_t m_hasServiceLog;
                    bool m_hasServiceLogHasBeenSet;

                    /**
                     * <p>Advanced configuration - data source;</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>Advanced configuration - data source type;</p>
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * <p>Advanced configuration - Splunk write indexes</p>
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * <p>Advanced configuration - Whether to enable indexer; 1 - not enabled; 2 - enable;</p>
                     */
                    int64_t m_indexAck;
                    bool m_indexAckHasBeenSet;

                    /**
                     * <p>Advanced configuration - Channel</p>
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * <p>Pre-filtering process - perform pre-filtering statements on original data written to Splunk</p>
                     */
                    std::string m_dSLFilter;
                    bool m_dSLFilterHasBeenSet;

                    /**
                     * <p>Advanced configuration - Cross-account delivery parameter</p>
                     */
                    ExternalRole m_externalRole;
                    bool m_externalRoleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SPLUNKDELIVERINFO_H_
