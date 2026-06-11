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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_TOPICINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_TOPICINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Basic Topic Information
                */
                class TopicInfo : public AbstractModel
                {
                public:
                    TopicInfo();
                    ~TopicInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Logset ID</p>
                     * @return LogsetId <p>Logset ID</p>
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置<p>Logset ID</p>
                     * @param _logsetId <p>Logset ID</p>
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取<p>Topic ID</p>
                     * @return TopicId <p>Topic ID</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>Topic ID</p>
                     * @param _topicId <p>Topic ID</p>
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
                     * 获取<p>Topic name</p>
                     * @return TopicName <p>Topic name</p>
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置<p>Topic name</p>
                     * @param _topicName <p>Topic name</p>
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
                     * 获取<p>Topic partition count</p>
                     * @return PartitionCount <p>Topic partition count</p>
                     * 
                     */
                    int64_t GetPartitionCount() const;

                    /**
                     * 设置<p>Topic partition count</p>
                     * @param _partitionCount <p>Topic partition count</p>
                     * 
                     */
                    void SetPartitionCount(const int64_t& _partitionCount);

                    /**
                     * 判断参数 PartitionCount 是否已赋值
                     * @return PartitionCount 是否已赋值
                     * 
                     */
                    bool PartitionCountHasBeenSet() const;

                    /**
                     * 获取<p>Whether the topic has indexing enabled (the topic type must be log topic)</p>
                     * @return Index <p>Whether the topic has indexing enabled (the topic type must be log topic)</p>
                     * 
                     */
                    bool GetIndex() const;

                    /**
                     * 设置<p>Whether the topic has indexing enabled (the topic type must be log topic)</p>
                     * @param _index <p>Whether the topic has indexing enabled (the topic type must be log topic)</p>
                     * 
                     */
                    void SetIndex(const bool& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取<p>If AssumerUin is not empty, it indicates the Uin of the service provider creating the log topic</p>
                     * @return AssumerUin <p>If AssumerUin is not empty, it indicates the Uin of the service provider creating the log topic</p>
                     * 
                     */
                    uint64_t GetAssumerUin() const;

                    /**
                     * 设置<p>If AssumerUin is not empty, it indicates the Uin of the service provider creating the log topic</p>
                     * @param _assumerUin <p>If AssumerUin is not empty, it indicates the Uin of the service provider creating the log topic</p>
                     * 
                     */
                    void SetAssumerUin(const uint64_t& _assumerUin);

                    /**
                     * 判断参数 AssumerUin 是否已赋值
                     * @return AssumerUin 是否已赋值
                     * 
                     */
                    bool AssumerUinHasBeenSet() const;

                    /**
                     * 获取<p>Cloud product identifier. When the topic is created by other cloud products, this field displays the cloud product name, such as CDN, TKE.</p>
                     * @return AssumerName <p>Cloud product identifier. When the topic is created by other cloud products, this field displays the cloud product name, such as CDN, TKE.</p>
                     * 
                     */
                    std::string GetAssumerName() const;

                    /**
                     * 设置<p>Cloud product identifier. When the topic is created by other cloud products, this field displays the cloud product name, such as CDN, TKE.</p>
                     * @param _assumerName <p>Cloud product identifier. When the topic is created by other cloud products, this field displays the cloud product name, such as CDN, TKE.</p>
                     * 
                     */
                    void SetAssumerName(const std::string& _assumerName);

                    /**
                     * 判断参数 AssumerName 是否已赋值
                     * @return AssumerName 是否已赋值
                     * 
                     */
                    bool AssumerNameHasBeenSet() const;

                    /**
                     * 获取<p>Creation time. Format: yyyy-MM-dd HH:mm:ss</p>
                     * @return CreateTime <p>Creation time. Format: yyyy-MM-dd HH:mm:ss</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time. Format: yyyy-MM-dd HH:mm:ss</p>
                     * @param _createTime <p>Creation time. Format: yyyy-MM-dd HH:mm:ss</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Whether the topic has log collection enabled. true: enable collection; false: disable collection.<br>Enabled by default during log topic creation. You can modify this field via SDK invocation of ModifyTopic.<br>The console currently does not support modification of this parameter.</p>
                     * @return Status <p>Whether the topic has log collection enabled. true: enable collection; false: disable collection.<br>Enabled by default during log topic creation. You can modify this field via SDK invocation of ModifyTopic.<br>The console currently does not support modification of this parameter.</p>
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置<p>Whether the topic has log collection enabled. true: enable collection; false: disable collection.<br>Enabled by default during log topic creation. You can modify this field via SDK invocation of ModifyTopic.<br>The console currently does not support modification of this parameter.</p>
                     * @param _status <p>Whether the topic has log collection enabled. true: enable collection; false: disable collection.<br>Enabled by default during log topic creation. You can modify this field via SDK invocation of ModifyTopic.<br>The console currently does not support modification of this parameter.</p>
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
                     * 获取<p>Tag information bound to the topic</p>
                     * @return Tags <p>Tag information bound to the topic</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>Tag information bound to the topic</p>
                     * @param _tags <p>Tag information bound to the topic</p>
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
                     * 获取<p>If RoleName is not empty, it indicates the role used by the service provider creating the log topic</p>
                     * @return RoleName <p>If RoleName is not empty, it indicates the role used by the service provider creating the log topic</p>
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置<p>If RoleName is not empty, it indicates the role used by the service provider creating the log topic</p>
                     * @param _roleName <p>If RoleName is not empty, it indicates the role used by the service provider creating the log topic</p>
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取<p>Whether the topic has auto-split enabled</p>
                     * @return AutoSplit <p>Whether the topic has auto-split enabled</p>
                     * 
                     */
                    bool GetAutoSplit() const;

                    /**
                     * 设置<p>Whether the topic has auto-split enabled</p>
                     * @param _autoSplit <p>Whether the topic has auto-split enabled</p>
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
                     * 获取<p>Maximum number of partitions allowed for the topic if auto-split is enabled</p>
                     * @return MaxSplitPartitions <p>Maximum number of partitions allowed for the topic if auto-split is enabled</p>
                     * 
                     */
                    int64_t GetMaxSplitPartitions() const;

                    /**
                     * 设置<p>Maximum number of partitions allowed for the topic if auto-split is enabled</p>
                     * @param _maxSplitPartitions <p>Maximum number of partitions allowed for the topic if auto-split is enabled</p>
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
                     * 获取<p>Storage type of the topic</p><ul><li>hot: standard storage</li><li>cold: infrequent storage</li></ul>
                     * @return StorageType <p>Storage type of the topic</p><ul><li>hot: standard storage</li><li>cold: infrequent storage</li></ul>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>Storage type of the topic</p><ul><li>hot: standard storage</li><li>cold: infrequent storage</li></ul>
                     * @param _storageType <p>Storage type of the topic</p><ul><li>hot: standard storage</li><li>cold: infrequent storage</li></ul>
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
                     * 获取<p>Lifecycle in days, valid values 1~3600. A value of 3640 indicates permanent retention.</p>
                     * @return Period <p>Lifecycle in days, valid values 1~3600. A value of 3640 indicates permanent retention.</p>
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置<p>Lifecycle in days, valid values 1~3600. A value of 3640 indicates permanent retention.</p>
                     * @param _period <p>Lifecycle in days, valid values 1~3600. A value of 3640 indicates permanent retention.</p>
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
                     * 获取<p>Cloud product sub-identifier. When the log topic is created by other cloud products, this field displays the cloud product name and its log type sub-category, such as TKE-Audit, TKE-Event. Some cloud products only have the cloud product identifier (AssumerName) without this field.</p>
                     * @return SubAssumerName <p>Cloud product sub-identifier. When the log topic is created by other cloud products, this field displays the cloud product name and its log type sub-category, such as TKE-Audit, TKE-Event. Some cloud products only have the cloud product identifier (AssumerName) without this field.</p>
                     * 
                     */
                    std::string GetSubAssumerName() const;

                    /**
                     * 设置<p>Cloud product sub-identifier. When the log topic is created by other cloud products, this field displays the cloud product name and its log type sub-category, such as TKE-Audit, TKE-Event. Some cloud products only have the cloud product identifier (AssumerName) without this field.</p>
                     * @param _subAssumerName <p>Cloud product sub-identifier. When the log topic is created by other cloud products, this field displays the cloud product name and its log type sub-category, such as TKE-Audit, TKE-Event. Some cloud products only have the cloud product identifier (AssumerName) without this field.</p>
                     * 
                     */
                    void SetSubAssumerName(const std::string& _subAssumerName);

                    /**
                     * 判断参数 SubAssumerName 是否已赋值
                     * @return SubAssumerName 是否已赋值
                     * 
                     */
                    bool SubAssumerNameHasBeenSet() const;

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
                     * 获取<p>Enable log settlement, lifecycle of standard storage, hotPeriod &lt; Period.<br>Standard storage is hotPeriod, infrequent storage is Period-hotPeriod. (Topic type must be log topic)<br>HotPeriod=0 means log settlement is not enabled.</p>
                     * @return HotPeriod <p>Enable log settlement, lifecycle of standard storage, hotPeriod &lt; Period.<br>Standard storage is hotPeriod, infrequent storage is Period-hotPeriod. (Topic type must be log topic)<br>HotPeriod=0 means log settlement is not enabled.</p>
                     * 
                     */
                    uint64_t GetHotPeriod() const;

                    /**
                     * 设置<p>Enable log settlement, lifecycle of standard storage, hotPeriod &lt; Period.<br>Standard storage is hotPeriod, infrequent storage is Period-hotPeriod. (Topic type must be log topic)<br>HotPeriod=0 means log settlement is not enabled.</p>
                     * @param _hotPeriod <p>Enable log settlement, lifecycle of standard storage, hotPeriod &lt; Period.<br>Standard storage is hotPeriod, infrequent storage is Period-hotPeriod. (Topic type must be log topic)<br>HotPeriod=0 means log settlement is not enabled.</p>
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
                     * 获取<p>kms-cls service key id</p>
                     * @return KeyId <p>kms-cls service key id</p>
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置<p>kms-cls service key id</p>
                     * @param _keyId <p>kms-cls service key id</p>
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取<p>Topic type.</p><ul><li>0: Log topic</li><li>1: Metric topic</li></ul>
                     * @return BizType <p>Topic type.</p><ul><li>0: Log topic</li><li>1: Metric topic</li></ul>
                     * 
                     */
                    uint64_t GetBizType() const;

                    /**
                     * 设置<p>Topic type.</p><ul><li>0: Log topic</li><li>1: Metric topic</li></ul>
                     * @param _bizType <p>Topic type.</p><ul><li>0: Log topic</li><li>1: Metric topic</li></ul>
                     * 
                     */
                    void SetBizType(const uint64_t& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取<p>Free authentication switch. false: disabled; true: enabled.<br>Once enabled, designated operations will be supported for anonymous access to the log topic. See <a href="https://www.tencentcloud.com/document/product/614/41035?from_cn_redirect=1">log topic</a> for details.</p>
                     * @return IsWebTracking <p>Free authentication switch. false: disabled; true: enabled.<br>Once enabled, designated operations will be supported for anonymous access to the log topic. See <a href="https://www.tencentcloud.com/document/product/614/41035?from_cn_redirect=1">log topic</a> for details.</p>
                     * 
                     */
                    bool GetIsWebTracking() const;

                    /**
                     * 设置<p>Free authentication switch. false: disabled; true: enabled.<br>Once enabled, designated operations will be supported for anonymous access to the log topic. See <a href="https://www.tencentcloud.com/document/product/614/41035?from_cn_redirect=1">log topic</a> for details.</p>
                     * @param _isWebTracking <p>Free authentication switch. false: disabled; true: enabled.<br>Once enabled, designated operations will be supported for anonymous access to the log topic. See <a href="https://www.tencentcloud.com/document/product/614/41035?from_cn_redirect=1">log topic</a> for details.</p>
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
                     * 获取<p>Log topic extended information</p>
                     * @return Extends <p>Log topic extended information</p>
                     * 
                     */
                    TopicExtendInfo GetExtends() const;

                    /**
                     * 设置<p>Log topic extended information</p>
                     * @param _extends <p>Log topic extended information</p>
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
                     * 获取<p>Async migration task ID</p>
                     * @return TopicAsyncTaskID <p>Async migration task ID</p>
                     * 
                     */
                    std::string GetTopicAsyncTaskID() const;

                    /**
                     * 设置<p>Async migration task ID</p>
                     * @param _topicAsyncTaskID <p>Async migration task ID</p>
                     * 
                     */
                    void SetTopicAsyncTaskID(const std::string& _topicAsyncTaskID);

                    /**
                     * 判断参数 TopicAsyncTaskID 是否已赋值
                     * @return TopicAsyncTaskID 是否已赋值
                     * 
                     */
                    bool TopicAsyncTaskIDHasBeenSet() const;

                    /**
                     * 获取<p>Asynchronous migration status</p><ul><li>1: In progress</li><li>2: Completed</li><li>3: Failure</li><li>4: Canceled</li></ul>
                     * @return MigrationStatus <p>Asynchronous migration status</p><ul><li>1: In progress</li><li>2: Completed</li><li>3: Failure</li><li>4: Canceled</li></ul>
                     * 
                     */
                    uint64_t GetMigrationStatus() const;

                    /**
                     * 设置<p>Asynchronous migration status</p><ul><li>1: In progress</li><li>2: Completed</li><li>3: Failure</li><li>4: Canceled</li></ul>
                     * @param _migrationStatus <p>Asynchronous migration status</p><ul><li>1: In progress</li><li>2: Completed</li><li>3: Failure</li><li>4: Canceled</li></ul>
                     * 
                     */
                    void SetMigrationStatus(const uint64_t& _migrationStatus);

                    /**
                     * 判断参数 MigrationStatus 是否已赋值
                     * @return MigrationStatus 是否已赋值
                     * 
                     */
                    bool MigrationStatusHasBeenSet() const;

                    /**
                     * 获取<p>After async migration, expected effective date<br>Time format: yyyy-MM-dd HH:mm:ss</p>
                     * @return EffectiveDate <p>After async migration, expected effective date<br>Time format: yyyy-MM-dd HH:mm:ss</p>
                     * 
                     */
                    std::string GetEffectiveDate() const;

                    /**
                     * 设置<p>After async migration, expected effective date<br>Time format: yyyy-MM-dd HH:mm:ss</p>
                     * @param _effectiveDate <p>After async migration, expected effective date<br>Time format: yyyy-MM-dd HH:mm:ss</p>
                     * 
                     */
                    void SetEffectiveDate(const std::string& _effectiveDate);

                    /**
                     * 判断参数 EffectiveDate 是否已赋值
                     * @return EffectiveDate 是否已赋值
                     * 
                     */
                    bool EffectiveDateHasBeenSet() const;

                    /**
                     * 获取<p>IsSourceFrom Enable recording public network source IP and server receipt time</p>
                     * @return IsSourceFrom <p>IsSourceFrom Enable recording public network source IP and server receipt time</p>
                     * 
                     */
                    bool GetIsSourceFrom() const;

                    /**
                     * 设置<p>IsSourceFrom Enable recording public network source IP and server receipt time</p>
                     * @param _isSourceFrom <p>IsSourceFrom Enable recording public network source IP and server receipt time</p>
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
                     * 获取<p>Current billing mode</p><p>Enumeration value:</p><ul><li>0: Function billing by usage</li><li>1: Billing by raw log size (currently supported for some customers only)</li></ul>
                     * @return BillingMode <p>Current billing mode</p><p>Enumeration value:</p><ul><li>0: Function billing by usage</li><li>1: Billing by raw log size (currently supported for some customers only)</li></ul>
                     * 
                     */
                    uint64_t GetBillingMode() const;

                    /**
                     * 设置<p>Current billing mode</p><p>Enumeration value:</p><ul><li>0: Function billing by usage</li><li>1: Billing by raw log size (currently supported for some customers only)</li></ul>
                     * @param _billingMode <p>Current billing mode</p><p>Enumeration value:</p><ul><li>0: Function billing by usage</li><li>1: Billing by raw log size (currently supported for some customers only)</li></ul>
                     * 
                     */
                    void SetBillingMode(const uint64_t& _billingMode);

                    /**
                     * 判断参数 BillingMode 是否已赋值
                     * @return BillingMode 是否已赋值
                     * 
                     */
                    bool BillingModeHasBeenSet() const;

                    /**
                     * 获取<p>If there is an async task, the new billing model after the task succeeds</p><p>Enumeration value:</p><ul><li>0: Function billing by usage</li><li>1: Billing by raw log size (currently only supported for some customers)</li></ul>
                     * @return NewBillingMode <p>If there is an async task, the new billing model after the task succeeds</p><p>Enumeration value:</p><ul><li>0: Function billing by usage</li><li>1: Billing by raw log size (currently only supported for some customers)</li></ul>
                     * 
                     */
                    uint64_t GetNewBillingMode() const;

                    /**
                     * 设置<p>If there is an async task, the new billing model after the task succeeds</p><p>Enumeration value:</p><ul><li>0: Function billing by usage</li><li>1: Billing by raw log size (currently only supported for some customers)</li></ul>
                     * @param _newBillingMode <p>If there is an async task, the new billing model after the task succeeds</p><p>Enumeration value:</p><ul><li>0: Function billing by usage</li><li>1: Billing by raw log size (currently only supported for some customers)</li></ul>
                     * 
                     */
                    void SetNewBillingMode(const uint64_t& _newBillingMode);

                    /**
                     * 判断参数 NewBillingMode 是否已赋值
                     * @return NewBillingMode 是否已赋值
                     * 
                     */
                    bool NewBillingModeHasBeenSet() const;

                private:

                    /**
                     * <p>Logset ID</p>
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * <p>Topic ID</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>Topic name</p>
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * <p>Topic partition count</p>
                     */
                    int64_t m_partitionCount;
                    bool m_partitionCountHasBeenSet;

                    /**
                     * <p>Whether the topic has indexing enabled (the topic type must be log topic)</p>
                     */
                    bool m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * <p>If AssumerUin is not empty, it indicates the Uin of the service provider creating the log topic</p>
                     */
                    uint64_t m_assumerUin;
                    bool m_assumerUinHasBeenSet;

                    /**
                     * <p>Cloud product identifier. When the topic is created by other cloud products, this field displays the cloud product name, such as CDN, TKE.</p>
                     */
                    std::string m_assumerName;
                    bool m_assumerNameHasBeenSet;

                    /**
                     * <p>Creation time. Format: yyyy-MM-dd HH:mm:ss</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Whether the topic has log collection enabled. true: enable collection; false: disable collection.<br>Enabled by default during log topic creation. You can modify this field via SDK invocation of ModifyTopic.<br>The console currently does not support modification of this parameter.</p>
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Tag information bound to the topic</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>If RoleName is not empty, it indicates the role used by the service provider creating the log topic</p>
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * <p>Whether the topic has auto-split enabled</p>
                     */
                    bool m_autoSplit;
                    bool m_autoSplitHasBeenSet;

                    /**
                     * <p>Maximum number of partitions allowed for the topic if auto-split is enabled</p>
                     */
                    int64_t m_maxSplitPartitions;
                    bool m_maxSplitPartitionsHasBeenSet;

                    /**
                     * <p>Storage type of the topic</p><ul><li>hot: standard storage</li><li>cold: infrequent storage</li></ul>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>Lifecycle in days, valid values 1~3600. A value of 3640 indicates permanent retention.</p>
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>Cloud product sub-identifier. When the log topic is created by other cloud products, this field displays the cloud product name and its log type sub-category, such as TKE-Audit, TKE-Event. Some cloud products only have the cloud product identifier (AssumerName) without this field.</p>
                     */
                    std::string m_subAssumerName;
                    bool m_subAssumerNameHasBeenSet;

                    /**
                     * <p>Topic description</p>
                     */
                    std::string m_describes;
                    bool m_describesHasBeenSet;

                    /**
                     * <p>Enable log settlement, lifecycle of standard storage, hotPeriod &lt; Period.<br>Standard storage is hotPeriod, infrequent storage is Period-hotPeriod. (Topic type must be log topic)<br>HotPeriod=0 means log settlement is not enabled.</p>
                     */
                    uint64_t m_hotPeriod;
                    bool m_hotPeriodHasBeenSet;

                    /**
                     * <p>kms-cls service key id</p>
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * <p>Topic type.</p><ul><li>0: Log topic</li><li>1: Metric topic</li></ul>
                     */
                    uint64_t m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * <p>Free authentication switch. false: disabled; true: enabled.<br>Once enabled, designated operations will be supported for anonymous access to the log topic. See <a href="https://www.tencentcloud.com/document/product/614/41035?from_cn_redirect=1">log topic</a> for details.</p>
                     */
                    bool m_isWebTracking;
                    bool m_isWebTrackingHasBeenSet;

                    /**
                     * <p>Log topic extended information</p>
                     */
                    TopicExtendInfo m_extends;
                    bool m_extendsHasBeenSet;

                    /**
                     * <p>Async migration task ID</p>
                     */
                    std::string m_topicAsyncTaskID;
                    bool m_topicAsyncTaskIDHasBeenSet;

                    /**
                     * <p>Asynchronous migration status</p><ul><li>1: In progress</li><li>2: Completed</li><li>3: Failure</li><li>4: Canceled</li></ul>
                     */
                    uint64_t m_migrationStatus;
                    bool m_migrationStatusHasBeenSet;

                    /**
                     * <p>After async migration, expected effective date<br>Time format: yyyy-MM-dd HH:mm:ss</p>
                     */
                    std::string m_effectiveDate;
                    bool m_effectiveDateHasBeenSet;

                    /**
                     * <p>IsSourceFrom Enable recording public network source IP and server receipt time</p>
                     */
                    bool m_isSourceFrom;
                    bool m_isSourceFromHasBeenSet;

                    /**
                     * <p>Current billing mode</p><p>Enumeration value:</p><ul><li>0: Function billing by usage</li><li>1: Billing by raw log size (currently supported for some customers only)</li></ul>
                     */
                    uint64_t m_billingMode;
                    bool m_billingModeHasBeenSet;

                    /**
                     * <p>If there is an async task, the new billing model after the task succeeds</p><p>Enumeration value:</p><ul><li>0: Function billing by usage</li><li>1: Billing by raw log size (currently only supported for some customers)</li></ul>
                     */
                    uint64_t m_newBillingMode;
                    bool m_newBillingModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_TOPICINFO_H_
