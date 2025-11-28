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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQBINDINGLISTINFO_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQBINDINGLISTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * RabbitMQ routing relationship list member.
                */
                class RabbitMQBindingListInfo : public AbstractModel
                {
                public:
                    RabbitMQBindingListInfo();
                    ~RabbitMQBindingListInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Routing relationship ID.
                     * @return BindingId Routing relationship ID.
                     * 
                     */
                    int64_t GetBindingId() const;

                    /**
                     * 设置Routing relationship ID.
                     * @param _bindingId Routing relationship ID.
                     * 
                     */
                    void SetBindingId(const int64_t& _bindingId);

                    /**
                     * 判断参数 BindingId 是否已赋值
                     * @return BindingId 是否已赋值
                     * 
                     */
                    bool BindingIdHasBeenSet() const;

                    /**
                     * 获取VhostName
                     * @return VirtualHost VhostName
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 设置VhostName
                     * @param _virtualHost VhostName
                     * 
                     */
                    void SetVirtualHost(const std::string& _virtualHost);

                    /**
                     * 判断参数 VirtualHost 是否已赋值
                     * @return VirtualHost 是否已赋值
                     * 
                     */
                    bool VirtualHostHasBeenSet() const;

                    /**
                     * 获取Source exchange name.
                     * @return Source Source exchange name.
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Source exchange name.
                     * @param _source Source exchange name.
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Destination type. Valid values: queue and exchange.
                     * @return DestinationType Destination type. Valid values: queue and exchange.
                     * 
                     */
                    std::string GetDestinationType() const;

                    /**
                     * 设置Destination type. Valid values: queue and exchange.
                     * @param _destinationType Destination type. Valid values: queue and exchange.
                     * 
                     */
                    void SetDestinationType(const std::string& _destinationType);

                    /**
                     * 判断参数 DestinationType 是否已赋值
                     * @return DestinationType 是否已赋值
                     * 
                     */
                    bool DestinationTypeHasBeenSet() const;

                    /**
                     * 获取Destination resource name.
                     * @return Destination Destination resource name.
                     * 
                     */
                    std::string GetDestination() const;

                    /**
                     * 设置Destination resource name.
                     * @param _destination Destination resource name.
                     * 
                     */
                    void SetDestination(const std::string& _destination);

                    /**
                     * 判断参数 Destination 是否已赋值
                     * @return Destination 是否已赋值
                     * 
                     */
                    bool DestinationHasBeenSet() const;

                    /**
                     * 获取Binds the key.
                     * @return RoutingKey Binds the key.
                     * 
                     */
                    std::string GetRoutingKey() const;

                    /**
                     * 设置Binds the key.
                     * @param _routingKey Binds the key.
                     * 
                     */
                    void SetRoutingKey(const std::string& _routingKey);

                    /**
                     * 判断参数 RoutingKey 是否已赋值
                     * @return RoutingKey 是否已赋值
                     * 
                     */
                    bool RoutingKeyHasBeenSet() const;

                    /**
                     * 获取Source exchange type.
                     * @return SourceExchangeType Source exchange type.
                     * 
                     */
                    std::string GetSourceExchangeType() const;

                    /**
                     * 设置Source exchange type.
                     * @param _sourceExchangeType Source exchange type.
                     * 
                     */
                    void SetSourceExchangeType(const std::string& _sourceExchangeType);

                    /**
                     * 判断参数 SourceExchangeType 是否已赋值
                     * @return SourceExchangeType 是否已赋值
                     * 
                     */
                    bool SourceExchangeTypeHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
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
                     * 获取Modification time.
                     * @return ModifyTime Modification time.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Modification time.
                     * @param _modifyTime Modification time.
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
                     * 获取Creation timestamp.
                     * @return CreateTs Creation timestamp.
                     * 
                     */
                    uint64_t GetCreateTs() const;

                    /**
                     * 设置Creation timestamp.
                     * @param _createTs Creation timestamp.
                     * 
                     */
                    void SetCreateTs(const uint64_t& _createTs);

                    /**
                     * 判断参数 CreateTs 是否已赋值
                     * @return CreateTs 是否已赋值
                     * 
                     */
                    bool CreateTsHasBeenSet() const;

                    /**
                     * 获取Modification timestamp.
                     * @return ModifyTs Modification timestamp.
                     * 
                     */
                    uint64_t GetModifyTs() const;

                    /**
                     * 设置Modification timestamp.
                     * @param _modifyTs Modification timestamp.
                     * 
                     */
                    void SetModifyTs(const uint64_t& _modifyTs);

                    /**
                     * 判断参数 ModifyTs 是否已赋值
                     * @return ModifyTs 是否已赋值
                     * 
                     */
                    bool ModifyTsHasBeenSet() const;

                private:

                    /**
                     * Routing relationship ID.
                     */
                    int64_t m_bindingId;
                    bool m_bindingIdHasBeenSet;

                    /**
                     * VhostName
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * Source exchange name.
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Destination type. Valid values: queue and exchange.
                     */
                    std::string m_destinationType;
                    bool m_destinationTypeHasBeenSet;

                    /**
                     * Destination resource name.
                     */
                    std::string m_destination;
                    bool m_destinationHasBeenSet;

                    /**
                     * Binds the key.
                     */
                    std::string m_routingKey;
                    bool m_routingKeyHasBeenSet;

                    /**
                     * Source exchange type.
                     */
                    std::string m_sourceExchangeType;
                    bool m_sourceExchangeTypeHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Modification time.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Creation timestamp.
                     */
                    uint64_t m_createTs;
                    bool m_createTsHasBeenSet;

                    /**
                     * Modification timestamp.
                     */
                    uint64_t m_modifyTs;
                    bool m_modifyTsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQBINDINGLISTINFO_H_
