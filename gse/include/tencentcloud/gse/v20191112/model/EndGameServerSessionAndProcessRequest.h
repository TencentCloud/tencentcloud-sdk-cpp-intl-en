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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_ENDGAMESERVERSESSIONANDPROCESSREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_ENDGAMESERVERSESSIONANDPROCESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * EndGameServerSessionAndProcess request structure.
                */
                class EndGameServerSessionAndProcessRequest : public AbstractModel
                {
                public:
                    EndGameServerSessionAndProcessRequest();
                    ~EndGameServerSessionAndProcessRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Game server session ID. If a game server session ID is passed in, its corresponding processes, game server sessions, and player sessions will be terminated.
                     * @return GameServerSessionId Game server session ID. If a game server session ID is passed in, its corresponding processes, game server sessions, and player sessions will be terminated.
                     * 
                     */
                    std::string GetGameServerSessionId() const;

                    /**
                     * 设置Game server session ID. If a game server session ID is passed in, its corresponding processes, game server sessions, and player sessions will be terminated.
                     * @param _gameServerSessionId Game server session ID. If a game server session ID is passed in, its corresponding processes, game server sessions, and player sessions will be terminated.
                     * 
                     */
                    void SetGameServerSessionId(const std::string& _gameServerSessionId);

                    /**
                     * 判断参数 GameServerSessionId 是否已赋值
                     * @return GameServerSessionId 是否已赋值
                     * 
                     */
                    bool GameServerSessionIdHasBeenSet() const;

                    /**
                     * 获取The public IP of the CVM. You need to pass in `IpAddress` and `Port` at the same time to terminate the matched processes, game server sessions and player sessions (if any exists). It does not take effect in case only the `IpAddress` passed in.
                     * @return IpAddress The public IP of the CVM. You need to pass in `IpAddress` and `Port` at the same time to terminate the matched processes, game server sessions and player sessions (if any exists). It does not take effect in case only the `IpAddress` passed in.
                     * 
                     */
                    std::string GetIpAddress() const;

                    /**
                     * 设置The public IP of the CVM. You need to pass in `IpAddress` and `Port` at the same time to terminate the matched processes, game server sessions and player sessions (if any exists). It does not take effect in case only the `IpAddress` passed in.
                     * @param _ipAddress The public IP of the CVM. You need to pass in `IpAddress` and `Port` at the same time to terminate the matched processes, game server sessions and player sessions (if any exists). It does not take effect in case only the `IpAddress` passed in.
                     * 
                     */
                    void SetIpAddress(const std::string& _ipAddress);

                    /**
                     * 判断参数 IpAddress 是否已赋值
                     * @return IpAddress 是否已赋值
                     * 
                     */
                    bool IpAddressHasBeenSet() const;

                    /**
                     * 获取Port number. Value range: 1025 - 60000. You need to pass in `IpAddress` and `Port` at the same time to terminate the matched processes, game server sessions (if any exists) and player sessions (if any exists). It does not take effect in case only the `IpAddress` passed in.
                     * @return Port Port number. Value range: 1025 - 60000. You need to pass in `IpAddress` and `Port` at the same time to terminate the matched processes, game server sessions (if any exists) and player sessions (if any exists). It does not take effect in case only the `IpAddress` passed in.
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Port number. Value range: 1025 - 60000. You need to pass in `IpAddress` and `Port` at the same time to terminate the matched processes, game server sessions (if any exists) and player sessions (if any exists). It does not take effect in case only the `IpAddress` passed in.
                     * @param _port Port number. Value range: 1025 - 60000. You need to pass in `IpAddress` and `Port` at the same time to terminate the matched processes, game server sessions (if any exists) and player sessions (if any exists). It does not take effect in case only the `IpAddress` passed in.
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                private:

                    /**
                     * Game server session ID. If a game server session ID is passed in, its corresponding processes, game server sessions, and player sessions will be terminated.
                     */
                    std::string m_gameServerSessionId;
                    bool m_gameServerSessionIdHasBeenSet;

                    /**
                     * The public IP of the CVM. You need to pass in `IpAddress` and `Port` at the same time to terminate the matched processes, game server sessions and player sessions (if any exists). It does not take effect in case only the `IpAddress` passed in.
                     */
                    std::string m_ipAddress;
                    bool m_ipAddressHasBeenSet;

                    /**
                     * Port number. Value range: 1025 - 60000. You need to pass in `IpAddress` and `Port` at the same time to terminate the matched processes, game server sessions (if any exists) and player sessions (if any exists). It does not take effect in case only the `IpAddress` passed in.
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_ENDGAMESERVERSESSIONANDPROCESSREQUEST_H_
