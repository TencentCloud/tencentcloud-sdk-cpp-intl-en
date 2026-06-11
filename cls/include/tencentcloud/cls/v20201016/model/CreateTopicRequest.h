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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATETOPICREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATETOPICREQUEST_H_

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
                * CreateTopic request structure.
                */
                class CreateTopicRequest : public AbstractModel
                {
                public:
                    CreateTopicRequest();
                    ~CreateTopicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Logset ID</p><ul><li>Obtain the logset Id through <a href="https://www.tencentcloud.com/document/product/614/58624?from_cn_redirect=1">Get Logset List</a>.</li></ul>
                     * @return LogsetId <p>Logset ID</p><ul><li>Obtain the logset Id through <a href="https://www.tencentcloud.com/document/product/614/58624?from_cn_redirect=1">Get Logset List</a>.</li></ul>
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置<p>Logset ID</p><ul><li>Obtain the logset Id through <a href="https://www.tencentcloud.com/document/product/614/58624?from_cn_redirect=1">Get Logset List</a>.</li></ul>
                     * @param _logsetId <p>Logset ID</p><ul><li>Obtain the logset Id through <a href="https://www.tencentcloud.com/document/product/614/58624?from_cn_redirect=1">Get Logset List</a>.</li></ul>
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
                     * 获取<p>Topic name<br>Name limitation</p><ul><li>Cannot be an empty string</li><li>Cannot contain character '|'</li><li>Cannot use the following names ["cls_service_log","loglistener_status","loglistener_alarm","loglistener_business","cls_service_metric"]</li></ul>
                     * @return TopicName <p>Topic name<br>Name limitation</p><ul><li>Cannot be an empty string</li><li>Cannot contain character '|'</li><li>Cannot use the following names ["cls_service_log","loglistener_status","loglistener_alarm","loglistener_business","cls_service_metric"]</li></ul>
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置<p>Topic name<br>Name limitation</p><ul><li>Cannot be an empty string</li><li>Cannot contain character '|'</li><li>Cannot use the following names ["cls_service_log","loglistener_status","loglistener_alarm","loglistener_business","cls_service_metric"]</li></ul>
                     * @param _topicName <p>Topic name<br>Name limitation</p><ul><li>Cannot be an empty string</li><li>Cannot contain character '|'</li><li>Cannot use the following names ["cls_service_log","loglistener_status","loglistener_alarm","loglistener_business","cls_service_metric"]</li></ul>
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
                     * 获取<p>Topic partition count. Default creation is 1 partition. Supports a maximum of 10 partitions.</p>
                     * @return PartitionCount <p>Topic partition count. Default creation is 1 partition. Supports a maximum of 10 partitions.</p>
                     * 
                     */
                    int64_t GetPartitionCount() const;

                    /**
                     * 设置<p>Topic partition count. Default creation is 1 partition. Supports a maximum of 10 partitions.</p>
                     * @param _partitionCount <p>Topic partition count. Default creation is 1 partition. Supports a maximum of 10 partitions.</p>
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
                     * 获取<p>Tag description list, by specifying this parameter, you can simultaneously bind a tag to the corresponding topic. Up to 10 tag key-value pairs are supported, and the same resource can only be bound to the same tag key.</p>
                     * @return Tags <p>Tag description list, by specifying this parameter, you can simultaneously bind a tag to the corresponding topic. Up to 10 tag key-value pairs are supported, and the same resource can only be bound to the same tag key.</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>Tag description list, by specifying this parameter, you can simultaneously bind a tag to the corresponding topic. Up to 10 tag key-value pairs are supported, and the same resource can only be bound to the same tag key.</p>
                     * @param _tags <p>Tag description list, by specifying this parameter, you can simultaneously bind a tag to the corresponding topic. Up to 10 tag key-value pairs are supported, and the same resource can only be bound to the same tag key.</p>
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
                     * 获取<p>Whether to enable auto-split, true by default</p>
                     * @return AutoSplit <p>Whether to enable auto-split, true by default</p>
                     * 
                     */
                    bool GetAutoSplit() const;

                    /**
                     * 设置<p>Whether to enable auto-split, true by default</p>
                     * @param _autoSplit <p>Whether to enable auto-split, true by default</p>
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
                     * 获取<p>When auto-split is enabled, the maximum number of partitions allowed for each topic is 50 by default.</p>
                     * @return MaxSplitPartitions <p>When auto-split is enabled, the maximum number of partitions allowed for each topic is 50 by default.</p>
                     * 
                     */
                    int64_t GetMaxSplitPartitions() const;

                    /**
                     * 设置<p>When auto-split is enabled, the maximum number of partitions allowed for each topic is 50 by default.</p>
                     * @param _maxSplitPartitions <p>When auto-split is enabled, the maximum number of partitions allowed for each topic is 50 by default.</p>
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
                     * 获取<p>Log topic storage type. Available values: hot (standard storage), cold (infrequent storage). Default hot. This configuration is not supported for metric topics.</p>
                     * @return StorageType <p>Log topic storage type. Available values: hot (standard storage), cold (infrequent storage). Default hot. This configuration is not supported for metric topics.</p>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>Log topic storage type. Available values: hot (standard storage), cold (infrequent storage). Default hot. This configuration is not supported for metric topics.</p>
                     * @param _storageType <p>Log topic storage type. Available values: hot (standard storage), cold (infrequent storage). Default hot. This configuration is not supported for metric topics.</p>
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
                     * 获取<p>Storage time, in days.</p><ul><li>Log topic: When logs are collected to standard storage, the supported range is 1 to 3600 days. A value of 3640 indicates permanent retention.</li><li>Log topic: When logs are collected to infrequently accessed storage, the supported range is 7 to 3600 days. A value of 3640 indicates permanent retention.</li><li>Metric topic: The supported range is 1 to 3600 days. A value of 3640 indicates permanent retention.</li></ul>
                     * @return Period <p>Storage time, in days.</p><ul><li>Log topic: When logs are collected to standard storage, the supported range is 1 to 3600 days. A value of 3640 indicates permanent retention.</li><li>Log topic: When logs are collected to infrequently accessed storage, the supported range is 7 to 3600 days. A value of 3640 indicates permanent retention.</li><li>Metric topic: The supported range is 1 to 3600 days. A value of 3640 indicates permanent retention.</li></ul>
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置<p>Storage time, in days.</p><ul><li>Log topic: When logs are collected to standard storage, the supported range is 1 to 3600 days. A value of 3640 indicates permanent retention.</li><li>Log topic: When logs are collected to infrequently accessed storage, the supported range is 7 to 3600 days. A value of 3640 indicates permanent retention.</li><li>Metric topic: The supported range is 1 to 3600 days. A value of 3640 indicates permanent retention.</li></ul>
                     * @param _period <p>Storage time, in days.</p><ul><li>Log topic: When logs are collected to standard storage, the supported range is 1 to 3600 days. A value of 3640 indicates permanent retention.</li><li>Log topic: When logs are collected to infrequently accessed storage, the supported range is 7 to 3600 days. A value of 3640 indicates permanent retention.</li><li>Metric topic: The supported range is 1 to 3600 days. A value of 3640 indicates permanent retention.</li></ul>
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
                     * 获取<p>0: Log topic disables log settlement.<br>Non-0: Number of days for standard storage after log settlement is enabled in the log topic. HotPeriod needs to be greater than or equal to 7 and less than Period.<br>Effective only when StorageType is hot. This configuration is not supported for metric topics.</p>
                     * @return HotPeriod <p>0: Log topic disables log settlement.<br>Non-0: Number of days for standard storage after log settlement is enabled in the log topic. HotPeriod needs to be greater than or equal to 7 and less than Period.<br>Effective only when StorageType is hot. This configuration is not supported for metric topics.</p>
                     * 
                     */
                    uint64_t GetHotPeriod() const;

                    /**
                     * 设置<p>0: Log topic disables log settlement.<br>Non-0: Number of days for standard storage after log settlement is enabled in the log topic. HotPeriod needs to be greater than or equal to 7 and less than Period.<br>Effective only when StorageType is hot. This configuration is not supported for metric topics.</p>
                     * @param _hotPeriod <p>0: Log topic disables log settlement.<br>Non-0: Number of days for standard storage after log settlement is enabled in the log topic. HotPeriod needs to be greater than or equal to 7 and less than Period.<br>Effective only when StorageType is hot. This configuration is not supported for metric topics.</p>
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
                     * 获取<p>Encryption-related parameters. Encrypted regions and allowlisted users can pass this parameter, which cannot be passed in other scenarios.<br>0 or not passed: no encryption<br>1: kms-cls cloud service key encryption</p><p>Supported regions: ap-beijing, ap-guangzhou, ap-shanghai, ap-singapore, ap-bangkok, ap-jakarta, eu-frankfurt, ap-seoul, ap-tokyo</p>
                     * @return Encryption <p>Encryption-related parameters. Encrypted regions and allowlisted users can pass this parameter, which cannot be passed in other scenarios.<br>0 or not passed: no encryption<br>1: kms-cls cloud service key encryption</p><p>Supported regions: ap-beijing, ap-guangzhou, ap-shanghai, ap-singapore, ap-bangkok, ap-jakarta, eu-frankfurt, ap-seoul, ap-tokyo</p>
                     * 
                     */
                    uint64_t GetEncryption() const;

                    /**
                     * 设置<p>Encryption-related parameters. Encrypted regions and allowlisted users can pass this parameter, which cannot be passed in other scenarios.<br>0 or not passed: no encryption<br>1: kms-cls cloud service key encryption</p><p>Supported regions: ap-beijing, ap-guangzhou, ap-shanghai, ap-singapore, ap-bangkok, ap-jakarta, eu-frankfurt, ap-seoul, ap-tokyo</p>
                     * @param _encryption <p>Encryption-related parameters. Encrypted regions and allowlisted users can pass this parameter, which cannot be passed in other scenarios.<br>0 or not passed: no encryption<br>1: kms-cls cloud service key encryption</p><p>Supported regions: ap-beijing, ap-guangzhou, ap-shanghai, ap-singapore, ap-bangkok, ap-jakarta, eu-frankfurt, ap-seoul, ap-tokyo</p>
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
                     * 获取<p>Topic type</p><ul><li>0: Log topic, default value</li><li>1: Metric topic</li></ul>
                     * @return BizType <p>Topic type</p><ul><li>0: Log topic, default value</li><li>1: Metric topic</li></ul>
                     * 
                     */
                    uint64_t GetBizType() const;

                    /**
                     * 设置<p>Topic type</p><ul><li>0: Log topic, default value</li><li>1: Metric topic</li></ul>
                     * @param _bizType <p>Topic type</p><ul><li>0: Log topic, default value</li><li>1: Metric topic</li></ul>
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
                     * 获取<p>Custom topic ID, format: custom part-User APPID. If this parameter is left empty, ID will be automatically generated.</p><ul><li>The custom part only supports lowercase letters, digits, and -, cannot start or end with -, and must be 3 to 40 characters in length.</li><li>The trailing part requires the use of - to concatenate User APPID. APPID can be queried on the page https://console.cloud.tencent.com/developer.</li><li>If this field is specified, ensure uniqueness across all regions.</li></ul>
                     * @return TopicId <p>Custom topic ID, format: custom part-User APPID. If this parameter is left empty, ID will be automatically generated.</p><ul><li>The custom part only supports lowercase letters, digits, and -, cannot start or end with -, and must be 3 to 40 characters in length.</li><li>The trailing part requires the use of - to concatenate User APPID. APPID can be queried on the page https://console.cloud.tencent.com/developer.</li><li>If this field is specified, ensure uniqueness across all regions.</li></ul>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>Custom topic ID, format: custom part-User APPID. If this parameter is left empty, ID will be automatically generated.</p><ul><li>The custom part only supports lowercase letters, digits, and -, cannot start or end with -, and must be 3 to 40 characters in length.</li><li>The trailing part requires the use of - to concatenate User APPID. APPID can be queried on the page https://console.cloud.tencent.com/developer.</li><li>If this field is specified, ensure uniqueness across all regions.</li></ul>
                     * @param _topicId <p>Custom topic ID, format: custom part-User APPID. If this parameter is left empty, ID will be automatically generated.</p><ul><li>The custom part only supports lowercase letters, digits, and -, cannot start or end with -, and must be 3 to 40 characters in length.</li><li>The trailing part requires the use of - to concatenate User APPID. APPID can be queried on the page https://console.cloud.tencent.com/developer.</li><li>If this field is specified, ensure uniqueness across all regions.</li></ul>
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
                     * 获取<p>Free authentication switch. False: turned off; true: turned on. Default false.<br>When enabled, anonymous access to the log topic will be supported for designated operations. For details, see <a href="https://www.tencentcloud.com/document/product/614/41035?from_cn_redirect=1">log topic</a>. This configuration is not supported for metric topics.</p>
                     * @return IsWebTracking <p>Free authentication switch. False: turned off; true: turned on. Default false.<br>When enabled, anonymous access to the log topic will be supported for designated operations. For details, see <a href="https://www.tencentcloud.com/document/product/614/41035?from_cn_redirect=1">log topic</a>. This configuration is not supported for metric topics.</p>
                     * 
                     */
                    bool GetIsWebTracking() const;

                    /**
                     * 设置<p>Free authentication switch. False: turned off; true: turned on. Default false.<br>When enabled, anonymous access to the log topic will be supported for designated operations. For details, see <a href="https://www.tencentcloud.com/document/product/614/41035?from_cn_redirect=1">log topic</a>. This configuration is not supported for metric topics.</p>
                     * @param _isWebTracking <p>Free authentication switch. False: turned off; true: turned on. Default false.<br>When enabled, anonymous access to the log topic will be supported for designated operations. For details, see <a href="https://www.tencentcloud.com/document/product/614/41035?from_cn_redirect=1">log topic</a>. This configuration is not supported for metric topics.</p>
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
                     * 获取<p>Billing mode</p><p>Enumeration value:</p><ul><li>0: Function billing by usage</li><li>1: Raw log size billing (currently only supported for some customers)</li></ul><p>Default value: 0</p>
                     * @return BillingMode <p>Billing mode</p><p>Enumeration value:</p><ul><li>0: Function billing by usage</li><li>1: Raw log size billing (currently only supported for some customers)</li></ul><p>Default value: 0</p>
                     * 
                     */
                    uint64_t GetBillingMode() const;

                    /**
                     * 设置<p>Billing mode</p><p>Enumeration value:</p><ul><li>0: Function billing by usage</li><li>1: Raw log size billing (currently only supported for some customers)</li></ul><p>Default value: 0</p>
                     * @param _billingMode <p>Billing mode</p><p>Enumeration value:</p><ul><li>0: Function billing by usage</li><li>1: Raw log size billing (currently only supported for some customers)</li></ul><p>Default value: 0</p>
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
                     * <p>Logset ID</p><ul><li>Obtain the logset Id through <a href="https://www.tencentcloud.com/document/product/614/58624?from_cn_redirect=1">Get Logset List</a>.</li></ul>
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * <p>Topic name<br>Name limitation</p><ul><li>Cannot be an empty string</li><li>Cannot contain character '|'</li><li>Cannot use the following names ["cls_service_log","loglistener_status","loglistener_alarm","loglistener_business","cls_service_metric"]</li></ul>
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * <p>Topic partition count. Default creation is 1 partition. Supports a maximum of 10 partitions.</p>
                     */
                    int64_t m_partitionCount;
                    bool m_partitionCountHasBeenSet;

                    /**
                     * <p>Tag description list, by specifying this parameter, you can simultaneously bind a tag to the corresponding topic. Up to 10 tag key-value pairs are supported, and the same resource can only be bound to the same tag key.</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Whether to enable auto-split, true by default</p>
                     */
                    bool m_autoSplit;
                    bool m_autoSplitHasBeenSet;

                    /**
                     * <p>When auto-split is enabled, the maximum number of partitions allowed for each topic is 50 by default.</p>
                     */
                    int64_t m_maxSplitPartitions;
                    bool m_maxSplitPartitionsHasBeenSet;

                    /**
                     * <p>Log topic storage type. Available values: hot (standard storage), cold (infrequent storage). Default hot. This configuration is not supported for metric topics.</p>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>Storage time, in days.</p><ul><li>Log topic: When logs are collected to standard storage, the supported range is 1 to 3600 days. A value of 3640 indicates permanent retention.</li><li>Log topic: When logs are collected to infrequently accessed storage, the supported range is 7 to 3600 days. A value of 3640 indicates permanent retention.</li><li>Metric topic: The supported range is 1 to 3600 days. A value of 3640 indicates permanent retention.</li></ul>
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>Topic description</p>
                     */
                    std::string m_describes;
                    bool m_describesHasBeenSet;

                    /**
                     * <p>0: Log topic disables log settlement.<br>Non-0: Number of days for standard storage after log settlement is enabled in the log topic. HotPeriod needs to be greater than or equal to 7 and less than Period.<br>Effective only when StorageType is hot. This configuration is not supported for metric topics.</p>
                     */
                    uint64_t m_hotPeriod;
                    bool m_hotPeriodHasBeenSet;

                    /**
                     * <p>Encryption-related parameters. Encrypted regions and allowlisted users can pass this parameter, which cannot be passed in other scenarios.<br>0 or not passed: no encryption<br>1: kms-cls cloud service key encryption</p><p>Supported regions: ap-beijing, ap-guangzhou, ap-shanghai, ap-singapore, ap-bangkok, ap-jakarta, eu-frankfurt, ap-seoul, ap-tokyo</p>
                     */
                    uint64_t m_encryption;
                    bool m_encryptionHasBeenSet;

                    /**
                     * <p>Topic type</p><ul><li>0: Log topic, default value</li><li>1: Metric topic</li></ul>
                     */
                    uint64_t m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * <p>Custom topic ID, format: custom part-User APPID. If this parameter is left empty, ID will be automatically generated.</p><ul><li>The custom part only supports lowercase letters, digits, and -, cannot start or end with -, and must be 3 to 40 characters in length.</li><li>The trailing part requires the use of - to concatenate User APPID. APPID can be queried on the page https://console.cloud.tencent.com/developer.</li><li>If this field is specified, ensure uniqueness across all regions.</li></ul>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>Free authentication switch. False: turned off; true: turned on. Default false.<br>When enabled, anonymous access to the log topic will be supported for designated operations. For details, see <a href="https://www.tencentcloud.com/document/product/614/41035?from_cn_redirect=1">log topic</a>. This configuration is not supported for metric topics.</p>
                     */
                    bool m_isWebTracking;
                    bool m_isWebTrackingHasBeenSet;

                    /**
                     * <p>Topic extended information</p>
                     */
                    TopicExtendInfo m_extends;
                    bool m_extendsHasBeenSet;

                    /**
                     * <p>Enable logging of public network source IP and server receipt time</p>
                     */
                    bool m_isSourceFrom;
                    bool m_isSourceFromHasBeenSet;

                    /**
                     * <p>Billing mode</p><p>Enumeration value:</p><ul><li>0: Function billing by usage</li><li>1: Raw log size billing (currently only supported for some customers)</li></ul><p>Default value: 0</p>
                     */
                    uint64_t m_billingMode;
                    bool m_billingModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATETOPICREQUEST_H_
