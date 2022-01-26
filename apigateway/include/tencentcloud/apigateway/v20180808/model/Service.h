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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_SERVICE_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_SERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/Tag.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * Service list display
                */
                class Service : public AbstractModel
                {
                public:
                    Service();
                    ~Service() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Port for HTTPS access over private network.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return InnerHttpsPort Port for HTTPS access over private network.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetInnerHttpsPort() const;

                    /**
                     * 设置Port for HTTPS access over private network.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param InnerHttpsPort Port for HTTPS access over private network.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInnerHttpsPort(const int64_t& _innerHttpsPort);

                    /**
                     * 判断参数 InnerHttpsPort 是否已赋值
                     * @return InnerHttpsPort 是否已赋值
                     */
                    bool InnerHttpsPortHasBeenSet() const;

                    /**
                     * 获取Custom service description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ServiceDesc Custom service description.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetServiceDesc() const;

                    /**
                     * 设置Custom service description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ServiceDesc Custom service description.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetServiceDesc(const std::string& _serviceDesc);

                    /**
                     * 判断参数 ServiceDesc 是否已赋值
                     * @return ServiceDesc 是否已赋值
                     */
                    bool ServiceDescHasBeenSet() const;

                    /**
                     * 获取Service frontend request type, such as `http`, `https`, and `http&https`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Protocol Service frontend request type, such as `http`, `https`, and `http&https`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Service frontend request type, such as `http`, `https`, and `http&https`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Protocol Service frontend request type, such as `http`, `https`, and `http&https`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Last modified time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ModifiedTime Last modified time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置Last modified time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ModifiedTime Last modified time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取Network types supported by service.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return NetTypes Network types supported by service.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetNetTypes() const;

                    /**
                     * 设置Network types supported by service.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param NetTypes Network types supported by service.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetNetTypes(const std::vector<std::string>& _netTypes);

                    /**
                     * 判断参数 NetTypes 是否已赋值
                     * @return NetTypes 是否已赋值
                     */
                    bool NetTypesHasBeenSet() const;

                    /**
                     * 获取Dedicated cluster name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ExclusiveSetName Dedicated cluster name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetExclusiveSetName() const;

                    /**
                     * 设置Dedicated cluster name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ExclusiveSetName Dedicated cluster name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetExclusiveSetName(const std::string& _exclusiveSetName);

                    /**
                     * 判断参数 ExclusiveSetName 是否已赋值
                     * @return ExclusiveSetName 是否已赋值
                     */
                    bool ExclusiveSetNameHasBeenSet() const;

                    /**
                     * 获取Unique service ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ServiceId Unique service ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Unique service ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ServiceId Unique service ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取IP version.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IpVersion IP version.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetIpVersion() const;

                    /**
                     * 设置IP version.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param IpVersion IP version.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIpVersion(const std::string& _ipVersion);

                    /**
                     * 判断参数 IpVersion 是否已赋值
                     * @return IpVersion 是否已赋值
                     */
                    bool IpVersionHasBeenSet() const;

                    /**
                     * 获取List of published environments, such as test, prepub, and release.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AvailableEnvironments List of published environments, such as test, prepub, and release.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetAvailableEnvironments() const;

                    /**
                     * 设置List of published environments, such as test, prepub, and release.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AvailableEnvironments List of published environments, such as test, prepub, and release.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAvailableEnvironments(const std::vector<std::string>& _availableEnvironments);

                    /**
                     * 判断参数 AvailableEnvironments 是否已赋值
                     * @return AvailableEnvironments 是否已赋值
                     */
                    bool AvailableEnvironmentsHasBeenSet() const;

                    /**
                     * 获取Custom service name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ServiceName Custom service name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Custom service name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ServiceName Custom service name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取Public domain name assigned by the system for this service.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OuterSubDomain Public domain name assigned by the system for this service.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetOuterSubDomain() const;

                    /**
                     * 设置Public domain name assigned by the system for this service.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param OuterSubDomain Public domain name assigned by the system for this service.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOuterSubDomain(const std::string& _outerSubDomain);

                    /**
                     * 判断参数 OuterSubDomain 是否已赋值
                     * @return OuterSubDomain 是否已赋值
                     */
                    bool OuterSubDomainHasBeenSet() const;

                    /**
                     * 获取Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreatedTime Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CreatedTime Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Port for HTTP access over private network.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return InnerHttpPort Port for HTTP access over private network.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetInnerHttpPort() const;

                    /**
                     * 设置Port for HTTP access over private network.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param InnerHttpPort Port for HTTP access over private network.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInnerHttpPort(const uint64_t& _innerHttpPort);

                    /**
                     * 判断参数 InnerHttpPort 是否已赋值
                     * @return InnerHttpPort 是否已赋值
                     */
                    bool InnerHttpPortHasBeenSet() const;

                    /**
                     * 获取Private domain name automatically assigned by the system for this service.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return InnerSubDomain Private domain name automatically assigned by the system for this service.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetInnerSubDomain() const;

                    /**
                     * 设置Private domain name automatically assigned by the system for this service.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param InnerSubDomain Private domain name automatically assigned by the system for this service.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInnerSubDomain(const std::string& _innerSubDomain);

                    /**
                     * 判断参数 InnerSubDomain 是否已赋值
                     * @return InnerSubDomain 是否已赋值
                     */
                    bool InnerSubDomainHasBeenSet() const;

                    /**
                     * 获取Billing status of service.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TradeIsolateStatus Billing status of service.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetTradeIsolateStatus() const;

                    /**
                     * 设置Billing status of service.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TradeIsolateStatus Billing status of service.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTradeIsolateStatus(const int64_t& _tradeIsolateStatus);

                    /**
                     * 判断参数 TradeIsolateStatus 是否已赋值
                     * @return TradeIsolateStatus 是否已赋值
                     */
                    bool TradeIsolateStatusHasBeenSet() const;

                    /**
                     * 获取Tags bound to a service.
Note: this field may return null, indicating that no valid values found.
                     * @return Tags Tags bound to a service.
Note: this field may return null, indicating that no valid values found.
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tags bound to a service.
Note: this field may return null, indicating that no valid values found.
                     * @param Tags Tags bound to a service.
Note: this field may return null, indicating that no valid values found.
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Dedicated instance
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId Dedicated instance
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Dedicated instance
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param InstanceId Dedicated instance
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Cluster type
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SetType Cluster type
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSetType() const;

                    /**
                     * 设置Cluster type
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param SetType Cluster type
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSetType(const std::string& _setType);

                    /**
                     * 判断参数 SetType 是否已赋值
                     * @return SetType 是否已赋值
                     */
                    bool SetTypeHasBeenSet() const;

                    /**
                     * 获取Cluster type for service deployment
Note: this field may return null, indicating that no valid values found.
                     * @return DeploymentType Cluster type for service deployment
Note: this field may return null, indicating that no valid values found.
                     */
                    std::string GetDeploymentType() const;

                    /**
                     * 设置Cluster type for service deployment
Note: this field may return null, indicating that no valid values found.
                     * @param DeploymentType Cluster type for service deployment
Note: this field may return null, indicating that no valid values found.
                     */
                    void SetDeploymentType(const std::string& _deploymentType);

                    /**
                     * 判断参数 DeploymentType 是否已赋值
                     * @return DeploymentType 是否已赋值
                     */
                    bool DeploymentTypeHasBeenSet() const;

                private:

                    /**
                     * Port for HTTPS access over private network.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_innerHttpsPort;
                    bool m_innerHttpsPortHasBeenSet;

                    /**
                     * Custom service description.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceDesc;
                    bool m_serviceDescHasBeenSet;

                    /**
                     * Service frontend request type, such as `http`, `https`, and `http&https`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Last modified time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * Network types supported by service.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_netTypes;
                    bool m_netTypesHasBeenSet;

                    /**
                     * Dedicated cluster name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_exclusiveSetName;
                    bool m_exclusiveSetNameHasBeenSet;

                    /**
                     * Unique service ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * IP version.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ipVersion;
                    bool m_ipVersionHasBeenSet;

                    /**
                     * List of published environments, such as test, prepub, and release.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_availableEnvironments;
                    bool m_availableEnvironmentsHasBeenSet;

                    /**
                     * Custom service name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * Public domain name assigned by the system for this service.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_outerSubDomain;
                    bool m_outerSubDomainHasBeenSet;

                    /**
                     * Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Port for HTTP access over private network.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_innerHttpPort;
                    bool m_innerHttpPortHasBeenSet;

                    /**
                     * Private domain name automatically assigned by the system for this service.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_innerSubDomain;
                    bool m_innerSubDomainHasBeenSet;

                    /**
                     * Billing status of service.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_tradeIsolateStatus;
                    bool m_tradeIsolateStatusHasBeenSet;

                    /**
                     * Tags bound to a service.
Note: this field may return null, indicating that no valid values found.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Dedicated instance
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Cluster type
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_setType;
                    bool m_setTypeHasBeenSet;

                    /**
                     * Cluster type for service deployment
Note: this field may return null, indicating that no valid values found.
                     */
                    std::string m_deploymentType;
                    bool m_deploymentTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_SERVICE_H_
