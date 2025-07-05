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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATERABBITMQVIRTUALHOSTREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATERABBITMQVIRTUALHOSTREQUEST_H_

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
                * CreateRabbitMQVirtualHost request structure.
                */
                class CreateRabbitMQVirtualHostRequest : public AbstractModel
                {
                public:
                    CreateRabbitMQVirtualHostRequest();
                    ~CreateRabbitMQVirtualHostRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster instance ID
                     * @return InstanceId Cluster instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster instance ID
                     * @param _instanceId Cluster instance ID
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
                     * 获取Vhost name
                     * @return VirtualHost Vhost name
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 设置Vhost name
                     * @param _virtualHost Vhost name
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
                     * 获取Description
                     * @return Description Description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
                     * @param _description Description
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
                     * 获取Message trace flag. Valid values: `true` (Enabled), `false` (Disabled, which is the default value).
                     * @return TraceFlag Message trace flag. Valid values: `true` (Enabled), `false` (Disabled, which is the default value).
                     * 
                     */
                    bool GetTraceFlag() const;

                    /**
                     * 设置Message trace flag. Valid values: `true` (Enabled), `false` (Disabled, which is the default value).
                     * @param _traceFlag Message trace flag. Valid values: `true` (Enabled), `false` (Disabled, which is the default value).
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
                     * Cluster instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Vhost name
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Message trace flag. Valid values: `true` (Enabled), `false` (Disabled, which is the default value).
                     */
                    bool m_traceFlag;
                    bool m_traceFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATERABBITMQVIRTUALHOSTREQUEST_H_
