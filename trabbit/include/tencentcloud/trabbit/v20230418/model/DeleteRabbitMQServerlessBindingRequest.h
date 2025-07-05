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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_DELETERABBITMQSERVERLESSBINDINGREQUEST_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_DELETERABBITMQSERVERLESSBINDINGREQUEST_H_

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
                * DeleteRabbitMQServerlessBinding request structure.
                */
                class DeleteRabbitMQServerlessBindingRequest : public AbstractModel
                {
                public:
                    DeleteRabbitMQServerlessBindingRequest();
                    ~DeleteRabbitMQServerlessBindingRequest() = default;
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
                     * 获取binding relationship Id.
                     * @return BindingId binding relationship Id.
                     * 
                     */
                    int64_t GetBindingId() const;

                    /**
                     * 设置binding relationship Id.
                     * @param _bindingId binding relationship Id.
                     * 
                     */
                    void SetBindingId(const int64_t& _bindingId);

                    /**
                     * 判断参数 BindingId 是否已赋值
                     * @return BindingId 是否已赋值
                     * 
                     */
                    bool BindingIdHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Vhost parameter.
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * binding relationship Id.
                     */
                    int64_t m_bindingId;
                    bool m_bindingIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_DELETERABBITMQSERVERLESSBINDINGREQUEST_H_
