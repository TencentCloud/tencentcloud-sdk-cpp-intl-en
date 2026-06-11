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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATESPLUNKDELIVERREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATESPLUNKDELIVERREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateSplunkDeliver request structure.
                */
                class CreateSplunkDeliverRequest : public AbstractModel
                {
                public:
                    CreateSplunkDeliverRequest();
                    ~CreateSplunkDeliverRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>log topic id</p><ul><li>Obtain the log topic Id through <a href="https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1">Get Log Topic List</a>.</li></ul>
                     * @return TopicId <p>log topic id</p><ul><li>Obtain the log topic Id through <a href="https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1">Get Log Topic List</a>.</li></ul>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>log topic id</p><ul><li>Obtain the log topic Id through <a href="https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1">Get Log Topic List</a>.</li></ul>
                     * @param _topicId <p>log topic id</p><ul><li>Obtain the log topic Id through <a href="https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1">Get Log Topic List</a>.</li></ul>
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
                     * 获取<p>The splunk delivery task name has the following restrictions: - Cannot be empty - Length not greater than 256 - Can only contain aA-zZ, underscore, -, 0-9</p>
                     * @return Name <p>The splunk delivery task name has the following restrictions: - Cannot be empty - Length not greater than 256 - Can only contain aA-zZ, underscore, -, 0-9</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>The splunk delivery task name has the following restrictions: - Cannot be empty - Length not greater than 256 - Can only contain aA-zZ, underscore, -, 0-9</p>
                     * @param _name <p>The splunk delivery task name has the following restrictions: - Cannot be empty - Length not greater than 256 - Can only contain aA-zZ, underscore, -, 0-9</p>
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
                     * 获取<p>Splunk delivery task - target configuration - network info</p>
                     * @return NetInfo <p>Splunk delivery task - target configuration - network info</p>
                     * 
                     */
                    NetInfo GetNetInfo() const;

                    /**
                     * 设置<p>Splunk delivery task - target configuration - network info</p>
                     * @param _netInfo <p>Splunk delivery task - target configuration - network info</p>
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
                     * 获取<p>Splunk delivery task meta information</p>
                     * @return MetadataInfo <p>Splunk delivery task meta information</p>
                     * 
                     */
                    MetadataInfo GetMetadataInfo() const;

                    /**
                     * 设置<p>Splunk delivery task meta information</p>
                     * @param _metadataInfo <p>Splunk delivery task meta information</p>
                     * 
                     */
                    void SetMetadataInfo(const MetadataInfo& _metadataInfo);

                    /**
                     * 判断参数 MetadataInfo 是否已赋值
                     * @return MetadataInfo 是否已赋值
                     * 
                     */
                    bool MetadataInfoHasBeenSet() const;

                    /**
                     * 获取<p>Whether service logs are enabled 1: Disabled; 2: Enabled; Enabled by default</p>
                     * @return HasServiceLog <p>Whether service logs are enabled 1: Disabled; 2: Enabled; Enabled by default</p>
                     * 
                     */
                    int64_t GetHasServiceLog() const;

                    /**
                     * 设置<p>Whether service logs are enabled 1: Disabled; 2: Enabled; Enabled by default</p>
                     * @param _hasServiceLog <p>Whether service logs are enabled 1: Disabled; 2: Enabled; Enabled by default</p>
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
                     * 获取<p>Advanced configuration - Whether to enable the indexer; 1 - Disable; 2 - Enable;<br>Default: 1</p>
                     * @return IndexAck <p>Advanced configuration - Whether to enable the indexer; 1 - Disable; 2 - Enable;<br>Default: 1</p>
                     * 
                     */
                    int64_t GetIndexAck() const;

                    /**
                     * 设置<p>Advanced configuration - Whether to enable the indexer; 1 - Disable; 2 - Enable;<br>Default: 1</p>
                     * @param _indexAck <p>Advanced configuration - Whether to enable the indexer; 1 - Disable; 2 - Enable;<br>Default: 1</p>
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
                     * 获取<p>Advanced configuration - data source; no more than 64 characters</p>
                     * @return Source <p>Advanced configuration - data source; no more than 64 characters</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>Advanced configuration - data source; no more than 64 characters</p>
                     * @param _source <p>Advanced configuration - data source; no more than 64 characters</p>
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
                     * 获取<p>Advanced configuration - data source type; no more than 64 characters</p>
                     * @return SourceType <p>Advanced configuration - data source type; no more than 64 characters</p>
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置<p>Advanced configuration - data source type; no more than 64 characters</p>
                     * @param _sourceType <p>Advanced configuration - data source type; no more than 64 characters</p>
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
                     * 获取<p>Advanced configuration - Indexes written to Splunk; no more than 64 characters</p>
                     * @return Index <p>Advanced configuration - Indexes written to Splunk; no more than 64 characters</p>
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置<p>Advanced configuration - Indexes written to Splunk; no more than 64 characters</p>
                     * @param _index <p>Advanced configuration - Indexes written to Splunk; no more than 64 characters</p>
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
                     * 获取<p>Advanced configuration - Channel.<br>To meet the limitation: If the indexer is enabled, then Channel is required.</p>
                     * @return Channel <p>Advanced configuration - Channel.<br>To meet the limitation: If the indexer is enabled, then Channel is required.</p>
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置<p>Advanced configuration - Channel.<br>To meet the limitation: If the indexer is enabled, then Channel is required.</p>
                     * @param _channel <p>Advanced configuration - Channel.<br>To meet the limitation: If the indexer is enabled, then Channel is required.</p>
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
                     * 获取<p>Log pre-filtering - filter out original data before writing to Splunk</p>
                     * @return DSLFilter <p>Log pre-filtering - filter out original data before writing to Splunk</p>
                     * 
                     */
                    std::string GetDSLFilter() const;

                    /**
                     * 设置<p>Log pre-filtering - filter out original data before writing to Splunk</p>
                     * @param _dSLFilter <p>Log pre-filtering - filter out original data before writing to Splunk</p>
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
                     * 获取<p>Advanced configuration - Cross-account delivery user role authorization information</p><p>For reference: <a href="https://console.cloud.tencent.com/cam/role/create?payloadType=account">Create custom role</a></p>
                     * @return ExternalRole <p>Advanced configuration - Cross-account delivery user role authorization information</p><p>For reference: <a href="https://console.cloud.tencent.com/cam/role/create?payloadType=account">Create custom role</a></p>
                     * 
                     */
                    ExternalRole GetExternalRole() const;

                    /**
                     * 设置<p>Advanced configuration - Cross-account delivery user role authorization information</p><p>For reference: <a href="https://console.cloud.tencent.com/cam/role/create?payloadType=account">Create custom role</a></p>
                     * @param _externalRole <p>Advanced configuration - Cross-account delivery user role authorization information</p><p>For reference: <a href="https://console.cloud.tencent.com/cam/role/create?payloadType=account">Create custom role</a></p>
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
                     * <p>log topic id</p><ul><li>Obtain the log topic Id through <a href="https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1">Get Log Topic List</a>.</li></ul>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>The splunk delivery task name has the following restrictions: - Cannot be empty - Length not greater than 256 - Can only contain aA-zZ, underscore, -, 0-9</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Splunk delivery task - target configuration - network info</p>
                     */
                    NetInfo m_netInfo;
                    bool m_netInfoHasBeenSet;

                    /**
                     * <p>Splunk delivery task meta information</p>
                     */
                    MetadataInfo m_metadataInfo;
                    bool m_metadataInfoHasBeenSet;

                    /**
                     * <p>Whether service logs are enabled 1: Disabled; 2: Enabled; Enabled by default</p>
                     */
                    int64_t m_hasServiceLog;
                    bool m_hasServiceLogHasBeenSet;

                    /**
                     * <p>Advanced configuration - Whether to enable the indexer; 1 - Disable; 2 - Enable;<br>Default: 1</p>
                     */
                    int64_t m_indexAck;
                    bool m_indexAckHasBeenSet;

                    /**
                     * <p>Advanced configuration - data source; no more than 64 characters</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>Advanced configuration - data source type; no more than 64 characters</p>
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * <p>Advanced configuration - Indexes written to Splunk; no more than 64 characters</p>
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * <p>Advanced configuration - Channel.<br>To meet the limitation: If the indexer is enabled, then Channel is required.</p>
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * <p>Log pre-filtering - filter out original data before writing to Splunk</p>
                     */
                    std::string m_dSLFilter;
                    bool m_dSLFilterHasBeenSet;

                    /**
                     * <p>Advanced configuration - Cross-account delivery user role authorization information</p><p>For reference: <a href="https://console.cloud.tencent.com/cam/role/create?payloadType=account">Create custom role</a></p>
                     */
                    ExternalRole m_externalRole;
                    bool m_externalRoleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATESPLUNKDELIVERREQUEST_H_
