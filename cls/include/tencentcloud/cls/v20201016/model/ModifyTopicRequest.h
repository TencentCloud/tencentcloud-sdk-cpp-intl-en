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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYTOPICREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYTOPICREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Tag.h>
#include <tencentcloud/cls/v20201016/model/TopicExtendInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyTopic request structure.
                */
                class ModifyTopicRequest : public AbstractModel
                {
                public:
                    ModifyTopicRequest();
                    ~ModifyTopicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Topic ID - Obtain the topic Id through <a href="https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1">Get Topic List</a>.</p>
                     * @return TopicId <p>Topic ID - Obtain the topic Id through <a href="https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1">Get Topic List</a>.</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>Topic ID - Obtain the topic Id through <a href="https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1">Get Topic List</a>.</p>
                     * @param _topicId <p>Topic ID - Obtain the topic Id through <a href="https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1">Get Topic List</a>.</p>
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
                     * 获取<p>Topic name<br>Input restrictions:</p><ul><li>Cannot be an empty string</li><li>Cannot contain character '|'</li><li>Cannot use the following names ["cls_service_log","loglistener_status","loglistener_alarm","loglistener_business","cls_service_metric"]</li></ul>
                     * @return TopicName <p>Topic name<br>Input restrictions:</p><ul><li>Cannot be an empty string</li><li>Cannot contain character '|'</li><li>Cannot use the following names ["cls_service_log","loglistener_status","loglistener_alarm","loglistener_business","cls_service_metric"]</li></ul>
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置<p>Topic name<br>Input restrictions:</p><ul><li>Cannot be an empty string</li><li>Cannot contain character '|'</li><li>Cannot use the following names ["cls_service_log","loglistener_status","loglistener_alarm","loglistener_business","cls_service_metric"]</li></ul>
                     * @param _topicName <p>Topic name<br>Input restrictions:</p><ul><li>Cannot be an empty string</li><li>Cannot contain character '|'</li><li>Cannot use the following names ["cls_service_log","loglistener_status","loglistener_alarm","loglistener_business","cls_service_metric"]</li></ul>
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取<p>List of tag descriptions. By specifying this parameter, you can bind tags to the appropriate topic simultaneously. Supports up to 10 tag key-value pairs, and no duplicate key-value pairs are allowed.</p>
                     * @return Tags <p>List of tag descriptions. By specifying this parameter, you can bind tags to the appropriate topic simultaneously. Supports up to 10 tag key-value pairs, and no duplicate key-value pairs are allowed.</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>List of tag descriptions. By specifying this parameter, you can bind tags to the appropriate topic simultaneously. Supports up to 10 tag key-value pairs, and no duplicate key-value pairs are allowed.</p>
                     * @param _tags <p>List of tag descriptions. By specifying this parameter, you can bind tags to the appropriate topic simultaneously. Supports up to 10 tag key-value pairs, and no duplicate key-value pairs are allowed.</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>Whether the topic has log collection enabled. true: start collection; false: disable collection.<br>The console currently does not support modification of this parameter.</p>
                     * @return Status <p>Whether the topic has log collection enabled. true: start collection; false: disable collection.<br>The console currently does not support modification of this parameter.</p>
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置<p>Whether the topic has log collection enabled. true: start collection; false: disable collection.<br>The console currently does not support modification of this parameter.</p>
                     * @param _status <p>Whether the topic has log collection enabled. true: start collection; false: disable collection.<br>The console currently does not support modification of this parameter.</p>
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable auto-split</p>
                     * @return AutoSplit <p>Whether to enable auto-split</p>
                     * 
                     */
                    bool GetAutoSplit() const;

                    /**
                     * 设置<p>Whether to enable auto-split</p>
                     * @param _autoSplit <p>Whether to enable auto-split</p>
                     * 
                     */
                    void SetAutoSplit(const bool& _autoSplit);

                    /**
                     * 判断参数 AutoSplit 是否已赋值
                     * @return AutoSplit 是否已赋值
                     * 
                     */
                    bool AutoSplitHasBeenSet() const;

                    /**
                     * 获取<p>If maximum split is enabled, the maximum number of partitions allowed for this topic;<br>default is 50; must be a positive number</p>
                     * @return MaxSplitPartitions <p>If maximum split is enabled, the maximum number of partitions allowed for this topic;<br>default is 50; must be a positive number</p>
                     * 
                     */
                    int64_t GetMaxSplitPartitions() const;

                    /**
                     * 设置<p>If maximum split is enabled, the maximum number of partitions allowed for this topic;<br>default is 50; must be a positive number</p>
                     * @param _maxSplitPartitions <p>If maximum split is enabled, the maximum number of partitions allowed for this topic;<br>default is 50; must be a positive number</p>
                     * 
                     */
                    void SetMaxSplitPartitions(const int64_t& _maxSplitPartitions);

                    /**
                     * 判断参数 MaxSplitPartitions 是否已赋值
                     * @return MaxSplitPartitions 是否已赋值
                     * 
                     */
                    bool MaxSplitPartitionsHasBeenSet() const;

                    /**
                     * 获取<p>Lifecycle in days. Standard storage value range is 1-3600. Infrequent storage value range is 7-3600. A value of 3640 indicates permanent retention.</p>
                     * @return Period <p>Lifecycle in days. Standard storage value range is 1-3600. Infrequent storage value range is 7-3600. A value of 3640 indicates permanent retention.</p>
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置<p>Lifecycle in days. Standard storage value range is 1-3600. Infrequent storage value range is 7-3600. A value of 3640 indicates permanent retention.</p>
                     * @param _period <p>Lifecycle in days. Standard storage value range is 1-3600. Infrequent storage value range is 7-3600. A value of 3640 indicates permanent retention.</p>
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
                     * 获取<p>Storage type: cold infrequent storage, hot standard storage</p>
                     * @return StorageType <p>Storage type: cold infrequent storage, hot standard storage</p>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>Storage type: cold infrequent storage, hot standard storage</p>
                     * @param _storageType <p>Storage type: cold infrequent storage, hot standard storage</p>
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取<p>Topic description</p>
                     * @return Describes <p>Topic description</p>
                     * 
                     */
                    std::string GetDescribes() const;

                    /**
                     * 设置<p>Topic description</p>
                     * @param _describes <p>Topic description</p>
                     * 
                     */
                    void SetDescribes(const std::string& _describes);

                    /**
                     * 判断参数 Describes 是否已赋值
                     * @return Describes 是否已赋值
                     * 
                     */
                    bool DescribesHasBeenSet() const;

                    /**
                     * 获取<p>0: The log topic disables log settlement.<br>Non-0: Number of days for standard storage after log settlement is enabled for the log topic. HotPeriod needs to be greater than or equal to 7 and less than Period.<br>Effective only when StorageType is hot. This configuration is not supported for metric topics.</p>
                     * @return HotPeriod <p>0: The log topic disables log settlement.<br>Non-0: Number of days for standard storage after log settlement is enabled for the log topic. HotPeriod needs to be greater than or equal to 7 and less than Period.<br>Effective only when StorageType is hot. This configuration is not supported for metric topics.</p>
                     * 
                     */
                    uint64_t GetHotPeriod() const;

                    /**
                     * 设置<p>0: The log topic disables log settlement.<br>Non-0: Number of days for standard storage after log settlement is enabled for the log topic. HotPeriod needs to be greater than or equal to 7 and less than Period.<br>Effective only when StorageType is hot. This configuration is not supported for metric topics.</p>
                     * @param _hotPeriod <p>0: The log topic disables log settlement.<br>Non-0: Number of days for standard storage after log settlement is enabled for the log topic. HotPeriod needs to be greater than or equal to 7 and less than Period.<br>Effective only when StorageType is hot. This configuration is not supported for metric topics.</p>
                     * 
                     */
                    void SetHotPeriod(const uint64_t& _hotPeriod);

                    /**
                     * 判断参数 HotPeriod 是否已赋值
                     * @return HotPeriod 是否已赋值
                     * 
                     */
                    bool HotPeriodHasBeenSet() const;

                    /**
                     * 获取<p>Free authentication switch. false: disabled; true: enabled.<br>Once enabled, anonymous access to the log topic will be supported for specified operations. For details, please see <a href="https://www.tencentcloud.com/document/product/614/41035?from_cn_redirect=1">log topic</a>.</p>
                     * @return IsWebTracking <p>Free authentication switch. false: disabled; true: enabled.<br>Once enabled, anonymous access to the log topic will be supported for specified operations. For details, please see <a href="https://www.tencentcloud.com/document/product/614/41035?from_cn_redirect=1">log topic</a>.</p>
                     * 
                     */
                    bool GetIsWebTracking() const;

                    /**
                     * 设置<p>Free authentication switch. false: disabled; true: enabled.<br>Once enabled, anonymous access to the log topic will be supported for specified operations. For details, please see <a href="https://www.tencentcloud.com/document/product/614/41035?from_cn_redirect=1">log topic</a>.</p>
                     * @param _isWebTracking <p>Free authentication switch. false: disabled; true: enabled.<br>Once enabled, anonymous access to the log topic will be supported for specified operations. For details, please see <a href="https://www.tencentcloud.com/document/product/614/41035?from_cn_redirect=1">log topic</a>.</p>
                     * 
                     */
                    void SetIsWebTracking(const bool& _isWebTracking);

                    /**
                     * 判断参数 IsWebTracking 是否已赋值
                     * @return IsWebTracking 是否已赋值
                     * 
                     */
                    bool IsWebTrackingHasBeenSet() const;

                    /**
                     * 获取<p>Topic extended information</p>
                     * @return Extends <p>Topic extended information</p>
                     * 
                     */
                    TopicExtendInfo GetExtends() const;

                    /**
                     * 设置<p>Topic extended information</p>
                     * @param _extends <p>Topic extended information</p>
                     * 
                     */
                    void SetExtends(const TopicExtendInfo& _extends);

                    /**
                     * 判断参数 Extends 是否已赋值
                     * @return Extends 是否已赋值
                     * 
                     */
                    bool ExtendsHasBeenSet() const;

                    /**
                     * 获取<p>Number of topic partitions.<br>Defaults to 1.<br>Value ranges and constraints:</p><ul><li>When the input value &lt;=0, the system automatically adjusts it to 1.</li><li>If MaxSplitPartitions is not passed, PartitionCount must be &lt;=50.</li><li>If MaxSplitPartitions is passed, PartitionCount must be &lt;=MaxSplitPartitions.</li></ul>
                     * @return PartitionCount <p>Number of topic partitions.<br>Defaults to 1.<br>Value ranges and constraints:</p><ul><li>When the input value &lt;=0, the system automatically adjusts it to 1.</li><li>If MaxSplitPartitions is not passed, PartitionCount must be &lt;=50.</li><li>If MaxSplitPartitions is passed, PartitionCount must be &lt;=MaxSplitPartitions.</li></ul>
                     * 
                     */
                    uint64_t GetPartitionCount() const;

                    /**
                     * 设置<p>Number of topic partitions.<br>Defaults to 1.<br>Value ranges and constraints:</p><ul><li>When the input value &lt;=0, the system automatically adjusts it to 1.</li><li>If MaxSplitPartitions is not passed, PartitionCount must be &lt;=50.</li><li>If MaxSplitPartitions is passed, PartitionCount must be &lt;=MaxSplitPartitions.</li></ul>
                     * @param _partitionCount <p>Number of topic partitions.<br>Defaults to 1.<br>Value ranges and constraints:</p><ul><li>When the input value &lt;=0, the system automatically adjusts it to 1.</li><li>If MaxSplitPartitions is not passed, PartitionCount must be &lt;=50.</li><li>If MaxSplitPartitions is passed, PartitionCount must be &lt;=MaxSplitPartitions.</li></ul>
                     * 
                     */
                    void SetPartitionCount(const uint64_t& _partitionCount);

                    /**
                     * 判断参数 PartitionCount 是否已赋值
                     * @return PartitionCount 是否已赋值
                     * 
                     */
                    bool PartitionCountHasBeenSet() const;

                    /**
                     * 获取<p>id of the cancel switch storage task</p><ul><li>Obtain the id of the cancel switch storage task [TopicAsyncTaskID field in Topics] by <a href="https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1">get log topic list</a>.</li></ul>
                     * @return CancelTopicAsyncTaskID <p>id of the cancel switch storage task</p><ul><li>Obtain the id of the cancel switch storage task [TopicAsyncTaskID field in Topics] by <a href="https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1">get log topic list</a>.</li></ul>
                     * 
                     */
                    std::string GetCancelTopicAsyncTaskID() const;

                    /**
                     * 设置<p>id of the cancel switch storage task</p><ul><li>Obtain the id of the cancel switch storage task [TopicAsyncTaskID field in Topics] by <a href="https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1">get log topic list</a>.</li></ul>
                     * @param _cancelTopicAsyncTaskID <p>id of the cancel switch storage task</p><ul><li>Obtain the id of the cancel switch storage task [TopicAsyncTaskID field in Topics] by <a href="https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1">get log topic list</a>.</li></ul>
                     * 
                     */
                    void SetCancelTopicAsyncTaskID(const std::string& _cancelTopicAsyncTaskID);

                    /**
                     * 判断参数 CancelTopicAsyncTaskID 是否已赋值
                     * @return CancelTopicAsyncTaskID 是否已赋值
                     * 
                     */
                    bool CancelTopicAsyncTaskIDHasBeenSet() const;

                    /**
                     * 获取<p>Encryption-related parameters. Encrypted regions are supported and can be passed for allowlisted users. Cannot be passed in other scenarios.<br>Only support passing in 1: kms-cls secret key for cloud product encryption.</p>
                     * @return Encryption <p>Encryption-related parameters. Encrypted regions are supported and can be passed for allowlisted users. Cannot be passed in other scenarios.<br>Only support passing in 1: kms-cls secret key for cloud product encryption.</p>
                     * 
                     */
                    uint64_t GetEncryption() const;

                    /**
                     * 设置<p>Encryption-related parameters. Encrypted regions are supported and can be passed for allowlisted users. Cannot be passed in other scenarios.<br>Only support passing in 1: kms-cls secret key for cloud product encryption.</p>
                     * @param _encryption <p>Encryption-related parameters. Encrypted regions are supported and can be passed for allowlisted users. Cannot be passed in other scenarios.<br>Only support passing in 1: kms-cls secret key for cloud product encryption.</p>
                     * 
                     */
                    void SetEncryption(const uint64_t& _encryption);

                    /**
                     * 判断参数 Encryption 是否已赋值
                     * @return Encryption 是否已赋值
                     * 
                     */
                    bool EncryptionHasBeenSet() const;

                    /**
                     * 获取<p>Enable logging of public network source IP and server receipt time</p>
                     * @return IsSourceFrom <p>Enable logging of public network source IP and server receipt time</p>
                     * 
                     */
                    bool GetIsSourceFrom() const;

                    /**
                     * 设置<p>Enable logging of public network source IP and server receipt time</p>
                     * @param _isSourceFrom <p>Enable logging of public network source IP and server receipt time</p>
                     * 
                     */
                    void SetIsSourceFrom(const bool& _isSourceFrom);

                    /**
                     * 判断参数 IsSourceFrom 是否已赋值
                     * @return IsSourceFrom 是否已赋值
                     * 
                     */
                    bool IsSourceFromHasBeenSet() const;

                    /**
                     * 获取<p>Billing mode</p><p>Enumeration value:</p><ul><li>0: Function billing by usage</li><li>1: Raw log size billing (currently only supports some customers)</li></ul><p>Default value: 0</p>
                     * @return BillingMode <p>Billing mode</p><p>Enumeration value:</p><ul><li>0: Function billing by usage</li><li>1: Raw log size billing (currently only supports some customers)</li></ul><p>Default value: 0</p>
                     * 
                     */
                    uint64_t GetBillingMode() const;

                    /**
                     * 设置<p>Billing mode</p><p>Enumeration value:</p><ul><li>0: Function billing by usage</li><li>1: Raw log size billing (currently only supports some customers)</li></ul><p>Default value: 0</p>
                     * @param _billingMode <p>Billing mode</p><p>Enumeration value:</p><ul><li>0: Function billing by usage</li><li>1: Raw log size billing (currently only supports some customers)</li></ul><p>Default value: 0</p>
                     * 
                     */
                    void SetBillingMode(const uint64_t& _billingMode);

                    /**
                     * 判断参数 BillingMode 是否已赋值
                     * @return BillingMode 是否已赋值
                     * 
                     */
                    bool BillingModeHasBeenSet() const;

                private:

                    /**
                     * <p>Topic ID - Obtain the topic Id through <a href="https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1">Get Topic List</a>.</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>Topic name<br>Input restrictions:</p><ul><li>Cannot be an empty string</li><li>Cannot contain character '|'</li><li>Cannot use the following names ["cls_service_log","loglistener_status","loglistener_alarm","loglistener_business","cls_service_metric"]</li></ul>
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * <p>List of tag descriptions. By specifying this parameter, you can bind tags to the appropriate topic simultaneously. Supports up to 10 tag key-value pairs, and no duplicate key-value pairs are allowed.</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Whether the topic has log collection enabled. true: start collection; false: disable collection.<br>The console currently does not support modification of this parameter.</p>
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Whether to enable auto-split</p>
                     */
                    bool m_autoSplit;
                    bool m_autoSplitHasBeenSet;

                    /**
                     * <p>If maximum split is enabled, the maximum number of partitions allowed for this topic;<br>default is 50; must be a positive number</p>
                     */
                    int64_t m_maxSplitPartitions;
                    bool m_maxSplitPartitionsHasBeenSet;

                    /**
                     * <p>Lifecycle in days. Standard storage value range is 1-3600. Infrequent storage value range is 7-3600. A value of 3640 indicates permanent retention.</p>
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>Storage type: cold infrequent storage, hot standard storage</p>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>Topic description</p>
                     */
                    std::string m_describes;
                    bool m_describesHasBeenSet;

                    /**
                     * <p>0: The log topic disables log settlement.<br>Non-0: Number of days for standard storage after log settlement is enabled for the log topic. HotPeriod needs to be greater than or equal to 7 and less than Period.<br>Effective only when StorageType is hot. This configuration is not supported for metric topics.</p>
                     */
                    uint64_t m_hotPeriod;
                    bool m_hotPeriodHasBeenSet;

                    /**
                     * <p>Free authentication switch. false: disabled; true: enabled.<br>Once enabled, anonymous access to the log topic will be supported for specified operations. For details, please see <a href="https://www.tencentcloud.com/document/product/614/41035?from_cn_redirect=1">log topic</a>.</p>
                     */
                    bool m_isWebTracking;
                    bool m_isWebTrackingHasBeenSet;

                    /**
                     * <p>Topic extended information</p>
                     */
                    TopicExtendInfo m_extends;
                    bool m_extendsHasBeenSet;

                    /**
                     * <p>Number of topic partitions.<br>Defaults to 1.<br>Value ranges and constraints:</p><ul><li>When the input value &lt;=0, the system automatically adjusts it to 1.</li><li>If MaxSplitPartitions is not passed, PartitionCount must be &lt;=50.</li><li>If MaxSplitPartitions is passed, PartitionCount must be &lt;=MaxSplitPartitions.</li></ul>
                     */
                    uint64_t m_partitionCount;
                    bool m_partitionCountHasBeenSet;

                    /**
                     * <p>id of the cancel switch storage task</p><ul><li>Obtain the id of the cancel switch storage task [TopicAsyncTaskID field in Topics] by <a href="https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1">get log topic list</a>.</li></ul>
                     */
                    std::string m_cancelTopicAsyncTaskID;
                    bool m_cancelTopicAsyncTaskIDHasBeenSet;

                    /**
                     * <p>Encryption-related parameters. Encrypted regions are supported and can be passed for allowlisted users. Cannot be passed in other scenarios.<br>Only support passing in 1: kms-cls secret key for cloud product encryption.</p>
                     */
                    uint64_t m_encryption;
                    bool m_encryptionHasBeenSet;

                    /**
                     * <p>Enable logging of public network source IP and server receipt time</p>
                     */
                    bool m_isSourceFrom;
                    bool m_isSourceFromHasBeenSet;

                    /**
                     * <p>Billing mode</p><p>Enumeration value:</p><ul><li>0: Function billing by usage</li><li>1: Raw log size billing (currently only supports some customers)</li></ul><p>Default value: 0</p>
                     */
                    uint64_t m_billingMode;
                    bool m_billingModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYTOPICREQUEST_H_
