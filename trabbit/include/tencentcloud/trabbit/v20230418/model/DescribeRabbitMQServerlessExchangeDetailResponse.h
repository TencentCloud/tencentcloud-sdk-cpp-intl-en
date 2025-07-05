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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSEXCHANGEDETAILRESPONSE_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSEXCHANGEDETAILRESPONSE_H_

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
                * DescribeRabbitMQServerlessExchangeDetail response structure.
                */
                class DescribeRabbitMQServerlessExchangeDetailResponse : public AbstractModel
                {
                public:
                    DescribeRabbitMQServerlessExchangeDetailResponse();
                    ~DescribeRabbitMQServerlessExchangeDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取exchange name.
                     * @return ExchangeName exchange name.
                     * 
                     */
                    std::string GetExchangeName() const;

                    /**
                     * 判断参数 ExchangeName 是否已赋值
                     * @return ExchangeName 是否已赋值
                     * 
                     */
                    bool ExchangeNameHasBeenSet() const;

                    /**
                     * 获取Remarks.
                     * @return Remark Remarks.
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
                     * 获取Specifies whether it is a persistent exchange. when the cluster restarts, all exchanges with this field set to "false" will be cleared.
                     * @return Durable Specifies whether it is a persistent exchange. when the cluster restarts, all exchanges with this field set to "false" will be cleared.
                     * 
                     */
                    bool GetDurable() const;

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
                     * 判断参数 Internal 是否已赋值
                     * @return Internal 是否已赋值
                     * 
                     */
                    bool InternalHasBeenSet() const;

                    /**
                     * 获取Alternative exchange. if a message does not match all queues or exchanges bound to the current exchange, it will be sent to this alternative exchange.
                     * @return AlternateExchange Alternative exchange. if a message does not match all queues or exchanges bound to the current exchange, it will be sent to this alternative exchange.
                     * 
                     */
                    std::string GetAlternateExchange() const;

                    /**
                     * 判断参数 AlternateExchange 是否已赋值
                     * @return AlternateExchange 是否已赋值
                     * 
                     */
                    bool AlternateExchangeHasBeenSet() const;

                    /**
                     * 获取Specifies the exchange type. valid values: "fanout", "direct", "topic", "headers".
                     * @return ExchangeType Specifies the exchange type. valid values: "fanout", "direct", "topic", "headers".
                     * 
                     */
                    std::string GetExchangeType() const;

                    /**
                     * 判断参数 ExchangeType 是否已赋值
                     * @return ExchangeType 是否已赋值
                     * 
                     */
                    bool ExchangeTypeHasBeenSet() const;

                    /**
                     * 获取VHost parameter.
                     * @return VirtualHost VHost parameter.
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 判断参数 VirtualHost 是否已赋值
                     * @return VirtualHost 是否已赋值
                     * 
                     */
                    bool VirtualHostHasBeenSet() const;

                    /**
                     * 获取exchange creator. valid values: `system` (generated by the system), `user` (user-created).
                     * @return ExchangeCreator exchange creator. valid values: `system` (generated by the system), `user` (user-created).
                     * 
                     */
                    std::string GetExchangeCreator() const;

                    /**
                     * 判断参数 ExchangeCreator 是否已赋值
                     * @return ExchangeCreator 是否已赋值
                     * 
                     */
                    bool ExchangeCreatorHasBeenSet() const;

                    /**
                     * 获取Additional parameters key-value string.
                     * @return Arguments Additional parameters key-value string.
                     * 
                     */
                    std::string GetArguments() const;

                    /**
                     * 判断参数 Arguments 是否已赋值
                     * @return Arguments 是否已赋值
                     * 
                     */
                    bool ArgumentsHasBeenSet() const;

                private:

                    /**
                     * exchange name.
                     */
                    std::string m_exchangeName;
                    bool m_exchangeNameHasBeenSet;

                    /**
                     * Remarks.
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
                     * Alternative exchange. if a message does not match all queues or exchanges bound to the current exchange, it will be sent to this alternative exchange.
                     */
                    std::string m_alternateExchange;
                    bool m_alternateExchangeHasBeenSet;

                    /**
                     * Specifies the exchange type. valid values: "fanout", "direct", "topic", "headers".
                     */
                    std::string m_exchangeType;
                    bool m_exchangeTypeHasBeenSet;

                    /**
                     * VHost parameter.
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * exchange creator. valid values: `system` (generated by the system), `user` (user-created).
                     */
                    std::string m_exchangeCreator;
                    bool m_exchangeCreatorHasBeenSet;

                    /**
                     * Additional parameters key-value string.
                     */
                    std::string m_arguments;
                    bool m_argumentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSEXCHANGEDETAILRESPONSE_H_
