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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_DELETERABBITMQSERVERLESSEXCHANGEREQUEST_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_DELETERABBITMQSERVERLESSEXCHANGEREQUEST_H_

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
                * DeleteRabbitMQServerlessExchange request structure.
                */
                class DeleteRabbitMQServerlessExchangeRequest : public AbstractModel
                {
                public:
                    DeleteRabbitMQServerlessExchangeRequest();
                    ~DeleteRabbitMQServerlessExchangeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance id.
                     * @return InstanceId Instance id.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance id.
                     * @param _instanceId Instance id.
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
                     * 获取Specifies the vhost parameter.
                     * @return VirtualHost Specifies the vhost parameter.
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 设置Specifies the vhost parameter.
                     * @param _virtualHost Specifies the vhost parameter.
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

                private:

                    /**
                     * Instance id.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Specifies the vhost parameter.
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * exchange name.
                     */
                    std::string m_exchangeName;
                    bool m_exchangeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_DELETERABBITMQSERVERLESSEXCHANGEREQUEST_H_
