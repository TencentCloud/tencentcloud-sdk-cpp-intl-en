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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSCONNECTIONREQUEST_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSCONNECTIONREQUEST_H_

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
                * DescribeRabbitMQServerlessConnection request structure.
                */
                class DescribeRabbitMQServerlessConnectionRequest : public AbstractModel
                {
                public:
                    DescribeRabbitMQServerlessConnectionRequest();
                    ~DescribeRabbitMQServerlessConnectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取instance ID		
                     * @return InstanceId instance ID		
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置instance ID		
                     * @param _instanceId instance ID		
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
                     * 获取Specifies the vhost name.
                     * @return VirtualHost Specifies the vhost name.
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 设置Specifies the vhost name.
                     * @param _virtualHost Specifies the vhost name.
                     * 
                     */
                    void SetVirtualHost(const std::string& _virtualHost);

                    /**
                     * 判断参数 VirtualHost 是否已赋值
                     * @return VirtualHost 是否已赋值
                     * 
                     */
                    bool VirtualHostHasBeenSet() const;

                private:

                    /**
                     * instance ID		
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Specifies the vhost name.
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSCONNECTIONREQUEST_H_
