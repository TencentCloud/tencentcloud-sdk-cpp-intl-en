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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYRABBITMQVIRTUALHOSTREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYRABBITMQVIRTUALHOSTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyRabbitMQVirtualHost request structure.
                */
                class ModifyRabbitMQVirtualHostRequest : public AbstractModel
                {
                public:
                    ModifyRabbitMQVirtualHostRequest();
                    ~ModifyRabbitMQVirtualHostRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID, such as amqp-xxxxxxxx. specifies the effective InstanceId that can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1).
                     * @return InstanceId Instance ID, such as amqp-xxxxxxxx. specifies the effective InstanceId that can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1).
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, such as amqp-xxxxxxxx. specifies the effective InstanceId that can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1).
                     * @param _instanceId Instance ID, such as amqp-xxxxxxxx. specifies the effective InstanceId that can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1).
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
                     * 获取VirtualHost name, such as testvhost. effective VirtualHost names can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1), clicking Vhost in the left sidebar, and finding the Vhost name in the Vhost list.
                     * @return VirtualHost VirtualHost name, such as testvhost. effective VirtualHost names can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1), clicking Vhost in the left sidebar, and finding the Vhost name in the Vhost list.
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 设置VirtualHost name, such as testvhost. effective VirtualHost names can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1), clicking Vhost in the left sidebar, and finding the Vhost name in the Vhost list.
                     * @param _virtualHost VirtualHost name, such as testvhost. effective VirtualHost names can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1), clicking Vhost in the left sidebar, and finding the Vhost name in the Vhost list.
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
                     * 获取Describes the Virtual Host.
                     * @return Description Describes the Virtual Host.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Describes the Virtual Host.
                     * @param _description Describes the Virtual Host.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Message trace flag. Valid values: `true` (Enabled), `false` (Disabled).
                     * @return TraceFlag Message trace flag. Valid values: `true` (Enabled), `false` (Disabled).
                     * 
                     */
                    bool GetTraceFlag() const;

                    /**
                     * 设置Message trace flag. Valid values: `true` (Enabled), `false` (Disabled).
                     * @param _traceFlag Message trace flag. Valid values: `true` (Enabled), `false` (Disabled).
                     * 
                     */
                    void SetTraceFlag(const bool& _traceFlag);

                    /**
                     * 判断参数 TraceFlag 是否已赋值
                     * @return TraceFlag 是否已赋值
                     * 
                     */
                    bool TraceFlagHasBeenSet() const;

                private:

                    /**
                     * Instance ID, such as amqp-xxxxxxxx. specifies the effective InstanceId that can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1).
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * VirtualHost name, such as testvhost. effective VirtualHost names can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1), clicking Vhost in the left sidebar, and finding the Vhost name in the Vhost list.
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * Describes the Virtual Host.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Message trace flag. Valid values: `true` (Enabled), `false` (Disabled).
                     */
                    bool m_traceFlag;
                    bool m_traceFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYRABBITMQVIRTUALHOSTREQUEST_H_
