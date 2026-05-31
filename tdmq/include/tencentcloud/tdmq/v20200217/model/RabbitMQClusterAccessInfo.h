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
                     * 获取<p>Cluster public network access address</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PublicAccessEndpoint <p>Cluster public network access address</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPublicAccessEndpoint() const;

                    /**
                     * 设置<p>Cluster public network access address</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _publicAccessEndpoint <p>Cluster public network access address</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Public network access URL of the cluster Web console</p>
                     * @return WebConsoleEndpoint <p>Public network access URL of the cluster Web console</p>
                     * 
                     */
                    std::string GetWebConsoleEndpoint() const;

                    /**
                     * 设置<p>Public network access URL of the cluster Web console</p>
                     * @param _webConsoleEndpoint <p>Public network access URL of the cluster Web console</p>
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
                     * 获取<p>Cluster Web console login username</p>
                     * @return WebConsoleUsername <p>Cluster Web console login username</p>
                     * 
                     */
                    std::string GetWebConsoleUsername() const;

                    /**
                     * 设置<p>Cluster Web console login username</p>
                     * @param _webConsoleUsername <p>Cluster Web console login username</p>
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
                     * 获取<p>Cluster Web console login password</p>
                     * @return WebConsolePassword <p>Cluster Web console login password</p>
                     * 
                     */
                    std::string GetWebConsolePassword() const;

                    /**
                     * 设置<p>Cluster Web console login password</p>
                     * @param _webConsolePassword <p>Cluster Web console login password</p>
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
                     * 获取<p>Abandoned</p>
                     * @return PublicAccessEndpointStatus <p>Abandoned</p>
                     * 
                     */
                    bool GetPublicAccessEndpointStatus() const;

                    /**
                     * 设置<p>Abandoned</p>
                     * @param _publicAccessEndpointStatus <p>Abandoned</p>
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
                     * 获取<p>Deprecated</p>
                     * @return PublicControlConsoleSwitchStatus <p>Deprecated</p>
                     * 
                     */
                    bool GetPublicControlConsoleSwitchStatus() const;

                    /**
                     * 设置<p>Deprecated</p>
                     * @param _publicControlConsoleSwitchStatus <p>Deprecated</p>
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
                     * 获取<p>Abandoned</p>
                     * @return VpcControlConsoleSwitchStatus <p>Abandoned</p>
                     * 
                     */
                    bool GetVpcControlConsoleSwitchStatus() const;

                    /**
                     * 设置<p>Abandoned</p>
                     * @param _vpcControlConsoleSwitchStatus <p>Abandoned</p>
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
                     * 获取<p>VPC access URL of the Web console</p>
                     * @return VpcWebConsoleEndpoint <p>VPC access URL of the Web console</p>
                     * 
                     */
                    std::string GetVpcWebConsoleEndpoint() const;

                    /**
                     * 设置<p>VPC access URL of the Web console</p>
                     * @param _vpcWebConsoleEndpoint <p>VPC access URL of the Web console</p>
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
                     * 获取<p>Status of the public network access switch in the Web console</p><p>Enumeration value:</p><ul><li>OFF: Closed</li><li>ON: ON</li><li>CREATING: CREATING</li><li>DELETING: DELETING</li><li>CREATE_FAILURE: Creation failed</li><li>DELETE_FAILURE: Deletion failed</li></ul>
                     * @return PublicWebConsoleSwitchStatus <p>Status of the public network access switch in the Web console</p><p>Enumeration value:</p><ul><li>OFF: Closed</li><li>ON: ON</li><li>CREATING: CREATING</li><li>DELETING: DELETING</li><li>CREATE_FAILURE: Creation failed</li><li>DELETE_FAILURE: Deletion failed</li></ul>
                     * 
                     */
                    std::string GetPublicWebConsoleSwitchStatus() const;

                    /**
                     * 设置<p>Status of the public network access switch in the Web console</p><p>Enumeration value:</p><ul><li>OFF: Closed</li><li>ON: ON</li><li>CREATING: CREATING</li><li>DELETING: DELETING</li><li>CREATE_FAILURE: Creation failed</li><li>DELETE_FAILURE: Deletion failed</li></ul>
                     * @param _publicWebConsoleSwitchStatus <p>Status of the public network access switch in the Web console</p><p>Enumeration value:</p><ul><li>OFF: Closed</li><li>ON: ON</li><li>CREATING: CREATING</li><li>DELETING: DELETING</li><li>CREATE_FAILURE: Creation failed</li><li>DELETE_FAILURE: Deletion failed</li></ul>
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
                     * 获取<p>Web console VPC access switch status</p><p>Enumeration values:</p><ul><li>OFF: Closed</li><li>ON: Enabled</li><li>CREATING: Creating</li><li>DELETING: Deleting</li><li>CREATE_FAILURE: Creation failed</li><li>DELETE_FAILURE: Deletion failed</li></ul>
                     * @return VpcWebConsoleSwitchStatus <p>Web console VPC access switch status</p><p>Enumeration values:</p><ul><li>OFF: Closed</li><li>ON: Enabled</li><li>CREATING: Creating</li><li>DELETING: Deleting</li><li>CREATE_FAILURE: Creation failed</li><li>DELETE_FAILURE: Deletion failed</li></ul>
                     * 
                     */
                    std::string GetVpcWebConsoleSwitchStatus() const;

                    /**
                     * 设置<p>Web console VPC access switch status</p><p>Enumeration values:</p><ul><li>OFF: Closed</li><li>ON: Enabled</li><li>CREATING: Creating</li><li>DELETING: Deleting</li><li>CREATE_FAILURE: Creation failed</li><li>DELETE_FAILURE: Deletion failed</li></ul>
                     * @param _vpcWebConsoleSwitchStatus <p>Web console VPC access switch status</p><p>Enumeration values:</p><ul><li>OFF: Closed</li><li>ON: Enabled</li><li>CREATING: Creating</li><li>DELETING: Deleting</li><li>CREATE_FAILURE: Creation failed</li><li>DELETE_FAILURE: Deletion failed</li></ul>
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
                     * 获取<p>Public network access point switch state</p><p>Enumeration value:</p><ul><li>OFF: Closed</li><li>ON: Enabled</li><li>CREATING: Creating</li><li>DELETING: Deleting</li><li>CREATE_FAILURE: Creation failure</li><li>DELETE_FAILURE: Deletion failure</li></ul>
                     * @return PublicDataStreamStatus <p>Public network access point switch state</p><p>Enumeration value:</p><ul><li>OFF: Closed</li><li>ON: Enabled</li><li>CREATING: Creating</li><li>DELETING: Deleting</li><li>CREATE_FAILURE: Creation failure</li><li>DELETE_FAILURE: Deletion failure</li></ul>
                     * 
                     */
                    std::string GetPublicDataStreamStatus() const;

                    /**
                     * 设置<p>Public network access point switch state</p><p>Enumeration value:</p><ul><li>OFF: Closed</li><li>ON: Enabled</li><li>CREATING: Creating</li><li>DELETING: Deleting</li><li>CREATE_FAILURE: Creation failure</li><li>DELETE_FAILURE: Deletion failure</li></ul>
                     * @param _publicDataStreamStatus <p>Public network access point switch state</p><p>Enumeration value:</p><ul><li>OFF: Closed</li><li>ON: Enabled</li><li>CREATING: Creating</li><li>DELETING: Deleting</li><li>CREATE_FAILURE: Creation failure</li><li>DELETE_FAILURE: Deletion failure</li></ul>
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
                     * 获取<p>Prometheus info</p>
                     * @return PrometheusEndpointInfo <p>Prometheus info</p>
                     * 
                     */
                    PrometheusEndpointInfo GetPrometheusEndpointInfo() const;

                    /**
                     * 设置<p>Prometheus info</p>
                     * @param _prometheusEndpointInfo <p>Prometheus info</p>
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
                     * 获取<p>public domain name access point</p>
                     * @return WebConsoleDomainEndpoint <p>public domain name access point</p>
                     * 
                     */
                    std::string GetWebConsoleDomainEndpoint() const;

                    /**
                     * 设置<p>public domain name access point</p>
                     * @param _webConsoleDomainEndpoint <p>public domain name access point</p>
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
                     * 获取<p>VPC information used by the control plane</p>
                     * @return ControlPlaneEndpointInfo <p>VPC information used by the control plane</p>
                     * 
                     */
                    VpcEndpointInfo GetControlPlaneEndpointInfo() const;

                    /**
                     * 设置<p>VPC information used by the control plane</p>
                     * @param _controlPlaneEndpointInfo <p>VPC information used by the control plane</p>
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
                     * 获取<p>TLS encrypted data stream public network access point</p>
                     * @return PublicTlsAccessEndpoint <p>TLS encrypted data stream public network access point</p>
                     * 
                     */
                    std::string GetPublicTlsAccessEndpoint() const;

                    /**
                     * 设置<p>TLS encrypted data stream public network access point</p>
                     * @param _publicTlsAccessEndpoint <p>TLS encrypted data stream public network access point</p>
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
                     * 获取<p>Whether to reuse the public IP address</p>
                     * @return PublicIpReused <p>Whether to reuse the public IP address</p>
                     * 
                     */
                    bool GetPublicIpReused() const;

                    /**
                     * 设置<p>Whether to reuse the public IP address</p>
                     * @param _publicIpReused <p>Whether to reuse the public IP address</p>
                     * 
                     */
                    void SetPublicIpReused(const bool& _publicIpReused);

                    /**
                     * 判断参数 PublicIpReused 是否已赋值
                     * @return PublicIpReused 是否已赋值
                     * 
                     */
                    bool PublicIpReusedHasBeenSet() const;

                    /**
                     * 获取<p>Error information of public network access operations for the Web console</p>
                     * @return PublicWebConsoleErrorMessage <p>Error information of public network access operations for the Web console</p>
                     * 
                     */
                    std::string GetPublicWebConsoleErrorMessage() const;

                    /**
                     * 设置<p>Error information of public network access operations for the Web console</p>
                     * @param _publicWebConsoleErrorMessage <p>Error information of public network access operations for the Web console</p>
                     * 
                     */
                    void SetPublicWebConsoleErrorMessage(const std::string& _publicWebConsoleErrorMessage);

                    /**
                     * 判断参数 PublicWebConsoleErrorMessage 是否已赋值
                     * @return PublicWebConsoleErrorMessage 是否已赋值
                     * 
                     */
                    bool PublicWebConsoleErrorMessageHasBeenSet() const;

                    /**
                     * 获取<p>Error information of VPC access operations in the Web console</p>
                     * @return VpcWebConsoleErrorMessage <p>Error information of VPC access operations in the Web console</p>
                     * 
                     */
                    std::string GetVpcWebConsoleErrorMessage() const;

                    /**
                     * 设置<p>Error information of VPC access operations in the Web console</p>
                     * @param _vpcWebConsoleErrorMessage <p>Error information of VPC access operations in the Web console</p>
                     * 
                     */
                    void SetVpcWebConsoleErrorMessage(const std::string& _vpcWebConsoleErrorMessage);

                    /**
                     * 判断参数 VpcWebConsoleErrorMessage 是否已赋值
                     * @return VpcWebConsoleErrorMessage 是否已赋值
                     * 
                     */
                    bool VpcWebConsoleErrorMessageHasBeenSet() const;

                    /**
                     * 获取<p>Error information of public network access point operations</p>
                     * @return PublicDataStreamErrorMessage <p>Error information of public network access point operations</p>
                     * 
                     */
                    std::string GetPublicDataStreamErrorMessage() const;

                    /**
                     * 设置<p>Error information of public network access point operations</p>
                     * @param _publicDataStreamErrorMessage <p>Error information of public network access point operations</p>
                     * 
                     */
                    void SetPublicDataStreamErrorMessage(const std::string& _publicDataStreamErrorMessage);

                    /**
                     * 判断参数 PublicDataStreamErrorMessage 是否已赋值
                     * @return PublicDataStreamErrorMessage 是否已赋值
                     * 
                     */
                    bool PublicDataStreamErrorMessageHasBeenSet() const;

                    /**
                     * 获取<p>Public network Stream access point</p>
                     * @return PublicStreamAccessEndpoint <p>Public network Stream access point</p>
                     * 
                     */
                    std::string GetPublicStreamAccessEndpoint() const;

                    /**
                     * 设置<p>Public network Stream access point</p>
                     * @param _publicStreamAccessEndpoint <p>Public network Stream access point</p>
                     * 
                     */
                    void SetPublicStreamAccessEndpoint(const std::string& _publicStreamAccessEndpoint);

                    /**
                     * 判断参数 PublicStreamAccessEndpoint 是否已赋值
                     * @return PublicStreamAccessEndpoint 是否已赋值
                     * 
                     */
                    bool PublicStreamAccessEndpointHasBeenSet() const;

                private:

                    /**
                     * <p>Cluster public network access address</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_publicAccessEndpoint;
                    bool m_publicAccessEndpointHasBeenSet;

                    /**
                     * <p>Public network access URL of the cluster Web console</p>
                     */
                    std::string m_webConsoleEndpoint;
                    bool m_webConsoleEndpointHasBeenSet;

                    /**
                     * <p>Cluster Web console login username</p>
                     */
                    std::string m_webConsoleUsername;
                    bool m_webConsoleUsernameHasBeenSet;

                    /**
                     * <p>Cluster Web console login password</p>
                     */
                    std::string m_webConsolePassword;
                    bool m_webConsolePasswordHasBeenSet;

                    /**
                     * <p>Abandoned</p>
                     */
                    bool m_publicAccessEndpointStatus;
                    bool m_publicAccessEndpointStatusHasBeenSet;

                    /**
                     * <p>Deprecated</p>
                     */
                    bool m_publicControlConsoleSwitchStatus;
                    bool m_publicControlConsoleSwitchStatusHasBeenSet;

                    /**
                     * <p>Abandoned</p>
                     */
                    bool m_vpcControlConsoleSwitchStatus;
                    bool m_vpcControlConsoleSwitchStatusHasBeenSet;

                    /**
                     * <p>VPC access URL of the Web console</p>
                     */
                    std::string m_vpcWebConsoleEndpoint;
                    bool m_vpcWebConsoleEndpointHasBeenSet;

                    /**
                     * <p>Status of the public network access switch in the Web console</p><p>Enumeration value:</p><ul><li>OFF: Closed</li><li>ON: ON</li><li>CREATING: CREATING</li><li>DELETING: DELETING</li><li>CREATE_FAILURE: Creation failed</li><li>DELETE_FAILURE: Deletion failed</li></ul>
                     */
                    std::string m_publicWebConsoleSwitchStatus;
                    bool m_publicWebConsoleSwitchStatusHasBeenSet;

                    /**
                     * <p>Web console VPC access switch status</p><p>Enumeration values:</p><ul><li>OFF: Closed</li><li>ON: Enabled</li><li>CREATING: Creating</li><li>DELETING: Deleting</li><li>CREATE_FAILURE: Creation failed</li><li>DELETE_FAILURE: Deletion failed</li></ul>
                     */
                    std::string m_vpcWebConsoleSwitchStatus;
                    bool m_vpcWebConsoleSwitchStatusHasBeenSet;

                    /**
                     * <p>Public network access point switch state</p><p>Enumeration value:</p><ul><li>OFF: Closed</li><li>ON: Enabled</li><li>CREATING: Creating</li><li>DELETING: Deleting</li><li>CREATE_FAILURE: Creation failure</li><li>DELETE_FAILURE: Deletion failure</li></ul>
                     */
                    std::string m_publicDataStreamStatus;
                    bool m_publicDataStreamStatusHasBeenSet;

                    /**
                     * <p>Prometheus info</p>
                     */
                    PrometheusEndpointInfo m_prometheusEndpointInfo;
                    bool m_prometheusEndpointInfoHasBeenSet;

                    /**
                     * <p>public domain name access point</p>
                     */
                    std::string m_webConsoleDomainEndpoint;
                    bool m_webConsoleDomainEndpointHasBeenSet;

                    /**
                     * <p>VPC information used by the control plane</p>
                     */
                    VpcEndpointInfo m_controlPlaneEndpointInfo;
                    bool m_controlPlaneEndpointInfoHasBeenSet;

                    /**
                     * <p>TLS encrypted data stream public network access point</p>
                     */
                    std::string m_publicTlsAccessEndpoint;
                    bool m_publicTlsAccessEndpointHasBeenSet;

                    /**
                     * <p>Whether to reuse the public IP address</p>
                     */
                    bool m_publicIpReused;
                    bool m_publicIpReusedHasBeenSet;

                    /**
                     * <p>Error information of public network access operations for the Web console</p>
                     */
                    std::string m_publicWebConsoleErrorMessage;
                    bool m_publicWebConsoleErrorMessageHasBeenSet;

                    /**
                     * <p>Error information of VPC access operations in the Web console</p>
                     */
                    std::string m_vpcWebConsoleErrorMessage;
                    bool m_vpcWebConsoleErrorMessageHasBeenSet;

                    /**
                     * <p>Error information of public network access point operations</p>
                     */
                    std::string m_publicDataStreamErrorMessage;
                    bool m_publicDataStreamErrorMessageHasBeenSet;

                    /**
                     * <p>Public network Stream access point</p>
                     */
                    std::string m_publicStreamAccessEndpoint;
                    bool m_publicStreamAccessEndpointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQCLUSTERACCESSINFO_H_
