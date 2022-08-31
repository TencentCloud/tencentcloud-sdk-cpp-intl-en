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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEGRAFANAINTEGRATIONSREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEGRAFANAINTEGRATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeGrafanaIntegrations request structure.
                */
                class DescribeGrafanaIntegrationsRequest : public AbstractModel
                {
                public:
                    DescribeGrafanaIntegrationsRequest();
                    ~DescribeGrafanaIntegrationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance name
                     * @return InstanceId Instance name
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance name
                     * @param InstanceId Instance name
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Integration ID
                     * @return IntegrationId Integration ID
                     */
                    std::string GetIntegrationId() const;

                    /**
                     * 设置Integration ID
                     * @param IntegrationId Integration ID
                     */
                    void SetIntegrationId(const std::string& _integrationId);

                    /**
                     * 判断参数 IntegrationId 是否已赋值
                     * @return IntegrationId 是否已赋值
                     */
                    bool IntegrationIdHasBeenSet() const;

                    /**
                     * 获取Type
                     * @return Kind Type
                     */
                    std::string GetKind() const;

                    /**
                     * 设置Type
                     * @param Kind Type
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     */
                    bool KindHasBeenSet() const;

                private:

                    /**
                     * Instance name
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Integration ID
                     */
                    std::string m_integrationId;
                    bool m_integrationIdHasBeenSet;

                    /**
                     * Type
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEGRAFANAINTEGRATIONSREQUEST_H_
