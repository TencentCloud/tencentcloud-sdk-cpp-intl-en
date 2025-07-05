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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_CONFIGURESUBSCRIBEJOBREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_CONFIGURESUBSCRIBEJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/EndpointItem.h>
#include <tencentcloud/dts/v20211206/model/SubscribeKafkaConfig.h>
#include <tencentcloud/dts/v20211206/model/SubscribeObject.h>
#include <tencentcloud/dts/v20211206/model/PipelineInfo.h>
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
                * ConfigureSubscribeJob request structure.
                */
                class ConfigureSubscribeJobRequest : public AbstractModel
                {
                public:
                    ConfigureSubscribeJobRequest();
                    ~ConfigureSubscribeJobRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Data subscription type. Valid values for non-mongo DatabaseType: all (full instance update); dml (data update); ddl (structure update); dmlAndDdl (data + structure update). Valid values for mongo DatabaseType: all (full instance update); database (subscribe to a table); collection (subscribe to a collection).
                     * @return SubscribeMode Data subscription type. Valid values for non-mongo DatabaseType: all (full instance update); dml (data update); ddl (structure update); dmlAndDdl (data + structure update). Valid values for mongo DatabaseType: all (full instance update); database (subscribe to a table); collection (subscribe to a collection).
                     * 
                     */
                    std::string GetSubscribeMode() const;

                    /**
                     * 设置Data subscription type. Valid values for non-mongo DatabaseType: all (full instance update); dml (data update); ddl (structure update); dmlAndDdl (data + structure update). Valid values for mongo DatabaseType: all (full instance update); database (subscribe to a table); collection (subscribe to a collection).
                     * @param _subscribeMode Data subscription type. Valid values for non-mongo DatabaseType: all (full instance update); dml (data update); ddl (structure update); dmlAndDdl (data + structure update). Valid values for mongo DatabaseType: all (full instance update); database (subscribe to a table); collection (subscribe to a collection).
                     * 
                     */
                    void SetSubscribeMode(const std::string& _subscribeMode);

                    /**
                     * 判断参数 SubscribeMode 是否已赋值
                     * @return SubscribeMode 是否已赋值
                     * 
                     */
                    bool SubscribeModeHasBeenSet() const;

                    /**
                     * 获取Source database access type. Valid values: extranet (public network); vpncloud (VPN access); dcg (Direct Connect); ccn (CCN); cdb (database); cvm (self-build on CVM); intranet (intranet); vpc (VPC). Note: The specific optional values depend on the current link support capabilities.
                     * @return AccessType Source database access type. Valid values: extranet (public network); vpncloud (VPN access); dcg (Direct Connect); ccn (CCN); cdb (database); cvm (self-build on CVM); intranet (intranet); vpc (VPC). Note: The specific optional values depend on the current link support capabilities.
                     * 
                     */
                    std::string GetAccessType() const;

                    /**
                     * 设置Source database access type. Valid values: extranet (public network); vpncloud (VPN access); dcg (Direct Connect); ccn (CCN); cdb (database); cvm (self-build on CVM); intranet (intranet); vpc (VPC). Note: The specific optional values depend on the current link support capabilities.
                     * @param _accessType Source database access type. Valid values: extranet (public network); vpncloud (VPN access); dcg (Direct Connect); ccn (CCN); cdb (database); cvm (self-build on CVM); intranet (intranet); vpc (VPC). Note: The specific optional values depend on the current link support capabilities.
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
                     * @return Endpoints Database node information
                     * 
                     */
                    std::vector<EndpointItem> GetEndpoints() const;

                    /**
                     * 设置Database node information
                     * @param _endpoints Database node information
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
                     * 获取Kafka configuration
                     * @return KafkaConfig Kafka configuration
                     * 
                     */
                    SubscribeKafkaConfig GetKafkaConfig() const;

                    /**
                     * 设置Kafka configuration
                     * @param _kafkaConfig Kafka configuration
                     * 
                     */
                    void SetKafkaConfig(const SubscribeKafkaConfig& _kafkaConfig);

                    /**
                     * 判断参数 KafkaConfig 是否已赋值
                     * @return KafkaConfig 是否已赋值
                     * 
                     */
                    bool KafkaConfigHasBeenSet() const;

                    /**
                     * 获取Subscription database table information. When SubscribeMode is not all or ddl, SubscribeObjects is a required parameter.
                     * @return SubscribeObjects Subscription database table information. When SubscribeMode is not all or ddl, SubscribeObjects is a required parameter.
                     * 
                     */
                    std::vector<SubscribeObject> GetSubscribeObjects() const;

                    /**
                     * 设置Subscription database table information. When SubscribeMode is not all or ddl, SubscribeObjects is a required parameter.
                     * @param _subscribeObjects Subscription database table information. When SubscribeMode is not all or ddl, SubscribeObjects is a required parameter.
                     * 
                     */
                    void SetSubscribeObjects(const std::vector<SubscribeObject>& _subscribeObjects);

                    /**
                     * 判断参数 SubscribeObjects 是否已赋值
                     * @return SubscribeObjects 是否已赋值
                     * 
                     */
                    bool SubscribeObjectsHasBeenSet() const;

                    /**
                     * 获取Subscription data format, such as: protobuf, json, avro. Note: The specific optional values depend on the current link support capabilities. For details on the data format, please refer to the consumption demo documentation on the official website.
                     * @return Protocol Subscription data format, such as: protobuf, json, avro. Note: The specific optional values depend on the current link support capabilities. For details on the data format, please refer to the consumption demo documentation on the official website.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Subscription data format, such as: protobuf, json, avro. Note: The specific optional values depend on the current link support capabilities. For details on the data format, please refer to the consumption demo documentation on the official website.
                     * @param _protocol Subscription data format, such as: protobuf, json, avro. Note: The specific optional values depend on the current link support capabilities. For details on the data format, please refer to the consumption demo documentation on the official website.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取mongo optional parameter: output aggregation settings.
                     * @return PipelineInfo mongo optional parameter: output aggregation settings.
                     * 
                     */
                    std::vector<PipelineInfo> GetPipelineInfo() const;

                    /**
                     * 设置mongo optional parameter: output aggregation settings.
                     * @param _pipelineInfo mongo optional parameter: output aggregation settings.
                     * 
                     */
                    void SetPipelineInfo(const std::vector<PipelineInfo>& _pipelineInfo);

                    /**
                     * 判断参数 PipelineInfo 是否已赋值
                     * @return PipelineInfo 是否已赋值
                     * 
                     */
                    bool PipelineInfoHasBeenSet() const;

                    /**
                     * 获取Additional information added for the business. The parameter name is called key, and the parameter value is called value.Optional parameters for mysql: ProcessXA. If true is filled in, it will be processed. If it is left blank or filled with other values, it will not be processed.Optional parameters for mongo: SubscribeType. Currently only changeStream is supported. If not filled in, the default is changeStream.Other businesses currently have no optional parameters.
                     * @return ExtraAttr Additional information added for the business. The parameter name is called key, and the parameter value is called value.Optional parameters for mysql: ProcessXA. If true is filled in, it will be processed. If it is left blank or filled with other values, it will not be processed.Optional parameters for mongo: SubscribeType. Currently only changeStream is supported. If not filled in, the default is changeStream.Other businesses currently have no optional parameters.
                     * 
                     */
                    std::vector<KeyValuePairOption> GetExtraAttr() const;

                    /**
                     * 设置Additional information added for the business. The parameter name is called key, and the parameter value is called value.Optional parameters for mysql: ProcessXA. If true is filled in, it will be processed. If it is left blank or filled with other values, it will not be processed.Optional parameters for mongo: SubscribeType. Currently only changeStream is supported. If not filled in, the default is changeStream.Other businesses currently have no optional parameters.
                     * @param _extraAttr Additional information added for the business. The parameter name is called key, and the parameter value is called value.Optional parameters for mysql: ProcessXA. If true is filled in, it will be processed. If it is left blank or filled with other values, it will not be processed.Optional parameters for mongo: SubscribeType. Currently only changeStream is supported. If not filled in, the default is changeStream.Other businesses currently have no optional parameters.
                     * 
                     */
                    void SetExtraAttr(const std::vector<KeyValuePairOption>& _extraAttr);

                    /**
                     * 判断参数 ExtraAttr 是否已赋值
                     * @return ExtraAttr 是否已赋值
                     * 
                     */
                    bool ExtraAttrHasBeenSet() const;

                private:

                    /**
                     * Data subscription instance ID
                     */
                    std::string m_subscribeId;
                    bool m_subscribeIdHasBeenSet;

                    /**
                     * Data subscription type. Valid values for non-mongo DatabaseType: all (full instance update); dml (data update); ddl (structure update); dmlAndDdl (data + structure update). Valid values for mongo DatabaseType: all (full instance update); database (subscribe to a table); collection (subscribe to a collection).
                     */
                    std::string m_subscribeMode;
                    bool m_subscribeModeHasBeenSet;

                    /**
                     * Source database access type. Valid values: extranet (public network); vpncloud (VPN access); dcg (Direct Connect); ccn (CCN); cdb (database); cvm (self-build on CVM); intranet (intranet); vpc (VPC). Note: The specific optional values depend on the current link support capabilities.
                     */
                    std::string m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * Database node information
                     */
                    std::vector<EndpointItem> m_endpoints;
                    bool m_endpointsHasBeenSet;

                    /**
                     * Kafka configuration
                     */
                    SubscribeKafkaConfig m_kafkaConfig;
                    bool m_kafkaConfigHasBeenSet;

                    /**
                     * Subscription database table information. When SubscribeMode is not all or ddl, SubscribeObjects is a required parameter.
                     */
                    std::vector<SubscribeObject> m_subscribeObjects;
                    bool m_subscribeObjectsHasBeenSet;

                    /**
                     * Subscription data format, such as: protobuf, json, avro. Note: The specific optional values depend on the current link support capabilities. For details on the data format, please refer to the consumption demo documentation on the official website.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * mongo optional parameter: output aggregation settings.
                     */
                    std::vector<PipelineInfo> m_pipelineInfo;
                    bool m_pipelineInfoHasBeenSet;

                    /**
                     * Additional information added for the business. The parameter name is called key, and the parameter value is called value.Optional parameters for mysql: ProcessXA. If true is filled in, it will be processed. If it is left blank or filled with other values, it will not be processed.Optional parameters for mongo: SubscribeType. Currently only changeStream is supported. If not filled in, the default is changeStream.Other businesses currently have no optional parameters.
                     */
                    std::vector<KeyValuePairOption> m_extraAttr;
                    bool m_extraAttrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_CONFIGURESUBSCRIBEJOBREQUEST_H_
