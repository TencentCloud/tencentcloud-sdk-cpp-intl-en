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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQBINDINGLISTINFO_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQBINDINGLISTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * Rabbitmq binding relationship list member.
                */
                class RabbitMQBindingListInfo : public AbstractModel
                {
                public:
                    RabbitMQBindingListInfo();
                    ~RabbitMQBindingListInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取binding id.
                     * @return BindingId binding id.
                     * 
                     */
                    int64_t GetBindingId() const;

                    /**
                     * 设置binding id.
                     * @param _bindingId binding id.
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
                     * 获取Vhost parameter.
                     * @return VirtualHost Vhost parameter.
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 设置Vhost parameter.
                     * @param _virtualHost Vhost parameter.
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
                     * 获取Target type. valid values: queue or exchange.
                     * @return DestinationType Target type. valid values: queue or exchange.
                     * 
                     */
                    std::string GetDestinationType() const;

                    /**
                     * 设置Target type. valid values: queue or exchange.
                     * @param _destinationType Target type. valid values: queue or exchange.
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
                     * 获取Target resource name.
                     * @return Destination Target resource name.
                     * 
                     */
                    std::string GetDestination() const;

                    /**
                     * 设置Target resource name.
                     * @param _destination Target resource name.
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
                     * 获取Binding key.
                     * @return RoutingKey Binding key.
                     * 
                     */
                    std::string GetRoutingKey() const;

                    /**
                     * 设置Binding key.
                     * @param _routingKey Binding key.
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
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
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
                     * 获取Modification time
                     * @return ModifyTime Modification time
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Modification time
                     * @param _modifyTime Modification time
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * binding id.
                     */
                    int64_t m_bindingId;
                    bool m_bindingIdHasBeenSet;

                    /**
                     * Vhost parameter.
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * Source exchange name.
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Target type. valid values: queue or exchange.
                     */
                    std::string m_destinationType;
                    bool m_destinationTypeHasBeenSet;

                    /**
                     * Target resource name.
                     */
                    std::string m_destination;
                    bool m_destinationHasBeenSet;

                    /**
                     * Binding key.
                     */
                    std::string m_routingKey;
                    bool m_routingKeyHasBeenSet;

                    /**
                     * Source exchange type.
                     */
                    std::string m_sourceExchangeType;
                    bool m_sourceExchangeTypeHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Modification time
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQBINDINGLISTINFO_H_
