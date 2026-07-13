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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_CREATERABBITMQSERVERLESSBINDINGRESPONSE_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_CREATERABBITMQSERVERLESSBINDINGRESPONSE_H_

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
                * CreateRabbitMQServerlessBinding response structure.
                */
                class CreateRabbitMQServerlessBindingResponse : public AbstractModel
                {
                public:
                    CreateRabbitMQServerlessBindingResponse();
                    ~CreateRabbitMQServerlessBindingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Queue name</p>
                     * @return InstanceId <p>Queue name</p>
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
                     * 获取<p>vhost parameter</p>
                     * @return VirtualHost <p>vhost parameter</p>
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
                     * 获取<p>Routing relationship Id</p>
                     * @return BindingId <p>Routing relationship Id</p>
                     * 
                     */
                    int64_t GetBindingId() const;

                    /**
                     * 判断参数 BindingId 是否已赋值
                     * @return BindingId 是否已赋值
                     * 
                     */
                    bool BindingIdHasBeenSet() const;

                private:

                    /**
                     * <p>Queue name</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>vhost parameter</p>
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * <p>Routing relationship Id</p>
                     */
                    int64_t m_bindingId;
                    bool m_bindingIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_CREATERABBITMQSERVERLESSBINDINGRESPONSE_H_
