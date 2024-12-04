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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_SUBSCRIBEINFO_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_SUBSCRIBEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/EndpointItem.h>
#include <tencentcloud/dts/v20211206/model/TagItem.h>
#include <tencentcloud/dts/v20211206/model/SubsErr.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
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
                     * 
                     */
                    std::string GetSubscribeId() const;

                    /**
                     * 设置Data subscription instance ID
                     * @param _subscribeId Data subscription instance ID
                     * 
                     */
                    void SetSubscribeId(const std::string& _subscribeId);

                    /**
                     * 判断参数 SubscribeId 是否已赋值
                     * @return SubscribeId 是否已赋值
                     * 
                     */
                    bool SubscribeIdHasBeenSet() const;

                    /**
                     * 获取Data subscription instance name
                     * @return SubscribeName Data subscription instance name
                     * 
                     */
                    std::string GetSubscribeName() const;

                    /**
                     * 设置Data subscription instance name
                     * @param _subscribeName Data subscription instance name
                     * 
                     */
                    void SetSubscribeName(const std::string& _subscribeName);

                    /**
                     * 判断参数 SubscribeName 是否已赋值
                     * @return SubscribeName 是否已赋值
                     * 
                     */
                    bool SubscribeNameHasBeenSet() const;

                    /**
                     * 获取Kafka topic for data sent by the subscription instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Topic Kafka topic for data sent by the subscription instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置Kafka topic for data sent by the subscription instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _topic Kafka topic for data sent by the subscription instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取Subscription instance type. Currently, cynosdbmysql, mariadb, mongodb, mysql, percona, tdpg, tdsqlpercona are supported.
                     * @return Product Subscription instance type. Currently, cynosdbmysql, mariadb, mongodb, mysql, percona, tdpg, tdsqlpercona are supported.
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Subscription instance type. Currently, cynosdbmysql, mariadb, mongodb, mysql, percona, tdpg, tdsqlpercona are supported.
                     * @param _product Subscription instance type. Currently, cynosdbmysql, mariadb, mongodb, mysql, percona, tdpg, tdsqlpercona are supported.
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取The subscribed database instance ID (if the subscription is a cloud database). If the instance is not on Tencent Cloud, this value is empty.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId The subscribed database instance ID (if the subscription is a cloud database). If the instance is not on Tencent Cloud, this value is empty.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置The subscribed database instance ID (if the subscription is a cloud database). If the instance is not on Tencent Cloud, this value is empty.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceId The subscribed database instance ID (if the subscription is a cloud database). If the instance is not on Tencent Cloud, this value is empty.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Cloud database status: running, isolated, offline. If it is not on the cloud, this value is empty.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceStatus Cloud database status: running, isolated, offline. If it is not on the cloud, this value is empty.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置Cloud database status: running, isolated, offline. If it is not on the cloud, this value is empty.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceStatus Cloud database status: running, isolated, offline. If it is not on the cloud, this value is empty.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Data subscription lifecycle status. Valid values: normal (normal), isolating (isolating), isolated (isolated), offlining (offlining), post2PrePayIng (changing from pay-as-you-go to monthly subscription).
                     * @return Status Data subscription lifecycle status. Valid values: normal (normal), isolating (isolating), isolated (isolated), offlining (offlining), post2PrePayIng (changing from pay-as-you-go to monthly subscription).
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Data subscription lifecycle status. Valid values: normal (normal), isolating (isolating), isolated (isolated), offlining (offlining), post2PrePayIng (changing from pay-as-you-go to monthly subscription).
                     * @param _status Data subscription lifecycle status. Valid values: normal (normal), isolating (isolating), isolated (isolated), offlining (offlining), post2PrePayIng (changing from pay-as-you-go to monthly subscription).
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
                     * 获取Data subscription status. Valid values: notStarted, checking, checkNotPass, checkPass, starting, running, error.
                     * @return SubsStatus Data subscription status. Valid values: notStarted, checking, checkNotPass, checkPass, starting, running, error.
                     * 
                     */
                    std::string GetSubsStatus() const;

                    /**
                     * 设置Data subscription status. Valid values: notStarted, checking, checkNotPass, checkPass, starting, running, error.
                     * @param _subsStatus Data subscription status. Valid values: notStarted, checking, checkNotPass, checkPass, starting, running, error.
                     * 
                     */
                    void SetSubsStatus(const std::string& _subsStatus);

                    /**
                     * 判断参数 SubsStatus 是否已赋值
                     * @return SubsStatus 是否已赋值
                     * 
                     */
                    bool SubsStatusHasBeenSet() const;

                    /**
                     * 获取Last modification time, the format is: Y-m-d h:m:s.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ModifyTime Last modification time, the format is: Y-m-d h:m:s.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Last modification time, the format is: Y-m-d h:m:s.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _modifyTime Last modification time, the format is: Y-m-d h:m:s.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Creation time, the format is: Y-m-d h:m:s.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time, the format is: Y-m-d h:m:s.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time, the format is: Y-m-d h:m:s.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time, the format is: Y-m-d h:m:s.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Isolation time, the format is: Y-m-d h:m:s. Default time: 0000-00-00 00:00:00.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsolateTime Isolation time, the format is: Y-m-d h:m:s. Default time: 0000-00-00 00:00:00.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIsolateTime() const;

                    /**
                     * 设置Isolation time, the format is: Y-m-d h:m:s. Default time: 0000-00-00 00:00:00.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isolateTime Isolation time, the format is: Y-m-d h:m:s. Default time: 0000-00-00 00:00:00.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsolateTime(const std::string& _isolateTime);

                    /**
                     * 判断参数 IsolateTime 是否已赋值
                     * @return IsolateTime 是否已赋值
                     * 
                     */
                    bool IsolateTimeHasBeenSet() const;

                    /**
                     * 获取Expiration time for monthly subscription tasks, the format is: Y-m-d h:m:s. Default time: 0000-00-00 00:00:00.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpireTime Expiration time for monthly subscription tasks, the format is: Y-m-d h:m:s. Default time: 0000-00-00 00:00:00.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Expiration time for monthly subscription tasks, the format is: Y-m-d h:m:s. Default time: 0000-00-00 00:00:00.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _expireTime Expiration time for monthly subscription tasks, the format is: Y-m-d h:m:s. Default time: 0000-00-00 00:00:00.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Offline time, the format is: Y-m-d h:m:s. Default time: 0000-00-00 00:00:00.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OfflineTime Offline time, the format is: Y-m-d h:m:s. Default time: 0000-00-00 00:00:00.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOfflineTime() const;

                    /**
                     * 设置Offline time, the format is: Y-m-d h:m:s. Default time: 0000-00-00 00:00:00.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _offlineTime Offline time, the format is: Y-m-d h:m:s. Default time: 0000-00-00 00:00:00.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOfflineTime(const std::string& _offlineTime);

                    /**
                     * 判断参数 OfflineTime 是否已赋值
                     * @return OfflineTime 是否已赋值
                     * 
                     */
                    bool OfflineTimeHasBeenSet() const;

                    /**
                     * 获取Billing mode. 1: pay-as-you-go
                     * @return PayType Billing mode. 1: pay-as-you-go
                     * 
                     */
                    int64_t GetPayType() const;

                    /**
                     * 设置Billing mode. 1: pay-as-you-go
                     * @param _payType Billing mode. 1: pay-as-you-go
                     * 
                     */
                    void SetPayType(const int64_t& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     * 
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取Auto-renewal flag. It is meaningful only when PayType=0. Valid values: 0 (auto-renewal disabled); 1 (auto-renewal enabled).
                     * @return AutoRenewFlag Auto-renewal flag. It is meaningful only when PayType=0. Valid values: 0 (auto-renewal disabled); 1 (auto-renewal enabled).
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Auto-renewal flag. It is meaningful only when PayType=0. Valid values: 0 (auto-renewal disabled); 1 (auto-renewal enabled).
                     * @param _autoRenewFlag Auto-renewal flag. It is meaningful only when PayType=0. Valid values: 0 (auto-renewal disabled); 1 (auto-renewal enabled).
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取Data subscription instance region
                     * @return Region Data subscription instance region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Data subscription instance region
                     * @param _region Data subscription instance region
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Access type. Valid values: extranet (public network); vpncloud (VPN access); dcg (Direct Connect); ccn (CCN); cdb (database); cvm (self-build on CVM); intranet (intranet); vpc (VPC).Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AccessType Access type. Valid values: extranet (public network); vpncloud (VPN access); dcg (Direct Connect); ccn (CCN); cdb (database); cvm (self-build on CVM); intranet (intranet); vpc (VPC).Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAccessType() const;

                    /**
                     * 设置Access type. Valid values: extranet (public network); vpncloud (VPN access); dcg (Direct Connect); ccn (CCN); cdb (database); cvm (self-build on CVM); intranet (intranet); vpc (VPC).Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _accessType Access type. Valid values: extranet (public network); vpncloud (VPN access); dcg (Direct Connect); ccn (CCN); cdb (database); cvm (self-build on CVM); intranet (intranet); vpc (VPC).Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAccessType(const std::string& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取Database node information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Endpoints Database node information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<EndpointItem> GetEndpoints() const;

                    /**
                     * 设置Database node information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _endpoints Database node information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEndpoints(const std::vector<EndpointItem>& _endpoints);

                    /**
                     * 判断参数 Endpoints 是否已赋值
                     * @return Endpoints 是否已赋值
                     * 
                     */
                    bool EndpointsHasBeenSet() const;

                    /**
                     * 获取Data subscription version, only Kafka version is currently supported.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubscribeVersion Data subscription version, only Kafka version is currently supported.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubscribeVersion() const;

                    /**
                     * 设置Data subscription version, only Kafka version is currently supported.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subscribeVersion Data subscription version, only Kafka version is currently supported.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubscribeVersion(const std::string& _subscribeVersion);

                    /**
                     * 判断参数 SubscribeVersion 是否已赋值
                     * @return SubscribeVersion 是否已赋值
                     * 
                     */
                    bool SubscribeVersionHasBeenSet() const;

                    /**
                     * 获取TagNote: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags TagNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TagItem> GetTags() const;

                    /**
                     * 设置TagNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags TagNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTags(const std::vector<TagItem>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Task error messageNote: This field may return null, indicating that no valid values can be obtained.
                     * @return Errors Task error messageNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<SubsErr> GetErrors() const;

                    /**
                     * 设置Task error messageNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _errors Task error messageNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetErrors(const std::vector<SubsErr>& _errors);

                    /**
                     * 判断参数 Errors 是否已赋值
                     * @return Errors 是否已赋值
                     * 
                     */
                    bool ErrorsHasBeenSet() const;

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
                     * Kafka topic for data sent by the subscription instance
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * Subscription instance type. Currently, cynosdbmysql, mariadb, mongodb, mysql, percona, tdpg, tdsqlpercona are supported.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * The subscribed database instance ID (if the subscription is a cloud database). If the instance is not on Tencent Cloud, this value is empty.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Cloud database status: running, isolated, offline. If it is not on the cloud, this value is empty.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * Data subscription lifecycle status. Valid values: normal (normal), isolating (isolating), isolated (isolated), offlining (offlining), post2PrePayIng (changing from pay-as-you-go to monthly subscription).
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Data subscription status. Valid values: notStarted, checking, checkNotPass, checkPass, starting, running, error.
                     */
                    std::string m_subsStatus;
                    bool m_subsStatusHasBeenSet;

                    /**
                     * Last modification time, the format is: Y-m-d h:m:s.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Creation time, the format is: Y-m-d h:m:s.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Isolation time, the format is: Y-m-d h:m:s. Default time: 0000-00-00 00:00:00.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * Expiration time for monthly subscription tasks, the format is: Y-m-d h:m:s. Default time: 0000-00-00 00:00:00.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Offline time, the format is: Y-m-d h:m:s. Default time: 0000-00-00 00:00:00.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_offlineTime;
                    bool m_offlineTimeHasBeenSet;

                    /**
                     * Billing mode. 1: pay-as-you-go
                     */
                    int64_t m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * Auto-renewal flag. It is meaningful only when PayType=0. Valid values: 0 (auto-renewal disabled); 1 (auto-renewal enabled).
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Data subscription instance region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Access type. Valid values: extranet (public network); vpncloud (VPN access); dcg (Direct Connect); ccn (CCN); cdb (database); cvm (self-build on CVM); intranet (intranet); vpc (VPC).Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * Database node information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<EndpointItem> m_endpoints;
                    bool m_endpointsHasBeenSet;

                    /**
                     * Data subscription version, only Kafka version is currently supported.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subscribeVersion;
                    bool m_subscribeVersionHasBeenSet;

                    /**
                     * TagNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TagItem> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Task error messageNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<SubsErr> m_errors;
                    bool m_errorsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_SUBSCRIBEINFO_H_
