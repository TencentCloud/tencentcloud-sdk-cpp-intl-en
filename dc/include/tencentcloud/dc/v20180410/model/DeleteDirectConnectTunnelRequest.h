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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_DELETEDIRECTCONNECTTUNNELREQUEST_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_DELETEDIRECTCONNECTTUNNELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * DeleteDirectConnectTunnel request structure.
                */
                class DeleteDirectConnectTunnelRequest : public AbstractModel
                {
                public:
                    DeleteDirectConnectTunnelRequest();
                    ~DeleteDirectConnectTunnelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Dedicated tunnel ID.
                     * @return DirectConnectTunnelId Dedicated tunnel ID.
                     * 
                     */
                    std::string GetDirectConnectTunnelId() const;

                    /**
                     * 设置Dedicated tunnel ID.
                     * @param _directConnectTunnelId Dedicated tunnel ID.
                     * 
                     */
                    void SetDirectConnectTunnelId(const std::string& _directConnectTunnelId);

                    /**
                     * 判断参数 DirectConnectTunnelId 是否已赋值
                     * @return DirectConnectTunnelId 是否已赋值
                     * 
                     */
                    bool DirectConnectTunnelIdHasBeenSet() const;

                private:

                    /**
                     * Dedicated tunnel ID.
                     */
                    std::string m_directConnectTunnelId;
                    bool m_directConnectTunnelIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_DELETEDIRECTCONNECTTUNNELREQUEST_H_
