/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_DESCRIBESUBSCRIBECONFRESPONSE_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_DESCRIBESUBSCRIBECONFRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20180330/model/SubscribeObject.h>
#include <tencentcloud/dts/v20180330/model/TagItem.h>
#include <tencentcloud/dts/v20180330/model/SubsErr.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * DescribeSubscribeConf response structure.
                */
                class DescribeSubscribeConfResponse : public AbstractModel
                {
                public:
                    DescribeSubscribeConfResponse();
                    ~DescribeSubscribeConfResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Subscription instance ID
                     * @return SubscribeId Subscription instance ID
                     * 
                     */
                    std::string GetSubscribeId() const;

                    /**
                     * 判断参数 SubscribeId 是否已赋值
                     * @return SubscribeId 是否已赋值
                     * 
                     */
                    bool SubscribeIdHasBeenSet() const;

                    /**
                     * 获取Subscription instance name
                     * @return SubscribeName Subscription instance name
                     * 
                     */
                    std::string GetSubscribeName() const;

                    /**
                     * 判断参数 SubscribeName 是否已赋值
                     * @return SubscribeName 是否已赋值
                     * 
                     */
                    bool SubscribeNameHasBeenSet() const;

                    /**
                     * 获取Subscription channel
                     * @return ChannelId Subscription channel
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取Subscribed database type
                     * @return Product Subscribed database type
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取Subscribed instance
                     * @return InstanceId Subscribed instance
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
                     * 获取Subscribed instance status. Valid values: running, offline, isolate
                     * @return InstanceStatus Subscribed instance status. Valid values: running, offline, isolate
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
                     * 获取Subscription instance status. Valid values: unconfigure, configuring, configured
                     * @return SubsStatus Subscription instance status. Valid values: unconfigure, configuring, configured
                     * 
                     */
                    std::string GetSubsStatus() const;

                    /**
                     * 判断参数 SubsStatus 是否已赋值
                     * @return SubsStatus 是否已赋值
                     * 
                     */
                    bool SubsStatusHasBeenSet() const;

                    /**
                     * 获取Subscription instance lifecycle status. Valid values: normal, isolating, isolated, offlining
                     * @return Status Subscription instance lifecycle status. Valid values: normal, isolating, isolated, offlining
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Subscription instance creation time
                     * @return CreateTime Subscription instance creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Subscription instance isolation time
                     * @return IsolateTime Subscription instance isolation time
                     * 
                     */
                    std::string GetIsolateTime() const;

                    /**
                     * 判断参数 IsolateTime 是否已赋值
                     * @return IsolateTime 是否已赋值
                     * 
                     */
                    bool IsolateTimeHasBeenSet() const;

                    /**
                     * 获取Subscription instance expiration time
                     * @return ExpireTime Subscription instance expiration time
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Subscription instance deactivation time
                     * @return OfflineTime Subscription instance deactivation time
                     * 
                     */
                    std::string GetOfflineTime() const;

                    /**
                     * 判断参数 OfflineTime 是否已赋值
                     * @return OfflineTime 是否已赋值
                     * 
                     */
                    bool OfflineTimeHasBeenSet() const;

                    /**
                     * 获取Consumption starting time point of subscription instance
                     * @return ConsumeStartTime Consumption starting time point of subscription instance
                     * 
                     */
                    std::string GetConsumeStartTime() const;

                    /**
                     * 判断参数 ConsumeStartTime 是否已赋值
                     * @return ConsumeStartTime 是否已赋值
                     * 
                     */
                    bool ConsumeStartTimeHasBeenSet() const;

                    /**
                     * 获取Subscription instance billing mode. 1: hourly billing
                     * @return PayType Subscription instance billing mode. 1: hourly billing
                     * 
                     */
                    int64_t GetPayType() const;

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     * 
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取Subscription channel VIP
                     * @return Vip Subscription channel VIP
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Subscription channel port
                     * @return Vport Subscription channel port
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取Subscription channel `VpcId`
                     * @return UniqVpcId Subscription channel `VpcId`
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取Subscription channel `SubnetId`
                     * @return UniqSubnetId Subscription channel `SubnetId`
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取Current SDK consumption time point
                     * @return SdkConsumedTime Current SDK consumption time point
                     * 
                     */
                    std::string GetSdkConsumedTime() const;

                    /**
                     * 判断参数 SdkConsumedTime 是否已赋值
                     * @return SdkConsumedTime 是否已赋值
                     * 
                     */
                    bool SdkConsumedTimeHasBeenSet() const;

                    /**
                     * 获取Subscription SDK IP address
                     * @return SdkHost Subscription SDK IP address
                     * 
                     */
                    std::string GetSdkHost() const;

                    /**
                     * 判断参数 SdkHost 是否已赋值
                     * @return SdkHost 是否已赋值
                     * 
                     */
                    bool SdkHostHasBeenSet() const;

                    /**
                     * 获取Subscription object type. 0: full instance subscription, 1: DDL data subscription, 2: DML structure subscription, 3: DDL data subscription + DML structure subscription
                     * @return SubscribeObjectType Subscription object type. 0: full instance subscription, 1: DDL data subscription, 2: DML structure subscription, 3: DDL data subscription + DML structure subscription
                     * 
                     */
                    int64_t GetSubscribeObjectType() const;

                    /**
                     * 判断参数 SubscribeObjectType 是否已赋值
                     * @return SubscribeObjectType 是否已赋值
                     * 
                     */
                    bool SubscribeObjectTypeHasBeenSet() const;

                    /**
                     * 获取Subscription object, which is an empty array if `SubscribeObjectType` is 0
                     * @return SubscribeObjects Subscription object, which is an empty array if `SubscribeObjectType` is 0
                     * 
                     */
                    std::vector<SubscribeObject> GetSubscribeObjects() const;

                    /**
                     * 判断参数 SubscribeObjects 是否已赋值
                     * @return SubscribeObjects 是否已赋值
                     * 
                     */
                    bool SubscribeObjectsHasBeenSet() const;

                    /**
                     * 获取Modification time
                     * @return ModifyTime Modification time
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Region
                     * @return Region Region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Tags of the subscription
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Tags Tags of the subscription
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TagItem> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Whether auto-renewal is enabled. 0: do not enable, 1: enable
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return AutoRenewFlag Whether auto-renewal is enabled. 0: do not enable, 1: enable
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取Data subscription edition. `txdts`: Legacy edition; `kafka`: Kafka edition.
                     * @return SubscribeVersion Data subscription edition. `txdts`: Legacy edition; `kafka`: Kafka edition.
                     * 
                     */
                    std::string GetSubscribeVersion() const;

                    /**
                     * 判断参数 SubscribeVersion 是否已赋值
                     * @return SubscribeVersion 是否已赋值
                     * 
                     */
                    bool SubscribeVersionHasBeenSet() const;

                    /**
                     * 获取Error message.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Errors Error message.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<SubsErr> GetErrors() const;

                    /**
                     * 判断参数 Errors 是否已赋值
                     * @return Errors 是否已赋值
                     * 
                     */
                    bool ErrorsHasBeenSet() const;

                private:

                    /**
                     * Subscription instance ID
                     */
                    std::string m_subscribeId;
                    bool m_subscribeIdHasBeenSet;

                    /**
                     * Subscription instance name
                     */
                    std::string m_subscribeName;
                    bool m_subscribeNameHasBeenSet;

                    /**
                     * Subscription channel
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * Subscribed database type
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * Subscribed instance
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Subscribed instance status. Valid values: running, offline, isolate
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * Subscription instance status. Valid values: unconfigure, configuring, configured
                     */
                    std::string m_subsStatus;
                    bool m_subsStatusHasBeenSet;

                    /**
                     * Subscription instance lifecycle status. Valid values: normal, isolating, isolated, offlining
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Subscription instance creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Subscription instance isolation time
                     */
                    std::string m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * Subscription instance expiration time
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Subscription instance deactivation time
                     */
                    std::string m_offlineTime;
                    bool m_offlineTimeHasBeenSet;

                    /**
                     * Consumption starting time point of subscription instance
                     */
                    std::string m_consumeStartTime;
                    bool m_consumeStartTimeHasBeenSet;

                    /**
                     * Subscription instance billing mode. 1: hourly billing
                     */
                    int64_t m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * Subscription channel VIP
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Subscription channel port
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Subscription channel `VpcId`
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * Subscription channel `SubnetId`
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * Current SDK consumption time point
                     */
                    std::string m_sdkConsumedTime;
                    bool m_sdkConsumedTimeHasBeenSet;

                    /**
                     * Subscription SDK IP address
                     */
                    std::string m_sdkHost;
                    bool m_sdkHostHasBeenSet;

                    /**
                     * Subscription object type. 0: full instance subscription, 1: DDL data subscription, 2: DML structure subscription, 3: DDL data subscription + DML structure subscription
                     */
                    int64_t m_subscribeObjectType;
                    bool m_subscribeObjectTypeHasBeenSet;

                    /**
                     * Subscription object, which is an empty array if `SubscribeObjectType` is 0
                     */
                    std::vector<SubscribeObject> m_subscribeObjects;
                    bool m_subscribeObjectsHasBeenSet;

                    /**
                     * Modification time
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Tags of the subscription
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<TagItem> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Whether auto-renewal is enabled. 0: do not enable, 1: enable
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Data subscription edition. `txdts`: Legacy edition; `kafka`: Kafka edition.
                     */
                    std::string m_subscribeVersion;
                    bool m_subscribeVersionHasBeenSet;

                    /**
                     * Error message.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<SubsErr> m_errors;
                    bool m_errorsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_DESCRIBESUBSCRIBECONFRESPONSE_H_
