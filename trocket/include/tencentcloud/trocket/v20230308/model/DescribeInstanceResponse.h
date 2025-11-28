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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEINSTANCERESPONSE_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/Tag.h>
#include <tencentcloud/trocket/v20230308/model/Endpoint.h>
#include <tencentcloud/trocket/v20230308/model/ZoneScheduledItem.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * DescribeInstance response structure.
                */
                class DescribeInstanceResponse : public AbstractModel
                {
                public:
                    DescribeInstanceResponse();
                    ~DescribeInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance type.
Specifies the EXPERIMENT trial version.
BASIC version.
PRO edition.
PLATINUM. platinum version.
                     * @return InstanceType Instance type.
Specifies the EXPERIMENT trial version.
BASIC version.
PRO edition.
PLATINUM. platinum version.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

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
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Number of topics
                     * @return TopicNum Number of topics
                     * 
                     */
                    int64_t GetTopicNum() const;

                    /**
                     * 判断参数 TopicNum 是否已赋值
                     * @return TopicNum 是否已赋值
                     * 
                     */
                    bool TopicNumHasBeenSet() const;

                    /**
                     * 获取Maximum number of topics per instance
                     * @return TopicNumLimit Maximum number of topics per instance
                     * 
                     */
                    int64_t GetTopicNumLimit() const;

                    /**
                     * 判断参数 TopicNumLimit 是否已赋值
                     * @return TopicNumLimit 是否已赋值
                     * 
                     */
                    bool TopicNumLimitHasBeenSet() const;

                    /**
                     * 获取Number of consumer groups
                     * @return GroupNum Number of consumer groups
                     * 
                     */
                    int64_t GetGroupNum() const;

                    /**
                     * 判断参数 GroupNum 是否已赋值
                     * @return GroupNum 是否已赋值
                     * 
                     */
                    bool GroupNumHasBeenSet() const;

                    /**
                     * 获取Maximum number of consumer groups per instance
                     * @return GroupNumLimit Maximum number of consumer groups per instance
                     * 
                     */
                    int64_t GetGroupNumLimit() const;

                    /**
                     * 判断参数 GroupNumLimit 是否已赋值
                     * @return GroupNumLimit 是否已赋值
                     * 
                     */
                    bool GroupNumLimitHasBeenSet() const;

                    /**
                     * 获取Message retention time, in hours
                     * @return MessageRetention Message retention time, in hours
                     * 
                     */
                    int64_t GetMessageRetention() const;

                    /**
                     * 判断参数 MessageRetention 是否已赋值
                     * @return MessageRetention 是否已赋值
                     * 
                     */
                    bool MessageRetentionHasBeenSet() const;

                    /**
                     * 获取Maximum adjustable message retention time, in hours
                     * @return RetentionUpperLimit Maximum adjustable message retention time, in hours
                     * 
                     */
                    int64_t GetRetentionUpperLimit() const;

                    /**
                     * 判断参数 RetentionUpperLimit 是否已赋值
                     * @return RetentionUpperLimit 是否已赋值
                     * 
                     */
                    bool RetentionUpperLimitHasBeenSet() const;

                    /**
                     * 获取Minimum adjustable message retention time, in hours
                     * @return RetentionLowerLimit Minimum adjustable message retention time, in hours
                     * 
                     */
                    int64_t GetRetentionLowerLimit() const;

                    /**
                     * 判断参数 RetentionLowerLimit 是否已赋值
                     * @return RetentionLowerLimit 是否已赋值
                     * 
                     */
                    bool RetentionLowerLimitHasBeenSet() const;

                    /**
                     * 获取TPS throttle value
                     * @return TpsLimit TPS throttle value
                     * 
                     */
                    int64_t GetTpsLimit() const;

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
                     * 判断参数 ScaledTpsLimit 是否已赋值
                     * @return ScaledTpsLimit 是否已赋值
                     * 
                     */
                    bool ScaledTpsLimitHasBeenSet() const;

                    /**
                     * 获取Maximum delayed message time, in hours
                     * @return MaxMessageDelay Maximum delayed message time, in hours
                     * 
                     */
                    int64_t GetMaxMessageDelay() const;

                    /**
                     * 判断参数 MaxMessageDelay 是否已赋值
                     * @return MaxMessageDelay 是否已赋值
                     * 
                     */
                    bool MaxMessageDelayHasBeenSet() const;

                    /**
                     * 获取Creation time. **It is a Unix timestamp (ms).**
                     * @return CreatedTime Creation time. **It is a Unix timestamp (ms).**
                     * 
                     */
                    int64_t GetCreatedTime() const;

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Message sending and receiving ratio
                     * @return SendReceiveRatio Message sending and receiving ratio
                     * 
                     */
                    double GetSendReceiveRatio() const;

                    /**
                     * 判断参数 SendReceiveRatio 是否已赋值
                     * @return SendReceiveRatio 是否已赋值
                     * 
                     */
                    bool SendReceiveRatioHasBeenSet() const;

                    /**
                     * 获取Tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TagList Tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTagList() const;

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取Access point list

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndpointList Access point list

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Endpoint> GetEndpointList() const;

                    /**
                     * 判断参数 EndpointList 是否已赋值
                     * @return EndpointList 是否已赋值
                     * 
                     */
                    bool EndpointListHasBeenSet() const;

                    /**
                     * 获取Maximum number of topic queues
                     * @return TopicQueueNumUpperLimit Maximum number of topic queues
                     * 
                     */
                    int64_t GetTopicQueueNumUpperLimit() const;

                    /**
                     * 判断参数 TopicQueueNumUpperLimit 是否已赋值
                     * @return TopicQueueNumUpperLimit 是否已赋值
                     * 
                     */
                    bool TopicQueueNumUpperLimitHasBeenSet() const;

                    /**
                     * 获取Minimum queue count for topic
                     * @return TopicQueueNumLowerLimit Minimum queue count for topic
                     * 
                     */
                    int64_t GetTopicQueueNumLowerLimit() const;

                    /**
                     * 判断参数 TopicQueueNumLowerLimit 是否已赋值
                     * @return TopicQueueNumLowerLimit 是否已赋值
                     * 
                     */
                    bool TopicQueueNumLowerLimitHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Remark Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Instance status. valid values are as follows:.

- RUNNING: RUNNING.
-ABNORMAL: indicates an abnormal status.
-OVERDUE: isolated.
-DESTROYED: specifies the terminated status.
-CREATING: creating.
-MODIFYING.
-CREATE_FAILURE: creation failed.
-MODIFY_FAILURE: configuration adjustment failure.
-DELETING: deleting.
                     * @return InstanceStatus Instance status. valid values are as follows:.

- RUNNING: RUNNING.
-ABNORMAL: indicates an abnormal status.
-OVERDUE: isolated.
-DESTROYED: specifies the terminated status.
-CREATING: creating.
-MODIFYING.
-CREATE_FAILURE: creation failed.
-MODIFY_FAILURE: configuration adjustment failure.
-DELETING: deleting.
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取Instance specification.
                     * @return SkuCode Instance specification.
                     * 
                     */
                    std::string GetSkuCode() const;

                    /**
                     * 判断参数 SkuCode 是否已赋值
                     * @return SkuCode 是否已赋值
                     * 
                     */
                    bool SkuCodeHasBeenSet() const;

                    /**
                     * 获取Billing mode. valid enumeration values are as follows:.

- POSTPAID: POSTPAID pay-as-you-go billing.
- PREPAID: PREPAID annual and monthly.
                     * @return PayMode Billing mode. valid enumeration values are as follows:.

- POSTPAID: POSTPAID pay-as-you-go billing.
- PREPAID: PREPAID annual and monthly.
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Whether to enable elastic TPS.
                     * @return ScaledTpsEnabled Whether to enable elastic TPS.
                     * 
                     */
                    bool GetScaledTpsEnabled() const;

                    /**
                     * 判断参数 ScaledTpsEnabled 是否已赋值
                     * @return ScaledTpsEnabled 是否已赋值
                     * 
                     */
                    bool ScaledTpsEnabledHasBeenSet() const;

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
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取Expiration time. **It is a Unix timestamp (ms).**
                     * @return ExpiryTime Expiration time. **It is a Unix timestamp (ms).**
                     * 
                     */
                    int64_t GetExpiryTime() const;

                    /**
                     * 判断参数 ExpiryTime 是否已赋值
                     * @return ExpiryTime 是否已赋值
                     * 
                     */
                    bool ExpiryTimeHasBeenSet() const;

                    /**
                     * 获取Specifies the limit on the number of roles.
                     * @return RoleNumLimit Specifies the limit on the number of roles.
                     * 
                     */
                    int64_t GetRoleNumLimit() const;

                    /**
                     * 判断参数 RoleNumLimit 是否已赋值
                     * @return RoleNumLimit 是否已赋值
                     * 
                     */
                    bool RoleNumLimitHasBeenSet() const;

                    /**
                     * 获取Whether ACL is enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AclEnabled Whether ACL is enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetAclEnabled() const;

                    /**
                     * 判断参数 AclEnabled 是否已赋值
                     * @return AclEnabled 是否已赋值
                     * 
                     */
                    bool AclEnabledHasBeenSet() const;

                    /**
                     * 获取Number of topics within the free quota.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TopicNumLowerLimit Number of topics within the free quota.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTopicNumLowerLimit() const;

                    /**
                     * 判断参数 TopicNumLowerLimit 是否已赋值
                     * @return TopicNumLowerLimit 是否已赋值
                     * 
                     */
                    bool TopicNumLowerLimitHasBeenSet() const;

                    /**
                     * 获取Maximum settable number of topics.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TopicNumUpperLimit Maximum settable number of topics.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTopicNumUpperLimit() const;

                    /**
                     * 判断参数 TopicNumUpperLimit 是否已赋值
                     * @return TopicNumUpperLimit 是否已赋值
                     * 
                     */
                    bool TopicNumUpperLimitHasBeenSet() const;

                    /**
                     * 获取AZ list. See [ZoneInfo](https://www.tencentcloud.comom/document/api/1596/77932?from_cn_redirect=1#ZoneInfo) returned by the API [DescribeZones](https://www.tencentcloud.comom/document/product/1596/77929?from_cn_redirect=1) in Data Type.
                     * @return ZoneIds AZ list. See [ZoneInfo](https://www.tencentcloud.comom/document/api/1596/77932?from_cn_redirect=1#ZoneInfo) returned by the API [DescribeZones](https://www.tencentcloud.comom/document/product/1596/77929?from_cn_redirect=1) in Data Type.
                     * 
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取Number of proxy nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NodeCount Number of proxy nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetNodeCount() const;

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取Proxy scheduling details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ZoneScheduledList Proxy scheduling details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ZoneScheduledItem> GetZoneScheduledList() const;

                    /**
                     * 判断参数 ZoneScheduledList 是否已赋值
                     * @return ZoneScheduledList 是否已赋值
                     * 
                     */
                    bool ZoneScheduledListHasBeenSet() const;

                private:

                    /**
                     * Instance type.
Specifies the EXPERIMENT trial version.
BASIC version.
PRO edition.
PLATINUM. platinum version.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

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
                     * Number of topics
                     */
                    int64_t m_topicNum;
                    bool m_topicNumHasBeenSet;

                    /**
                     * Maximum number of topics per instance
                     */
                    int64_t m_topicNumLimit;
                    bool m_topicNumLimitHasBeenSet;

                    /**
                     * Number of consumer groups
                     */
                    int64_t m_groupNum;
                    bool m_groupNumHasBeenSet;

                    /**
                     * Maximum number of consumer groups per instance
                     */
                    int64_t m_groupNumLimit;
                    bool m_groupNumLimitHasBeenSet;

                    /**
                     * Message retention time, in hours
                     */
                    int64_t m_messageRetention;
                    bool m_messageRetentionHasBeenSet;

                    /**
                     * Maximum adjustable message retention time, in hours
                     */
                    int64_t m_retentionUpperLimit;
                    bool m_retentionUpperLimitHasBeenSet;

                    /**
                     * Minimum adjustable message retention time, in hours
                     */
                    int64_t m_retentionLowerLimit;
                    bool m_retentionLowerLimitHasBeenSet;

                    /**
                     * TPS throttle value
                     */
                    int64_t m_tpsLimit;
                    bool m_tpsLimitHasBeenSet;

                    /**
                     * Elastic TPS throttle value
                     */
                    int64_t m_scaledTpsLimit;
                    bool m_scaledTpsLimitHasBeenSet;

                    /**
                     * Maximum delayed message time, in hours
                     */
                    int64_t m_maxMessageDelay;
                    bool m_maxMessageDelayHasBeenSet;

                    /**
                     * Creation time. **It is a Unix timestamp (ms).**
                     */
                    int64_t m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Message sending and receiving ratio
                     */
                    double m_sendReceiveRatio;
                    bool m_sendReceiveRatioHasBeenSet;

                    /**
                     * Tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * Access point list

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Endpoint> m_endpointList;
                    bool m_endpointListHasBeenSet;

                    /**
                     * Maximum number of topic queues
                     */
                    int64_t m_topicQueueNumUpperLimit;
                    bool m_topicQueueNumUpperLimitHasBeenSet;

                    /**
                     * Minimum queue count for topic
                     */
                    int64_t m_topicQueueNumLowerLimit;
                    bool m_topicQueueNumLowerLimitHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Instance status. valid values are as follows:.

- RUNNING: RUNNING.
-ABNORMAL: indicates an abnormal status.
-OVERDUE: isolated.
-DESTROYED: specifies the terminated status.
-CREATING: creating.
-MODIFYING.
-CREATE_FAILURE: creation failed.
-MODIFY_FAILURE: configuration adjustment failure.
-DELETING: deleting.
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * Instance specification.
                     */
                    std::string m_skuCode;
                    bool m_skuCodeHasBeenSet;

                    /**
                     * Billing mode. valid enumeration values are as follows:.

- POSTPAID: POSTPAID pay-as-you-go billing.
- PREPAID: PREPAID annual and monthly.
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Whether to enable elastic TPS.
                     */
                    bool m_scaledTpsEnabled;
                    bool m_scaledTpsEnabledHasBeenSet;

                    /**
                     * Specifies whether the prepaid cluster is automatically renewed. valid values are as follows:.

- 0: no automatic renewal.
- 1: specifies automatic renewal.
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Expiration time. **It is a Unix timestamp (ms).**
                     */
                    int64_t m_expiryTime;
                    bool m_expiryTimeHasBeenSet;

                    /**
                     * Specifies the limit on the number of roles.
                     */
                    int64_t m_roleNumLimit;
                    bool m_roleNumLimitHasBeenSet;

                    /**
                     * Whether ACL is enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_aclEnabled;
                    bool m_aclEnabledHasBeenSet;

                    /**
                     * Number of topics within the free quota.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_topicNumLowerLimit;
                    bool m_topicNumLowerLimitHasBeenSet;

                    /**
                     * Maximum settable number of topics.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_topicNumUpperLimit;
                    bool m_topicNumUpperLimitHasBeenSet;

                    /**
                     * AZ list. See [ZoneInfo](https://www.tencentcloud.comom/document/api/1596/77932?from_cn_redirect=1#ZoneInfo) returned by the API [DescribeZones](https://www.tencentcloud.comom/document/product/1596/77929?from_cn_redirect=1) in Data Type.
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Number of proxy nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * Proxy scheduling details.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ZoneScheduledItem> m_zoneScheduledList;
                    bool m_zoneScheduledListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEINSTANCERESPONSE_H_
