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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_MODIFYLAUNCHCONFIGURATIONATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_MODIFYLAUNCHCONFIGURATIONATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/InternetAccessible.h>
#include <tencentcloud/as/v20180419/model/InstanceChargePrepaid.h>
#include <tencentcloud/as/v20180419/model/InstanceMarketOptionsRequest.h>
#include <tencentcloud/as/v20180419/model/SystemDisk.h>
#include <tencentcloud/as/v20180419/model/DataDisk.h>
#include <tencentcloud/as/v20180419/model/HostNameSettings.h>
#include <tencentcloud/as/v20180419/model/InstanceNameSettings.h>
#include <tencentcloud/as/v20180419/model/EnhancedService.h>
#include <tencentcloud/as/v20180419/model/IPv6InternetAccessible.h>
#include <tencentcloud/as/v20180419/model/LoginSettings.h>
#include <tencentcloud/as/v20180419/model/InstanceTag.h>
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
                * ModifyLaunchConfigurationAttributes request structure.
                */
                class ModifyLaunchConfigurationAttributesRequest : public AbstractModel
                {
                public:
                    ModifyLaunchConfigurationAttributesRequest();
                    ~ModifyLaunchConfigurationAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Launch configuration ID. You can obtain it by logging in to the <a href="https://console.cloud.tencent.com/autoscaling/config">console</a> or calling the <a href="https://www.tencentcloud.com/document/api/377/20445?from_cn_redirect=1">DescribeLaunchConfigurations</a> API, and retrieving LaunchConfigurationId from the returned information.</p>
                     * @return LaunchConfigurationId <p>Launch configuration ID. You can obtain it by logging in to the <a href="https://console.cloud.tencent.com/autoscaling/config">console</a> or calling the <a href="https://www.tencentcloud.com/document/api/377/20445?from_cn_redirect=1">DescribeLaunchConfigurations</a> API, and retrieving LaunchConfigurationId from the returned information.</p>
                     * 
                     */
                    std::string GetLaunchConfigurationId() const;

                    /**
                     * 设置<p>Launch configuration ID. You can obtain it by logging in to the <a href="https://console.cloud.tencent.com/autoscaling/config">console</a> or calling the <a href="https://www.tencentcloud.com/document/api/377/20445?from_cn_redirect=1">DescribeLaunchConfigurations</a> API, and retrieving LaunchConfigurationId from the returned information.</p>
                     * @param _launchConfigurationId <p>Launch configuration ID. You can obtain it by logging in to the <a href="https://console.cloud.tencent.com/autoscaling/config">console</a> or calling the <a href="https://www.tencentcloud.com/document/api/377/20445?from_cn_redirect=1">DescribeLaunchConfigurations</a> API, and retrieving LaunchConfigurationId from the returned information.</p>
                     * 
                     */
                    void SetLaunchConfigurationId(const std::string& _launchConfigurationId);

                    /**
                     * 判断参数 LaunchConfigurationId 是否已赋值
                     * @return LaunchConfigurationId 是否已赋值
                     * 
                     */
                    bool LaunchConfigurationIdHasBeenSet() const;

                    /**
                     * 获取<p>Specify a valid <a href="https://www.tencentcloud.com/document/product/213/4940?from_cn_redirect=1">image</a> ID, such as <code>img-8toqc6s3</code>. There are four image types:<br><li>Public image</li><li>Custom image</li><li>Shared image</li><li>Service market image</li><br>You can obtain an available image ID in the following ways:<br><li>For <code>public images</code>, <code>custom images</code>, and <code>shared images</code>, query the image ID by logging in to the <a href="https://console.cloud.tencent.com/cvm/image?rid=1&amp;imageType=PUBLIC_IMAGE">console</a>. For <code>service market images</code>, query the image ID in the <a href="https://market.cloud.tencent.com/list">cloud market</a>.</li><li>Call the <a href="https://www.tencentcloud.com/document/api/213/15715?from_cn_redirect=1">DescribeImages</a> API and take the <code>ImageId</code> field from the returned information.</li></p>
                     * @return ImageId <p>Specify a valid <a href="https://www.tencentcloud.com/document/product/213/4940?from_cn_redirect=1">image</a> ID, such as <code>img-8toqc6s3</code>. There are four image types:<br><li>Public image</li><li>Custom image</li><li>Shared image</li><li>Service market image</li><br>You can obtain an available image ID in the following ways:<br><li>For <code>public images</code>, <code>custom images</code>, and <code>shared images</code>, query the image ID by logging in to the <a href="https://console.cloud.tencent.com/cvm/image?rid=1&amp;imageType=PUBLIC_IMAGE">console</a>. For <code>service market images</code>, query the image ID in the <a href="https://market.cloud.tencent.com/list">cloud market</a>.</li><li>Call the <a href="https://www.tencentcloud.com/document/api/213/15715?from_cn_redirect=1">DescribeImages</a> API and take the <code>ImageId</code> field from the returned information.</li></p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>Specify a valid <a href="https://www.tencentcloud.com/document/product/213/4940?from_cn_redirect=1">image</a> ID, such as <code>img-8toqc6s3</code>. There are four image types:<br><li>Public image</li><li>Custom image</li><li>Shared image</li><li>Service market image</li><br>You can obtain an available image ID in the following ways:<br><li>For <code>public images</code>, <code>custom images</code>, and <code>shared images</code>, query the image ID by logging in to the <a href="https://console.cloud.tencent.com/cvm/image?rid=1&amp;imageType=PUBLIC_IMAGE">console</a>. For <code>service market images</code>, query the image ID in the <a href="https://market.cloud.tencent.com/list">cloud market</a>.</li><li>Call the <a href="https://www.tencentcloud.com/document/api/213/15715?from_cn_redirect=1">DescribeImages</a> API and take the <code>ImageId</code> field from the returned information.</li></p>
                     * @param _imageId <p>Specify a valid <a href="https://www.tencentcloud.com/document/product/213/4940?from_cn_redirect=1">image</a> ID, such as <code>img-8toqc6s3</code>. There are four image types:<br><li>Public image</li><li>Custom image</li><li>Shared image</li><li>Service market image</li><br>You can obtain an available image ID in the following ways:<br><li>For <code>public images</code>, <code>custom images</code>, and <code>shared images</code>, query the image ID by logging in to the <a href="https://console.cloud.tencent.com/cvm/image?rid=1&amp;imageType=PUBLIC_IMAGE">console</a>. For <code>service market images</code>, query the image ID in the <a href="https://market.cloud.tencent.com/list">cloud market</a>.</li><li>Call the <a href="https://www.tencentcloud.com/document/api/213/15715?from_cn_redirect=1">DescribeImages</a> API and take the <code>ImageId</code> field from the returned information.</li></p>
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
                     * 获取<p>Types of CVM instances. Different instance models specify different resource specifications, and a maximum of 10 instance models are supported.<br>InstanceType specifies a single instance type. By setting InstanceTypes, you can specify multiple instance types and invalidate the original InstanceType. Specific values can be obtained by calling the API <a href="https://www.tencentcloud.com/document/api/213/15749?from_cn_redirect=1">DescribeInstanceTypeConfigs</a> to obtain the latest specification table or see <a href="https://www.tencentcloud.com/document/product/213/11518?from_cn_redirect=1">Instance Specifications</a>.</p>
                     * @return InstanceTypes <p>Types of CVM instances. Different instance models specify different resource specifications, and a maximum of 10 instance models are supported.<br>InstanceType specifies a single instance type. By setting InstanceTypes, you can specify multiple instance types and invalidate the original InstanceType. Specific values can be obtained by calling the API <a href="https://www.tencentcloud.com/document/api/213/15749?from_cn_redirect=1">DescribeInstanceTypeConfigs</a> to obtain the latest specification table or see <a href="https://www.tencentcloud.com/document/product/213/11518?from_cn_redirect=1">Instance Specifications</a>.</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceTypes() const;

                    /**
                     * 设置<p>Types of CVM instances. Different instance models specify different resource specifications, and a maximum of 10 instance models are supported.<br>InstanceType specifies a single instance type. By setting InstanceTypes, you can specify multiple instance types and invalidate the original InstanceType. Specific values can be obtained by calling the API <a href="https://www.tencentcloud.com/document/api/213/15749?from_cn_redirect=1">DescribeInstanceTypeConfigs</a> to obtain the latest specification table or see <a href="https://www.tencentcloud.com/document/product/213/11518?from_cn_redirect=1">Instance Specifications</a>.</p>
                     * @param _instanceTypes <p>Types of CVM instances. Different instance models specify different resource specifications, and a maximum of 10 instance models are supported.<br>InstanceType specifies a single instance type. By setting InstanceTypes, you can specify multiple instance types and invalidate the original InstanceType. Specific values can be obtained by calling the API <a href="https://www.tencentcloud.com/document/api/213/15749?from_cn_redirect=1">DescribeInstanceTypeConfigs</a> to obtain the latest specification table or see <a href="https://www.tencentcloud.com/document/product/213/11518?from_cn_redirect=1">Instance Specifications</a>.</p>
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
                     * 获取<p>Instance type validation policy, effective during actual modification of InstanceTypes. Valid values include ALL and ANY, default value: ANY.</p><li>ALL: Verification passes if all InstanceTypes are available; otherwise, a verification error will be reported.</li> <li>ANY: Verification passes if any InstanceType is available; otherwise, a verification error will be reported.</li> Common causes of InstanceTypes unavailable include InstanceType sold out, corresponding cloud disk sold out. If a model in InstanceTypes does not exist or has been removed, a verification error will be reported regardless of the value of InstanceTypesCheckPolicy.
                     * @return InstanceTypesCheckPolicy <p>Instance type validation policy, effective during actual modification of InstanceTypes. Valid values include ALL and ANY, default value: ANY.</p><li>ALL: Verification passes if all InstanceTypes are available; otherwise, a verification error will be reported.</li> <li>ANY: Verification passes if any InstanceType is available; otherwise, a verification error will be reported.</li> Common causes of InstanceTypes unavailable include InstanceType sold out, corresponding cloud disk sold out. If a model in InstanceTypes does not exist or has been removed, a verification error will be reported regardless of the value of InstanceTypesCheckPolicy.
                     * 
                     */
                    std::string GetInstanceTypesCheckPolicy() const;

                    /**
                     * 设置<p>Instance type validation policy, effective during actual modification of InstanceTypes. Valid values include ALL and ANY, default value: ANY.</p><li>ALL: Verification passes if all InstanceTypes are available; otherwise, a verification error will be reported.</li> <li>ANY: Verification passes if any InstanceType is available; otherwise, a verification error will be reported.</li> Common causes of InstanceTypes unavailable include InstanceType sold out, corresponding cloud disk sold out. If a model in InstanceTypes does not exist or has been removed, a verification error will be reported regardless of the value of InstanceTypesCheckPolicy.
                     * @param _instanceTypesCheckPolicy <p>Instance type validation policy, effective during actual modification of InstanceTypes. Valid values include ALL and ANY, default value: ANY.</p><li>ALL: Verification passes if all InstanceTypes are available; otherwise, a verification error will be reported.</li> <li>ANY: Verification passes if any InstanceType is available; otherwise, a verification error will be reported.</li> Common causes of InstanceTypes unavailable include InstanceType sold out, corresponding cloud disk sold out. If a model in InstanceTypes does not exist or has been removed, a verification error will be reported regardless of the value of InstanceTypesCheckPolicy.
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
                     * 获取<p>Display name of the launch configuration. The name only supports Chinese, English, numbers, underscores, separator "-", and decimal points. The maximum length cannot exceed 60 bytes.</p>
                     * @return LaunchConfigurationName <p>Display name of the launch configuration. The name only supports Chinese, English, numbers, underscores, separator "-", and decimal points. The maximum length cannot exceed 60 bytes.</p>
                     * 
                     */
                    std::string GetLaunchConfigurationName() const;

                    /**
                     * 设置<p>Display name of the launch configuration. The name only supports Chinese, English, numbers, underscores, separator "-", and decimal points. The maximum length cannot exceed 60 bytes.</p>
                     * @param _launchConfigurationName <p>Display name of the launch configuration. The name only supports Chinese, English, numbers, underscores, separator "-", and decimal points. The maximum length cannot exceed 60 bytes.</p>
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
                     * 获取<p>The custom data after Base64 encoding should not exceed 16 KB. To clear UserData, assign it an empty string.</p>
                     * @return UserData <p>The custom data after Base64 encoding should not exceed 16 KB. To clear UserData, assign it an empty string.</p>
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置<p>The custom data after Base64 encoding should not exceed 16 KB. To clear UserData, assign it an empty string.</p>
                     * @param _userData <p>The custom data after Base64 encoding should not exceed 16 KB. To clear UserData, assign it an empty string.</p>
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
                     * 获取<p>Security group to which the instance belongs. You can obtain this parameter by calling the <a href="https://www.tencentcloud.com/document/api/215/15808?from_cn_redirect=1">DescribeSecurityGroups</a> API and getting the <code>SecurityGroupId</code> field in the return value.<br>If you specify this parameter, provide at least one security group, and the list order is sequential.</p>
                     * @return SecurityGroupIds <p>Security group to which the instance belongs. You can obtain this parameter by calling the <a href="https://www.tencentcloud.com/document/api/215/15808?from_cn_redirect=1">DescribeSecurityGroups</a> API and getting the <code>SecurityGroupId</code> field in the return value.<br>If you specify this parameter, provide at least one security group, and the list order is sequential.</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>Security group to which the instance belongs. You can obtain this parameter by calling the <a href="https://www.tencentcloud.com/document/api/215/15808?from_cn_redirect=1">DescribeSecurityGroups</a> API and getting the <code>SecurityGroupId</code> field in the return value.<br>If you specify this parameter, provide at least one security group, and the list order is sequential.</p>
                     * @param _securityGroupIds <p>Security group to which the instance belongs. You can obtain this parameter by calling the <a href="https://www.tencentcloud.com/document/api/215/15808?from_cn_redirect=1">DescribeSecurityGroups</a> API and getting the <code>SecurityGroupId</code> field in the return value.<br>If you specify this parameter, provide at least one security group, and the list order is sequential.</p>
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
                     * 获取<p>Public network bandwidth-related information settings.<br>When the public network outbound bandwidth cap is 0 Mbps, it cannot be modified to enable assigning public IP. Accordingly, when assigning public IP is currently enabled, the modified public network outbound bandwidth cap must be greater than 0 Mbps.</p>
                     * @return InternetAccessible <p>Public network bandwidth-related information settings.<br>When the public network outbound bandwidth cap is 0 Mbps, it cannot be modified to enable assigning public IP. Accordingly, when assigning public IP is currently enabled, the modified public network outbound bandwidth cap must be greater than 0 Mbps.</p>
                     * 
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置<p>Public network bandwidth-related information settings.<br>When the public network outbound bandwidth cap is 0 Mbps, it cannot be modified to enable assigning public IP. Accordingly, when assigning public IP is currently enabled, the modified public network outbound bandwidth cap must be greater than 0 Mbps.</p>
                     * @param _internetAccessible <p>Public network bandwidth-related information settings.<br>When the public network outbound bandwidth cap is 0 Mbps, it cannot be modified to enable assigning public IP. Accordingly, when assigning public IP is currently enabled, the modified public network outbound bandwidth cap must be greater than 0 Mbps.</p>
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
                     * 获取<p>Instance billing type. Valid values:</p><li>POSTPAID_BY_HOUR: hourly postpaid</li><li>SPOTPAID: spot payment</li><li>PREPAID: prepaid, which is a Monthly Subscription</li><li>CDCPAID: dedicated cluster payment</li>
                     * @return InstanceChargeType <p>Instance billing type. Valid values:</p><li>POSTPAID_BY_HOUR: hourly postpaid</li><li>SPOTPAID: spot payment</li><li>PREPAID: prepaid, which is a Monthly Subscription</li><li>CDCPAID: dedicated cluster payment</li>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>Instance billing type. Valid values:</p><li>POSTPAID_BY_HOUR: hourly postpaid</li><li>SPOTPAID: spot payment</li><li>PREPAID: prepaid, which is a Monthly Subscription</li><li>CDCPAID: dedicated cluster payment</li>
                     * @param _instanceChargeType <p>Instance billing type. Valid values:</p><li>POSTPAID_BY_HOUR: hourly postpaid</li><li>SPOTPAID: spot payment</li><li>PREPAID: prepaid, which is a Monthly Subscription</li><li>CDCPAID: dedicated cluster payment</li>
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
                     * 获取<p>Prepaid mode, that is, parameter settings related to monthly/annual subscription. By specifying this parameter, you can set attributes such as the duration of instance purchase and whether to enable auto-renewal.<br>If you change the payment mode of an instance to prepaid, this parameter is required. When changing from prepaid to other payment modes, the original info in this field is automatically discarded.<br>When adding this field, you must specify the duration of instance purchase. Other fields not specified will be set to default values.<br>When modifying this field, the current payment mode must be prepaid.</p>
                     * @return InstanceChargePrepaid <p>Prepaid mode, that is, parameter settings related to monthly/annual subscription. By specifying this parameter, you can set attributes such as the duration of instance purchase and whether to enable auto-renewal.<br>If you change the payment mode of an instance to prepaid, this parameter is required. When changing from prepaid to other payment modes, the original info in this field is automatically discarded.<br>When adding this field, you must specify the duration of instance purchase. Other fields not specified will be set to default values.<br>When modifying this field, the current payment mode must be prepaid.</p>
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置<p>Prepaid mode, that is, parameter settings related to monthly/annual subscription. By specifying this parameter, you can set attributes such as the duration of instance purchase and whether to enable auto-renewal.<br>If you change the payment mode of an instance to prepaid, this parameter is required. When changing from prepaid to other payment modes, the original info in this field is automatically discarded.<br>When adding this field, you must specify the duration of instance purchase. Other fields not specified will be set to default values.<br>When modifying this field, the current payment mode must be prepaid.</p>
                     * @param _instanceChargePrepaid <p>Prepaid mode, that is, parameter settings related to monthly/annual subscription. By specifying this parameter, you can set attributes such as the duration of instance purchase and whether to enable auto-renewal.<br>If you change the payment mode of an instance to prepaid, this parameter is required. When changing from prepaid to other payment modes, the original info in this field is automatically discarded.<br>When adding this field, you must specify the duration of instance purchase. Other fields not specified will be set to default values.<br>When modifying this field, the current payment mode must be prepaid.</p>
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
                     * 获取<p>Market-related options of the instance, such as bidding instance parameters.<br>If you change the payment mode of the instance to spot payment, this parameter is required. When changing from spot payment to other payment modes, the original info in this field is automatically discarded.<br>When adding this field, you must transmit the bid price under relevant spot options. Other fields not transmitted will be set as default.<br>When modifying this field, the current payment mode must be spot payment.</p>
                     * @return InstanceMarketOptions <p>Market-related options of the instance, such as bidding instance parameters.<br>If you change the payment mode of the instance to spot payment, this parameter is required. When changing from spot payment to other payment modes, the original info in this field is automatically discarded.<br>When adding this field, you must transmit the bid price under relevant spot options. Other fields not transmitted will be set as default.<br>When modifying this field, the current payment mode must be spot payment.</p>
                     * 
                     */
                    InstanceMarketOptionsRequest GetInstanceMarketOptions() const;

                    /**
                     * 设置<p>Market-related options of the instance, such as bidding instance parameters.<br>If you change the payment mode of the instance to spot payment, this parameter is required. When changing from spot payment to other payment modes, the original info in this field is automatically discarded.<br>When adding this field, you must transmit the bid price under relevant spot options. Other fields not transmitted will be set as default.<br>When modifying this field, the current payment mode must be spot payment.</p>
                     * @param _instanceMarketOptions <p>Market-related options of the instance, such as bidding instance parameters.<br>If you change the payment mode of the instance to spot payment, this parameter is required. When changing from spot payment to other payment modes, the original info in this field is automatically discarded.<br>When adding this field, you must transmit the bid price under relevant spot options. Other fields not transmitted will be set as default.<br>When modifying this field, the current payment mode must be spot payment.</p>
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
                     * 获取<p>Cloud disk type selection policy. Value range:</p><li>ORIGINAL: use the set cloud disk type.</li><li>AUTOMATIC: automatically select the currently available cloud disk type.</li>
                     * @return DiskTypePolicy <p>Cloud disk type selection policy. Value range:</p><li>ORIGINAL: use the set cloud disk type.</li><li>AUTOMATIC: automatically select the currently available cloud disk type.</li>
                     * 
                     */
                    std::string GetDiskTypePolicy() const;

                    /**
                     * 设置<p>Cloud disk type selection policy. Value range:</p><li>ORIGINAL: use the set cloud disk type.</li><li>AUTOMATIC: automatically select the currently available cloud disk type.</li>
                     * @param _diskTypePolicy <p>Cloud disk type selection policy. Value range:</p><li>ORIGINAL: use the set cloud disk type.</li><li>AUTOMATIC: automatically select the currently available cloud disk type.</li>
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
                     * 获取<p>Instance system disk configuration information.</p>
                     * @return SystemDisk <p>Instance system disk configuration information.</p>
                     * 
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置<p>Instance system disk configuration information.</p>
                     * @param _systemDisk <p>Instance system disk configuration information.</p>
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
                     * 获取<p>Instance data disk configuration information.<br>Supports up to 11 data disks. Apply the modification as a whole, so provide all values after modification.<br>The data disk type is consistent with the system disk type by default.</p>
                     * @return DataDisks <p>Instance data disk configuration information.<br>Supports up to 11 data disks. Apply the modification as a whole, so provide all values after modification.<br>The data disk type is consistent with the system disk type by default.</p>
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置<p>Instance data disk configuration information.<br>Supports up to 11 data disks. Apply the modification as a whole, so provide all values after modification.<br>The data disk type is consistent with the system disk type by default.</p>
                     * @param _dataDisks <p>Instance data disk configuration information.<br>Supports up to 11 data disks. Apply the modification as a whole, so provide all values after modification.<br>The data disk type is consistent with the system disk type by default.</p>
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
                     * 获取<p>Settings for the CVM host name.<br>Configuring the host name for windows instances is not supported.<br>When adding this attribute, you must transmit the CVM host name. Other fields not transmitted will be set to default values.<br>The host name (with the suffix added if it exists) is verified to check whether it exceeds the maximum length of 46 characters.</p>
                     * @return HostNameSettings <p>Settings for the CVM host name.<br>Configuring the host name for windows instances is not supported.<br>When adding this attribute, you must transmit the CVM host name. Other fields not transmitted will be set to default values.<br>The host name (with the suffix added if it exists) is verified to check whether it exceeds the maximum length of 46 characters.</p>
                     * 
                     */
                    HostNameSettings GetHostNameSettings() const;

                    /**
                     * 设置<p>Settings for the CVM host name.<br>Configuring the host name for windows instances is not supported.<br>When adding this attribute, you must transmit the CVM host name. Other fields not transmitted will be set to default values.<br>The host name (with the suffix added if it exists) is verified to check whether it exceeds the maximum length of 46 characters.</p>
                     * @param _hostNameSettings <p>Settings for the CVM host name.<br>Configuring the host name for windows instances is not supported.<br>When adding this attribute, you must transmit the CVM host name. Other fields not transmitted will be set to default values.<br>The host name (with the suffix added if it exists) is verified to check whether it exceeds the maximum length of 46 characters.</p>
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
                     * 获取<p>Settings related to the CVM instance name (InstanceName).<br>If the user sets this field in the launch configuration, the InstanceName of instances created by the scaling group will be set according to this field and transmitted to CVM. If the user does not set this field in the launch configuration, the InstanceName of instances created by the scaling group will be set as "as-{{ AutoScalingGroupName }}" and transmitted to CVM.<br>When adding this attribute, the CVM instance name must be transmitted. Other fields not transmitted will be set to default values.<br>It will verify whether the instance name (with the suffix added if it exists) exceeds the maximum length of 108 characters.</p>
                     * @return InstanceNameSettings <p>Settings related to the CVM instance name (InstanceName).<br>If the user sets this field in the launch configuration, the InstanceName of instances created by the scaling group will be set according to this field and transmitted to CVM. If the user does not set this field in the launch configuration, the InstanceName of instances created by the scaling group will be set as "as-{{ AutoScalingGroupName }}" and transmitted to CVM.<br>When adding this attribute, the CVM instance name must be transmitted. Other fields not transmitted will be set to default values.<br>It will verify whether the instance name (with the suffix added if it exists) exceeds the maximum length of 108 characters.</p>
                     * 
                     */
                    InstanceNameSettings GetInstanceNameSettings() const;

                    /**
                     * 设置<p>Settings related to the CVM instance name (InstanceName).<br>If the user sets this field in the launch configuration, the InstanceName of instances created by the scaling group will be set according to this field and transmitted to CVM. If the user does not set this field in the launch configuration, the InstanceName of instances created by the scaling group will be set as "as-{{ AutoScalingGroupName }}" and transmitted to CVM.<br>When adding this attribute, the CVM instance name must be transmitted. Other fields not transmitted will be set to default values.<br>It will verify whether the instance name (with the suffix added if it exists) exceeds the maximum length of 108 characters.</p>
                     * @param _instanceNameSettings <p>Settings related to the CVM instance name (InstanceName).<br>If the user sets this field in the launch configuration, the InstanceName of instances created by the scaling group will be set according to this field and transmitted to CVM. If the user does not set this field in the launch configuration, the InstanceName of instances created by the scaling group will be set as "as-{{ AutoScalingGroupName }}" and transmitted to CVM.<br>When adding this attribute, the CVM instance name must be transmitted. Other fields not transmitted will be set to default values.<br>It will verify whether the instance name (with the suffix added if it exists) exceeds the maximum length of 108 characters.</p>
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
                     * 获取<p>Enhanced service. This parameter can be used to specify whether to enable services such as cloud security and Cloud Monitor.</p>
                     * @return EnhancedService <p>Enhanced service. This parameter can be used to specify whether to enable services such as cloud security and Cloud Monitor.</p>
                     * 
                     */
                    EnhancedService GetEnhancedService() const;

                    /**
                     * 设置<p>Enhanced service. This parameter can be used to specify whether to enable services such as cloud security and Cloud Monitor.</p>
                     * @param _enhancedService <p>Enhanced service. This parameter can be used to specify whether to enable services such as cloud security and Cloud Monitor.</p>
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
                     * 获取<p>Hyper Computing Cluster ID. You can obtain this parameter by calling the <a href="https://www.tencentcloud.com/document/product/213/83220?from_cn_redirect=1">DescribeHpcClusters</a> API.<br>Note: This field is empty by default.</p>
                     * @return HpcClusterId <p>Hyper Computing Cluster ID. You can obtain this parameter by calling the <a href="https://www.tencentcloud.com/document/product/213/83220?from_cn_redirect=1">DescribeHpcClusters</a> API.<br>Note: This field is empty by default.</p>
                     * 
                     */
                    std::string GetHpcClusterId() const;

                    /**
                     * 设置<p>Hyper Computing Cluster ID. You can obtain this parameter by calling the <a href="https://www.tencentcloud.com/document/product/213/83220?from_cn_redirect=1">DescribeHpcClusters</a> API.<br>Note: This field is empty by default.</p>
                     * @param _hpcClusterId <p>Hyper Computing Cluster ID. You can obtain this parameter by calling the <a href="https://www.tencentcloud.com/document/product/213/83220?from_cn_redirect=1">DescribeHpcClusters</a> API.<br>Note: This field is empty by default.</p>
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
                     * 获取<p>IPv6 public network bandwidth-related information settings. If the new instance includes an IPv6 address, this parameter can allocate public network bandwidth for the IPv6 address of the new instance. When the Ipv6AddressCount parameter of the scaling group associated with the launch configuration is 0, this parameter will not take effect.</p>
                     * @return IPv6InternetAccessible <p>IPv6 public network bandwidth-related information settings. If the new instance includes an IPv6 address, this parameter can allocate public network bandwidth for the IPv6 address of the new instance. When the Ipv6AddressCount parameter of the scaling group associated with the launch configuration is 0, this parameter will not take effect.</p>
                     * 
                     */
                    IPv6InternetAccessible GetIPv6InternetAccessible() const;

                    /**
                     * 设置<p>IPv6 public network bandwidth-related information settings. If the new instance includes an IPv6 address, this parameter can allocate public network bandwidth for the IPv6 address of the new instance. When the Ipv6AddressCount parameter of the scaling group associated with the launch configuration is 0, this parameter will not take effect.</p>
                     * @param _iPv6InternetAccessible <p>IPv6 public network bandwidth-related information settings. If the new instance includes an IPv6 address, this parameter can allocate public network bandwidth for the IPv6 address of the new instance. When the Ipv6AddressCount parameter of the scaling group associated with the launch configuration is 0, this parameter will not take effect.</p>
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
                     * 获取<p>Placement Group id. Only one can be specified. You can obtain this parameter by calling the <a href="https://www.tencentcloud.com/document/product/213/17810?from_cn_redirect=1">DescribeDisasterRecoverGroups</a> API.</p>
                     * @return DisasterRecoverGroupIds <p>Placement Group id. Only one can be specified. You can obtain this parameter by calling the <a href="https://www.tencentcloud.com/document/product/213/17810?from_cn_redirect=1">DescribeDisasterRecoverGroups</a> API.</p>
                     * 
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置<p>Placement Group id. Only one can be specified. You can obtain this parameter by calling the <a href="https://www.tencentcloud.com/document/product/213/17810?from_cn_redirect=1">DescribeDisasterRecoverGroups</a> API.</p>
                     * @param _disasterRecoverGroupIds <p>Placement Group id. Only one can be specified. You can obtain this parameter by calling the <a href="https://www.tencentcloud.com/document/product/213/17810?from_cn_redirect=1">DescribeDisasterRecoverGroups</a> API.</p>
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
                     * 获取<p>Instance login settings, including passwords, keys, or maintaining the image's original login settings.<br>Please note that specifying new login settings overwrites existing login settings. For example, if you previously used a password to login, use this parameter to change login settings to a key, and the original password is removed.</p>
                     * @return LoginSettings <p>Instance login settings, including passwords, keys, or maintaining the image's original login settings.<br>Please note that specifying new login settings overwrites existing login settings. For example, if you previously used a password to login, use this parameter to change login settings to a key, and the original password is removed.</p>
                     * 
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置<p>Instance login settings, including passwords, keys, or maintaining the image's original login settings.<br>Please note that specifying new login settings overwrites existing login settings. For example, if you previously used a password to login, use this parameter to change login settings to a key, and the original password is removed.</p>
                     * @param _loginSettings <p>Instance login settings, including passwords, keys, or maintaining the image's original login settings.<br>Please note that specifying new login settings overwrites existing login settings. For example, if you previously used a password to login, use this parameter to change login settings to a key, and the original password is removed.</p>
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
                     * 获取<p>Instance tag list. By specifying this parameter, the instances added through scale-out can be bound to the tag. Up to 10 Tags can be specified.<br>This parameter overrides the original instance tag list. To add a tag, import both the new tag and the original tags.</p>
                     * @return InstanceTags <p>Instance tag list. By specifying this parameter, the instances added through scale-out can be bound to the tag. Up to 10 Tags can be specified.<br>This parameter overrides the original instance tag list. To add a tag, import both the new tag and the original tags.</p>
                     * 
                     */
                    std::vector<InstanceTag> GetInstanceTags() const;

                    /**
                     * 设置<p>Instance tag list. By specifying this parameter, the instances added through scale-out can be bound to the tag. Up to 10 Tags can be specified.<br>This parameter overrides the original instance tag list. To add a tag, import both the new tag and the original tags.</p>
                     * @param _instanceTags <p>Instance tag list. By specifying this parameter, the instances added through scale-out can be bound to the tag. Up to 10 Tags can be specified.<br>This parameter overrides the original instance tag list. To add a tag, import both the new tag and the original tags.</p>
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
                     * 获取<p>Image family name. You can obtain this parameter by calling the <a href="https://www.tencentcloud.com/document/product/213/15715?from_cn_redirect=1">DescribeImages</a> API.</p>
                     * @return ImageFamily <p>Image family name. You can obtain this parameter by calling the <a href="https://www.tencentcloud.com/document/product/213/15715?from_cn_redirect=1">DescribeImages</a> API.</p>
                     * 
                     */
                    std::string GetImageFamily() const;

                    /**
                     * 设置<p>Image family name. You can obtain this parameter by calling the <a href="https://www.tencentcloud.com/document/product/213/15715?from_cn_redirect=1">DescribeImages</a> API.</p>
                     * @param _imageFamily <p>Image family name. You can obtain this parameter by calling the <a href="https://www.tencentcloud.com/document/product/213/15715?from_cn_redirect=1">DescribeImages</a> API.</p>
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
                     * 获取<p>Local exclusive cluster ID.</p>
                     * @return DedicatedClusterId <p>Local exclusive cluster ID.</p>
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置<p>Local exclusive cluster ID.</p>
                     * @param _dedicatedClusterId <p>Local exclusive cluster ID.</p>
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
                     * 获取<p>Replace the ENI configuration in the launch configuration.</p><p>Input limits: up to 17 items; must explicitly include and can only contain one PRIMARY. AS does not auto-complete the primary ENI. An explicit empty array is illegal.</p><p>Field rules match CreateLaunchConfiguration. To clean up, call ClearLaunchConfigurationAttributes with ClearNetworkInterfaces=true.</p>
                     * @return NetworkInterfaces <p>Replace the ENI configuration in the launch configuration.</p><p>Input limits: up to 17 items; must explicitly include and can only contain one PRIMARY. AS does not auto-complete the primary ENI. An explicit empty array is illegal.</p><p>Field rules match CreateLaunchConfiguration. To clean up, call ClearLaunchConfigurationAttributes with ClearNetworkInterfaces=true.</p>
                     * 
                     */
                    std::vector<NetworkInterface> GetNetworkInterfaces() const;

                    /**
                     * 设置<p>Replace the ENI configuration in the launch configuration.</p><p>Input limits: up to 17 items; must explicitly include and can only contain one PRIMARY. AS does not auto-complete the primary ENI. An explicit empty array is illegal.</p><p>Field rules match CreateLaunchConfiguration. To clean up, call ClearLaunchConfigurationAttributes with ClearNetworkInterfaces=true.</p>
                     * @param _networkInterfaces <p>Replace the ENI configuration in the launch configuration.</p><p>Input limits: up to 17 items; must explicitly include and can only contain one PRIMARY. AS does not auto-complete the primary ENI. An explicit empty array is illegal.</p><p>Field rules match CreateLaunchConfiguration. To clean up, call ClearLaunchConfigurationAttributes with ClearNetworkInterfaces=true.</p>
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
                     * <p>Launch configuration ID. You can obtain it by logging in to the <a href="https://console.cloud.tencent.com/autoscaling/config">console</a> or calling the <a href="https://www.tencentcloud.com/document/api/377/20445?from_cn_redirect=1">DescribeLaunchConfigurations</a> API, and retrieving LaunchConfigurationId from the returned information.</p>
                     */
                    std::string m_launchConfigurationId;
                    bool m_launchConfigurationIdHasBeenSet;

                    /**
                     * <p>Specify a valid <a href="https://www.tencentcloud.com/document/product/213/4940?from_cn_redirect=1">image</a> ID, such as <code>img-8toqc6s3</code>. There are four image types:<br><li>Public image</li><li>Custom image</li><li>Shared image</li><li>Service market image</li><br>You can obtain an available image ID in the following ways:<br><li>For <code>public images</code>, <code>custom images</code>, and <code>shared images</code>, query the image ID by logging in to the <a href="https://console.cloud.tencent.com/cvm/image?rid=1&amp;imageType=PUBLIC_IMAGE">console</a>. For <code>service market images</code>, query the image ID in the <a href="https://market.cloud.tencent.com/list">cloud market</a>.</li><li>Call the <a href="https://www.tencentcloud.com/document/api/213/15715?from_cn_redirect=1">DescribeImages</a> API and take the <code>ImageId</code> field from the returned information.</li></p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>Types of CVM instances. Different instance models specify different resource specifications, and a maximum of 10 instance models are supported.<br>InstanceType specifies a single instance type. By setting InstanceTypes, you can specify multiple instance types and invalidate the original InstanceType. Specific values can be obtained by calling the API <a href="https://www.tencentcloud.com/document/api/213/15749?from_cn_redirect=1">DescribeInstanceTypeConfigs</a> to obtain the latest specification table or see <a href="https://www.tencentcloud.com/document/product/213/11518?from_cn_redirect=1">Instance Specifications</a>.</p>
                     */
                    std::vector<std::string> m_instanceTypes;
                    bool m_instanceTypesHasBeenSet;

                    /**
                     * <p>Instance type validation policy, effective during actual modification of InstanceTypes. Valid values include ALL and ANY, default value: ANY.</p><li>ALL: Verification passes if all InstanceTypes are available; otherwise, a verification error will be reported.</li> <li>ANY: Verification passes if any InstanceType is available; otherwise, a verification error will be reported.</li> Common causes of InstanceTypes unavailable include InstanceType sold out, corresponding cloud disk sold out. If a model in InstanceTypes does not exist or has been removed, a verification error will be reported regardless of the value of InstanceTypesCheckPolicy.
                     */
                    std::string m_instanceTypesCheckPolicy;
                    bool m_instanceTypesCheckPolicyHasBeenSet;

                    /**
                     * <p>Display name of the launch configuration. The name only supports Chinese, English, numbers, underscores, separator "-", and decimal points. The maximum length cannot exceed 60 bytes.</p>
                     */
                    std::string m_launchConfigurationName;
                    bool m_launchConfigurationNameHasBeenSet;

                    /**
                     * <p>The custom data after Base64 encoding should not exceed 16 KB. To clear UserData, assign it an empty string.</p>
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * <p>Security group to which the instance belongs. You can obtain this parameter by calling the <a href="https://www.tencentcloud.com/document/api/215/15808?from_cn_redirect=1">DescribeSecurityGroups</a> API and getting the <code>SecurityGroupId</code> field in the return value.<br>If you specify this parameter, provide at least one security group, and the list order is sequential.</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p>Public network bandwidth-related information settings.<br>When the public network outbound bandwidth cap is 0 Mbps, it cannot be modified to enable assigning public IP. Accordingly, when assigning public IP is currently enabled, the modified public network outbound bandwidth cap must be greater than 0 Mbps.</p>
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * <p>Instance billing type. Valid values:</p><li>POSTPAID_BY_HOUR: hourly postpaid</li><li>SPOTPAID: spot payment</li><li>PREPAID: prepaid, which is a Monthly Subscription</li><li>CDCPAID: dedicated cluster payment</li>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>Prepaid mode, that is, parameter settings related to monthly/annual subscription. By specifying this parameter, you can set attributes such as the duration of instance purchase and whether to enable auto-renewal.<br>If you change the payment mode of an instance to prepaid, this parameter is required. When changing from prepaid to other payment modes, the original info in this field is automatically discarded.<br>When adding this field, you must specify the duration of instance purchase. Other fields not specified will be set to default values.<br>When modifying this field, the current payment mode must be prepaid.</p>
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * <p>Market-related options of the instance, such as bidding instance parameters.<br>If you change the payment mode of the instance to spot payment, this parameter is required. When changing from spot payment to other payment modes, the original info in this field is automatically discarded.<br>When adding this field, you must transmit the bid price under relevant spot options. Other fields not transmitted will be set as default.<br>When modifying this field, the current payment mode must be spot payment.</p>
                     */
                    InstanceMarketOptionsRequest m_instanceMarketOptions;
                    bool m_instanceMarketOptionsHasBeenSet;

                    /**
                     * <p>Cloud disk type selection policy. Value range:</p><li>ORIGINAL: use the set cloud disk type.</li><li>AUTOMATIC: automatically select the currently available cloud disk type.</li>
                     */
                    std::string m_diskTypePolicy;
                    bool m_diskTypePolicyHasBeenSet;

                    /**
                     * <p>Instance system disk configuration information.</p>
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * <p>Instance data disk configuration information.<br>Supports up to 11 data disks. Apply the modification as a whole, so provide all values after modification.<br>The data disk type is consistent with the system disk type by default.</p>
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * <p>Settings for the CVM host name.<br>Configuring the host name for windows instances is not supported.<br>When adding this attribute, you must transmit the CVM host name. Other fields not transmitted will be set to default values.<br>The host name (with the suffix added if it exists) is verified to check whether it exceeds the maximum length of 46 characters.</p>
                     */
                    HostNameSettings m_hostNameSettings;
                    bool m_hostNameSettingsHasBeenSet;

                    /**
                     * <p>Settings related to the CVM instance name (InstanceName).<br>If the user sets this field in the launch configuration, the InstanceName of instances created by the scaling group will be set according to this field and transmitted to CVM. If the user does not set this field in the launch configuration, the InstanceName of instances created by the scaling group will be set as "as-{{ AutoScalingGroupName }}" and transmitted to CVM.<br>When adding this attribute, the CVM instance name must be transmitted. Other fields not transmitted will be set to default values.<br>It will verify whether the instance name (with the suffix added if it exists) exceeds the maximum length of 108 characters.</p>
                     */
                    InstanceNameSettings m_instanceNameSettings;
                    bool m_instanceNameSettingsHasBeenSet;

                    /**
                     * <p>Enhanced service. This parameter can be used to specify whether to enable services such as cloud security and Cloud Monitor.</p>
                     */
                    EnhancedService m_enhancedService;
                    bool m_enhancedServiceHasBeenSet;

                    /**
                     * <p>CAM role name, which can be obtained from the roleName in the return value from the <a href="https://www.tencentcloud.com/document/product/598/36223?from_cn_redirect=1">DescribeRoleList</a> API.</p>
                     */
                    std::string m_camRoleName;
                    bool m_camRoleNameHasBeenSet;

                    /**
                     * <p>Hyper Computing Cluster ID. You can obtain this parameter by calling the <a href="https://www.tencentcloud.com/document/product/213/83220?from_cn_redirect=1">DescribeHpcClusters</a> API.<br>Note: This field is empty by default.</p>
                     */
                    std::string m_hpcClusterId;
                    bool m_hpcClusterIdHasBeenSet;

                    /**
                     * <p>IPv6 public network bandwidth-related information settings. If the new instance includes an IPv6 address, this parameter can allocate public network bandwidth for the IPv6 address of the new instance. When the Ipv6AddressCount parameter of the scaling group associated with the launch configuration is 0, this parameter will not take effect.</p>
                     */
                    IPv6InternetAccessible m_iPv6InternetAccessible;
                    bool m_iPv6InternetAccessibleHasBeenSet;

                    /**
                     * <p>Placement Group id. Only one can be specified. You can obtain this parameter by calling the <a href="https://www.tencentcloud.com/document/product/213/17810?from_cn_redirect=1">DescribeDisasterRecoverGroups</a> API.</p>
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                    /**
                     * <p>Instance login settings, including passwords, keys, or maintaining the image's original login settings.<br>Please note that specifying new login settings overwrites existing login settings. For example, if you previously used a password to login, use this parameter to change login settings to a key, and the original password is removed.</p>
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * <p>Instance tag list. By specifying this parameter, the instances added through scale-out can be bound to the tag. Up to 10 Tags can be specified.<br>This parameter overrides the original instance tag list. To add a tag, import both the new tag and the original tags.</p>
                     */
                    std::vector<InstanceTag> m_instanceTags;
                    bool m_instanceTagsHasBeenSet;

                    /**
                     * <p>Image family name. You can obtain this parameter by calling the <a href="https://www.tencentcloud.com/document/product/213/15715?from_cn_redirect=1">DescribeImages</a> API.</p>
                     */
                    std::string m_imageFamily;
                    bool m_imageFamilyHasBeenSet;

                    /**
                     * <p>Local exclusive cluster ID.</p>
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                    /**
                     * <p>Custom metadata.</p>
                     */
                    Metadata m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * <p>Replace the ENI configuration in the launch configuration.</p><p>Input limits: up to 17 items; must explicitly include and can only contain one PRIMARY. AS does not auto-complete the primary ENI. An explicit empty array is illegal.</p><p>Field rules match CreateLaunchConfiguration. To clean up, call ClearLaunchConfigurationAttributes with ClearNetworkInterfaces=true.</p>
                     */
                    std::vector<NetworkInterface> m_networkInterfaces;
                    bool m_networkInterfacesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_MODIFYLAUNCHCONFIGURATIONATTRIBUTESREQUEST_H_
