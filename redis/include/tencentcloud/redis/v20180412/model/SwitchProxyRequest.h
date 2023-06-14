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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_SWITCHPROXYREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_SWITCHPROXYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * SwitchProxy request structure.
                */
                class SwitchProxyRequest : public AbstractModel
                {
                public:
                    SwitchProxyRequest();
                    ~SwitchProxyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取Instance ProxyID
                     * @return ProxyID Instance ProxyID
                     * 
                     */
                    std::string GetProxyID() const;

                    /**
                     * 设置Instance ProxyID
                     * @param _proxyID Instance ProxyID
                     * 
                     */
                    void SetProxyID(const std::string& _proxyID);

                    /**
                     * 判断参数 ProxyID 是否已赋值
                     * @return ProxyID 是否已赋值
                     * 
                     */
                    bool ProxyIDHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance ProxyID
                     */
                    std::string m_proxyID;
                    bool m_proxyIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_SWITCHPROXYREQUEST_H_
