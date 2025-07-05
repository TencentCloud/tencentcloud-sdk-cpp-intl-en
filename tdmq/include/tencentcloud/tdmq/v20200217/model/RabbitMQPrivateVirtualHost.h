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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQPRIVATEVIRTUALHOST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQPRIVATEVIRTUALHOST_H_

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
                * TDMQ for RabbitMQ exclusive vhost
                */
                class RabbitMQPrivateVirtualHost : public AbstractModel
                {
                public:
                    RabbitMQPrivateVirtualHost();
                    ~RabbitMQPrivateVirtualHost() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Vhost name
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @return VirtualHostName Vhost name
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVirtualHostName() const;

                    /**
                     * 设置Vhost name
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @param _virtualHostName Vhost name
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVirtualHostName(const std::string& _virtualHostName);

                    /**
                     * 判断参数 VirtualHostName 是否已赋值
                     * @return VirtualHostName 是否已赋值
                     * 
                     */
                    bool VirtualHostNameHasBeenSet() const;

                    /**
                     * 获取Vhost description
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @return Description Vhost description
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Vhost description
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @param _description Vhost description
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Vhost name
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_virtualHostName;
                    bool m_virtualHostNameHasBeenSet;

                    /**
                     * Vhost description
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQPRIVATEVIRTUALHOST_H_
