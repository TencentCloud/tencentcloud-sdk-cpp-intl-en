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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQCLUSTERACCESSINFO_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQCLUSTERACCESSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/PrometheusEndpointInfo.h>
#include <tencentcloud/tdmq/v20200217/model/VpcEndpointInfo.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * 
                */
                class RabbitMQClusterAccessInfo : public AbstractModel
                {
                public:
                    RabbitMQClusterAccessInfo();
                    ~RabbitMQClusterAccessInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return PublicAccessEndpoint 
                     * 
                     */
                    std::string GetPublicAccessEndpoint() const;

                    /**
                     * 设置
                     * @param _publicAccessEndpoint 
                     * 
                     */
                    void SetPublicAccessEndpoint(const std::string& _publicAccessEndpoint);

                    /**
                     * 判断参数 PublicAccessEndpoint 是否已赋值
                     * @return PublicAccessEndpoint 是否已赋值
                     * 
                     */
                    bool PublicAccessEndpointHasBeenSet() const;

                    /**
                     * 获取
                     * @return WebConsoleEndpoint 
                     * 
                     */
                    std::string GetWebConsoleEndpoint() const;

                    /**
                     * 设置
                     * @param _webConsoleEndpoint 
                     * 
                     */
                    void SetWebConsoleEndpoint(const std::string& _webConsoleEndpoint);

                    /**
                     * 判断参数 WebConsoleEndpoint 是否已赋值
                     * @return WebConsoleEndpoint 是否已赋值
                     * 
                     */
                    bool WebConsoleEndpointHasBeenSet() const;

                    /**
                     * 获取
                     * @return WebConsoleUsername 
                     * 
                     */
                    std::string GetWebConsoleUsername() const;

                    /**
                     * 设置
                     * @param _webConsoleUsername 
                     * 
                     */
                    void SetWebConsoleUsername(const std::string& _webConsoleUsername);

                    /**
                     * 判断参数 WebConsoleUsername 是否已赋值
                     * @return WebConsoleUsername 是否已赋值
                     * 
                     */
                    bool WebConsoleUsernameHasBeenSet() const;

                    /**
                     * 获取
                     * @return WebConsolePassword 
                     * 
                     */
                    std::string GetWebConsolePassword() const;

                    /**
                     * 设置
                     * @param _webConsolePassword 
                     * 
                     */
                    void SetWebConsolePassword(const std::string& _webConsolePassword);

                    /**
                     * 判断参数 WebConsolePassword 是否已赋值
                     * @return WebConsolePassword 是否已赋值
                     * 
                     */
                    bool WebConsolePasswordHasBeenSet() const;

                    /**
                     * 获取
                     * @return PublicAccessEndpointStatus 
                     * 
                     */
                    bool GetPublicAccessEndpointStatus() const;

                    /**
                     * 设置
                     * @param _publicAccessEndpointStatus 
                     * 
                     */
                    void SetPublicAccessEndpointStatus(const bool& _publicAccessEndpointStatus);

                    /**
                     * 判断参数 PublicAccessEndpointStatus 是否已赋值
                     * @return PublicAccessEndpointStatus 是否已赋值
                     * 
                     */
                    bool PublicAccessEndpointStatusHasBeenSet() const;

                    /**
                     * 获取
                     * @return PublicControlConsoleSwitchStatus 
                     * 
                     */
                    bool GetPublicControlConsoleSwitchStatus() const;

                    /**
                     * 设置
                     * @param _publicControlConsoleSwitchStatus 
                     * 
                     */
                    void SetPublicControlConsoleSwitchStatus(const bool& _publicControlConsoleSwitchStatus);

                    /**
                     * 判断参数 PublicControlConsoleSwitchStatus 是否已赋值
                     * @return PublicControlConsoleSwitchStatus 是否已赋值
                     * 
                     */
                    bool PublicControlConsoleSwitchStatusHasBeenSet() const;

                    /**
                     * 获取
                     * @return VpcControlConsoleSwitchStatus 
                     * 
                     */
                    bool GetVpcControlConsoleSwitchStatus() const;

                    /**
                     * 设置
                     * @param _vpcControlConsoleSwitchStatus 
                     * 
                     */
                    void SetVpcControlConsoleSwitchStatus(const bool& _vpcControlConsoleSwitchStatus);

                    /**
                     * 判断参数 VpcControlConsoleSwitchStatus 是否已赋值
                     * @return VpcControlConsoleSwitchStatus 是否已赋值
                     * 
                     */
                    bool VpcControlConsoleSwitchStatusHasBeenSet() const;

                    /**
                     * 获取
                     * @return VpcWebConsoleEndpoint 
                     * 
                     */
                    std::string GetVpcWebConsoleEndpoint() const;

                    /**
                     * 设置
                     * @param _vpcWebConsoleEndpoint 
                     * 
                     */
                    void SetVpcWebConsoleEndpoint(const std::string& _vpcWebConsoleEndpoint);

                    /**
                     * 判断参数 VpcWebConsoleEndpoint 是否已赋值
                     * @return VpcWebConsoleEndpoint 是否已赋值
                     * 
                     */
                    bool VpcWebConsoleEndpointHasBeenSet() const;

                    /**
                     * 获取Status of the public network access point in the console. Valid values: OFF, ON, CREATING, and DELETING.
                     * @return PublicWebConsoleSwitchStatus Status of the public network access point in the console. Valid values: OFF, ON, CREATING, and DELETING.
                     * 
                     */
                    std::string GetPublicWebConsoleSwitchStatus() const;

                    /**
                     * 设置Status of the public network access point in the console. Valid values: OFF, ON, CREATING, and DELETING.
                     * @param _publicWebConsoleSwitchStatus Status of the public network access point in the console. Valid values: OFF, ON, CREATING, and DELETING.
                     * 
                     */
                    void SetPublicWebConsoleSwitchStatus(const std::string& _publicWebConsoleSwitchStatus);

                    /**
                     * 判断参数 PublicWebConsoleSwitchStatus 是否已赋值
                     * @return PublicWebConsoleSwitchStatus 是否已赋值
                     * 
                     */
                    bool PublicWebConsoleSwitchStatusHasBeenSet() const;

                    /**
                     * 获取Vpc console switch state. example value.
OFF/ON/CREATING/DELETING
                     * @return VpcWebConsoleSwitchStatus Vpc console switch state. example value.
OFF/ON/CREATING/DELETING
                     * 
                     */
                    std::string GetVpcWebConsoleSwitchStatus() const;

                    /**
                     * 设置Vpc console switch state. example value.
OFF/ON/CREATING/DELETING
                     * @param _vpcWebConsoleSwitchStatus Vpc console switch state. example value.
OFF/ON/CREATING/DELETING
                     * 
                     */
                    void SetVpcWebConsoleSwitchStatus(const std::string& _vpcWebConsoleSwitchStatus);

                    /**
                     * 判断参数 VpcWebConsoleSwitchStatus 是否已赋值
                     * @return VpcWebConsoleSwitchStatus 是否已赋值
                     * 
                     */
                    bool VpcWebConsoleSwitchStatusHasBeenSet() const;

                    /**
                     * 获取Status of the public network access point in the console. Valid values: OFF, ON, CREATING, and DELETING.
                     * @return PublicDataStreamStatus Status of the public network access point in the console. Valid values: OFF, ON, CREATING, and DELETING.
                     * 
                     */
                    std::string GetPublicDataStreamStatus() const;

                    /**
                     * 设置Status of the public network access point in the console. Valid values: OFF, ON, CREATING, and DELETING.
                     * @param _publicDataStreamStatus Status of the public network access point in the console. Valid values: OFF, ON, CREATING, and DELETING.
                     * 
                     */
                    void SetPublicDataStreamStatus(const std::string& _publicDataStreamStatus);

                    /**
                     * 判断参数 PublicDataStreamStatus 是否已赋值
                     * @return PublicDataStreamStatus 是否已赋值
                     * 
                     */
                    bool PublicDataStreamStatusHasBeenSet() const;

                    /**
                     * 获取Prometheus information.
                     * @return PrometheusEndpointInfo Prometheus information.
                     * 
                     */
                    PrometheusEndpointInfo GetPrometheusEndpointInfo() const;

                    /**
                     * 设置Prometheus information.
                     * @param _prometheusEndpointInfo Prometheus information.
                     * 
                     */
                    void SetPrometheusEndpointInfo(const PrometheusEndpointInfo& _prometheusEndpointInfo);

                    /**
                     * 判断参数 PrometheusEndpointInfo 是否已赋值
                     * @return PrometheusEndpointInfo 是否已赋值
                     * 
                     */
                    bool PrometheusEndpointInfoHasBeenSet() const;

                    /**
                     * 获取Public domain name access point.
                     * @return WebConsoleDomainEndpoint Public domain name access point.
                     * 
                     */
                    std::string GetWebConsoleDomainEndpoint() const;

                    /**
                     * 设置Public domain name access point.
                     * @param _webConsoleDomainEndpoint Public domain name access point.
                     * 
                     */
                    void SetWebConsoleDomainEndpoint(const std::string& _webConsoleDomainEndpoint);

                    /**
                     * 判断参数 WebConsoleDomainEndpoint 是否已赋值
                     * @return WebConsoleDomainEndpoint 是否已赋值
                     * 
                     */
                    bool WebConsoleDomainEndpointHasBeenSet() const;

                    /**
                     * 获取VPC information used by the control plane.
                     * @return ControlPlaneEndpointInfo VPC information used by the control plane.
                     * 
                     */
                    VpcEndpointInfo GetControlPlaneEndpointInfo() const;

                    /**
                     * 设置VPC information used by the control plane.
                     * @param _controlPlaneEndpointInfo VPC information used by the control plane.
                     * 
                     */
                    void SetControlPlaneEndpointInfo(const VpcEndpointInfo& _controlPlaneEndpointInfo);

                    /**
                     * 判断参数 ControlPlaneEndpointInfo 是否已赋值
                     * @return ControlPlaneEndpointInfo 是否已赋值
                     * 
                     */
                    bool ControlPlaneEndpointInfoHasBeenSet() const;

                    /**
                     * 获取Encrypted TLS data stream public network access point.
                     * @return PublicTlsAccessEndpoint Encrypted TLS data stream public network access point.
                     * 
                     */
                    std::string GetPublicTlsAccessEndpoint() const;

                    /**
                     * 设置Encrypted TLS data stream public network access point.
                     * @param _publicTlsAccessEndpoint Encrypted TLS data stream public network access point.
                     * 
                     */
                    void SetPublicTlsAccessEndpoint(const std::string& _publicTlsAccessEndpoint);

                    /**
                     * 判断参数 PublicTlsAccessEndpoint 是否已赋值
                     * @return PublicTlsAccessEndpoint 是否已赋值
                     * 
                     */
                    bool PublicTlsAccessEndpointHasBeenSet() const;

                    /**
                     * 获取Specifies whether to reuse the public IP address.
                     * @return PublicIpReused Specifies whether to reuse the public IP address.
                     * 
                     */
                    bool GetPublicIpReused() const;

                    /**
                     * 设置Specifies whether to reuse the public IP address.
                     * @param _publicIpReused Specifies whether to reuse the public IP address.
                     * 
                     */
                    void SetPublicIpReused(const bool& _publicIpReused);

                    /**
                     * 判断参数 PublicIpReused 是否已赋值
                     * @return PublicIpReused 是否已赋值
                     * 
                     */
                    bool PublicIpReusedHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_publicAccessEndpoint;
                    bool m_publicAccessEndpointHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_webConsoleEndpoint;
                    bool m_webConsoleEndpointHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_webConsoleUsername;
                    bool m_webConsoleUsernameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_webConsolePassword;
                    bool m_webConsolePasswordHasBeenSet;

                    /**
                     * 
                     */
                    bool m_publicAccessEndpointStatus;
                    bool m_publicAccessEndpointStatusHasBeenSet;

                    /**
                     * 
                     */
                    bool m_publicControlConsoleSwitchStatus;
                    bool m_publicControlConsoleSwitchStatusHasBeenSet;

                    /**
                     * 
                     */
                    bool m_vpcControlConsoleSwitchStatus;
                    bool m_vpcControlConsoleSwitchStatusHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_vpcWebConsoleEndpoint;
                    bool m_vpcWebConsoleEndpointHasBeenSet;

                    /**
                     * Status of the public network access point in the console. Valid values: OFF, ON, CREATING, and DELETING.
                     */
                    std::string m_publicWebConsoleSwitchStatus;
                    bool m_publicWebConsoleSwitchStatusHasBeenSet;

                    /**
                     * Vpc console switch state. example value.
OFF/ON/CREATING/DELETING
                     */
                    std::string m_vpcWebConsoleSwitchStatus;
                    bool m_vpcWebConsoleSwitchStatusHasBeenSet;

                    /**
                     * Status of the public network access point in the console. Valid values: OFF, ON, CREATING, and DELETING.
                     */
                    std::string m_publicDataStreamStatus;
                    bool m_publicDataStreamStatusHasBeenSet;

                    /**
                     * Prometheus information.
                     */
                    PrometheusEndpointInfo m_prometheusEndpointInfo;
                    bool m_prometheusEndpointInfoHasBeenSet;

                    /**
                     * Public domain name access point.
                     */
                    std::string m_webConsoleDomainEndpoint;
                    bool m_webConsoleDomainEndpointHasBeenSet;

                    /**
                     * VPC information used by the control plane.
                     */
                    VpcEndpointInfo m_controlPlaneEndpointInfo;
                    bool m_controlPlaneEndpointInfoHasBeenSet;

                    /**
                     * Encrypted TLS data stream public network access point.
                     */
                    std::string m_publicTlsAccessEndpoint;
                    bool m_publicTlsAccessEndpointHasBeenSet;

                    /**
                     * Specifies whether to reuse the public IP address.
                     */
                    bool m_publicIpReused;
                    bool m_publicIpReusedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQCLUSTERACCESSINFO_H_
