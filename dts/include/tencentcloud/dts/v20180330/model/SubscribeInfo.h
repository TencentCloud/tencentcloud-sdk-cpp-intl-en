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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_SUBSCRIBEINFO_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_SUBSCRIBEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * Subscription instance information
                */
                class SubscribeInfo : public AbstractModel
                {
                public:
                    SubscribeInfo();
                    ~SubscribeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data subscription instance ID
                     * @return SubscribeId Data subscription instance ID
                     */
                    std::string GetSubscribeId() const;

                    /**
                     * 设置Data subscription instance ID
                     * @param SubscribeId Data subscription instance ID
                     */
                    void SetSubscribeId(const std::string& _subscribeId);

                    /**
                     * 判断参数 SubscribeId 是否已赋值
                     * @return SubscribeId 是否已赋值
                     */
                    bool SubscribeIdHasBeenSet() const;

                    /**
                     * 获取Data subscription instance name
                     * @return SubscribeName Data subscription instance name
                     */
                    std::string GetSubscribeName() const;

                    /**
                     * 设置Data subscription instance name
                     * @param SubscribeName Data subscription instance name
                     */
                    void SetSubscribeName(const std::string& _subscribeName);

                    /**
                     * 判断参数 SubscribeName 是否已赋值
                     * @return SubscribeName 是否已赋值
                     */
                    bool SubscribeNameHasBeenSet() const;

                    /**
                     * 获取ID of channel bound to data subscription instance
                     * @return ChannelId ID of channel bound to data subscription instance
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置ID of channel bound to data subscription instance
                     * @param ChannelId ID of channel bound to data subscription instance
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取Name of product bound to data subscription instance
                     * @return Product Name of product bound to data subscription instance
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Name of product bound to data subscription instance
                     * @param Product Name of product bound to data subscription instance
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取ID of database instance bound to data subscription instance
                     * @return InstanceId ID of database instance bound to data subscription instance
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of database instance bound to data subscription instance
                     * @param InstanceId ID of database instance bound to data subscription instance
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Status of database instance bound to data subscription instance
                     * @return InstanceStatus Status of database instance bound to data subscription instance
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置Status of database instance bound to data subscription instance
                     * @param InstanceStatus Status of database instance bound to data subscription instance
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取Data subscription instance configuration status. Valid values: unconfigure, configuring, configured
                     * @return SubsStatus Data subscription instance configuration status. Valid values: unconfigure, configuring, configured
                     */
                    std::string GetSubsStatus() const;

                    /**
                     * 设置Data subscription instance configuration status. Valid values: unconfigure, configuring, configured
                     * @param SubsStatus Data subscription instance configuration status. Valid values: unconfigure, configuring, configured
                     */
                    void SetSubsStatus(const std::string& _subsStatus);

                    /**
                     * 判断参数 SubsStatus 是否已赋值
                     * @return SubsStatus 是否已赋值
                     */
                    bool SubsStatusHasBeenSet() const;

                    /**
                     * 获取Last modified time
                     * @return ModifyTime Last modified time
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Last modified time
                     * @param ModifyTime Last modified time
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param CreateTime Creation time
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Isolation time
                     * @return IsolateTime Isolation time
                     */
                    std::string GetIsolateTime() const;

                    /**
                     * 设置Isolation time
                     * @param IsolateTime Isolation time
                     */
                    void SetIsolateTime(const std::string& _isolateTime);

                    /**
                     * 判断参数 IsolateTime 是否已赋值
                     * @return IsolateTime 是否已赋值
                     */
                    bool IsolateTimeHasBeenSet() const;

                    /**
                     * 获取Expiration time
                     * @return ExpireTime Expiration time
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Expiration time
                     * @param ExpireTime Expiration time
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Deactivation time
                     * @return OfflineTime Deactivation time
                     */
                    std::string GetOfflineTime() const;

                    /**
                     * 设置Deactivation time
                     * @param OfflineTime Deactivation time
                     */
                    void SetOfflineTime(const std::string& _offlineTime);

                    /**
                     * 判断参数 OfflineTime 是否已赋值
                     * @return OfflineTime 是否已赋值
                     */
                    bool OfflineTimeHasBeenSet() const;

                    /**
                     * 获取Last modified consumption starting time point. If it has never been modified, this field is 0
                     * @return ConsumeStartTime Last modified consumption starting time point. If it has never been modified, this field is 0
                     */
                    std::string GetConsumeStartTime() const;

                    /**
                     * 设置Last modified consumption starting time point. If it has never been modified, this field is 0
                     * @param ConsumeStartTime Last modified consumption starting time point. If it has never been modified, this field is 0
                     */
                    void SetConsumeStartTime(const std::string& _consumeStartTime);

                    /**
                     * 判断参数 ConsumeStartTime 是否已赋值
                     * @return ConsumeStartTime 是否已赋值
                     */
                    bool ConsumeStartTimeHasBeenSet() const;

                    /**
                     * 获取Data subscription instance region
                     * @return Region Data subscription instance region
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Data subscription instance region
                     * @param Region Data subscription instance region
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Billing mode. 1: pay-as-you-go
                     * @return PayType Billing mode. 1: pay-as-you-go
                     */
                    int64_t GetPayType() const;

                    /**
                     * 设置Billing mode. 1: pay-as-you-go
                     * @param PayType Billing mode. 1: pay-as-you-go
                     */
                    void SetPayType(const int64_t& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取Data subscription instance VIP
                     * @return Vip Data subscription instance VIP
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Data subscription instance VIP
                     * @param Vip Data subscription instance VIP
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Data subscription instance Vport
                     * @return Vport Data subscription instance Vport
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置Data subscription instance Vport
                     * @param Vport Data subscription instance Vport
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取Unique ID of the VPC where the data subscription instance VIP resides
                     * @return UniqVpcId Unique ID of the VPC where the data subscription instance VIP resides
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置Unique ID of the VPC where the data subscription instance VIP resides
                     * @param UniqVpcId Unique ID of the VPC where the data subscription instance VIP resides
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取Unique ID of the subnet where the data subscription instance VIP resides
                     * @return UniqSubnetId Unique ID of the subnet where the data subscription instance VIP resides
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置Unique ID of the subnet where the data subscription instance VIP resides
                     * @param UniqSubnetId Unique ID of the subnet where the data subscription instance VIP resides
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取Data subscription instance status. Valid values: creating, normal, isolating, isolated, offlining, offline
                     * @return Status Data subscription instance status. Valid values: creating, normal, isolating, isolated, offlining, offline
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Data subscription instance status. Valid values: creating, normal, isolating, isolated, offlining, offline
                     * @param Status Data subscription instance status. Valid values: creating, normal, isolating, isolated, offlining, offline
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Timestamp of the last message confirmed by the SDK. If the SDK keeps consuming, this field can also be used as the current consumption time point of the SDK
                     * @return SdkConsumedTime Timestamp of the last message confirmed by the SDK. If the SDK keeps consuming, this field can also be used as the current consumption time point of the SDK
                     */
                    std::string GetSdkConsumedTime() const;

                    /**
                     * 设置Timestamp of the last message confirmed by the SDK. If the SDK keeps consuming, this field can also be used as the current consumption time point of the SDK
                     * @param SdkConsumedTime Timestamp of the last message confirmed by the SDK. If the SDK keeps consuming, this field can also be used as the current consumption time point of the SDK
                     */
                    void SetSdkConsumedTime(const std::string& _sdkConsumedTime);

                    /**
                     * 判断参数 SdkConsumedTime 是否已赋值
                     * @return SdkConsumedTime 是否已赋值
                     */
                    bool SdkConsumedTimeHasBeenSet() const;

                private:

                    /**
                     * Data subscription instance ID
                     */
                    std::string m_subscribeId;
                    bool m_subscribeIdHasBeenSet;

                    /**
                     * Data subscription instance name
                     */
                    std::string m_subscribeName;
                    bool m_subscribeNameHasBeenSet;

                    /**
                     * ID of channel bound to data subscription instance
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * Name of product bound to data subscription instance
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * ID of database instance bound to data subscription instance
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Status of database instance bound to data subscription instance
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * Data subscription instance configuration status. Valid values: unconfigure, configuring, configured
                     */
                    std::string m_subsStatus;
                    bool m_subsStatusHasBeenSet;

                    /**
                     * Last modified time
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Isolation time
                     */
                    std::string m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * Expiration time
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Deactivation time
                     */
                    std::string m_offlineTime;
                    bool m_offlineTimeHasBeenSet;

                    /**
                     * Last modified consumption starting time point. If it has never been modified, this field is 0
                     */
                    std::string m_consumeStartTime;
                    bool m_consumeStartTimeHasBeenSet;

                    /**
                     * Data subscription instance region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Billing mode. 1: pay-as-you-go
                     */
                    int64_t m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * Data subscription instance VIP
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Data subscription instance Vport
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Unique ID of the VPC where the data subscription instance VIP resides
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * Unique ID of the subnet where the data subscription instance VIP resides
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * Data subscription instance status. Valid values: creating, normal, isolating, isolated, offlining, offline
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Timestamp of the last message confirmed by the SDK. If the SDK keeps consuming, this field can also be used as the current consumption time point of the SDK
                     */
                    std::string m_sdkConsumedTime;
                    bool m_sdkConsumedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_SUBSCRIBEINFO_H_
