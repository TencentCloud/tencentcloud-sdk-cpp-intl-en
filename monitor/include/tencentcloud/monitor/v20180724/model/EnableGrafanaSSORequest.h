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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_ENABLEGRAFANASSOREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_ENABLEGRAFANASSOREQUEST_H_

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
                * EnableGrafanaSSO request structure.
                */
                class EnableGrafanaSSORequest : public AbstractModel
                {
                public:
                    EnableGrafanaSSORequest();
                    ~EnableGrafanaSSORequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether to enable SSO (`true`: Yes; `false`: No)
                     * @return EnableSSO Whether to enable SSO (`true`: Yes; `false`: No)
                     * 
                     */
                    bool GetEnableSSO() const;

                    /**
                     * 设置Whether to enable SSO (`true`: Yes; `false`: No)
                     * @param _enableSSO Whether to enable SSO (`true`: Yes; `false`: No)
                     * 
                     */
                    void SetEnableSSO(const bool& _enableSSO);

                    /**
                     * 判断参数 EnableSSO 是否已赋值
                     * @return EnableSSO 是否已赋值
                     * 
                     */
                    bool EnableSSOHasBeenSet() const;

                    /**
                     * 获取TCMG instance ID, such as “grafana-abcdefgh”.
                     * @return InstanceId TCMG instance ID, such as “grafana-abcdefgh”.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置TCMG instance ID, such as “grafana-abcdefgh”.
                     * @param _instanceId TCMG instance ID, such as “grafana-abcdefgh”.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * Whether to enable SSO (`true`: Yes; `false`: No)
                     */
                    bool m_enableSSO;
                    bool m_enableSSOHasBeenSet;

                    /**
                     * TCMG instance ID, such as “grafana-abcdefgh”.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_ENABLEGRAFANASSOREQUEST_H_
