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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_CREATELAUNCHCONFIGURATIONREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_CREATELAUNCHCONFIGURATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/SystemDisk.h>
#include <tencentcloud/as/v20180419/model/DataDisk.h>
#include <tencentcloud/as/v20180419/model/InternetAccessible.h>
#include <tencentcloud/as/v20180419/model/LoginSettings.h>
#include <tencentcloud/as/v20180419/model/EnhancedService.h>
#include <tencentcloud/as/v20180419/model/InstanceMarketOptionsRequest.h>
#include <tencentcloud/as/v20180419/model/InstanceTag.h>
#include <tencentcloud/as/v20180419/model/Tag.h>
#include <tencentcloud/as/v20180419/model/HostNameSettings.h>
#include <tencentcloud/as/v20180419/model/InstanceNameSettings.h>
#include <tencentcloud/as/v20180419/model/InstanceChargePrepaid.h>
#include <tencentcloud/as/v20180419/model/IPv6InternetAccessible.h>
#include <tencentcloud/as/v20180419/model/Metadata.h>
#include <tencentcloud/as/v20180419/model/NetworkInterface.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * CreateLaunchConfiguration request structure.
                */
                class CreateLaunchConfigurationRequest : public AbstractModel
                {
                public:
                    CreateLaunchConfigurationRequest();
                    ~CreateLaunchConfigurationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Display name of the launch configuration. The name only supports Chinese, English, numbers, underscores, the separator "-", and decimal points. The maximum length cannot exceed 60 bytes.</p>
                     * @return LaunchConfigurationName <p>Display name of the launch configuration. The name only supports Chinese, English, numbers, underscores, the separator "-", and decimal points. The maximum length cannot exceed 60 bytes.</p>
                     * 
                     */
                    std::string GetLaunchConfigurationName() const;

                    /**
                     * 设置<p>Display name of the launch configuration. The name only supports Chinese, English, numbers, underscores, the separator "-", and decimal points. The maximum length cannot exceed 60 bytes.</p>
                     * @param _launchConfigurationName <p>Display name of the launch configuration. The name only supports Chinese, English, numbers, underscores, the separator "-", and decimal points. The maximum length cannot exceed 60 bytes.</p>
                     * 
                     */
                    void SetLaunchConfigurationName(const std::string& _launchConfigurationName);

                    /**
                     * 判断参数 LaunchConfigurationName 是否已赋值
                     * @return LaunchConfigurationName 是否已赋值
                     * 
                     */
                    bool LaunchConfigurationNameHasBeenSet() const;

                    /**
                     * 获取<p>Specify a valid <a href="https://www.tencentcloud.com/document/product/213/4940?from_cn_redirect=1">image</a> ID, such as <code>img-8toqc6s3</code>. One and only one of image ID and image family name must be filled in. There are four image types:<br><li>Public image</li><li>Custom image</li><li>Shared image</li><li>Service market image</li><br>You can get available image IDs in the following ways:<br><li>You can query the image IDs of <code>public images</code>, <code>custom images</code>, and <code>shared images</code> by logging in to the <a href="https://console.cloud.tencent.com/cvm/image?rid=1&amp;imageType=PUBLIC_IMAGE">console</a>; query the image IDs in the <code>service image market</code> in <a href="https://market.cloud.tencent.com/list">Marketplace</a>.</li><li>Call the <a href="https://www.tencentcloud.com/document/api/213/15715?from_cn_redirect=1">DescribeImages</a> API and get the <code>ImageId</code> field in the returned information.</li></p>
                     * @return ImageId <p>Specify a valid <a href="https://www.tencentcloud.com/document/product/213/4940?from_cn_redirect=1">image</a> ID, such as <code>img-8toqc6s3</code>. One and only one of image ID and image family name must be filled in. There are four image types:<br><li>Public image</li><li>Custom image</li><li>Shared image</li><li>Service market image</li><br>You can get available image IDs in the following ways:<br><li>You can query the image IDs of <code>public images</code>, <code>custom images</code>, and <code>shared images</code> by logging in to the <a href="https://console.cloud.tencent.com/cvm/image?rid=1&amp;imageType=PUBLIC_IMAGE">console</a>; query the image IDs in the <code>service image market</code> in <a href="https://market.cloud.tencent.com/list">Marketplace</a>.</li><li>Call the <a href="https://www.tencentcloud.com/document/api/213/15715?from_cn_redirect=1">DescribeImages</a> API and get the <code>ImageId</code> field in the returned information.</li></p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>Specify a valid <a href="https://www.tencentcloud.com/document/product/213/4940?from_cn_redirect=1">image</a> ID, such as <code>img-8toqc6s3</code>. One and only one of image ID and image family name must be filled in. There are four image types:<br><li>Public image</li><li>Custom image</li><li>Shared image</li><li>Service market image</li><br>You can get available image IDs in the following ways:<br><li>You can query the image IDs of <code>public images</code>, <code>custom images</code>, and <code>shared images</code> by logging in to the <a href="https://console.cloud.tencent.com/cvm/image?rid=1&amp;imageType=PUBLIC_IMAGE">console</a>; query the image IDs in the <code>service image market</code> in <a href="https://market.cloud.tencent.com/list">Marketplace</a>.</li><li>Call the <a href="https://www.tencentcloud.com/document/api/213/15715?from_cn_redirect=1">DescribeImages</a> API and get the <code>ImageId</code> field in the returned information.</li></p>
                     * @param _imageId <p>Specify a valid <a href="https://www.tencentcloud.com/document/product/213/4940?from_cn_redirect=1">image</a> ID, such as <code>img-8toqc6s3</code>. One and only one of image ID and image family name must be filled in. There are four image types:<br><li>Public image</li><li>Custom image</li><li>Shared image</li><li>Service market image</li><br>You can get available image IDs in the following ways:<br><li>You can query the image IDs of <code>public images</code>, <code>custom images</code>, and <code>shared images</code> by logging in to the <a href="https://console.cloud.tencent.com/cvm/image?rid=1&amp;imageType=PUBLIC_IMAGE">console</a>; query the image IDs in the <code>service image market</code> in <a href="https://market.cloud.tencent.com/list">Marketplace</a>.</li><li>Call the <a href="https://www.tencentcloud.com/document/api/213/15715?from_cn_redirect=1">DescribeImages</a> API and get the <code>ImageId</code> field in the returned information.</li></p>
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取<p>The project ID of the launch configuration. Default value: 0, indicating the default project. Obtain this parameter by calling <a href="https://www.tencentcloud.com/document/api/651/78725?from_cn_redirect=1">DescribeProject</a> and using the projectId field in the return value.<br>Note: The project ID of instances within the scaling group is the scaling group project ID, irrelevant to the value here.</p>
                     * @return ProjectId <p>The project ID of the launch configuration. Default value: 0, indicating the default project. Obtain this parameter by calling <a href="https://www.tencentcloud.com/document/api/651/78725?from_cn_redirect=1">DescribeProject</a> and using the projectId field in the return value.<br>Note: The project ID of instances within the scaling group is the scaling group project ID, irrelevant to the value here.</p>
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置<p>The project ID of the launch configuration. Default value: 0, indicating the default project. Obtain this parameter by calling <a href="https://www.tencentcloud.com/document/api/651/78725?from_cn_redirect=1">DescribeProject</a> and using the projectId field in the return value.<br>Note: The project ID of instances within the scaling group is the scaling group project ID, irrelevant to the value here.</p>
                     * @param _projectId <p>The project ID of the launch configuration. Default value: 0, indicating the default project. Obtain this parameter by calling <a href="https://www.tencentcloud.com/document/api/651/78725?from_cn_redirect=1">DescribeProject</a> and using the projectId field in the return value.<br>Note: The project ID of instances within the scaling group is the scaling group project ID, irrelevant to the value here.</p>
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>Instance model. Different instance models specify different resource specifications. The specific values can be obtained by calling the <a href="https://www.tencentcloud.com/document/product/213/33254">DescribeZoneInstanceConfigInfos</a> API to get the latest specification table or refer to the <a href="https://www.tencentcloud.com/document/product/213/11518?from_cn_redirect=1">instance type</a> description.<br>The <code>InstanceType</code> and <code>InstanceTypes</code> parameters are mutually exclusive, and one and only one must be filled in.</p>
                     * @return InstanceType <p>Instance model. Different instance models specify different resource specifications. The specific values can be obtained by calling the <a href="https://www.tencentcloud.com/document/product/213/33254">DescribeZoneInstanceConfigInfos</a> API to get the latest specification table or refer to the <a href="https://www.tencentcloud.com/document/product/213/11518?from_cn_redirect=1">instance type</a> description.<br>The <code>InstanceType</code> and <code>InstanceTypes</code> parameters are mutually exclusive, and one and only one must be filled in.</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>Instance model. Different instance models specify different resource specifications. The specific values can be obtained by calling the <a href="https://www.tencentcloud.com/document/product/213/33254">DescribeZoneInstanceConfigInfos</a> API to get the latest specification table or refer to the <a href="https://www.tencentcloud.com/document/product/213/11518?from_cn_redirect=1">instance type</a> description.<br>The <code>InstanceType</code> and <code>InstanceTypes</code> parameters are mutually exclusive, and one and only one must be filled in.</p>
                     * @param _instanceType <p>Instance model. Different instance models specify different resource specifications. The specific values can be obtained by calling the <a href="https://www.tencentcloud.com/document/product/213/33254">DescribeZoneInstanceConfigInfos</a> API to get the latest specification table or refer to the <a href="https://www.tencentcloud.com/document/product/213/11518?from_cn_redirect=1">instance type</a> description.<br>The <code>InstanceType</code> and <code>InstanceTypes</code> parameters are mutually exclusive, and one and only one must be filled in.</p>
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Instance system disk configuration information. If not specified, it will be allocated based on system default values.</p>
                     * @return SystemDisk <p>Instance system disk configuration information. If not specified, it will be allocated based on system default values.</p>
                     * 
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置<p>Instance system disk configuration information. If not specified, it will be allocated based on system default values.</p>
                     * @param _systemDisk <p>Instance system disk configuration information. If not specified, it will be allocated based on system default values.</p>
                     * 
                     */
                    void SetSystemDisk(const SystemDisk& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     * 
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取<p>Instance data disk configuration information. If not specified, no data disks are purchased by default, and a maximum of 11 data disks can be specified.</p>
                     * @return DataDisks <p>Instance data disk configuration information. If not specified, no data disks are purchased by default, and a maximum of 11 data disks can be specified.</p>
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置<p>Instance data disk configuration information. If not specified, no data disks are purchased by default, and a maximum of 11 data disks can be specified.</p>
                     * @param _dataDisks <p>Instance data disk configuration information. If not specified, no data disks are purchased by default, and a maximum of 11 data disks can be specified.</p>
                     * 
                     */
                    void SetDataDisks(const std::vector<DataDisk>& _dataDisks);

                    /**
                     * 判断参数 DataDisks 是否已赋值
                     * @return DataDisks 是否已赋值
                     * 
                     */
                    bool DataDisksHasBeenSet() const;

                    /**
                     * 获取<p>Public network bandwidth-related information settings. If not specified, the public network bandwidth defaults to 0 Mbps.</p>
                     * @return InternetAccessible <p>Public network bandwidth-related information settings. If not specified, the public network bandwidth defaults to 0 Mbps.</p>
                     * 
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置<p>Public network bandwidth-related information settings. If not specified, the public network bandwidth defaults to 0 Mbps.</p>
                     * @param _internetAccessible <p>Public network bandwidth-related information settings. If not specified, the public network bandwidth defaults to 0 Mbps.</p>
                     * 
                     */
                    void SetInternetAccessible(const InternetAccessible& _internetAccessible);

                    /**
                     * 判断参数 InternetAccessible 是否已赋值
                     * @return InternetAccessible 是否已赋值
                     * 
                     */
                    bool InternetAccessibleHasBeenSet() const;

                    /**
                     * 获取<p>Instance login settings. Through this parameter, you can set the instance's login method to password, key, or maintain the image's original login settings. By default, a password will be randomly generated, and the user will be notified through an internal message.</p>
                     * @return LoginSettings <p>Instance login settings. Through this parameter, you can set the instance's login method to password, key, or maintain the image's original login settings. By default, a password will be randomly generated, and the user will be notified through an internal message.</p>
                     * 
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置<p>Instance login settings. Through this parameter, you can set the instance's login method to password, key, or maintain the image's original login settings. By default, a password will be randomly generated, and the user will be notified through an internal message.</p>
                     * @param _loginSettings <p>Instance login settings. Through this parameter, you can set the instance's login method to password, key, or maintain the image's original login settings. By default, a password will be randomly generated, and the user will be notified through an internal message.</p>
                     * 
                     */
                    void SetLoginSettings(const LoginSettings& _loginSettings);

                    /**
                     * 判断参数 LoginSettings 是否已赋值
                     * @return LoginSettings 是否已赋值
                     * 
                     */
                    bool LoginSettingsHasBeenSet() const;

                    /**
                     * 获取<p>Security group to which an instance belongs. The value of this parameter can be obtained from the returned <code>SecurityGroupId</code> field of the <a href="https://www.tencentcloud.com/document/api/215/15808?from_cn_redirect=1">DescribeSecurityGroups</a> API. If this parameter is not specified, no security groups are associated by default.</p>
                     * @return SecurityGroupIds <p>Security group to which an instance belongs. The value of this parameter can be obtained from the returned <code>SecurityGroupId</code> field of the <a href="https://www.tencentcloud.com/document/api/215/15808?from_cn_redirect=1">DescribeSecurityGroups</a> API. If this parameter is not specified, no security groups are associated by default.</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>Security group to which an instance belongs. The value of this parameter can be obtained from the returned <code>SecurityGroupId</code> field of the <a href="https://www.tencentcloud.com/document/api/215/15808?from_cn_redirect=1">DescribeSecurityGroups</a> API. If this parameter is not specified, no security groups are associated by default.</p>
                     * @param _securityGroupIds <p>Security group to which an instance belongs. The value of this parameter can be obtained from the returned <code>SecurityGroupId</code> field of the <a href="https://www.tencentcloud.com/document/api/215/15808?from_cn_redirect=1">DescribeSecurityGroups</a> API. If this parameter is not specified, no security groups are associated by default.</p>
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取<p>Enhancement services. This parameter can be used to specify whether to enable services such as Cloud Monitor and cloud security. If not specified, cloud monitoring and cloud security services are enabled by default.</p>
                     * @return EnhancedService <p>Enhancement services. This parameter can be used to specify whether to enable services such as Cloud Monitor and cloud security. If not specified, cloud monitoring and cloud security services are enabled by default.</p>
                     * 
                     */
                    EnhancedService GetEnhancedService() const;

                    /**
                     * 设置<p>Enhancement services. This parameter can be used to specify whether to enable services such as Cloud Monitor and cloud security. If not specified, cloud monitoring and cloud security services are enabled by default.</p>
                     * @param _enhancedService <p>Enhancement services. This parameter can be used to specify whether to enable services such as Cloud Monitor and cloud security. If not specified, cloud monitoring and cloud security services are enabled by default.</p>
                     * 
                     */
                    void SetEnhancedService(const EnhancedService& _enhancedService);

                    /**
                     * 判断参数 EnhancedService 是否已赋值
                     * @return EnhancedService 是否已赋值
                     * 
                     */
                    bool EnhancedServiceHasBeenSet() const;

                    /**
                     * 获取<p>Custom data after Base64 encoding should not exceed 16KB.</p>
                     * @return UserData <p>Custom data after Base64 encoding should not exceed 16KB.</p>
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置<p>Custom data after Base64 encoding should not exceed 16KB.</p>
                     * @param _userData <p>Custom data after Base64 encoding should not exceed 16KB.</p>
                     * 
                     */
                    void SetUserData(const std::string& _userData);

                    /**
                     * 判断参数 UserData 是否已赋值
                     * @return UserData 是否已赋值
                     * 
                     */
                    bool UserDataHasBeenSet() const;

                    /**
                     * 获取<p>Instance billing type. The default value of CVM is handled as POSTPAID_BY_HOUR.</p><li>POSTPAID_BY_HOUR: hourly postpaid</li><li>SPOTPAID: spot payment</li><li>PREPAID: prepayment, which is monthly subscription</li><li>CDCPAID: dedicated cluster payment</li>
                     * @return InstanceChargeType <p>Instance billing type. The default value of CVM is handled as POSTPAID_BY_HOUR.</p><li>POSTPAID_BY_HOUR: hourly postpaid</li><li>SPOTPAID: spot payment</li><li>PREPAID: prepayment, which is monthly subscription</li><li>CDCPAID: dedicated cluster payment</li>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>Instance billing type. The default value of CVM is handled as POSTPAID_BY_HOUR.</p><li>POSTPAID_BY_HOUR: hourly postpaid</li><li>SPOTPAID: spot payment</li><li>PREPAID: prepayment, which is monthly subscription</li><li>CDCPAID: dedicated cluster payment</li>
                     * @param _instanceChargeType <p>Instance billing type. The default value of CVM is handled as POSTPAID_BY_HOUR.</p><li>POSTPAID_BY_HOUR: hourly postpaid</li><li>SPOTPAID: spot payment</li><li>PREPAID: prepayment, which is monthly subscription</li><li>CDCPAID: dedicated cluster payment</li>
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>Market options of the instance, such as spot instance parameters. This parameter is required if the payment mode of the specified instance is spot payment.</p>
                     * @return InstanceMarketOptions <p>Market options of the instance, such as spot instance parameters. This parameter is required if the payment mode of the specified instance is spot payment.</p>
                     * 
                     */
                    InstanceMarketOptionsRequest GetInstanceMarketOptions() const;

                    /**
                     * 设置<p>Market options of the instance, such as spot instance parameters. This parameter is required if the payment mode of the specified instance is spot payment.</p>
                     * @param _instanceMarketOptions <p>Market options of the instance, such as spot instance parameters. This parameter is required if the payment mode of the specified instance is spot payment.</p>
                     * 
                     */
                    void SetInstanceMarketOptions(const InstanceMarketOptionsRequest& _instanceMarketOptions);

                    /**
                     * 判断参数 InstanceMarketOptions 是否已赋值
                     * @return InstanceMarketOptions 是否已赋值
                     * 
                     */
                    bool InstanceMarketOptionsHasBeenSet() const;

                    /**
                     * 获取<p>Instance model list. Different instance models specify different resource specifications, and a maximum of 10 instance models are supported.<br>The <code>InstanceType</code> and <code>InstanceTypes</code> parameters are mutually exclusive. One and only one of them must be filled in. To obtain the specific values, call the API <a href="https://www.tencentcloud.com/document/product/213/33254">DescribeZoneInstanceConfigInfos</a> to get the latest specification table or see <a href="https://www.tencentcloud.com/document/product/213/11518?from_cn_redirect=1">Instance Specifications</a>.</p>
                     * @return InstanceTypes <p>Instance model list. Different instance models specify different resource specifications, and a maximum of 10 instance models are supported.<br>The <code>InstanceType</code> and <code>InstanceTypes</code> parameters are mutually exclusive. One and only one of them must be filled in. To obtain the specific values, call the API <a href="https://www.tencentcloud.com/document/product/213/33254">DescribeZoneInstanceConfigInfos</a> to get the latest specification table or see <a href="https://www.tencentcloud.com/document/product/213/11518?from_cn_redirect=1">Instance Specifications</a>.</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceTypes() const;

                    /**
                     * 设置<p>Instance model list. Different instance models specify different resource specifications, and a maximum of 10 instance models are supported.<br>The <code>InstanceType</code> and <code>InstanceTypes</code> parameters are mutually exclusive. One and only one of them must be filled in. To obtain the specific values, call the API <a href="https://www.tencentcloud.com/document/product/213/33254">DescribeZoneInstanceConfigInfos</a> to get the latest specification table or see <a href="https://www.tencentcloud.com/document/product/213/11518?from_cn_redirect=1">Instance Specifications</a>.</p>
                     * @param _instanceTypes <p>Instance model list. Different instance models specify different resource specifications, and a maximum of 10 instance models are supported.<br>The <code>InstanceType</code> and <code>InstanceTypes</code> parameters are mutually exclusive. One and only one of them must be filled in. To obtain the specific values, call the API <a href="https://www.tencentcloud.com/document/product/213/33254">DescribeZoneInstanceConfigInfos</a> to get the latest specification table or see <a href="https://www.tencentcloud.com/document/product/213/11518?from_cn_redirect=1">Instance Specifications</a>.</p>
                     * 
                     */
                    void SetInstanceTypes(const std::vector<std::string>& _instanceTypes);

                    /**
                     * 判断参数 InstanceTypes 是否已赋值
                     * @return InstanceTypes 是否已赋值
                     * 
                     */
                    bool InstanceTypesHasBeenSet() const;

                    /**
                     * 获取<p>CAM role name, which can be obtained from the roleName in the return value from the <a href="https://www.tencentcloud.com/document/product/598/36223?from_cn_redirect=1">DescribeRoleList</a> API.</p>
                     * @return CamRoleName <p>CAM role name, which can be obtained from the roleName in the return value from the <a href="https://www.tencentcloud.com/document/product/598/36223?from_cn_redirect=1">DescribeRoleList</a> API.</p>
                     * 
                     */
                    std::string GetCamRoleName() const;

                    /**
                     * 设置<p>CAM role name, which can be obtained from the roleName in the return value from the <a href="https://www.tencentcloud.com/document/product/598/36223?from_cn_redirect=1">DescribeRoleList</a> API.</p>
                     * @param _camRoleName <p>CAM role name, which can be obtained from the roleName in the return value from the <a href="https://www.tencentcloud.com/document/product/598/36223?from_cn_redirect=1">DescribeRoleList</a> API.</p>
                     * 
                     */
                    void SetCamRoleName(const std::string& _camRoleName);

                    /**
                     * 判断参数 CamRoleName 是否已赋值
                     * @return CamRoleName 是否已赋值
                     * 
                     */
                    bool CamRoleNameHasBeenSet() const;

                    /**
                     * 获取<p>Instance type validation policy. Valid values include ALL and ANY. Default value: ANY. This parameter is valid only when InstanceTypes contains multiple models.</p><li>ALL: Verification passes if all InstanceTypes are available; otherwise, a verification error will be reported.</li><li>ANY: Verification passes if any InstanceType is available; otherwise, a verification error will be reported.</li><p>Common causes of InstanceTypes unavailable include the instance type sold out and the corresponding cloud disk sold out.<br>If a model in InstanceTypes does not exist or has been removed, a verification error will be reported regardless of the value of InstanceTypesCheckPolicy.</p>
                     * @return InstanceTypesCheckPolicy <p>Instance type validation policy. Valid values include ALL and ANY. Default value: ANY. This parameter is valid only when InstanceTypes contains multiple models.</p><li>ALL: Verification passes if all InstanceTypes are available; otherwise, a verification error will be reported.</li><li>ANY: Verification passes if any InstanceType is available; otherwise, a verification error will be reported.</li><p>Common causes of InstanceTypes unavailable include the instance type sold out and the corresponding cloud disk sold out.<br>If a model in InstanceTypes does not exist or has been removed, a verification error will be reported regardless of the value of InstanceTypesCheckPolicy.</p>
                     * 
                     */
                    std::string GetInstanceTypesCheckPolicy() const;

                    /**
                     * 设置<p>Instance type validation policy. Valid values include ALL and ANY. Default value: ANY. This parameter is valid only when InstanceTypes contains multiple models.</p><li>ALL: Verification passes if all InstanceTypes are available; otherwise, a verification error will be reported.</li><li>ANY: Verification passes if any InstanceType is available; otherwise, a verification error will be reported.</li><p>Common causes of InstanceTypes unavailable include the instance type sold out and the corresponding cloud disk sold out.<br>If a model in InstanceTypes does not exist or has been removed, a verification error will be reported regardless of the value of InstanceTypesCheckPolicy.</p>
                     * @param _instanceTypesCheckPolicy <p>Instance type validation policy. Valid values include ALL and ANY. Default value: ANY. This parameter is valid only when InstanceTypes contains multiple models.</p><li>ALL: Verification passes if all InstanceTypes are available; otherwise, a verification error will be reported.</li><li>ANY: Verification passes if any InstanceType is available; otherwise, a verification error will be reported.</li><p>Common causes of InstanceTypes unavailable include the instance type sold out and the corresponding cloud disk sold out.<br>If a model in InstanceTypes does not exist or has been removed, a verification error will be reported regardless of the value of InstanceTypesCheckPolicy.</p>
                     * 
                     */
                    void SetInstanceTypesCheckPolicy(const std::string& _instanceTypesCheckPolicy);

                    /**
                     * 判断参数 InstanceTypesCheckPolicy 是否已赋值
                     * @return InstanceTypesCheckPolicy 是否已赋值
                     * 
                     */
                    bool InstanceTypesCheckPolicyHasBeenSet() const;

                    /**
                     * 获取<p>Tag list. By specifying this parameter, the instances added through scale-out can be bound to the tag. A maximum of 10 tags can be specified.</p>
                     * @return InstanceTags <p>Tag list. By specifying this parameter, the instances added through scale-out can be bound to the tag. A maximum of 10 tags can be specified.</p>
                     * 
                     */
                    std::vector<InstanceTag> GetInstanceTags() const;

                    /**
                     * 设置<p>Tag list. By specifying this parameter, the instances added through scale-out can be bound to the tag. A maximum of 10 tags can be specified.</p>
                     * @param _instanceTags <p>Tag list. By specifying this parameter, the instances added through scale-out can be bound to the tag. A maximum of 10 tags can be specified.</p>
                     * 
                     */
                    void SetInstanceTags(const std::vector<InstanceTag>& _instanceTags);

                    /**
                     * 判断参数 InstanceTags 是否已赋值
                     * @return InstanceTags 是否已赋值
                     * 
                     */
                    bool InstanceTagsHasBeenSet() const;

                    /**
                     * 获取<p>Tag description list. By specifying this parameter, you can bind tags to a launch configuration. Each launch configuration supports up to 30 tags.</p>
                     * @return Tags <p>Tag description list. By specifying this parameter, you can bind tags to a launch configuration. Each launch configuration supports up to 30 tags.</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>Tag description list. By specifying this parameter, you can bind tags to a launch configuration. Each launch configuration supports up to 30 tags.</p>
                     * @param _tags <p>Tag description list. By specifying this parameter, you can bind tags to a launch configuration. Each launch configuration supports up to 30 tags.</p>
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
                     * 获取<p>Related settings of the CVM host name (HostName).<br>Setting the host name for windows instances is unsupported.<br>When adding this attribute, you must pass the CVM host name. Other unspecified fields will be set to default values.<br>The host name (with the suffix added if it exists) is verified against a maximum length of 46 characters.</p>
                     * @return HostNameSettings <p>Related settings of the CVM host name (HostName).<br>Setting the host name for windows instances is unsupported.<br>When adding this attribute, you must pass the CVM host name. Other unspecified fields will be set to default values.<br>The host name (with the suffix added if it exists) is verified against a maximum length of 46 characters.</p>
                     * 
                     */
                    HostNameSettings GetHostNameSettings() const;

                    /**
                     * 设置<p>Related settings of the CVM host name (HostName).<br>Setting the host name for windows instances is unsupported.<br>When adding this attribute, you must pass the CVM host name. Other unspecified fields will be set to default values.<br>The host name (with the suffix added if it exists) is verified against a maximum length of 46 characters.</p>
                     * @param _hostNameSettings <p>Related settings of the CVM host name (HostName).<br>Setting the host name for windows instances is unsupported.<br>When adding this attribute, you must pass the CVM host name. Other unspecified fields will be set to default values.<br>The host name (with the suffix added if it exists) is verified against a maximum length of 46 characters.</p>
                     * 
                     */
                    void SetHostNameSettings(const HostNameSettings& _hostNameSettings);

                    /**
                     * 判断参数 HostNameSettings 是否已赋值
                     * @return HostNameSettings 是否已赋值
                     * 
                     */
                    bool HostNameSettingsHasBeenSet() const;

                    /**
                     * 获取<p>Related settings of CVM instance name (InstanceName).<br>If the user sets this field in the launch configuration, the InstanceName of instances created by the scaling group is set according to this field and transmitted to CVM. If the user does not set this field in the launch configuration, the InstanceName of instances created by the scaling group is set as "as-{{ scaling group AutoScalingGroupName }}" and transmitted to CVM.<br>When adding new this attribute, the instance name of the CVM must be transmitted. Other fields not transmitted will be set as default values.<br>It will verify whether the instance name (plus the suffix if it exists) exceeds the maximum length of 108 characters.</p>
                     * @return InstanceNameSettings <p>Related settings of CVM instance name (InstanceName).<br>If the user sets this field in the launch configuration, the InstanceName of instances created by the scaling group is set according to this field and transmitted to CVM. If the user does not set this field in the launch configuration, the InstanceName of instances created by the scaling group is set as "as-{{ scaling group AutoScalingGroupName }}" and transmitted to CVM.<br>When adding new this attribute, the instance name of the CVM must be transmitted. Other fields not transmitted will be set as default values.<br>It will verify whether the instance name (plus the suffix if it exists) exceeds the maximum length of 108 characters.</p>
                     * 
                     */
                    InstanceNameSettings GetInstanceNameSettings() const;

                    /**
                     * 设置<p>Related settings of CVM instance name (InstanceName).<br>If the user sets this field in the launch configuration, the InstanceName of instances created by the scaling group is set according to this field and transmitted to CVM. If the user does not set this field in the launch configuration, the InstanceName of instances created by the scaling group is set as "as-{{ scaling group AutoScalingGroupName }}" and transmitted to CVM.<br>When adding new this attribute, the instance name of the CVM must be transmitted. Other fields not transmitted will be set as default values.<br>It will verify whether the instance name (plus the suffix if it exists) exceeds the maximum length of 108 characters.</p>
                     * @param _instanceNameSettings <p>Related settings of CVM instance name (InstanceName).<br>If the user sets this field in the launch configuration, the InstanceName of instances created by the scaling group is set according to this field and transmitted to CVM. If the user does not set this field in the launch configuration, the InstanceName of instances created by the scaling group is set as "as-{{ scaling group AutoScalingGroupName }}" and transmitted to CVM.<br>When adding new this attribute, the instance name of the CVM must be transmitted. Other fields not transmitted will be set as default values.<br>It will verify whether the instance name (plus the suffix if it exists) exceeds the maximum length of 108 characters.</p>
                     * 
                     */
                    void SetInstanceNameSettings(const InstanceNameSettings& _instanceNameSettings);

                    /**
                     * 判断参数 InstanceNameSettings 是否已赋值
                     * @return InstanceNameSettings 是否已赋值
                     * 
                     */
                    bool InstanceNameSettingsHasBeenSet() const;

                    /**
                     * 获取<p>Prepaid mode, that is, parameter settings related to monthly/annual subscription. By specifying this parameter, you can specify the purchase duration of annual and monthly subscription instances, whether to enable auto-renewal, and other attributes. If the billing mode of the specified instance is prepaid, this parameter must be passed.</p>
                     * @return InstanceChargePrepaid <p>Prepaid mode, that is, parameter settings related to monthly/annual subscription. By specifying this parameter, you can specify the purchase duration of annual and monthly subscription instances, whether to enable auto-renewal, and other attributes. If the billing mode of the specified instance is prepaid, this parameter must be passed.</p>
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置<p>Prepaid mode, that is, parameter settings related to monthly/annual subscription. By specifying this parameter, you can specify the purchase duration of annual and monthly subscription instances, whether to enable auto-renewal, and other attributes. If the billing mode of the specified instance is prepaid, this parameter must be passed.</p>
                     * @param _instanceChargePrepaid <p>Prepaid mode, that is, parameter settings related to monthly/annual subscription. By specifying this parameter, you can specify the purchase duration of annual and monthly subscription instances, whether to enable auto-renewal, and other attributes. If the billing mode of the specified instance is prepaid, this parameter must be passed.</p>
                     * 
                     */
                    void SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid);

                    /**
                     * 判断参数 InstanceChargePrepaid 是否已赋值
                     * @return InstanceChargePrepaid 是否已赋值
                     * 
                     */
                    bool InstanceChargePrepaidHasBeenSet() const;

                    /**
                     * 获取<p>Cloud disk type selection policy. Default value: ORIGINAL. Value range:</p><li>ORIGINAL: use the set cloud disk type</li><li>AUTOMATIC: automatically select the currently available cloud disk type</li>
                     * @return DiskTypePolicy <p>Cloud disk type selection policy. Default value: ORIGINAL. Value range:</p><li>ORIGINAL: use the set cloud disk type</li><li>AUTOMATIC: automatically select the currently available cloud disk type</li>
                     * 
                     */
                    std::string GetDiskTypePolicy() const;

                    /**
                     * 设置<p>Cloud disk type selection policy. Default value: ORIGINAL. Value range:</p><li>ORIGINAL: use the set cloud disk type</li><li>AUTOMATIC: automatically select the currently available cloud disk type</li>
                     * @param _diskTypePolicy <p>Cloud disk type selection policy. Default value: ORIGINAL. Value range:</p><li>ORIGINAL: use the set cloud disk type</li><li>AUTOMATIC: automatically select the currently available cloud disk type</li>
                     * 
                     */
                    void SetDiskTypePolicy(const std::string& _diskTypePolicy);

                    /**
                     * 判断参数 DiskTypePolicy 是否已赋值
                     * @return DiskTypePolicy 是否已赋值
                     * 
                     */
                    bool DiskTypePolicyHasBeenSet() const;

                    /**
                     * 获取<p>Hyper Computing Cluster ID. This parameter is currently not supported on the international site.</p>
                     * @return HpcClusterId <p>Hyper Computing Cluster ID. This parameter is currently not supported on the international site.</p>
                     * 
                     */
                    std::string GetHpcClusterId() const;

                    /**
                     * 设置<p>Hyper Computing Cluster ID. This parameter is currently not supported on the international site.</p>
                     * @param _hpcClusterId <p>Hyper Computing Cluster ID. This parameter is currently not supported on the international site.</p>
                     * 
                     */
                    void SetHpcClusterId(const std::string& _hpcClusterId);

                    /**
                     * 判断参数 HpcClusterId 是否已赋值
                     * @return HpcClusterId 是否已赋值
                     * 
                     */
                    bool HpcClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>Public network bandwidth-related information settings for IPv6. If the new instance contains an IPv6 address, this parameter can allocate public network bandwidth to the IPv6 address of the new instance. When the Ipv6AddressCount parameter of the scaling group associated with the launch configuration is 0, this parameter will not take effect.</p>
                     * @return IPv6InternetAccessible <p>Public network bandwidth-related information settings for IPv6. If the new instance contains an IPv6 address, this parameter can allocate public network bandwidth to the IPv6 address of the new instance. When the Ipv6AddressCount parameter of the scaling group associated with the launch configuration is 0, this parameter will not take effect.</p>
                     * 
                     */
                    IPv6InternetAccessible GetIPv6InternetAccessible() const;

                    /**
                     * 设置<p>Public network bandwidth-related information settings for IPv6. If the new instance contains an IPv6 address, this parameter can allocate public network bandwidth to the IPv6 address of the new instance. When the Ipv6AddressCount parameter of the scaling group associated with the launch configuration is 0, this parameter will not take effect.</p>
                     * @param _iPv6InternetAccessible <p>Public network bandwidth-related information settings for IPv6. If the new instance contains an IPv6 address, this parameter can allocate public network bandwidth to the IPv6 address of the new instance. When the Ipv6AddressCount parameter of the scaling group associated with the launch configuration is 0, this parameter will not take effect.</p>
                     * 
                     */
                    void SetIPv6InternetAccessible(const IPv6InternetAccessible& _iPv6InternetAccessible);

                    /**
                     * 判断参数 IPv6InternetAccessible 是否已赋值
                     * @return IPv6InternetAccessible 是否已赋值
                     * 
                     */
                    bool IPv6InternetAccessibleHasBeenSet() const;

                    /**
                     * 获取<p>Placement Group id. Only one can be specified.</p>
                     * @return DisasterRecoverGroupIds <p>Placement Group id. Only one can be specified.</p>
                     * 
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置<p>Placement Group id. Only one can be specified.</p>
                     * @param _disasterRecoverGroupIds <p>Placement Group id. Only one can be specified.</p>
                     * 
                     */
                    void SetDisasterRecoverGroupIds(const std::vector<std::string>& _disasterRecoverGroupIds);

                    /**
                     * 判断参数 DisasterRecoverGroupIds 是否已赋值
                     * @return DisasterRecoverGroupIds 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupIdsHasBeenSet() const;

                    /**
                     * 获取<p>Image family name. Either image Id or image family name must be specified, and one and only one must be filled in. This parameter can be obtained through the <a href="https://www.tencentcloud.com/document/product/213/15715?from_cn_redirect=1">DescribeImages</a> API.</p>
                     * @return ImageFamily <p>Image family name. Either image Id or image family name must be specified, and one and only one must be filled in. This parameter can be obtained through the <a href="https://www.tencentcloud.com/document/product/213/15715?from_cn_redirect=1">DescribeImages</a> API.</p>
                     * 
                     */
                    std::string GetImageFamily() const;

                    /**
                     * 设置<p>Image family name. Either image Id or image family name must be specified, and one and only one must be filled in. This parameter can be obtained through the <a href="https://www.tencentcloud.com/document/product/213/15715?from_cn_redirect=1">DescribeImages</a> API.</p>
                     * @param _imageFamily <p>Image family name. Either image Id or image family name must be specified, and one and only one must be filled in. This parameter can be obtained through the <a href="https://www.tencentcloud.com/document/product/213/15715?from_cn_redirect=1">DescribeImages</a> API.</p>
                     * 
                     */
                    void SetImageFamily(const std::string& _imageFamily);

                    /**
                     * 判断参数 ImageFamily 是否已赋值
                     * @return ImageFamily 是否已赋值
                     * 
                     */
                    bool ImageFamilyHasBeenSet() const;

                    /**
                     * 获取<p>CDC ID. Obtain this parameter through the <a href="https://www.tencentcloud.com/document/product/1346/73758?from_cn_redirect=1">DescribeDedicatedClusters</a> API.</p>
                     * @return DedicatedClusterId <p>CDC ID. Obtain this parameter through the <a href="https://www.tencentcloud.com/document/product/1346/73758?from_cn_redirect=1">DescribeDedicatedClusters</a> API.</p>
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置<p>CDC ID. Obtain this parameter through the <a href="https://www.tencentcloud.com/document/product/1346/73758?from_cn_redirect=1">DescribeDedicatedClusters</a> API.</p>
                     * @param _dedicatedClusterId <p>CDC ID. Obtain this parameter through the <a href="https://www.tencentcloud.com/document/product/1346/73758?from_cn_redirect=1">DescribeDedicatedClusters</a> API.</p>
                     * 
                     */
                    void SetDedicatedClusterId(const std::string& _dedicatedClusterId);

                    /**
                     * 判断参数 DedicatedClusterId 是否已赋值
                     * @return DedicatedClusterId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>Custom metadata.</p>
                     * @return Metadata <p>Custom metadata.</p>
                     * 
                     */
                    Metadata GetMetadata() const;

                    /**
                     * 设置<p>Custom metadata.</p>
                     * @param _metadata <p>Custom metadata.</p>
                     * 
                     */
                    void SetMetadata(const Metadata& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                    /**
                     * 获取<p>Configure the elastic network interface for scale-out instances.</p><p>Input limits: up to 17 items. When configuring this parameter, you must explicitly include and can only include one PRIMARY. AS does not auto-complete the primary ENI. An explicitly empty array is illegal. Spot instances do not support this parameter.</p><p>The VPC and subnet are automatically injected by the scaling group based on the current candidate subnets. If not configured, they are not transmitted to CVM. The SecurityGroupIds parameter in the launch configuration is retained.</p>
                     * @return NetworkInterfaces <p>Configure the elastic network interface for scale-out instances.</p><p>Input limits: up to 17 items. When configuring this parameter, you must explicitly include and can only include one PRIMARY. AS does not auto-complete the primary ENI. An explicitly empty array is illegal. Spot instances do not support this parameter.</p><p>The VPC and subnet are automatically injected by the scaling group based on the current candidate subnets. If not configured, they are not transmitted to CVM. The SecurityGroupIds parameter in the launch configuration is retained.</p>
                     * 
                     */
                    std::vector<NetworkInterface> GetNetworkInterfaces() const;

                    /**
                     * 设置<p>Configure the elastic network interface for scale-out instances.</p><p>Input limits: up to 17 items. When configuring this parameter, you must explicitly include and can only include one PRIMARY. AS does not auto-complete the primary ENI. An explicitly empty array is illegal. Spot instances do not support this parameter.</p><p>The VPC and subnet are automatically injected by the scaling group based on the current candidate subnets. If not configured, they are not transmitted to CVM. The SecurityGroupIds parameter in the launch configuration is retained.</p>
                     * @param _networkInterfaces <p>Configure the elastic network interface for scale-out instances.</p><p>Input limits: up to 17 items. When configuring this parameter, you must explicitly include and can only include one PRIMARY. AS does not auto-complete the primary ENI. An explicitly empty array is illegal. Spot instances do not support this parameter.</p><p>The VPC and subnet are automatically injected by the scaling group based on the current candidate subnets. If not configured, they are not transmitted to CVM. The SecurityGroupIds parameter in the launch configuration is retained.</p>
                     * 
                     */
                    void SetNetworkInterfaces(const std::vector<NetworkInterface>& _networkInterfaces);

                    /**
                     * 判断参数 NetworkInterfaces 是否已赋值
                     * @return NetworkInterfaces 是否已赋值
                     * 
                     */
                    bool NetworkInterfacesHasBeenSet() const;

                private:

                    /**
                     * <p>Display name of the launch configuration. The name only supports Chinese, English, numbers, underscores, the separator "-", and decimal points. The maximum length cannot exceed 60 bytes.</p>
                     */
                    std::string m_launchConfigurationName;
                    bool m_launchConfigurationNameHasBeenSet;

                    /**
                     * <p>Specify a valid <a href="https://www.tencentcloud.com/document/product/213/4940?from_cn_redirect=1">image</a> ID, such as <code>img-8toqc6s3</code>. One and only one of image ID and image family name must be filled in. There are four image types:<br><li>Public image</li><li>Custom image</li><li>Shared image</li><li>Service market image</li><br>You can get available image IDs in the following ways:<br><li>You can query the image IDs of <code>public images</code>, <code>custom images</code>, and <code>shared images</code> by logging in to the <a href="https://console.cloud.tencent.com/cvm/image?rid=1&amp;imageType=PUBLIC_IMAGE">console</a>; query the image IDs in the <code>service image market</code> in <a href="https://market.cloud.tencent.com/list">Marketplace</a>.</li><li>Call the <a href="https://www.tencentcloud.com/document/api/213/15715?from_cn_redirect=1">DescribeImages</a> API and get the <code>ImageId</code> field in the returned information.</li></p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>The project ID of the launch configuration. Default value: 0, indicating the default project. Obtain this parameter by calling <a href="https://www.tencentcloud.com/document/api/651/78725?from_cn_redirect=1">DescribeProject</a> and using the projectId field in the return value.<br>Note: The project ID of instances within the scaling group is the scaling group project ID, irrelevant to the value here.</p>
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>Instance model. Different instance models specify different resource specifications. The specific values can be obtained by calling the <a href="https://www.tencentcloud.com/document/product/213/33254">DescribeZoneInstanceConfigInfos</a> API to get the latest specification table or refer to the <a href="https://www.tencentcloud.com/document/product/213/11518?from_cn_redirect=1">instance type</a> description.<br>The <code>InstanceType</code> and <code>InstanceTypes</code> parameters are mutually exclusive, and one and only one must be filled in.</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>Instance system disk configuration information. If not specified, it will be allocated based on system default values.</p>
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * <p>Instance data disk configuration information. If not specified, no data disks are purchased by default, and a maximum of 11 data disks can be specified.</p>
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * <p>Public network bandwidth-related information settings. If not specified, the public network bandwidth defaults to 0 Mbps.</p>
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * <p>Instance login settings. Through this parameter, you can set the instance's login method to password, key, or maintain the image's original login settings. By default, a password will be randomly generated, and the user will be notified through an internal message.</p>
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * <p>Security group to which an instance belongs. The value of this parameter can be obtained from the returned <code>SecurityGroupId</code> field of the <a href="https://www.tencentcloud.com/document/api/215/15808?from_cn_redirect=1">DescribeSecurityGroups</a> API. If this parameter is not specified, no security groups are associated by default.</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p>Enhancement services. This parameter can be used to specify whether to enable services such as Cloud Monitor and cloud security. If not specified, cloud monitoring and cloud security services are enabled by default.</p>
                     */
                    EnhancedService m_enhancedService;
                    bool m_enhancedServiceHasBeenSet;

                    /**
                     * <p>Custom data after Base64 encoding should not exceed 16KB.</p>
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * <p>Instance billing type. The default value of CVM is handled as POSTPAID_BY_HOUR.</p><li>POSTPAID_BY_HOUR: hourly postpaid</li><li>SPOTPAID: spot payment</li><li>PREPAID: prepayment, which is monthly subscription</li><li>CDCPAID: dedicated cluster payment</li>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>Market options of the instance, such as spot instance parameters. This parameter is required if the payment mode of the specified instance is spot payment.</p>
                     */
                    InstanceMarketOptionsRequest m_instanceMarketOptions;
                    bool m_instanceMarketOptionsHasBeenSet;

                    /**
                     * <p>Instance model list. Different instance models specify different resource specifications, and a maximum of 10 instance models are supported.<br>The <code>InstanceType</code> and <code>InstanceTypes</code> parameters are mutually exclusive. One and only one of them must be filled in. To obtain the specific values, call the API <a href="https://www.tencentcloud.com/document/product/213/33254">DescribeZoneInstanceConfigInfos</a> to get the latest specification table or see <a href="https://www.tencentcloud.com/document/product/213/11518?from_cn_redirect=1">Instance Specifications</a>.</p>
                     */
                    std::vector<std::string> m_instanceTypes;
                    bool m_instanceTypesHasBeenSet;

                    /**
                     * <p>CAM role name, which can be obtained from the roleName in the return value from the <a href="https://www.tencentcloud.com/document/product/598/36223?from_cn_redirect=1">DescribeRoleList</a> API.</p>
                     */
                    std::string m_camRoleName;
                    bool m_camRoleNameHasBeenSet;

                    /**
                     * <p>Instance type validation policy. Valid values include ALL and ANY. Default value: ANY. This parameter is valid only when InstanceTypes contains multiple models.</p><li>ALL: Verification passes if all InstanceTypes are available; otherwise, a verification error will be reported.</li><li>ANY: Verification passes if any InstanceType is available; otherwise, a verification error will be reported.</li><p>Common causes of InstanceTypes unavailable include the instance type sold out and the corresponding cloud disk sold out.<br>If a model in InstanceTypes does not exist or has been removed, a verification error will be reported regardless of the value of InstanceTypesCheckPolicy.</p>
                     */
                    std::string m_instanceTypesCheckPolicy;
                    bool m_instanceTypesCheckPolicyHasBeenSet;

                    /**
                     * <p>Tag list. By specifying this parameter, the instances added through scale-out can be bound to the tag. A maximum of 10 tags can be specified.</p>
                     */
                    std::vector<InstanceTag> m_instanceTags;
                    bool m_instanceTagsHasBeenSet;

                    /**
                     * <p>Tag description list. By specifying this parameter, you can bind tags to a launch configuration. Each launch configuration supports up to 30 tags.</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Related settings of the CVM host name (HostName).<br>Setting the host name for windows instances is unsupported.<br>When adding this attribute, you must pass the CVM host name. Other unspecified fields will be set to default values.<br>The host name (with the suffix added if it exists) is verified against a maximum length of 46 characters.</p>
                     */
                    HostNameSettings m_hostNameSettings;
                    bool m_hostNameSettingsHasBeenSet;

                    /**
                     * <p>Related settings of CVM instance name (InstanceName).<br>If the user sets this field in the launch configuration, the InstanceName of instances created by the scaling group is set according to this field and transmitted to CVM. If the user does not set this field in the launch configuration, the InstanceName of instances created by the scaling group is set as "as-{{ scaling group AutoScalingGroupName }}" and transmitted to CVM.<br>When adding new this attribute, the instance name of the CVM must be transmitted. Other fields not transmitted will be set as default values.<br>It will verify whether the instance name (plus the suffix if it exists) exceeds the maximum length of 108 characters.</p>
                     */
                    InstanceNameSettings m_instanceNameSettings;
                    bool m_instanceNameSettingsHasBeenSet;

                    /**
                     * <p>Prepaid mode, that is, parameter settings related to monthly/annual subscription. By specifying this parameter, you can specify the purchase duration of annual and monthly subscription instances, whether to enable auto-renewal, and other attributes. If the billing mode of the specified instance is prepaid, this parameter must be passed.</p>
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * <p>Cloud disk type selection policy. Default value: ORIGINAL. Value range:</p><li>ORIGINAL: use the set cloud disk type</li><li>AUTOMATIC: automatically select the currently available cloud disk type</li>
                     */
                    std::string m_diskTypePolicy;
                    bool m_diskTypePolicyHasBeenSet;

                    /**
                     * <p>Hyper Computing Cluster ID. This parameter is currently not supported on the international site.</p>
                     */
                    std::string m_hpcClusterId;
                    bool m_hpcClusterIdHasBeenSet;

                    /**
                     * <p>Public network bandwidth-related information settings for IPv6. If the new instance contains an IPv6 address, this parameter can allocate public network bandwidth to the IPv6 address of the new instance. When the Ipv6AddressCount parameter of the scaling group associated with the launch configuration is 0, this parameter will not take effect.</p>
                     */
                    IPv6InternetAccessible m_iPv6InternetAccessible;
                    bool m_iPv6InternetAccessibleHasBeenSet;

                    /**
                     * <p>Placement Group id. Only one can be specified.</p>
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                    /**
                     * <p>Image family name. Either image Id or image family name must be specified, and one and only one must be filled in. This parameter can be obtained through the <a href="https://www.tencentcloud.com/document/product/213/15715?from_cn_redirect=1">DescribeImages</a> API.</p>
                     */
                    std::string m_imageFamily;
                    bool m_imageFamilyHasBeenSet;

                    /**
                     * <p>CDC ID. Obtain this parameter through the <a href="https://www.tencentcloud.com/document/product/1346/73758?from_cn_redirect=1">DescribeDedicatedClusters</a> API.</p>
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                    /**
                     * <p>Custom metadata.</p>
                     */
                    Metadata m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * <p>Configure the elastic network interface for scale-out instances.</p><p>Input limits: up to 17 items. When configuring this parameter, you must explicitly include and can only include one PRIMARY. AS does not auto-complete the primary ENI. An explicitly empty array is illegal. Spot instances do not support this parameter.</p><p>The VPC and subnet are automatically injected by the scaling group based on the current candidate subnets. If not configured, they are not transmitted to CVM. The SecurityGroupIds parameter in the launch configuration is retained.</p>
                     */
                    std::vector<NetworkInterface> m_networkInterfaces;
                    bool m_networkInterfacesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_CREATELAUNCHCONFIGURATIONREQUEST_H_
