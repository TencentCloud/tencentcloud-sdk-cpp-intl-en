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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEINSTANCESREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/InstanceChargePrepaid.h>
#include <tencentcloud/lighthouse/v20200324/model/LoginConfiguration.h>
#include <tencentcloud/lighthouse/v20200324/model/DockerContainerConfiguration.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * CreateInstances request structure.
                */
                class CreateInstancesRequest : public AbstractModel
                {
                public:
                    CreateInstancesRequest();
                    ~CreateInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the Lighthouse package
                     * @return BundleId ID of the Lighthouse package
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置ID of the Lighthouse package
                     * @param BundleId ID of the Lighthouse package
                     */
                    void SetBundleId(const std::string& _bundleId);

                    /**
                     * 判断参数 BundleId 是否已赋值
                     * @return BundleId 是否已赋值
                     */
                    bool BundleIdHasBeenSet() const;

                    /**
                     * 获取ID of the Lighthouse image
                     * @return BlueprintId ID of the Lighthouse image
                     */
                    std::string GetBlueprintId() const;

                    /**
                     * 设置ID of the Lighthouse image
                     * @param BlueprintId ID of the Lighthouse image
                     */
                    void SetBlueprintId(const std::string& _blueprintId);

                    /**
                     * 判断参数 BlueprintId 是否已赋值
                     * @return BlueprintId 是否已赋值
                     */
                    bool BlueprintIdHasBeenSet() const;

                    /**
                     * 获取Monthly subscription information for the instance, including the purchase period, setting of auto-renewal, etc.
                     * @return InstanceChargePrepaid Monthly subscription information for the instance, including the purchase period, setting of auto-renewal, etc.
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置Monthly subscription information for the instance, including the purchase period, setting of auto-renewal, etc.
                     * @param InstanceChargePrepaid Monthly subscription information for the instance, including the purchase period, setting of auto-renewal, etc.
                     */
                    void SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid);

                    /**
                     * 判断参数 InstanceChargePrepaid 是否已赋值
                     * @return InstanceChargePrepaid 是否已赋值
                     */
                    bool InstanceChargePrepaidHasBeenSet() const;

                    /**
                     * 获取The display name of the Lighthouse instance
                     * @return InstanceName The display name of the Lighthouse instance
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置The display name of the Lighthouse instance
                     * @param InstanceName The display name of the Lighthouse instance
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Number of the Lighthouse instances to purchase. For monthly subscribed instances, the value can be 1 to 30. The default value is `1`. Note that this number can not exceed the remaining quota under the current account.
                     * @return InstanceCount Number of the Lighthouse instances to purchase. For monthly subscribed instances, the value can be 1 to 30. The default value is `1`. Note that this number can not exceed the remaining quota under the current account.
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置Number of the Lighthouse instances to purchase. For monthly subscribed instances, the value can be 1 to 30. The default value is `1`. Note that this number can not exceed the remaining quota under the current account.
                     * @param InstanceCount Number of the Lighthouse instances to purchase. For monthly subscribed instances, the value can be 1 to 30. The default value is `1`. Note that this number can not exceed the remaining quota under the current account.
                     */
                    void SetInstanceCount(const uint64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取List of availability zones. A random AZ is selected by default.
                     * @return Zones List of availability zones. A random AZ is selected by default.
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置List of availability zones. A random AZ is selected by default.
                     * @param Zones List of availability zones. A random AZ is selected by default.
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取Whether the request is a dry run only.
`true`: dry run only. The request will not create instance(s). A dry run can check whether all the required parameters are specified, whether the request format is right, whether the request exceeds service limits, and whether the specified CVMs are available.
If the dry run fails, the corresponding error code will be returned.
If the dry run succeeds, the RequestId will be returned.
`false` (default value): send a normal request and create instance(s) if all the requirements are met.
                     * @return DryRun Whether the request is a dry run only.
`true`: dry run only. The request will not create instance(s). A dry run can check whether all the required parameters are specified, whether the request format is right, whether the request exceeds service limits, and whether the specified CVMs are available.
If the dry run fails, the corresponding error code will be returned.
If the dry run succeeds, the RequestId will be returned.
`false` (default value): send a normal request and create instance(s) if all the requirements are met.
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置Whether the request is a dry run only.
`true`: dry run only. The request will not create instance(s). A dry run can check whether all the required parameters are specified, whether the request format is right, whether the request exceeds service limits, and whether the specified CVMs are available.
If the dry run fails, the corresponding error code will be returned.
If the dry run succeeds, the RequestId will be returned.
`false` (default value): send a normal request and create instance(s) if all the requirements are met.
                     * @param DryRun Whether the request is a dry run only.
`true`: dry run only. The request will not create instance(s). A dry run can check whether all the required parameters are specified, whether the request format is right, whether the request exceeds service limits, and whether the specified CVMs are available.
If the dry run fails, the corresponding error code will be returned.
If the dry run succeeds, the RequestId will be returned.
`false` (default value): send a normal request and create instance(s) if all the requirements are met.
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idem-potency of the request cannot be guaranteed.
                     * @return ClientToken A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idem-potency of the request cannot be guaranteed.
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idem-potency of the request cannot be guaranteed.
                     * @param ClientToken A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idem-potency of the request cannot be guaranteed.
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取Login password of the instance. It’s only available for Windows instances. If it’s not specified, it means that the user choose to set the login password after the instance creation.
                     * @return LoginConfiguration Login password of the instance. It’s only available for Windows instances. If it’s not specified, it means that the user choose to set the login password after the instance creation.
                     */
                    LoginConfiguration GetLoginConfiguration() const;

                    /**
                     * 设置Login password of the instance. It’s only available for Windows instances. If it’s not specified, it means that the user choose to set the login password after the instance creation.
                     * @param LoginConfiguration Login password of the instance. It’s only available for Windows instances. If it’s not specified, it means that the user choose to set the login password after the instance creation.
                     */
                    void SetLoginConfiguration(const LoginConfiguration& _loginConfiguration);

                    /**
                     * 判断参数 LoginConfiguration 是否已赋值
                     * @return LoginConfiguration 是否已赋值
                     */
                    bool LoginConfigurationHasBeenSet() const;

                    /**
                     * 获取Configuration of the containers to create
                     * @return Containers Configuration of the containers to create
                     */
                    std::vector<DockerContainerConfiguration> GetContainers() const;

                    /**
                     * 设置Configuration of the containers to create
                     * @param Containers Configuration of the containers to create
                     */
                    void SetContainers(const std::vector<DockerContainerConfiguration>& _containers);

                    /**
                     * 判断参数 Containers 是否已赋值
                     * @return Containers 是否已赋值
                     */
                    bool ContainersHasBeenSet() const;

                private:

                    /**
                     * ID of the Lighthouse package
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * ID of the Lighthouse image
                     */
                    std::string m_blueprintId;
                    bool m_blueprintIdHasBeenSet;

                    /**
                     * Monthly subscription information for the instance, including the purchase period, setting of auto-renewal, etc.
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * The display name of the Lighthouse instance
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Number of the Lighthouse instances to purchase. For monthly subscribed instances, the value can be 1 to 30. The default value is `1`. Note that this number can not exceed the remaining quota under the current account.
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * List of availability zones. A random AZ is selected by default.
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * Whether the request is a dry run only.
`true`: dry run only. The request will not create instance(s). A dry run can check whether all the required parameters are specified, whether the request format is right, whether the request exceeds service limits, and whether the specified CVMs are available.
If the dry run fails, the corresponding error code will be returned.
If the dry run succeeds, the RequestId will be returned.
`false` (default value): send a normal request and create instance(s) if all the requirements are met.
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idem-potency of the request cannot be guaranteed.
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * Login password of the instance. It’s only available for Windows instances. If it’s not specified, it means that the user choose to set the login password after the instance creation.
                     */
                    LoginConfiguration m_loginConfiguration;
                    bool m_loginConfigurationHasBeenSet;

                    /**
                     * Configuration of the containers to create
                     */
                    std::vector<DockerContainerConfiguration> m_containers;
                    bool m_containersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEINSTANCESREQUEST_H_