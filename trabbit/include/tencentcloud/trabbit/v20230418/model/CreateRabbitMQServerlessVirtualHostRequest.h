/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_CREATERABBITMQSERVERLESSVIRTUALHOSTREQUEST_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_CREATERABBITMQSERVERLESSVIRTUALHOSTREQUEST_H_

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
                * CreateRabbitMQServerlessVirtualHost request structure.
                */
                class CreateRabbitMQServerlessVirtualHostRequest : public AbstractModel
                {
                public:
                    CreateRabbitMQServerlessVirtualHostRequest();
                    ~CreateRabbitMQServerlessVirtualHostRequest() = default;
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
                     * 获取Description information
                     * @return Description Description information
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description information
                     * @param _description Description information
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
                     * 获取Message trace switch. specifies that the value "true" turns it on, "false" turns it off. indicates that it is off by default.
                     * @return TraceFlag Message trace switch. specifies that the value "true" turns it on, "false" turns it off. indicates that it is off by default.
                     * 
                     */
                    bool GetTraceFlag() const;

                    /**
                     * 设置Message trace switch. specifies that the value "true" turns it on, "false" turns it off. indicates that it is off by default.
                     * @param _traceFlag Message trace switch. specifies that the value "true" turns it on, "false" turns it off. indicates that it is off by default.
                     * 
                     */
                    void SetTraceFlag(const bool& _traceFlag);

                    /**
                     * 判断参数 TraceFlag 是否已赋值
                     * @return TraceFlag 是否已赋值
                     * 
                     */
                    bool TraceFlagHasBeenSet() const;

                    /**
                     * 获取Specifies whether to create a mirrored queue policy. the default value is true.
                     * @return MirrorQueuePolicyFlag Specifies whether to create a mirrored queue policy. the default value is true.
                     * 
                     */
                    bool GetMirrorQueuePolicyFlag() const;

                    /**
                     * 设置Specifies whether to create a mirrored queue policy. the default value is true.
                     * @param _mirrorQueuePolicyFlag Specifies whether to create a mirrored queue policy. the default value is true.
                     * 
                     */
                    void SetMirrorQueuePolicyFlag(const bool& _mirrorQueuePolicyFlag);

                    /**
                     * 判断参数 MirrorQueuePolicyFlag 是否已赋值
                     * @return MirrorQueuePolicyFlag 是否已赋值
                     * 
                     */
                    bool MirrorQueuePolicyFlagHasBeenSet() const;

                private:

                    /**
                     * instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Vhost name
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * Description information
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Message trace switch. specifies that the value "true" turns it on, "false" turns it off. indicates that it is off by default.
                     */
                    bool m_traceFlag;
                    bool m_traceFlagHasBeenSet;

                    /**
                     * Specifies whether to create a mirrored queue policy. the default value is true.
                     */
                    bool m_mirrorQueuePolicyFlag;
                    bool m_mirrorQueuePolicyFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_CREATERABBITMQSERVERLESSVIRTUALHOSTREQUEST_H_
