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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBESERVICERESPONSE_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBESERVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/ApiIdStatus.h>
#include <tencentcloud/apigateway/v20180808/model/UsagePlan.h>
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
                * DescribeService response structure.
                */
                class DescribeServiceResponse : public AbstractModel
                {
                public:
                    DescribeServiceResponse();
                    ~DescribeServiceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique service ID.
                     * @return ServiceId Unique service ID.
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取Service environment list.
                     * @return AvailableEnvironments Service environment list.
                     * 
                     */
                    std::vector<std::string> GetAvailableEnvironments() const;

                    /**
                     * 判断参数 AvailableEnvironments 是否已赋值
                     * @return AvailableEnvironments 是否已赋值
                     * 
                     */
                    bool AvailableEnvironmentsHasBeenSet() const;

                    /**
                     * 获取Service name.
                     * @return ServiceName Service name.
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取Service description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ServiceDesc Service description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetServiceDesc() const;

                    /**
                     * 判断参数 ServiceDesc 是否已赋值
                     * @return ServiceDesc 是否已赋值
                     * 
                     */
                    bool ServiceDescHasBeenSet() const;

                    /**
                     * 获取Protocol supported by service. Valid values: http, https, http&https.
                     * @return Protocol Protocol supported by service. Valid values: http, https, http&https.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Service creation time.
                     * @return CreatedTime Service creation time.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Service modification time.
                     * @return ModifiedTime Service modification time.
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取Dedicated cluster name.
                     * @return ExclusiveSetName Dedicated cluster name.
                     * 
                     */
                    std::string GetExclusiveSetName() const;

                    /**
                     * 判断参数 ExclusiveSetName 是否已赋值
                     * @return ExclusiveSetName 是否已赋值
                     * 
                     */
                    bool ExclusiveSetNameHasBeenSet() const;

                    /**
                     * 获取Network type list. INNER: private network access; OUTER: public network access.
                     * @return NetTypes Network type list. INNER: private network access; OUTER: public network access.
                     * 
                     */
                    std::vector<std::string> GetNetTypes() const;

                    /**
                     * 判断参数 NetTypes 是否已赋值
                     * @return NetTypes 是否已赋值
                     * 
                     */
                    bool NetTypesHasBeenSet() const;

                    /**
                     * 获取Subdomain name for private network access.
                     * @return InternalSubDomain Subdomain name for private network access.
                     * 
                     */
                    std::string GetInternalSubDomain() const;

                    /**
                     * 判断参数 InternalSubDomain 是否已赋值
                     * @return InternalSubDomain 是否已赋值
                     * 
                     */
                    bool InternalSubDomainHasBeenSet() const;

                    /**
                     * 获取Subdomain name for public network access.
                     * @return OuterSubDomain Subdomain name for public network access.
                     * 
                     */
                    std::string GetOuterSubDomain() const;

                    /**
                     * 判断参数 OuterSubDomain 是否已赋值
                     * @return OuterSubDomain 是否已赋值
                     * 
                     */
                    bool OuterSubDomainHasBeenSet() const;

                    /**
                     * 获取Service port number for HTTP access over private network.
                     * @return InnerHttpPort Service port number for HTTP access over private network.
                     * 
                     */
                    int64_t GetInnerHttpPort() const;

                    /**
                     * 判断参数 InnerHttpPort 是否已赋值
                     * @return InnerHttpPort 是否已赋值
                     * 
                     */
                    bool InnerHttpPortHasBeenSet() const;

                    /**
                     * 获取Port number for HTTPS access over private network.
                     * @return InnerHttpsPort Port number for HTTPS access over private network.
                     * 
                     */
                    int64_t GetInnerHttpsPort() const;

                    /**
                     * 判断参数 InnerHttpsPort 是否已赋值
                     * @return InnerHttpsPort 是否已赋值
                     * 
                     */
                    bool InnerHttpsPortHasBeenSet() const;

                    /**
                     * 获取Total number of APIs.
                     * @return ApiTotalCount Total number of APIs.
                     * 
                     */
                    int64_t GetApiTotalCount() const;

                    /**
                     * 判断参数 ApiTotalCount 是否已赋值
                     * @return ApiTotalCount 是否已赋值
                     * 
                     */
                    bool ApiTotalCountHasBeenSet() const;

                    /**
                     * 获取API list.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApiIdStatusSet API list.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ApiIdStatus> GetApiIdStatusSet() const;

                    /**
                     * 判断参数 ApiIdStatusSet 是否已赋值
                     * @return ApiIdStatusSet 是否已赋值
                     * 
                     */
                    bool ApiIdStatusSetHasBeenSet() const;

                    /**
                     * 获取Total number of usage plans.
                     * @return UsagePlanTotalCount Total number of usage plans.
                     * 
                     */
                    int64_t GetUsagePlanTotalCount() const;

                    /**
                     * 判断参数 UsagePlanTotalCount 是否已赋值
                     * @return UsagePlanTotalCount 是否已赋值
                     * 
                     */
                    bool UsagePlanTotalCountHasBeenSet() const;

                    /**
                     * 获取Usage plan array.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UsagePlanList Usage plan array.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<UsagePlan> GetUsagePlanList() const;

                    /**
                     * 判断参数 UsagePlanList 是否已赋值
                     * @return UsagePlanList 是否已赋值
                     * 
                     */
                    bool UsagePlanListHasBeenSet() const;

                    /**
                     * 获取IP version.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IpVersion IP version.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIpVersion() const;

                    /**
                     * 判断参数 IpVersion 是否已赋值
                     * @return IpVersion 是否已赋值
                     * 
                     */
                    bool IpVersionHasBeenSet() const;

                    /**
                     * 获取Service user type.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UserType Service user type.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                    /**
                     * 获取Reserved field.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SetId Reserved field.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSetId() const;

                    /**
                     * 判断参数 SetId 是否已赋值
                     * @return SetId 是否已赋值
                     * 
                     */
                    bool SetIdHasBeenSet() const;

                    /**
                     * 获取Tags bound to a service.
Note: this field may return null, indicating that no valid values found.
                     * @return Tags Tags bound to a service.
Note: this field may return null, indicating that no valid values found.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Dedicated instance ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId Dedicated instance ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Dedicated instance name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return InstanceName Dedicated instance name
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Cluster type
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SetType Cluster type
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSetType() const;

                    /**
                     * 判断参数 SetType 是否已赋值
                     * @return SetType 是否已赋值
                     * 
                     */
                    bool SetTypeHasBeenSet() const;

                    /**
                     * 获取Cluster type for service deployment
Note: this field may return null, indicating that no valid values found.
                     * @return DeploymentType Cluster type for service deployment
Note: this field may return null, indicating that no valid values found.
                     * 
                     */
                    std::string GetDeploymentType() const;

                    /**
                     * 判断参数 DeploymentType 是否已赋值
                     * @return DeploymentType 是否已赋值
                     * 
                     */
                    bool DeploymentTypeHasBeenSet() const;

                    /**
                     * 获取Whether the service if for special usage. Valid values: `DEFAULT` (general usage), `HTTP_DNS`.
Note: This field may return `NULL`, indicating that no valid value was found.
                     * @return SpecialUse Whether the service if for special usage. Valid values: `DEFAULT` (general usage), `HTTP_DNS`.
Note: This field may return `NULL`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetSpecialUse() const;

                    /**
                     * 判断参数 SpecialUse 是否已赋值
                     * @return SpecialUse 是否已赋值
                     * 
                     */
                    bool SpecialUseHasBeenSet() const;

                private:

                    /**
                     * Unique service ID.
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Service environment list.
                     */
                    std::vector<std::string> m_availableEnvironments;
                    bool m_availableEnvironmentsHasBeenSet;

                    /**
                     * Service name.
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * Service description.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceDesc;
                    bool m_serviceDescHasBeenSet;

                    /**
                     * Protocol supported by service. Valid values: http, https, http&https.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Service creation time.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Service modification time.
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * Dedicated cluster name.
                     */
                    std::string m_exclusiveSetName;
                    bool m_exclusiveSetNameHasBeenSet;

                    /**
                     * Network type list. INNER: private network access; OUTER: public network access.
                     */
                    std::vector<std::string> m_netTypes;
                    bool m_netTypesHasBeenSet;

                    /**
                     * Subdomain name for private network access.
                     */
                    std::string m_internalSubDomain;
                    bool m_internalSubDomainHasBeenSet;

                    /**
                     * Subdomain name for public network access.
                     */
                    std::string m_outerSubDomain;
                    bool m_outerSubDomainHasBeenSet;

                    /**
                     * Service port number for HTTP access over private network.
                     */
                    int64_t m_innerHttpPort;
                    bool m_innerHttpPortHasBeenSet;

                    /**
                     * Port number for HTTPS access over private network.
                     */
                    int64_t m_innerHttpsPort;
                    bool m_innerHttpsPortHasBeenSet;

                    /**
                     * Total number of APIs.
                     */
                    int64_t m_apiTotalCount;
                    bool m_apiTotalCountHasBeenSet;

                    /**
                     * API list.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ApiIdStatus> m_apiIdStatusSet;
                    bool m_apiIdStatusSetHasBeenSet;

                    /**
                     * Total number of usage plans.
                     */
                    int64_t m_usagePlanTotalCount;
                    bool m_usagePlanTotalCountHasBeenSet;

                    /**
                     * Usage plan array.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<UsagePlan> m_usagePlanList;
                    bool m_usagePlanListHasBeenSet;

                    /**
                     * IP version.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ipVersion;
                    bool m_ipVersionHasBeenSet;

                    /**
                     * Service user type.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * Reserved field.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_setId;
                    bool m_setIdHasBeenSet;

                    /**
                     * Tags bound to a service.
Note: this field may return null, indicating that no valid values found.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Dedicated instance ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Dedicated instance name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

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

                    /**
                     * Whether the service if for special usage. Valid values: `DEFAULT` (general usage), `HTTP_DNS`.
Note: This field may return `NULL`, indicating that no valid value was found.
                     */
                    std::string m_specialUse;
                    bool m_specialUseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBESERVICERESPONSE_H_
