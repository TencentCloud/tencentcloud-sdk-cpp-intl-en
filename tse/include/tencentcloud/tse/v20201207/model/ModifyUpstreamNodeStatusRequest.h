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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYUPSTREAMNODESTATUSREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYUPSTREAMNODESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * ModifyUpstreamNodeStatus request structure.
                */
                class ModifyUpstreamNodeStatusRequest : public AbstractModel
                {
                public:
                    ModifyUpstreamNodeStatusRequest();
                    ~ModifyUpstreamNodeStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Gateway instance ID
                     * @return GatewayId Gateway instance ID
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Gateway instance ID
                     * @param _gatewayId Gateway instance ID
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
                     * 获取Service name
                     * @return ServiceName Service name
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Service name
                     * @param _serviceName Service name
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取Access IP address or domain name
                     * @return Host Access IP address or domain name
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Access IP address or domain name
                     * @param _host Access IP address or domain name
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取Access Port
                     * @return Port Access Port
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Access Port
                     * @param _port Access Port
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取HEALTHY or UNHEALTHY
                     * @return Status HEALTHY or UNHEALTHY
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置HEALTHY or UNHEALTHY
                     * @param _status HEALTHY or UNHEALTHY
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Gateway instance ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * Service name
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * Access IP address or domain name
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Access Port
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * HEALTHY or UNHEALTHY
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYUPSTREAMNODESTATUSREQUEST_H_
