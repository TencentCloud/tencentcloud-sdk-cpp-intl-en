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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_CREATEENVIRONMENTREQUEST_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_CREATEENVIRONMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/Tag.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * CreateEnvironment request structure.
                */
                class CreateEnvironmentRequest : public AbstractModel
                {
                public:
                    CreateEnvironmentRequest();
                    ~CreateEnvironmentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Environment name
                     * @return EnvironmentName Environment name
                     * 
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置Environment name
                     * @param _environmentName Environment name
                     * 
                     */
                    void SetEnvironmentName(const std::string& _environmentName);

                    /**
                     * 判断参数 EnvironmentName 是否已赋值
                     * @return EnvironmentName 是否已赋值
                     * 
                     */
                    bool EnvironmentNameHasBeenSet() const;

                    /**
                     * 获取Environment description
                     * @return Description Environment description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Environment description
                     * @param _description Environment description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取VPC name
                     * @return Vpc VPC name
                     * 
                     */
                    std::string GetVpc() const;

                    /**
                     * 设置VPC name
                     * @param _vpc VPC name
                     * 
                     */
                    void SetVpc(const std::string& _vpc);

                    /**
                     * 判断参数 Vpc 是否已赋值
                     * @return Vpc 是否已赋值
                     * 
                     */
                    bool VpcHasBeenSet() const;

                    /**
                     * 获取List of subnets
                     * @return SubnetIds List of subnets
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置List of subnets
                     * @param _subnetIds List of subnets
                     * 
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取Kubernetes version
                     * @return K8sVersion Kubernetes version
                     * 
                     */
                    std::string GetK8sVersion() const;

                    /**
                     * 设置Kubernetes version
                     * @param _k8sVersion Kubernetes version
                     * 
                     */
                    void SetK8sVersion(const std::string& _k8sVersion);

                    /**
                     * 判断参数 K8sVersion 是否已赋值
                     * @return K8sVersion 是否已赋值
                     * 
                     */
                    bool K8sVersionHasBeenSet() const;

                    /**
                     * 获取Source channel
                     * @return SourceChannel Source channel
                     * 
                     */
                    int64_t GetSourceChannel() const;

                    /**
                     * 设置Source channel
                     * @param _sourceChannel Source channel
                     * 
                     */
                    void SetSourceChannel(const int64_t& _sourceChannel);

                    /**
                     * 判断参数 SourceChannel 是否已赋值
                     * @return SourceChannel 是否已赋值
                     * 
                     */
                    bool SourceChannelHasBeenSet() const;

                    /**
                     * 获取Whether to enable the TSW service
                     * @return EnableTswTraceService Whether to enable the TSW service
                     * 
                     */
                    bool GetEnableTswTraceService() const;

                    /**
                     * 设置Whether to enable the TSW service
                     * @param _enableTswTraceService Whether to enable the TSW service
                     * 
                     */
                    void SetEnableTswTraceService(const bool& _enableTswTraceService);

                    /**
                     * 判断参数 EnableTswTraceService 是否已赋值
                     * @return EnableTswTraceService 是否已赋值
                     * 
                     */
                    bool EnableTswTraceServiceHasBeenSet() const;

                    /**
                     * 获取Tag
                     * @return Tags Tag
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag
                     * @param _tags Tag
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Environment type. Values: `test`, `pre`, `prod`
                     * @return EnvType Environment type. Values: `test`, `pre`, `prod`
                     * 
                     */
                    std::string GetEnvType() const;

                    /**
                     * 设置Environment type. Values: `test`, `pre`, `prod`
                     * @param _envType Environment type. Values: `test`, `pre`, `prod`
                     * 
                     */
                    void SetEnvType(const std::string& _envType);

                    /**
                     * 判断参数 EnvType 是否已赋值
                     * @return EnvType 是否已赋值
                     * 
                     */
                    bool EnvTypeHasBeenSet() const;

                    /**
                     * 获取The region to create the environment
                     * @return CreateRegion The region to create the environment
                     * 
                     */
                    std::string GetCreateRegion() const;

                    /**
                     * 设置The region to create the environment
                     * @param _createRegion The region to create the environment
                     * 
                     */
                    void SetCreateRegion(const std::string& _createRegion);

                    /**
                     * 判断参数 CreateRegion 是否已赋值
                     * @return CreateRegion 是否已赋值
                     * 
                     */
                    bool CreateRegionHasBeenSet() const;

                    /**
                     * 获取Whether to create a VPC
                     * @return SetupVpc Whether to create a VPC
                     * 
                     */
                    bool GetSetupVpc() const;

                    /**
                     * 设置Whether to create a VPC
                     * @param _setupVpc Whether to create a VPC
                     * 
                     */
                    void SetSetupVpc(const bool& _setupVpc);

                    /**
                     * 判断参数 SetupVpc 是否已赋值
                     * @return SetupVpc 是否已赋值
                     * 
                     */
                    bool SetupVpcHasBeenSet() const;

                    /**
                     * 获取Whether to create a TMP instance
                     * @return SetupPrometheus Whether to create a TMP instance
                     * 
                     */
                    bool GetSetupPrometheus() const;

                    /**
                     * 设置Whether to create a TMP instance
                     * @param _setupPrometheus Whether to create a TMP instance
                     * 
                     */
                    void SetSetupPrometheus(const bool& _setupPrometheus);

                    /**
                     * 判断参数 SetupPrometheus 是否已赋值
                     * @return SetupPrometheus 是否已赋值
                     * 
                     */
                    bool SetupPrometheusHasBeenSet() const;

                    /**
                     * 获取TMP instance ID
                     * @return PrometheusId TMP instance ID
                     * 
                     */
                    std::string GetPrometheusId() const;

                    /**
                     * 设置TMP instance ID
                     * @param _prometheusId TMP instance ID
                     * 
                     */
                    void SetPrometheusId(const std::string& _prometheusId);

                    /**
                     * 判断参数 PrometheusId 是否已赋值
                     * @return PrometheusId 是否已赋值
                     * 
                     */
                    bool PrometheusIdHasBeenSet() const;

                    /**
                     * 获取APM ID
                     * @return ApmId APM ID
                     * 
                     */
                    std::string GetApmId() const;

                    /**
                     * 设置APM ID
                     * @param _apmId APM ID
                     * 
                     */
                    void SetApmId(const std::string& _apmId);

                    /**
                     * 判断参数 ApmId 是否已赋值
                     * @return ApmId 是否已赋值
                     * 
                     */
                    bool ApmIdHasBeenSet() const;

                private:

                    /**
                     * Environment name
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

                    /**
                     * Environment description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * VPC name
                     */
                    std::string m_vpc;
                    bool m_vpcHasBeenSet;

                    /**
                     * List of subnets
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * Kubernetes version
                     */
                    std::string m_k8sVersion;
                    bool m_k8sVersionHasBeenSet;

                    /**
                     * Source channel
                     */
                    int64_t m_sourceChannel;
                    bool m_sourceChannelHasBeenSet;

                    /**
                     * Whether to enable the TSW service
                     */
                    bool m_enableTswTraceService;
                    bool m_enableTswTraceServiceHasBeenSet;

                    /**
                     * Tag
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Environment type. Values: `test`, `pre`, `prod`
                     */
                    std::string m_envType;
                    bool m_envTypeHasBeenSet;

                    /**
                     * The region to create the environment
                     */
                    std::string m_createRegion;
                    bool m_createRegionHasBeenSet;

                    /**
                     * Whether to create a VPC
                     */
                    bool m_setupVpc;
                    bool m_setupVpcHasBeenSet;

                    /**
                     * Whether to create a TMP instance
                     */
                    bool m_setupPrometheus;
                    bool m_setupPrometheusHasBeenSet;

                    /**
                     * TMP instance ID
                     */
                    std::string m_prometheusId;
                    bool m_prometheusIdHasBeenSet;

                    /**
                     * APM ID
                     */
                    std::string m_apmId;
                    bool m_apmIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_CREATEENVIRONMENTREQUEST_H_
