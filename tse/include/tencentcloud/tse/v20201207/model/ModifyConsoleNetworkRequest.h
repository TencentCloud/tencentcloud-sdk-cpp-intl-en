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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCONSOLENETWORKREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCONSOLENETWORKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/NetworkAccessControl.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * ModifyConsoleNetwork request structure.
                */
                class ModifyConsoleNetworkRequest : public AbstractModel
                {
                public:
                    ModifyConsoleNetworkRequest();
                    ~ModifyConsoleNetworkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cloud Native API gateway instance ID.
                     * @return GatewayId Cloud Native API gateway instance ID.
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Cloud Native API gateway instance ID.
                     * @param _gatewayId Cloud Native API gateway instance ID.
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取Network type:
-Open public network
-Internal private network (not currently supported)
                     * @return NetworkType Network type:
-Open public network
-Internal private network (not currently supported)
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置Network type:
-Open public network
-Internal private network (not currently supported)
                     * @param _networkType Network type:
-Open public network
-Internal private network (not currently supported)
                     * 
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     * 
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取Enable the Konga network. Default is Open.
-Open
- Close: disabled.
                     * @return Operate Enable the Konga network. Default is Open.
-Open
- Close: disabled.
                     * 
                     */
                    std::string GetOperate() const;

                    /**
                     * 设置Enable the Konga network. Default is Open.
-Open
- Close: disabled.
                     * @param _operate Enable the Konga network. Default is Open.
-Open
- Close: disabled.
                     * 
                     */
                    void SetOperate(const std::string& _operate);

                    /**
                     * 判断参数 Operate 是否已赋值
                     * @return Operate 是否已赋值
                     * 
                     */
                    bool OperateHasBeenSet() const;

                    /**
                     * 获取Access control policy
                     * @return AccessControl Access control policy
                     * 
                     */
                    NetworkAccessControl GetAccessControl() const;

                    /**
                     * 设置Access control policy
                     * @param _accessControl Access control policy
                     * 
                     */
                    void SetAccessControl(const NetworkAccessControl& _accessControl);

                    /**
                     * 判断参数 AccessControl 是否已赋值
                     * @return AccessControl 是否已赋值
                     * 
                     */
                    bool AccessControlHasBeenSet() const;

                private:

                    /**
                     * Cloud Native API gateway instance ID.
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * Network type:
-Open public network
-Internal private network (not currently supported)
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * Enable the Konga network. Default is Open.
-Open
- Close: disabled.
                     */
                    std::string m_operate;
                    bool m_operateHasBeenSet;

                    /**
                     * Access control policy
                     */
                    NetworkAccessControl m_accessControl;
                    bool m_accessControlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCONSOLENETWORKREQUEST_H_
