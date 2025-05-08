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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_MODIFYRABBITMQSERVERLESSVIRTUALHOSTREQUEST_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_MODIFYRABBITMQSERVERLESSVIRTUALHOSTREQUEST_H_

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
                * ModifyRabbitMQServerlessVirtualHost request structure.
                */
                class ModifyRabbitMQServerlessVirtualHostRequest : public AbstractModel
                {
                public:
                    ModifyRabbitMQServerlessVirtualHostRequest();
                    ~ModifyRabbitMQServerlessVirtualHostRequest() = default;
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

                    /**
                     * 获取Specifies the description information of the vhost.
                     * @return Description Specifies the description information of the vhost.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Specifies the description information of the vhost.
                     * @param _description Specifies the description information of the vhost.
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
                     * 获取Message trace switch. specifies that the value true turns on the switch and the value false turns it off.
                     * @return TraceFlag Message trace switch. specifies that the value true turns on the switch and the value false turns it off.
                     * 
                     */
                    bool GetTraceFlag() const;

                    /**
                     * 设置Message trace switch. specifies that the value true turns on the switch and the value false turns it off.
                     * @param _traceFlag Message trace switch. specifies that the value true turns on the switch and the value false turns it off.
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
                     * instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Specifies the vhost name.
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * Specifies the description information of the vhost.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Message trace switch. specifies that the value true turns on the switch and the value false turns it off.
                     */
                    bool m_traceFlag;
                    bool m_traceFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_MODIFYRABBITMQSERVERLESSVIRTUALHOSTREQUEST_H_
