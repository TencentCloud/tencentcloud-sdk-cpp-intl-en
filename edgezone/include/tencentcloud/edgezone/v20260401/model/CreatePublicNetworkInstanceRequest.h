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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_MODEL_CREATEPUBLICNETWORKINSTANCEREQUEST_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_MODEL_CREATEPUBLICNETWORKINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Edgezone
    {
        namespace V20260401
        {
            namespace Model
            {
                /**
                * CreatePublicNetworkInstance request structure.
                */
                class CreatePublicNetworkInstanceRequest : public AbstractModel
                {
                public:
                    CreatePublicNetworkInstanceRequest();
                    ~CreatePublicNetworkInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Availability zone ID.
                     * @return ZoneId Availability zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Availability zone ID.
                     * @param _zoneId Availability zone ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Public network instance name
                     * @return NetworkInstanceName Public network instance name
                     * 
                     */
                    std::string GetNetworkInstanceName() const;

                    /**
                     * 设置Public network instance name
                     * @param _networkInstanceName Public network instance name
                     * 
                     */
                    void SetNetworkInstanceName(const std::string& _networkInstanceName);

                    /**
                     * 判断参数 NetworkInstanceName 是否已赋值
                     * @return NetworkInstanceName 是否已赋值
                     * 
                     */
                    bool NetworkInstanceNameHasBeenSet() const;

                    /**
                     * 获取Network line
                     * @return Line Network line
                     * 
                     */
                    std::string GetLine() const;

                    /**
                     * 设置Network line
                     * @param _line Network line
                     * 
                     */
                    void SetLine(const std::string& _line);

                    /**
                     * 判断参数 Line 是否已赋值
                     * @return Line 是否已赋值
                     * 
                     */
                    bool LineHasBeenSet() const;

                    /**
                     * 获取Routing mode
                     * @return RouteMode Routing mode
                     * 
                     */
                    std::string GetRouteMode() const;

                    /**
                     * 设置Routing mode
                     * @param _routeMode Routing mode
                     * 
                     */
                    void SetRouteMode(const std::string& _routeMode);

                    /**
                     * 判断参数 RouteMode 是否已赋值
                     * @return RouteMode 是否已赋值
                     * 
                     */
                    bool RouteModeHasBeenSet() const;

                    /**
                     * 获取Public network bandwidth (Mbps)
                     * @return Bandwidth Public network bandwidth (Mbps)
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置Public network bandwidth (Mbps)
                     * @param _bandwidth Public network bandwidth (Mbps)
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                private:

                    /**
                     * Availability zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Public network instance name
                     */
                    std::string m_networkInstanceName;
                    bool m_networkInstanceNameHasBeenSet;

                    /**
                     * Network line
                     */
                    std::string m_line;
                    bool m_lineHasBeenSet;

                    /**
                     * Routing mode
                     */
                    std::string m_routeMode;
                    bool m_routeModeHasBeenSet;

                    /**
                     * Public network bandwidth (Mbps)
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_CREATEPUBLICNETWORKINSTANCEREQUEST_H_
