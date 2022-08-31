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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_ENABLESSOCAMCHECKREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_ENABLESSOCAMCHECKREQUEST_H_

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
                * EnableSSOCamCheck request structure.
                */
                class EnableSSOCamCheckRequest : public AbstractModel
                {
                public:
                    EnableSSOCamCheckRequest();
                    ~EnableSSOCamCheckRequest() = default;
                    std::string ToJsonString() const;


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

                    /**
                     * 获取Whether to enable CAM authentication
                     * @return EnableSSOCamCheck Whether to enable CAM authentication
                     */
                    bool GetEnableSSOCamCheck() const;

                    /**
                     * 设置Whether to enable CAM authentication
                     * @param EnableSSOCamCheck Whether to enable CAM authentication
                     */
                    void SetEnableSSOCamCheck(const bool& _enableSSOCamCheck);

                    /**
                     * 判断参数 EnableSSOCamCheck 是否已赋值
                     * @return EnableSSOCamCheck 是否已赋值
                     */
                    bool EnableSSOCamCheckHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Whether to enable CAM authentication
                     */
                    bool m_enableSSOCamCheck;
                    bool m_enableSSOCamCheckHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_ENABLESSOCAMCHECKREQUEST_H_
