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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_CREATERABBITMQSERVERLESSEXCHANGEREQUEST_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_CREATERABBITMQSERVERLESSEXCHANGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateRabbitMQServerlessExchange request structure.
                */
                class CreateRabbitMQServerlessExchangeRequest : public AbstractModel
                {
                public:
                    CreateRabbitMQServerlessExchangeRequest();
                    ~CreateRabbitMQServerlessExchangeRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取VHost parameter.
                     * @return VirtualHost VHost parameter.
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 设置VHost parameter.
                     * @param _virtualHost VHost parameter.
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
                     * 获取exchange name.
                     * @return ExchangeName exchange name.
                     * 
                     */
                    std::string GetExchangeName() const;

                    /**
                     * 设置exchange name.
                     * @param _exchangeName exchange name.
                     * 
                     */
                    void SetExchangeName(const std::string& _exchangeName);

                    /**
                     * 判断参数 ExchangeName 是否已赋值
                     * @return ExchangeName 是否已赋值
                     * 
                     */
                    bool ExchangeNameHasBeenSet() const;

                    /**
                     * 获取Specifies the exchange type. valid values: "fanout", "direct", "topic", "headers".
                     * @return ExchangeType Specifies the exchange type. valid values: "fanout", "direct", "topic", "headers".
                     * 
                     */
                    std::string GetExchangeType() const;

                    /**
                     * 设置Specifies the exchange type. valid values: "fanout", "direct", "topic", "headers".
                     * @param _exchangeType Specifies the exchange type. valid values: "fanout", "direct", "topic", "headers".
                     * 
                     */
                    void SetExchangeType(const std::string& _exchangeType);

                    /**
                     * 判断参数 ExchangeType 是否已赋值
                     * @return ExchangeType 是否已赋值
                     * 
                     */
                    bool ExchangeTypeHasBeenSet() const;

                    /**
                     * 获取Specifies the remark for exchange.
                     * @return Remark Specifies the remark for exchange.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Specifies the remark for exchange.
                     * @param _remark Specifies the remark for exchange.
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
                     * 获取Specifies whether it is a persistent exchange. when the cluster restarts, all exchanges with this field set to "false" will be cleared.
                     * @return Durable Specifies whether it is a persistent exchange. when the cluster restarts, all exchanges with this field set to "false" will be cleared.
                     * 
                     */
                    bool GetDurable() const;

                    /**
                     * 设置Specifies whether it is a persistent exchange. when the cluster restarts, all exchanges with this field set to "false" will be cleared.
                     * @param _durable Specifies whether it is a persistent exchange. when the cluster restarts, all exchanges with this field set to "false" will be cleared.
                     * 
                     */
                    void SetDurable(const bool& _durable);

                    /**
                     * 判断参数 Durable 是否已赋值
                     * @return Durable 是否已赋值
                     * 
                     */
                    bool DurableHasBeenSet() const;

                    /**
                     * 获取Whether to auto-delete this exchange. if set to "true", the exchange will be automatically deleted when all routing relationships on the current exchange are unbound.
                     * @return AutoDelete Whether to auto-delete this exchange. if set to "true", the exchange will be automatically deleted when all routing relationships on the current exchange are unbound.
                     * 
                     */
                    bool GetAutoDelete() const;

                    /**
                     * 设置Whether to auto-delete this exchange. if set to "true", the exchange will be automatically deleted when all routing relationships on the current exchange are unbound.
                     * @param _autoDelete Whether to auto-delete this exchange. if set to "true", the exchange will be automatically deleted when all routing relationships on the current exchange are unbound.
                     * 
                     */
                    void SetAutoDelete(const bool& _autoDelete);

                    /**
                     * 判断参数 AutoDelete 是否已赋值
                     * @return AutoDelete 是否已赋值
                     * 
                     */
                    bool AutoDeleteHasBeenSet() const;

                    /**
                     * 获取Specifies whether it is an internal exchange. if set to "true", messages cannot be directly delivered to this exchange. they need to be forwarded through another exchange in the routing settings.
                     * @return Internal Specifies whether it is an internal exchange. if set to "true", messages cannot be directly delivered to this exchange. they need to be forwarded through another exchange in the routing settings.
                     * 
                     */
                    bool GetInternal() const;

                    /**
                     * 设置Specifies whether it is an internal exchange. if set to "true", messages cannot be directly delivered to this exchange. they need to be forwarded through another exchange in the routing settings.
                     * @param _internal Specifies whether it is an internal exchange. if set to "true", messages cannot be directly delivered to this exchange. they need to be forwarded through another exchange in the routing settings.
                     * 
                     */
                    void SetInternal(const bool& _internal);

                    /**
                     * 判断参数 Internal 是否已赋值
                     * @return Internal 是否已赋值
                     * 
                     */
                    bool InternalHasBeenSet() const;

                    /**
                     * 获取Alternative exchange. if a message cannot be sent to the current exchange, it will be sent to this alternative exchange.
                     * @return AlternateExchange Alternative exchange. if a message cannot be sent to the current exchange, it will be sent to this alternative exchange.
                     * 
                     */
                    std::string GetAlternateExchange() const;

                    /**
                     * 设置Alternative exchange. if a message cannot be sent to the current exchange, it will be sent to this alternative exchange.
                     * @param _alternateExchange Alternative exchange. if a message cannot be sent to the current exchange, it will be sent to this alternative exchange.
                     * 
                     */
                    void SetAlternateExchange(const std::string& _alternateExchange);

                    /**
                     * 判断参数 AlternateExchange 是否已赋值
                     * @return AlternateExchange 是否已赋值
                     * 
                     */
                    bool AlternateExchangeHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * VHost parameter.
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * exchange name.
                     */
                    std::string m_exchangeName;
                    bool m_exchangeNameHasBeenSet;

                    /**
                     * Specifies the exchange type. valid values: "fanout", "direct", "topic", "headers".
                     */
                    std::string m_exchangeType;
                    bool m_exchangeTypeHasBeenSet;

                    /**
                     * Specifies the remark for exchange.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Specifies whether it is a persistent exchange. when the cluster restarts, all exchanges with this field set to "false" will be cleared.
                     */
                    bool m_durable;
                    bool m_durableHasBeenSet;

                    /**
                     * Whether to auto-delete this exchange. if set to "true", the exchange will be automatically deleted when all routing relationships on the current exchange are unbound.
                     */
                    bool m_autoDelete;
                    bool m_autoDeleteHasBeenSet;

                    /**
                     * Specifies whether it is an internal exchange. if set to "true", messages cannot be directly delivered to this exchange. they need to be forwarded through another exchange in the routing settings.
                     */
                    bool m_internal;
                    bool m_internalHasBeenSet;

                    /**
                     * Alternative exchange. if a message cannot be sent to the current exchange, it will be sent to this alternative exchange.
                     */
                    std::string m_alternateExchange;
                    bool m_alternateExchangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_CREATERABBITMQSERVERLESSEXCHANGEREQUEST_H_
