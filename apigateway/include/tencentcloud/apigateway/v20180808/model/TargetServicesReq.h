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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_TARGETSERVICESREQ_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_TARGETSERVICESREQ_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * TSF Serverless input parameters
                */
                class TargetServicesReq : public AbstractModel
                {
                public:
                    TargetServicesReq();
                    ~TargetServicesReq() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VM IP
                     * @return VmIp VM IP
                     */
                    std::string GetVmIp() const;

                    /**
                     * 设置VM IP
                     * @param VmIp VM IP
                     */
                    void SetVmIp(const std::string& _vmIp);

                    /**
                     * 判断参数 VmIp 是否已赋值
                     * @return VmIp 是否已赋值
                     */
                    bool VmIpHasBeenSet() const;

                    /**
                     * 获取VPC ID
                     * @return VpcId VPC ID
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
                     * @param VpcId VPC ID
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取VM Port
                     * @return VmPort VM Port
                     */
                    int64_t GetVmPort() const;

                    /**
                     * 设置VM Port
                     * @param VmPort VM Port
                     */
                    void SetVmPort(const int64_t& _vmPort);

                    /**
                     * 判断参数 VmPort 是否已赋值
                     * @return VmPort 是否已赋值
                     */
                    bool VmPortHasBeenSet() const;

                    /**
                     * 获取IP of the host where the CVM instance resides
                     * @return HostIp IP of the host where the CVM instance resides
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置IP of the host where the CVM instance resides
                     * @param HostIp IP of the host where the CVM instance resides
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取Docker IP
                     * @return DockerIp Docker IP
                     */
                    std::string GetDockerIp() const;

                    /**
                     * 设置Docker IP
                     * @param DockerIp Docker IP
                     */
                    void SetDockerIp(const std::string& _dockerIp);

                    /**
                     * 判断参数 DockerIp 是否已赋值
                     * @return DockerIp 是否已赋值
                     */
                    bool DockerIpHasBeenSet() const;

                private:

                    /**
                     * VM IP
                     */
                    std::string m_vmIp;
                    bool m_vmIpHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VM Port
                     */
                    int64_t m_vmPort;
                    bool m_vmPortHasBeenSet;

                    /**
                     * IP of the host where the CVM instance resides
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * Docker IP
                     */
                    std::string m_dockerIp;
                    bool m_dockerIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_TARGETSERVICESREQ_H_
