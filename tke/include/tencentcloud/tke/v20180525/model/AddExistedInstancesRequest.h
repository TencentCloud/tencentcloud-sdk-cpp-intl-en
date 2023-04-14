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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_ADDEXISTEDINSTANCESREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_ADDEXISTEDINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/InstanceAdvancedSettings.h>
#include <tencentcloud/tke/v20180525/model/EnhancedService.h>
#include <tencentcloud/tke/v20180525/model/LoginSettings.h>
#include <tencentcloud/tke/v20180525/model/NodePoolOption.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * AddExistedInstances request structure.
                */
                class AddExistedInstancesRequest : public AbstractModel
                {
                public:
                    AddExistedInstancesRequest();
                    ~AddExistedInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param ClusterId Cluster ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Instance list. Spot instance is not supported.
                     * @return InstanceIds Instance list. Spot instance is not supported.
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance list. Spot instance is not supported.
                     * @param InstanceIds Instance list. Spot instance is not supported.
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Detailed information of the instance
                     * @return InstanceAdvancedSettings Detailed information of the instance
                     */
                    InstanceAdvancedSettings GetInstanceAdvancedSettings() const;

                    /**
                     * 设置Detailed information of the instance
                     * @param InstanceAdvancedSettings Detailed information of the instance
                     */
                    void SetInstanceAdvancedSettings(const InstanceAdvancedSettings& _instanceAdvancedSettings);

                    /**
                     * 判断参数 InstanceAdvancedSettings 是否已赋值
                     * @return InstanceAdvancedSettings 是否已赋值
                     */
                    bool InstanceAdvancedSettingsHasBeenSet() const;

                    /**
                     * 获取Enhanced services. This parameter is used to specify whether to enable Cloud Security, Cloud Monitoring and other services. If this parameter is not specified, Cloud Monitor and Cloud Security are enabled by default.
                     * @return EnhancedService Enhanced services. This parameter is used to specify whether to enable Cloud Security, Cloud Monitoring and other services. If this parameter is not specified, Cloud Monitor and Cloud Security are enabled by default.
                     */
                    EnhancedService GetEnhancedService() const;

                    /**
                     * 设置Enhanced services. This parameter is used to specify whether to enable Cloud Security, Cloud Monitoring and other services. If this parameter is not specified, Cloud Monitor and Cloud Security are enabled by default.
                     * @param EnhancedService Enhanced services. This parameter is used to specify whether to enable Cloud Security, Cloud Monitoring and other services. If this parameter is not specified, Cloud Monitor and Cloud Security are enabled by default.
                     */
                    void SetEnhancedService(const EnhancedService& _enhancedService);

                    /**
                     * 判断参数 EnhancedService 是否已赋值
                     * @return EnhancedService 是否已赋值
                     */
                    bool EnhancedServiceHasBeenSet() const;

                    /**
                     * 获取Node login information (currently only supports using Password or single KeyIds)
                     * @return LoginSettings Node login information (currently only supports using Password or single KeyIds)
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置Node login information (currently only supports using Password or single KeyIds)
                     * @param LoginSettings Node login information (currently only supports using Password or single KeyIds)
                     */
                    void SetLoginSettings(const LoginSettings& _loginSettings);

                    /**
                     * 判断参数 LoginSettings 是否已赋值
                     * @return LoginSettings 是否已赋值
                     */
                    bool LoginSettingsHasBeenSet() const;

                    /**
                     * 获取When reinstalling the system, you can specify the HostName of the modified instance (when the cluster is in HostName mode, this parameter is required, and the rule name is the same as the [Create CVM Instance](https://intl.cloud.tencent.com/document/product/213/15730?from_cn_redirect=1) API HostName except for uppercase letters not being supported.
                     * @return HostName When reinstalling the system, you can specify the HostName of the modified instance (when the cluster is in HostName mode, this parameter is required, and the rule name is the same as the [Create CVM Instance](https://intl.cloud.tencent.com/document/product/213/15730?from_cn_redirect=1) API HostName except for uppercase letters not being supported.
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置When reinstalling the system, you can specify the HostName of the modified instance (when the cluster is in HostName mode, this parameter is required, and the rule name is the same as the [Create CVM Instance](https://intl.cloud.tencent.com/document/product/213/15730?from_cn_redirect=1) API HostName except for uppercase letters not being supported.
                     * @param HostName When reinstalling the system, you can specify the HostName of the modified instance (when the cluster is in HostName mode, this parameter is required, and the rule name is the same as the [Create CVM Instance](https://intl.cloud.tencent.com/document/product/213/15730?from_cn_redirect=1) API HostName except for uppercase letters not being supported.
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取Security group to which the instance belongs. This parameter can be obtained from the `sgId` field returned by DescribeSecurityGroups. If this parameter is not specified, the default security group is bound. (Currently, you can only set a single sgId)
                     * @return SecurityGroupIds Security group to which the instance belongs. This parameter can be obtained from the `sgId` field returned by DescribeSecurityGroups. If this parameter is not specified, the default security group is bound. (Currently, you can only set a single sgId)
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Security group to which the instance belongs. This parameter can be obtained from the `sgId` field returned by DescribeSecurityGroups. If this parameter is not specified, the default security group is bound. (Currently, you can only set a single sgId)
                     * @param SecurityGroupIds Security group to which the instance belongs. This parameter can be obtained from the `sgId` field returned by DescribeSecurityGroups. If this parameter is not specified, the default security group is bound. (Currently, you can only set a single sgId)
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取Node pool options
                     * @return NodePool Node pool options
                     */
                    NodePoolOption GetNodePool() const;

                    /**
                     * 设置Node pool options
                     * @param NodePool Node pool options
                     */
                    void SetNodePool(const NodePoolOption& _nodePool);

                    /**
                     * 判断参数 NodePool 是否已赋值
                     * @return NodePool 是否已赋值
                     */
                    bool NodePoolHasBeenSet() const;

                    /**
                     * 获取Skips the specified verification. Valid values: GlobalRouteCIDRCheck, VpcCniCIDRCheck
                     * @return SkipValidateOptions Skips the specified verification. Valid values: GlobalRouteCIDRCheck, VpcCniCIDRCheck
                     */
                    std::vector<std::string> GetSkipValidateOptions() const;

                    /**
                     * 设置Skips the specified verification. Valid values: GlobalRouteCIDRCheck, VpcCniCIDRCheck
                     * @param SkipValidateOptions Skips the specified verification. Valid values: GlobalRouteCIDRCheck, VpcCniCIDRCheck
                     */
                    void SetSkipValidateOptions(const std::vector<std::string>& _skipValidateOptions);

                    /**
                     * 判断参数 SkipValidateOptions 是否已赋值
                     * @return SkipValidateOptions 是否已赋值
                     */
                    bool SkipValidateOptionsHasBeenSet() const;

                    /**
                     * 获取This parameter is used to customize the configuration of an instance, which corresponds to the `InstanceIds` one-to-one in sequence. If this parameter is passed in, the default parameter `InstanceAdvancedSettings` will be overwritten and will not take effect. If this parameter is not passed in, the `InstanceAdvancedSettings` will take effect for each instance.

The array length of `InstanceAdvancedSettingsOverride` should be the same as the array length of `InstanceIds`. If its array length is greater than the `InstanceIds` array length, an error will be reported. If its array length is less than the `InstanceIds` array length, the instance without corresponding configuration will use the default configuration.
                     * @return InstanceAdvancedSettingsOverrides This parameter is used to customize the configuration of an instance, which corresponds to the `InstanceIds` one-to-one in sequence. If this parameter is passed in, the default parameter `InstanceAdvancedSettings` will be overwritten and will not take effect. If this parameter is not passed in, the `InstanceAdvancedSettings` will take effect for each instance.

The array length of `InstanceAdvancedSettingsOverride` should be the same as the array length of `InstanceIds`. If its array length is greater than the `InstanceIds` array length, an error will be reported. If its array length is less than the `InstanceIds` array length, the instance without corresponding configuration will use the default configuration.
                     */
                    std::vector<InstanceAdvancedSettings> GetInstanceAdvancedSettingsOverrides() const;

                    /**
                     * 设置This parameter is used to customize the configuration of an instance, which corresponds to the `InstanceIds` one-to-one in sequence. If this parameter is passed in, the default parameter `InstanceAdvancedSettings` will be overwritten and will not take effect. If this parameter is not passed in, the `InstanceAdvancedSettings` will take effect for each instance.

The array length of `InstanceAdvancedSettingsOverride` should be the same as the array length of `InstanceIds`. If its array length is greater than the `InstanceIds` array length, an error will be reported. If its array length is less than the `InstanceIds` array length, the instance without corresponding configuration will use the default configuration.
                     * @param InstanceAdvancedSettingsOverrides This parameter is used to customize the configuration of an instance, which corresponds to the `InstanceIds` one-to-one in sequence. If this parameter is passed in, the default parameter `InstanceAdvancedSettings` will be overwritten and will not take effect. If this parameter is not passed in, the `InstanceAdvancedSettings` will take effect for each instance.

The array length of `InstanceAdvancedSettingsOverride` should be the same as the array length of `InstanceIds`. If its array length is greater than the `InstanceIds` array length, an error will be reported. If its array length is less than the `InstanceIds` array length, the instance without corresponding configuration will use the default configuration.
                     */
                    void SetInstanceAdvancedSettingsOverrides(const std::vector<InstanceAdvancedSettings>& _instanceAdvancedSettingsOverrides);

                    /**
                     * 判断参数 InstanceAdvancedSettingsOverrides 是否已赋值
                     * @return InstanceAdvancedSettingsOverrides 是否已赋值
                     */
                    bool InstanceAdvancedSettingsOverridesHasBeenSet() const;

                    /**
                     * 获取Node image
                     * @return ImageId Node image
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置Node image
                     * @param ImageId Node image
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     */
                    bool ImageIdHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Instance list. Spot instance is not supported.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Detailed information of the instance
                     */
                    InstanceAdvancedSettings m_instanceAdvancedSettings;
                    bool m_instanceAdvancedSettingsHasBeenSet;

                    /**
                     * Enhanced services. This parameter is used to specify whether to enable Cloud Security, Cloud Monitoring and other services. If this parameter is not specified, Cloud Monitor and Cloud Security are enabled by default.
                     */
                    EnhancedService m_enhancedService;
                    bool m_enhancedServiceHasBeenSet;

                    /**
                     * Node login information (currently only supports using Password or single KeyIds)
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * When reinstalling the system, you can specify the HostName of the modified instance (when the cluster is in HostName mode, this parameter is required, and the rule name is the same as the [Create CVM Instance](https://intl.cloud.tencent.com/document/product/213/15730?from_cn_redirect=1) API HostName except for uppercase letters not being supported.
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Security group to which the instance belongs. This parameter can be obtained from the `sgId` field returned by DescribeSecurityGroups. If this parameter is not specified, the default security group is bound. (Currently, you can only set a single sgId)
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Node pool options
                     */
                    NodePoolOption m_nodePool;
                    bool m_nodePoolHasBeenSet;

                    /**
                     * Skips the specified verification. Valid values: GlobalRouteCIDRCheck, VpcCniCIDRCheck
                     */
                    std::vector<std::string> m_skipValidateOptions;
                    bool m_skipValidateOptionsHasBeenSet;

                    /**
                     * This parameter is used to customize the configuration of an instance, which corresponds to the `InstanceIds` one-to-one in sequence. If this parameter is passed in, the default parameter `InstanceAdvancedSettings` will be overwritten and will not take effect. If this parameter is not passed in, the `InstanceAdvancedSettings` will take effect for each instance.

The array length of `InstanceAdvancedSettingsOverride` should be the same as the array length of `InstanceIds`. If its array length is greater than the `InstanceIds` array length, an error will be reported. If its array length is less than the `InstanceIds` array length, the instance without corresponding configuration will use the default configuration.
                     */
                    std::vector<InstanceAdvancedSettings> m_instanceAdvancedSettingsOverrides;
                    bool m_instanceAdvancedSettingsOverridesHasBeenSet;

                    /**
                     * Node image
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_ADDEXISTEDINSTANCESREQUEST_H_
