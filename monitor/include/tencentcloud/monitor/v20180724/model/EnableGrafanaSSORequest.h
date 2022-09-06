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
                     * 获取Whether to enable SSO
                     * @return EnableSSO Whether to enable SSO
                     */
                    bool GetEnableSSO() const;

                    /**
                     * 设置Whether to enable SSO
                     * @param EnableSSO Whether to enable SSO
                     */
                    void SetEnableSSO(const bool& _enableSSO);

                    /**
                     * 判断参数 EnableSSO 是否已赋值
                     * @return EnableSSO 是否已赋值
                     */
                    bool EnableSSOHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * Whether to enable SSO
                     */
                    bool m_enableSSO;
                    bool m_enableSSOHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_ENABLEGRAFANASSOREQUEST_H_