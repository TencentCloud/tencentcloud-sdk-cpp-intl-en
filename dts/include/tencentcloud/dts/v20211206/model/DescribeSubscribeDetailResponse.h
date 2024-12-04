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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESUBSCRIBEDETAILRESPONSE_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESUBSCRIBEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/SubscribeObject.h>
#include <tencentcloud/dts/v20211206/model/SubscribeKafkaConfig.h>
#include <tencentcloud/dts/v20211206/model/EndpointItem.h>
#include <tencentcloud/dts/v20211206/model/PipelineInfo.h>
#include <tencentcloud/dts/v20211206/model/TagItem.h>
#include <tencentcloud/dts/v20211206/model/SubsErr.h>
#include <tencentcloud/dts/v20211206/model/KeyValuePairOption.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * DescribeSubscribeDetail response structure.
                */
                class DescribeSubscribeDetailResponse : public AbstractModel
                {
                public:
                    DescribeSubscribeDetailResponse();
                    ~DescribeSubscribeDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The ID of the data subscription, such as subs-b6x64o31tm
                     * @return SubscribeId The ID of the data subscription, such as subs-b6x64o31tm
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
                     * 获取Data subscription instance name
                     * @return SubscribeName Data subscription instance name
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
                     * 获取Subscription database type. Currently, cynosdbmysql, mariadb, mongodb, mysql, percona, tdpg, tdsqlpercona are supported.
                     * @return Product Subscription database type. Currently, cynosdbmysql, mariadb, mongodb, mysql, percona, tdpg, tdsqlpercona are supported.
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
                     * 获取The subscribed cloud database instance ID. This value only makes sense if cloud database is subscribed. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId The subscribed cloud database instance ID. This value only makes sense if cloud database is subscribed. Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The subscribed cloud database instance status. This value only makes sense if cloud database is subscribed. Valid values: running, isolated, offline.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceStatus The subscribed cloud database instance status. This value only makes sense if cloud database is subscribed. Valid values: running, isolated, offline.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Subscription task billing status. Valid values: normal, isolating, isolated, offline, post2PrePayIng.
                     * @return Status Subscription task billing status. Valid values: normal, isolating, isolated, offline, post2PrePayIng.
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
                     * 获取Subscription task status. Valid values: notStarted, checking, checkNotPass, checkPass, starting, running, error.
                     * @return SubsStatus Subscription task status. Valid values: notStarted, checking, checkNotPass, checkPass, starting, running, error.
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
                     * 获取Modification time, the format is: Y-m-d h:m:s.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ModifyTime Modification time, the format is: Y-m-d h:m:s.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Creation time, the format is: Y-m-d h:m:s.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time, the format is: Y-m-d h:m:s.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Isolation time, the format is: Y-m-d h:m:s. Default time: 0000-00-00 00:00:00.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsolateTime Isolation time, the format is: Y-m-d h:m:s. Default time: 0000-00-00 00:00:00.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Expiration time for monthly subscription tasks, the format is: Y-m-d h:m:s. Default time: 0000-00-00 00:00:00.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpireTime Expiration time for monthly subscription tasks, the format is: Y-m-d h:m:s. Default time: 0000-00-00 00:00:00.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Offline time, the format is: Y-m-d h:m:s. Default time: 0000-00-00 00:00:00.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OfflineTime Offline time, the format is: Y-m-d h:m:s. Default time: 0000-00-00 00:00:00.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Payment method. Valid values: 0 (monthly subscription); 1 (pay-as-you-go).
                     * @return PayType Payment method. Valid values: 0 (monthly subscription); 1 (pay-as-you-go).
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
                     * 获取Auto-renewal flag. It is meaningful only when PayType=0. Valid values: 0 (auto-renewal disabled); 1 (auto-renewal enabled).
                     * @return AutoRenewFlag Auto-renewal flag. It is meaningful only when PayType=0. Valid values: 0 (auto-renewal disabled); 1 (auto-renewal enabled).
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
                     * 获取The region where the task is located
                     * @return Region The region where the task is located
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
                     * 获取Kafka topic
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Topic Kafka topic
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取Broker address of Kafka serviceNote: This field may return null, indicating that no valid values can be obtained.
                     * @return Broker Broker address of Kafka serviceNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBroker() const;

                    /**
                     * 判断参数 Broker 是否已赋值
                     * @return Broker 是否已赋值
                     * 
                     */
                    bool BrokerHasBeenSet() const;

                    /**
                     * 获取Data subscription type. Valid values for non-mongo Product: all (full instance update); dml (data update); ddl (structure update); dmlAndDdl (data + structure update). Valid values for mongo Product: all (full instance update); database (subscribe to a table); collection (subscribe to a collection).Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubscribeMode Data subscription type. Valid values for non-mongo Product: all (full instance update); dml (data update); ddl (structure update); dmlAndDdl (data + structure update). Valid values for mongo Product: all (full instance update); database (subscribe to a table); collection (subscribe to a collection).Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubscribeMode() const;

                    /**
                     * 判断参数 SubscribeMode 是否已赋值
                     * @return SubscribeMode 是否已赋值
                     * 
                     */
                    bool SubscribeModeHasBeenSet() const;

                    /**
                     * 获取Subscription data format. If it is empty, the default format is used: mysql\cynosdbmysql\mariadb\percona\tdsqlpercona\tdpg is protobuf, mongo is json. When DatabaseType is mysql and cynosdbmysql, there are three optional protocols: protobuf\avro\json. For details on data format, please refer to the consumption demo documentation on the official website.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Protocol Subscription data format. If it is empty, the default format is used: mysql\cynosdbmysql\mariadb\percona\tdsqlpercona\tdpg is protobuf, mongo is json. When DatabaseType is mysql and cynosdbmysql, there are three optional protocols: protobuf\avro\json. For details on data format, please refer to the consumption demo documentation on the official website.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Information of subscribed tableNote: This field may return null, indicating that no valid values can be obtained.
                     * @return SubscribeObjects Information of subscribed tableNote: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Kafka configuration information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return KafkaConfig Kafka configuration information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    SubscribeKafkaConfig GetKafkaConfig() const;

                    /**
                     * 判断参数 KafkaConfig 是否已赋值
                     * @return KafkaConfig 是否已赋值
                     * 
                     */
                    bool KafkaConfigHasBeenSet() const;

                    /**
                     * 获取Source database access type. Valid values: extranet (public network); vpncloud (VPN access); dcg (Direct Connect); ccn (CCN); cdb (database); cvm (self-build on CVM); intranet (intranet); vpc (VPC). Note: The specific optional values depend on the current link support capabilities.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AccessType Source database access type. Valid values: extranet (public network); vpncloud (VPN access); dcg (Direct Connect); ccn (CCN); cdb (database); cvm (self-build on CVM); intranet (intranet); vpc (VPC). Note: The specific optional values depend on the current link support capabilities.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAccessType() const;

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取Access type information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Endpoints Access type information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<EndpointItem> GetEndpoints() const;

                    /**
                     * 判断参数 Endpoints 是否已赋值
                     * @return Endpoints 是否已赋值
                     * 
                     */
                    bool EndpointsHasBeenSet() const;

                    /**
                     * 获取Mongo output aggregation settings
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PipelineInfo Mongo output aggregation settings
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<PipelineInfo> GetPipelineInfo() const;

                    /**
                     * 判断参数 PipelineInfo 是否已赋值
                     * @return PipelineInfo 是否已赋值
                     * 
                     */
                    bool PipelineInfoHasBeenSet() const;

                    /**
                     * 获取TagNote: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags TagNote: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Subscription task error information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Errors Subscription task error information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<SubsErr> GetErrors() const;

                    /**
                     * 判断参数 Errors 是否已赋值
                     * @return Errors 是否已赋值
                     * 
                     */
                    bool ErrorsHasBeenSet() const;

                    /**
                     * 获取Additional information added for the business. The parameter name is called key, and the parameter value is called value.Optional parameters for mysql: ProcessXA. Fill in true to process, others will not be processed.Optional parameters for mongo: SubscribeType. Currently only changeStream is supported.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExtraAttr Additional information added for the business. The parameter name is called key, and the parameter value is called value.Optional parameters for mysql: ProcessXA. Fill in true to process, others will not be processed.Optional parameters for mongo: SubscribeType. Currently only changeStream is supported.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<KeyValuePairOption> GetExtraAttr() const;

                    /**
                     * 判断参数 ExtraAttr 是否已赋值
                     * @return ExtraAttr 是否已赋值
                     * 
                     */
                    bool ExtraAttrHasBeenSet() const;

                private:

                    /**
                     * The ID of the data subscription, such as subs-b6x64o31tm
                     */
                    std::string m_subscribeId;
                    bool m_subscribeIdHasBeenSet;

                    /**
                     * Data subscription instance name
                     */
                    std::string m_subscribeName;
                    bool m_subscribeNameHasBeenSet;

                    /**
                     * Subscription database type. Currently, cynosdbmysql, mariadb, mongodb, mysql, percona, tdpg, tdsqlpercona are supported.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * The subscribed cloud database instance ID. This value only makes sense if cloud database is subscribed. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * The subscribed cloud database instance status. This value only makes sense if cloud database is subscribed. Valid values: running, isolated, offline.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * Subscription task billing status. Valid values: normal, isolating, isolated, offline, post2PrePayIng.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Subscription task status. Valid values: notStarted, checking, checkNotPass, checkPass, starting, running, error.
                     */
                    std::string m_subsStatus;
                    bool m_subsStatusHasBeenSet;

                    /**
                     * Modification time, the format is: Y-m-d h:m:s.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Payment method. Valid values: 0 (monthly subscription); 1 (pay-as-you-go).
                     */
                    int64_t m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * Auto-renewal flag. It is meaningful only when PayType=0. Valid values: 0 (auto-renewal disabled); 1 (auto-renewal enabled).
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * The region where the task is located
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Kafka topic
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * Broker address of Kafka serviceNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_broker;
                    bool m_brokerHasBeenSet;

                    /**
                     * Data subscription type. Valid values for non-mongo Product: all (full instance update); dml (data update); ddl (structure update); dmlAndDdl (data + structure update). Valid values for mongo Product: all (full instance update); database (subscribe to a table); collection (subscribe to a collection).Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subscribeMode;
                    bool m_subscribeModeHasBeenSet;

                    /**
                     * Subscription data format. If it is empty, the default format is used: mysql\cynosdbmysql\mariadb\percona\tdsqlpercona\tdpg is protobuf, mongo is json. When DatabaseType is mysql and cynosdbmysql, there are three optional protocols: protobuf\avro\json. For details on data format, please refer to the consumption demo documentation on the official website.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Information of subscribed tableNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<SubscribeObject> m_subscribeObjects;
                    bool m_subscribeObjectsHasBeenSet;

                    /**
                     * Kafka configuration information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SubscribeKafkaConfig m_kafkaConfig;
                    bool m_kafkaConfigHasBeenSet;

                    /**
                     * Source database access type. Valid values: extranet (public network); vpncloud (VPN access); dcg (Direct Connect); ccn (CCN); cdb (database); cvm (self-build on CVM); intranet (intranet); vpc (VPC). Note: The specific optional values depend on the current link support capabilities.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * Access type information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<EndpointItem> m_endpoints;
                    bool m_endpointsHasBeenSet;

                    /**
                     * Mongo output aggregation settings
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PipelineInfo> m_pipelineInfo;
                    bool m_pipelineInfoHasBeenSet;

                    /**
                     * TagNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TagItem> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Subscription task error information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<SubsErr> m_errors;
                    bool m_errorsHasBeenSet;

                    /**
                     * Additional information added for the business. The parameter name is called key, and the parameter value is called value.Optional parameters for mysql: ProcessXA. Fill in true to process, others will not be processed.Optional parameters for mongo: SubscribeType. Currently only changeStream is supported.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<KeyValuePairOption> m_extraAttr;
                    bool m_extraAttrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESUBSCRIBEDETAILRESPONSE_H_
