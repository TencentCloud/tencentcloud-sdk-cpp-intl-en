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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_FUSIONINSTANCEITEM_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_FUSIONINSTANCEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/Tag.h>
#include <tencentcloud/trocket/v20230308/model/InstanceItemExtraInfo.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * Instance information on the instance list page
                */
                class FusionInstanceItem : public AbstractModel
                {
                public:
                    FusionInstanceItem();
                    ~FusionInstanceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取Instance name
                     * @return InstanceName Instance name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param _instanceName Instance name
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Instance version.
                     * @return Version Instance version.
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Instance version.
                     * @param _version Instance version.
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Instance type.
Trial version.
BASIC version.
PRO, professional edition.
PLATINUM edition.
                     * @return InstanceType Instance type.
Trial version.
BASIC version.
PRO, professional edition.
PLATINUM edition.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance type.
Trial version.
BASIC version.
PRO, professional edition.
PLATINUM edition.
                     * @param _instanceType Instance type.
Trial version.
BASIC version.
PRO, professional edition.
PLATINUM edition.
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Instance status.
RUNNING. specifies the running status.
MAINTAINING.
ABNORMAL.
OVERDUE. specifies the state of arrears.
`DESTROYED`: `deleted`.
CREATING.
MODIFYING.
CREATE_FAILURE. specifies that the creation failed.
MODIFY_FAILURE. indicates a configuration adjustment failure.
Valid values: DELETING. indicates that the resource is being deleted.
                     * @return InstanceStatus Instance status.
RUNNING. specifies the running status.
MAINTAINING.
ABNORMAL.
OVERDUE. specifies the state of arrears.
`DESTROYED`: `deleted`.
CREATING.
MODIFYING.
CREATE_FAILURE. specifies that the creation failed.
MODIFY_FAILURE. indicates a configuration adjustment failure.
Valid values: DELETING. indicates that the resource is being deleted.
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置Instance status.
RUNNING. specifies the running status.
MAINTAINING.
ABNORMAL.
OVERDUE. specifies the state of arrears.
`DESTROYED`: `deleted`.
CREATING.
MODIFYING.
CREATE_FAILURE. specifies that the creation failed.
MODIFY_FAILURE. indicates a configuration adjustment failure.
Valid values: DELETING. indicates that the resource is being deleted.
                     * @param _instanceStatus Instance status.
RUNNING. specifies the running status.
MAINTAINING.
ABNORMAL.
OVERDUE. specifies the state of arrears.
`DESTROYED`: `deleted`.
CREATING.
MODIFYING.
CREATE_FAILURE. specifies that the creation failed.
MODIFY_FAILURE. indicates a configuration adjustment failure.
Valid values: DELETING. indicates that the resource is being deleted.
                     * 
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取Maximum number of instance topics
                     * @return TopicNumLimit Maximum number of instance topics
                     * 
                     */
                    int64_t GetTopicNumLimit() const;

                    /**
                     * 设置Maximum number of instance topics
                     * @param _topicNumLimit Maximum number of instance topics
                     * 
                     */
                    void SetTopicNumLimit(const int64_t& _topicNumLimit);

                    /**
                     * 判断参数 TopicNumLimit 是否已赋值
                     * @return TopicNumLimit 是否已赋值
                     * 
                     */
                    bool TopicNumLimitHasBeenSet() const;

                    /**
                     * 获取Maximum number of instance consumer groups
                     * @return GroupNumLimit Maximum number of instance consumer groups
                     * 
                     */
                    int64_t GetGroupNumLimit() const;

                    /**
                     * 设置Maximum number of instance consumer groups
                     * @param _groupNumLimit Maximum number of instance consumer groups
                     * 
                     */
                    void SetGroupNumLimit(const int64_t& _groupNumLimit);

                    /**
                     * 判断参数 GroupNumLimit 是否已赋值
                     * @return GroupNumLimit 是否已赋值
                     * 
                     */
                    bool GroupNumLimitHasBeenSet() const;

                    /**
                     * 获取Billing mode. valid enumeration values are as follows:.

-POSTPAID: pay-as-you-go.

- PREPAID: monthly subscription.
                     * @return PayMode Billing mode. valid enumeration values are as follows:.

-POSTPAID: pay-as-you-go.

- PREPAID: monthly subscription.
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置Billing mode. valid enumeration values are as follows:.

-POSTPAID: pay-as-you-go.

- PREPAID: monthly subscription.
                     * @param _payMode Billing mode. valid enumeration values are as follows:.

-POSTPAID: pay-as-you-go.

- PREPAID: monthly subscription.
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Expiration time. **It is a Unix timestamp (ms).**
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpiryTime Expiration time. **It is a Unix timestamp (ms).**
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetExpiryTime() const;

                    /**
                     * 设置Expiration time. **It is a Unix timestamp (ms).**
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _expiryTime Expiration time. **It is a Unix timestamp (ms).**
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExpiryTime(const int64_t& _expiryTime);

                    /**
                     * 判断参数 ExpiryTime 是否已赋值
                     * @return ExpiryTime 是否已赋值
                     * 
                     */
                    bool ExpiryTimeHasBeenSet() const;

                    /**
                     * 获取Remarks

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Remark Remarks

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _remark Remarks

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Number of topics
                     * @return TopicNum Number of topics
                     * 
                     */
                    int64_t GetTopicNum() const;

                    /**
                     * 设置Number of topics
                     * @param _topicNum Number of topics
                     * 
                     */
                    void SetTopicNum(const int64_t& _topicNum);

                    /**
                     * 判断参数 TopicNum 是否已赋值
                     * @return TopicNum 是否已赋值
                     * 
                     */
                    bool TopicNumHasBeenSet() const;

                    /**
                     * 获取Number of consumer groups
                     * @return GroupNum Number of consumer groups
                     * 
                     */
                    int64_t GetGroupNum() const;

                    /**
                     * 设置Number of consumer groups
                     * @param _groupNum Number of consumer groups
                     * 
                     */
                    void SetGroupNum(const int64_t& _groupNum);

                    /**
                     * 判断参数 GroupNum 是否已赋值
                     * @return GroupNum 是否已赋值
                     * 
                     */
                    bool GroupNumHasBeenSet() const;

                    /**
                     * 获取Tag list

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TagList Tag list

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTagList() const;

                    /**
                     * 设置Tag list

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tagList Tag list

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTagList(const std::vector<Tag>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取Specifies the product specification.
                     * @return SkuCode Specifies the product specification.
                     * 
                     */
                    std::string GetSkuCode() const;

                    /**
                     * 设置Specifies the product specification.
                     * @param _skuCode Specifies the product specification.
                     * 
                     */
                    void SetSkuCode(const std::string& _skuCode);

                    /**
                     * 判断参数 SkuCode 是否已赋值
                     * @return SkuCode 是否已赋值
                     * 
                     */
                    bool SkuCodeHasBeenSet() const;

                    /**
                     * 获取TPS throttle value

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TpsLimit TPS throttle value

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTpsLimit() const;

                    /**
                     * 设置TPS throttle value

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tpsLimit TPS throttle value

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTpsLimit(const int64_t& _tpsLimit);

                    /**
                     * 判断参数 TpsLimit 是否已赋值
                     * @return TpsLimit 是否已赋值
                     * 
                     */
                    bool TpsLimitHasBeenSet() const;

                    /**
                     * 获取Elastic TPS throttle value
                     * @return ScaledTpsLimit Elastic TPS throttle value
                     * 
                     */
                    int64_t GetScaledTpsLimit() const;

                    /**
                     * 设置Elastic TPS throttle value
                     * @param _scaledTpsLimit Elastic TPS throttle value
                     * 
                     */
                    void SetScaledTpsLimit(const int64_t& _scaledTpsLimit);

                    /**
                     * 判断参数 ScaledTpsLimit 是否已赋值
                     * @return ScaledTpsLimit 是否已赋值
                     * 
                     */
                    bool ScaledTpsLimitHasBeenSet() const;

                    /**
                     * 获取Message retention time, in hours
                     * @return MessageRetention Message retention time, in hours
                     * 
                     */
                    int64_t GetMessageRetention() const;

                    /**
                     * 设置Message retention time, in hours
                     * @param _messageRetention Message retention time, in hours
                     * 
                     */
                    void SetMessageRetention(const int64_t& _messageRetention);

                    /**
                     * 判断参数 MessageRetention 是否已赋值
                     * @return MessageRetention 是否已赋值
                     * 
                     */
                    bool MessageRetentionHasBeenSet() const;

                    /**
                     * 获取Maximum delayed message duration, in hours
                     * @return MaxMessageDelay Maximum delayed message duration, in hours
                     * 
                     */
                    int64_t GetMaxMessageDelay() const;

                    /**
                     * 设置Maximum delayed message duration, in hours
                     * @param _maxMessageDelay Maximum delayed message duration, in hours
                     * 
                     */
                    void SetMaxMessageDelay(const int64_t& _maxMessageDelay);

                    /**
                     * 判断参数 MaxMessageDelay 是否已赋值
                     * @return MaxMessageDelay 是否已赋值
                     * 
                     */
                    bool MaxMessageDelayHasBeenSet() const;

                    /**
                     * 获取Specifies whether the prepaid cluster is automatically renewed. valid values are as follows:.

- 0: no automatic renewal.
- 1: specifies automatic renewal.
                     * @return RenewFlag Specifies whether the prepaid cluster is automatically renewed. valid values are as follows:.

- 0: no automatic renewal.
- 1: specifies automatic renewal.
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置Specifies whether the prepaid cluster is automatically renewed. valid values are as follows:.

- 0: no automatic renewal.
- 1: specifies automatic renewal.
                     * @param _renewFlag Specifies whether the prepaid cluster is automatically renewed. valid values are as follows:.

- 0: no automatic renewal.
- 1: specifies automatic renewal.
                     * 
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取Data unique to version 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceItemExtraInfo Data unique to version 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    InstanceItemExtraInfo GetInstanceItemExtraInfo() const;

                    /**
                     * 设置Data unique to version 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceItemExtraInfo Data unique to version 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceItemExtraInfo(const InstanceItemExtraInfo& _instanceItemExtraInfo);

                    /**
                     * 判断参数 InstanceItemExtraInfo 是否已赋值
                     * @return InstanceItemExtraInfo 是否已赋值
                     * 
                     */
                    bool InstanceItemExtraInfoHasBeenSet() const;

                    /**
                     * 获取Expected termination time. **It is a Unix timestamp (ms).**
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DestroyTime Expected termination time. **It is a Unix timestamp (ms).**
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDestroyTime() const;

                    /**
                     * 设置Expected termination time. **It is a Unix timestamp (ms).**
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _destroyTime Expected termination time. **It is a Unix timestamp (ms).**
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDestroyTime(const int64_t& _destroyTime);

                    /**
                     * 判断参数 DestroyTime 是否已赋值
                     * @return DestroyTime 是否已赋值
                     * 
                     */
                    bool DestroyTimeHasBeenSet() const;

                    /**
                     * 获取AZ list. See [ZoneInfo](https://www.tencentcloud.comom/document/api/1596/77932?from_cn_redirect=1#ZoneInfo) returned by the API [DescribeZones](https://www.tencentcloud.comom/document/product/1596/77929?from_cn_redirect=1) in Data Type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ZoneIds AZ list. See [ZoneInfo](https://www.tencentcloud.comom/document/api/1596/77932?from_cn_redirect=1#ZoneInfo) returned by the API [DescribeZones](https://www.tencentcloud.comom/document/product/1596/77929?from_cn_redirect=1) in Data Type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置AZ list. See [ZoneInfo](https://www.tencentcloud.comom/document/api/1596/77932?from_cn_redirect=1#ZoneInfo) returned by the API [DescribeZones](https://www.tencentcloud.comom/document/product/1596/77929?from_cn_redirect=1) in Data Type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _zoneIds AZ list. See [ZoneInfo](https://www.tencentcloud.comom/document/api/1596/77932?from_cn_redirect=1#ZoneInfo) returned by the API [DescribeZones](https://www.tencentcloud.comom/document/product/1596/77929?from_cn_redirect=1) in Data Type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetZoneIds(const std::vector<int64_t>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取Whether to enable deletion protection
                     * @return EnableDeletionProtection Whether to enable deletion protection
                     * 
                     */
                    bool GetEnableDeletionProtection() const;

                    /**
                     * 设置Whether to enable deletion protection
                     * @param _enableDeletionProtection Whether to enable deletion protection
                     * 
                     */
                    void SetEnableDeletionProtection(const bool& _enableDeletionProtection);

                    /**
                     * 判断参数 EnableDeletionProtection 是否已赋值
                     * @return EnableDeletionProtection 是否已赋值
                     * 
                     */
                    bool EnableDeletionProtectionHasBeenSet() const;

                    /**
                     * 获取Instance creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Instance creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置Instance creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Instance creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Elastic TPS switch.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScaledTpsEnabled Elastic TPS switch.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetScaledTpsEnabled() const;

                    /**
                     * 设置Elastic TPS switch.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scaledTpsEnabled Elastic TPS switch.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScaledTpsEnabled(const bool& _scaledTpsEnabled);

                    /**
                     * 判断参数 ScaledTpsEnabled 是否已赋值
                     * @return ScaledTpsEnabled 是否已赋值
                     * 
                     */
                    bool ScaledTpsEnabledHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Instance version.
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Instance type.
Trial version.
BASIC version.
PRO, professional edition.
PLATINUM edition.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Instance status.
RUNNING. specifies the running status.
MAINTAINING.
ABNORMAL.
OVERDUE. specifies the state of arrears.
`DESTROYED`: `deleted`.
CREATING.
MODIFYING.
CREATE_FAILURE. specifies that the creation failed.
MODIFY_FAILURE. indicates a configuration adjustment failure.
Valid values: DELETING. indicates that the resource is being deleted.
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * Maximum number of instance topics
                     */
                    int64_t m_topicNumLimit;
                    bool m_topicNumLimitHasBeenSet;

                    /**
                     * Maximum number of instance consumer groups
                     */
                    int64_t m_groupNumLimit;
                    bool m_groupNumLimitHasBeenSet;

                    /**
                     * Billing mode. valid enumeration values are as follows:.

-POSTPAID: pay-as-you-go.

- PREPAID: monthly subscription.
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Expiration time. **It is a Unix timestamp (ms).**
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_expiryTime;
                    bool m_expiryTimeHasBeenSet;

                    /**
                     * Remarks

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Number of topics
                     */
                    int64_t m_topicNum;
                    bool m_topicNumHasBeenSet;

                    /**
                     * Number of consumer groups
                     */
                    int64_t m_groupNum;
                    bool m_groupNumHasBeenSet;

                    /**
                     * Tag list

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * Specifies the product specification.
                     */
                    std::string m_skuCode;
                    bool m_skuCodeHasBeenSet;

                    /**
                     * TPS throttle value

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_tpsLimit;
                    bool m_tpsLimitHasBeenSet;

                    /**
                     * Elastic TPS throttle value
                     */
                    int64_t m_scaledTpsLimit;
                    bool m_scaledTpsLimitHasBeenSet;

                    /**
                     * Message retention time, in hours
                     */
                    int64_t m_messageRetention;
                    bool m_messageRetentionHasBeenSet;

                    /**
                     * Maximum delayed message duration, in hours
                     */
                    int64_t m_maxMessageDelay;
                    bool m_maxMessageDelayHasBeenSet;

                    /**
                     * Specifies whether the prepaid cluster is automatically renewed. valid values are as follows:.

- 0: no automatic renewal.
- 1: specifies automatic renewal.
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Data unique to version 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    InstanceItemExtraInfo m_instanceItemExtraInfo;
                    bool m_instanceItemExtraInfoHasBeenSet;

                    /**
                     * Expected termination time. **It is a Unix timestamp (ms).**
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_destroyTime;
                    bool m_destroyTimeHasBeenSet;

                    /**
                     * AZ list. See [ZoneInfo](https://www.tencentcloud.comom/document/api/1596/77932?from_cn_redirect=1#ZoneInfo) returned by the API [DescribeZones](https://www.tencentcloud.comom/document/product/1596/77929?from_cn_redirect=1) in Data Type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Whether to enable deletion protection
                     */
                    bool m_enableDeletionProtection;
                    bool m_enableDeletionProtectionHasBeenSet;

                    /**
                     * Instance creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Elastic TPS switch.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_scaledTpsEnabled;
                    bool m_scaledTpsEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_FUSIONINSTANCEITEM_H_
