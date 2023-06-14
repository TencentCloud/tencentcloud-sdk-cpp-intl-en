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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_HEALTHCHECKCONFIG_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_HEALTHCHECKCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * Health check configuration
                */
                class HealthCheckConfig : public AbstractModel
                {
                public:
                    HealthCheckConfig();
                    ~HealthCheckConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Health check type. Valid values: `HttpGet`, `TcpSocket`, `Exec`
                     * @return Type Health check type. Valid values: `HttpGet`, `TcpSocket`, `Exec`
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Health check type. Valid values: `HttpGet`, `TcpSocket`, `Exec`
                     * @param _type Health check type. Valid values: `HttpGet`, `TcpSocket`, `Exec`
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取The protocol type. It’s only valid when the health check type is `HttpGet`.
                     * @return Protocol The protocol type. It’s only valid when the health check type is `HttpGet`.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置The protocol type. It’s only valid when the health check type is `HttpGet`.
                     * @param _protocol The protocol type. It’s only valid when the health check type is `HttpGet`.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取The request path. It’s only valid when the health check type is `HttpGet`.
                     * @return Path The request path. It’s only valid when the health check type is `HttpGet`.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置The request path. It’s only valid when the health check type is `HttpGet`.
                     * @param _path The request path. It’s only valid when the health check type is `HttpGet`.
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取The script to be executed. It’s only valid when the health check type is `Exec`.
                     * @return Exec The script to be executed. It’s only valid when the health check type is `Exec`.
                     * 
                     */
                    std::string GetExec() const;

                    /**
                     * 设置The script to be executed. It’s only valid when the health check type is `Exec`.
                     * @param _exec The script to be executed. It’s only valid when the health check type is `Exec`.
                     * 
                     */
                    void SetExec(const std::string& _exec);

                    /**
                     * 判断参数 Exec 是否已赋值
                     * @return Exec 是否已赋值
                     * 
                     */
                    bool ExecHasBeenSet() const;

                    /**
                     * 获取The request port. It’s only valid when the health check type is `HttpGet` or `TcpSocket `.
                     * @return Port The request port. It’s only valid when the health check type is `HttpGet` or `TcpSocket `.
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置The request port. It’s only valid when the health check type is `HttpGet` or `TcpSocket `.
                     * @param _port The request port. It’s only valid when the health check type is `HttpGet` or `TcpSocket `.
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
                     * 获取The initial delay for health check in seconds. Default: `0`
                     * @return InitialDelaySeconds The initial delay for health check in seconds. Default: `0`
                     * 
                     */
                    int64_t GetInitialDelaySeconds() const;

                    /**
                     * 设置The initial delay for health check in seconds. Default: `0`
                     * @param _initialDelaySeconds The initial delay for health check in seconds. Default: `0`
                     * 
                     */
                    void SetInitialDelaySeconds(const int64_t& _initialDelaySeconds);

                    /**
                     * 判断参数 InitialDelaySeconds 是否已赋值
                     * @return InitialDelaySeconds 是否已赋值
                     * 
                     */
                    bool InitialDelaySecondsHasBeenSet() const;

                    /**
                     * 获取Timeout period in seconds. Default: `1`
                     * @return TimeoutSeconds Timeout period in seconds. Default: `1`
                     * 
                     */
                    int64_t GetTimeoutSeconds() const;

                    /**
                     * 设置Timeout period in seconds. Default: `1`
                     * @param _timeoutSeconds Timeout period in seconds. Default: `1`
                     * 
                     */
                    void SetTimeoutSeconds(const int64_t& _timeoutSeconds);

                    /**
                     * 判断参数 TimeoutSeconds 是否已赋值
                     * @return TimeoutSeconds 是否已赋值
                     * 
                     */
                    bool TimeoutSecondsHasBeenSet() const;

                    /**
                     * 获取Interval period in seconds. Default: `10`
                     * @return PeriodSeconds Interval period in seconds. Default: `10`
                     * 
                     */
                    int64_t GetPeriodSeconds() const;

                    /**
                     * 设置Interval period in seconds. Default: `10`
                     * @param _periodSeconds Interval period in seconds. Default: `10`
                     * 
                     */
                    void SetPeriodSeconds(const int64_t& _periodSeconds);

                    /**
                     * 判断参数 PeriodSeconds 是否已赋值
                     * @return PeriodSeconds 是否已赋值
                     * 
                     */
                    bool PeriodSecondsHasBeenSet() const;

                private:

                    /**
                     * Health check type. Valid values: `HttpGet`, `TcpSocket`, `Exec`
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The protocol type. It’s only valid when the health check type is `HttpGet`.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * The request path. It’s only valid when the health check type is `HttpGet`.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * The script to be executed. It’s only valid when the health check type is `Exec`.
                     */
                    std::string m_exec;
                    bool m_execHasBeenSet;

                    /**
                     * The request port. It’s only valid when the health check type is `HttpGet` or `TcpSocket `.
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * The initial delay for health check in seconds. Default: `0`
                     */
                    int64_t m_initialDelaySeconds;
                    bool m_initialDelaySecondsHasBeenSet;

                    /**
                     * Timeout period in seconds. Default: `1`
                     */
                    int64_t m_timeoutSeconds;
                    bool m_timeoutSecondsHasBeenSet;

                    /**
                     * Interval period in seconds. Default: `10`
                     */
                    int64_t m_periodSeconds;
                    bool m_periodSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_HEALTHCHECKCONFIG_H_
