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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEAPMAGENTREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEAPMAGENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeApmAgent request structure.
                */
                class DescribeApmAgentRequest : public AbstractModel
                {
                public:
                    DescribeApmAgentRequest();
                    ~DescribeApmAgentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Business system id.
                     * @return InstanceId Business system id.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Business system id.
                     * @param _instanceId Business system id.
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
                     * 获取Access method: currently supports access and reporting via skywalking, ot, and ebpf methods. if not specified, ot is used by default.
                     * @return AgentType Access method: currently supports access and reporting via skywalking, ot, and ebpf methods. if not specified, ot is used by default.
                     * 
                     */
                    std::string GetAgentType() const;

                    /**
                     * 设置Access method: currently supports access and reporting via skywalking, ot, and ebpf methods. if not specified, ot is used by default.
                     * @param _agentType Access method: currently supports access and reporting via skywalking, ot, and ebpf methods. if not specified, ot is used by default.
                     * 
                     */
                    void SetAgentType(const std::string& _agentType);

                    /**
                     * 判断参数 AgentType 是否已赋值
                     * @return AgentType 是否已赋值
                     * 
                     */
                    bool AgentTypeHasBeenSet() const;

                    /**
                     * 获取Reporting environment: currently supports pl (private network reporting), public (public network), and inner (self-developed vpc) environment reporting. if not specified, the default is public.
                     * @return NetworkMode Reporting environment: currently supports pl (private network reporting), public (public network), and inner (self-developed vpc) environment reporting. if not specified, the default is public.
                     * 
                     */
                    std::string GetNetworkMode() const;

                    /**
                     * 设置Reporting environment: currently supports pl (private network reporting), public (public network), and inner (self-developed vpc) environment reporting. if not specified, the default is public.
                     * @param _networkMode Reporting environment: currently supports pl (private network reporting), public (public network), and inner (self-developed vpc) environment reporting. if not specified, the default is public.
                     * 
                     */
                    void SetNetworkMode(const std::string& _networkMode);

                    /**
                     * 判断参数 NetworkMode 是否已赋值
                     * @return NetworkMode 是否已赋值
                     * 
                     */
                    bool NetworkModeHasBeenSet() const;

                    /**
                     * 获取Language reporting is now supported for java, golang, php, python, dotnet, nodejs. if not specified, golang is used by default.
                     * @return LanguageEnvironment Language reporting is now supported for java, golang, php, python, dotnet, nodejs. if not specified, golang is used by default.
                     * 
                     */
                    std::string GetLanguageEnvironment() const;

                    /**
                     * 设置Language reporting is now supported for java, golang, php, python, dotnet, nodejs. if not specified, golang is used by default.
                     * @param _languageEnvironment Language reporting is now supported for java, golang, php, python, dotnet, nodejs. if not specified, golang is used by default.
                     * 
                     */
                    void SetLanguageEnvironment(const std::string& _languageEnvironment);

                    /**
                     * 判断参数 LanguageEnvironment 是否已赋值
                     * @return LanguageEnvironment 是否已赋值
                     * 
                     */
                    bool LanguageEnvironmentHasBeenSet() const;

                    /**
                     * 获取Reporting method, deprecated.
                     * @return ReportMethod Reporting method, deprecated.
                     * 
                     */
                    std::string GetReportMethod() const;

                    /**
                     * 设置Reporting method, deprecated.
                     * @param _reportMethod Reporting method, deprecated.
                     * 
                     */
                    void SetReportMethod(const std::string& _reportMethod);

                    /**
                     * 判断参数 ReportMethod 是否已赋值
                     * @return ReportMethod 是否已赋值
                     * 
                     */
                    bool ReportMethodHasBeenSet() const;

                private:

                    /**
                     * Business system id.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Access method: currently supports access and reporting via skywalking, ot, and ebpf methods. if not specified, ot is used by default.
                     */
                    std::string m_agentType;
                    bool m_agentTypeHasBeenSet;

                    /**
                     * Reporting environment: currently supports pl (private network reporting), public (public network), and inner (self-developed vpc) environment reporting. if not specified, the default is public.
                     */
                    std::string m_networkMode;
                    bool m_networkModeHasBeenSet;

                    /**
                     * Language reporting is now supported for java, golang, php, python, dotnet, nodejs. if not specified, golang is used by default.
                     */
                    std::string m_languageEnvironment;
                    bool m_languageEnvironmentHasBeenSet;

                    /**
                     * Reporting method, deprecated.
                     */
                    std::string m_reportMethod;
                    bool m_reportMethodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEAPMAGENTREQUEST_H_
