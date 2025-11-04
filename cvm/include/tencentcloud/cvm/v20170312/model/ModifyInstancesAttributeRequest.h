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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYINSTANCESATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYINSTANCESATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyInstancesAttribute request structure.
                */
                class ModifyInstancesAttributeRequest : public AbstractModel
                {
                public:
                    ModifyInstancesAttributeRequest();
                    ~ModifyInstancesAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID(s). To obtain the instance IDs, you can call [`DescribeInstances`](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) and look for `InstanceId` in the response. The maximum number of instances in each request is 100.
                     * @return InstanceIds Instance ID(s). To obtain the instance IDs, you can call [`DescribeInstances`](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) and look for `InstanceId` in the response. The maximum number of instances in each request is 100.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance ID(s). To obtain the instance IDs, you can call [`DescribeInstances`](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) and look for `InstanceId` in the response. The maximum number of instances in each request is 100.
                     * @param _instanceIds Instance ID(s). To obtain the instance IDs, you can call [`DescribeInstances`](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) and look for `InstanceId` in the response. The maximum number of instances in each request is 100.
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Modified instance name. can be named as required but should not exceed 128 characters.
                     * @return InstanceName Modified instance name. can be named as required but should not exceed 128 characters.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Modified instance name. can be named as required but should not exceed 128 characters.
                     * @param _instanceName Modified instance name. can be named as required but should not exceed 128 characters.
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取User data provided to an instance, which needs to be encoded in Base64 format with a maximum size of 16 KB. For details on obtaining this parameter, refer to the startup commands for [Windows](https://intl.cloud.tencent.com/document/product/213/17526?from_cn_redirect=1) and [Linux](https://intl.cloud.tencent.com/document/product/213/17525?from_cn_redirect=1).
                     * @return UserData User data provided to an instance, which needs to be encoded in Base64 format with a maximum size of 16 KB. For details on obtaining this parameter, refer to the startup commands for [Windows](https://intl.cloud.tencent.com/document/product/213/17526?from_cn_redirect=1) and [Linux](https://intl.cloud.tencent.com/document/product/213/17525?from_cn_redirect=1).
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置User data provided to an instance, which needs to be encoded in Base64 format with a maximum size of 16 KB. For details on obtaining this parameter, refer to the startup commands for [Windows](https://intl.cloud.tencent.com/document/product/213/17526?from_cn_redirect=1) and [Linux](https://intl.cloud.tencent.com/document/product/213/17525?from_cn_redirect=1).
                     * @param _userData User data provided to an instance, which needs to be encoded in Base64 format with a maximum size of 16 KB. For details on obtaining this parameter, refer to the startup commands for [Windows](https://intl.cloud.tencent.com/document/product/213/17526?from_cn_redirect=1) and [Linux](https://intl.cloud.tencent.com/document/product/213/17525?from_cn_redirect=1).
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
                     * 获取Specifies the security group Id list of the specified instance after modification. the instance will reassociate with the security groups in the specified list, and the associated security group will be unbound.
                     * @return SecurityGroups Specifies the security group Id list of the specified instance after modification. the instance will reassociate with the security groups in the specified list, and the associated security group will be unbound.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroups() const;

                    /**
                     * 设置Specifies the security group Id list of the specified instance after modification. the instance will reassociate with the security groups in the specified list, and the associated security group will be unbound.
                     * @param _securityGroups Specifies the security group Id list of the specified instance after modification. the instance will reassociate with the security groups in the specified list, and the associated security group will be unbound.
                     * 
                     */
                    void SetSecurityGroups(const std::vector<std::string>& _securityGroups);

                    /**
                     * 判断参数 SecurityGroups 是否已赋值
                     * @return SecurityGroups 是否已赋值
                     * 
                     */
                    bool SecurityGroupsHasBeenSet() const;

                    /**
                     * 获取The role bound with the instance. If it is not specified, it indicates to unbind the current role of the CVM.
                     * @return CamRoleName The role bound with the instance. If it is not specified, it indicates to unbind the current role of the CVM.
                     * 
                     */
                    std::string GetCamRoleName() const;

                    /**
                     * 设置The role bound with the instance. If it is not specified, it indicates to unbind the current role of the CVM.
                     * @param _camRoleName The role bound with the instance. If it is not specified, it indicates to unbind the current role of the CVM.
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
                     * 获取Modified hostname of an instance.<li>Period (.) and hyphen (-) should not be used as the first or last character of the hostname, and should not be used consecutively.</li><li>Windows instances: The hostname should contain 2 to 15 characters, including letters (case insensitive), digits, and hyphens (-), does not support periods (.), and should not be all digits.</li><li>Instances of other types (such as Linux instances): The hostname should contain 2 to 60 characters, including multiple periods (.), with each segment between periods considered as one section. Each section can contain letters (case insensitive), digits, and hyphens (-).</li>Note: After the hostname is modified, the instance will restart immediately, and the new hostname will take effect after the restart.
                     * @return HostName Modified hostname of an instance.<li>Period (.) and hyphen (-) should not be used as the first or last character of the hostname, and should not be used consecutively.</li><li>Windows instances: The hostname should contain 2 to 15 characters, including letters (case insensitive), digits, and hyphens (-), does not support periods (.), and should not be all digits.</li><li>Instances of other types (such as Linux instances): The hostname should contain 2 to 60 characters, including multiple periods (.), with each segment between periods considered as one section. Each section can contain letters (case insensitive), digits, and hyphens (-).</li>Note: After the hostname is modified, the instance will restart immediately, and the new hostname will take effect after the restart.
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Modified hostname of an instance.<li>Period (.) and hyphen (-) should not be used as the first or last character of the hostname, and should not be used consecutively.</li><li>Windows instances: The hostname should contain 2 to 15 characters, including letters (case insensitive), digits, and hyphens (-), does not support periods (.), and should not be all digits.</li><li>Instances of other types (such as Linux instances): The hostname should contain 2 to 60 characters, including multiple periods (.), with each segment between periods considered as one section. Each section can contain letters (case insensitive), digits, and hyphens (-).</li>Note: After the hostname is modified, the instance will restart immediately, and the new hostname will take effect after the restart.
                     * @param _hostName Modified hostname of an instance.<li>Period (.) and hyphen (-) should not be used as the first or last character of the hostname, and should not be used consecutively.</li><li>Windows instances: The hostname should contain 2 to 15 characters, including letters (case insensitive), digits, and hyphens (-), does not support periods (.), and should not be all digits.</li><li>Instances of other types (such as Linux instances): The hostname should contain 2 to 60 characters, including multiple periods (.), with each segment between periods considered as one section. Each section can contain letters (case insensitive), digits, and hyphens (-).</li>Note: After the hostname is modified, the instance will restart immediately, and the new hostname will take effect after the restart.
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取Instance termination protection flag, indicating whether an instance is allowed to be deleted through an API. Valid values:<li>true: Instance protection is enabled, and the instance is not allowed to be deleted through the API.</li><li>false: Instance protection is disabled, and the instance is allowed to be deleted through the API.</li>Default value: false.
                     * @return DisableApiTermination Instance termination protection flag, indicating whether an instance is allowed to be deleted through an API. Valid values:<li>true: Instance protection is enabled, and the instance is not allowed to be deleted through the API.</li><li>false: Instance protection is disabled, and the instance is allowed to be deleted through the API.</li>Default value: false.
                     * 
                     */
                    bool GetDisableApiTermination() const;

                    /**
                     * 设置Instance termination protection flag, indicating whether an instance is allowed to be deleted through an API. Valid values:<li>true: Instance protection is enabled, and the instance is not allowed to be deleted through the API.</li><li>false: Instance protection is disabled, and the instance is allowed to be deleted through the API.</li>Default value: false.
                     * @param _disableApiTermination Instance termination protection flag, indicating whether an instance is allowed to be deleted through an API. Valid values:<li>true: Instance protection is enabled, and the instance is not allowed to be deleted through the API.</li><li>false: Instance protection is disabled, and the instance is allowed to be deleted through the API.</li>Default value: false.
                     * 
                     */
                    void SetDisableApiTermination(const bool& _disableApiTermination);

                    /**
                     * 判断参数 DisableApiTermination 是否已赋值
                     * @return DisableApiTermination 是否已赋值
                     * 
                     */
                    bool DisableApiTerminationHasBeenSet() const;

                    /**
                     * 获取Role type, used in conjunction with CamRoleName. this value can be obtained from the RoleType field in the API response of CAM [DescribeRoleList](https://www.tencentcloud.comom/document/product/598/36223?from_cn_redirect=1) or [GetRole](https://www.tencentcloud.comom/document/product/598/36221?from_cn_redirect=1). currently, only user, system, and service_linked types are accepted.
For example, when CamRoleName contains "LinkedRoleIn" (such as TKE_QCSLinkedRoleInPrometheusService), DescribeRoleList and GetRole return RoleType as service_linked, this parameter must also transmit service_linked.
The parameter default value is user. this parameter can be omitted if CameRoleName is not of the service_linked kind.
                     * @return CamRoleType Role type, used in conjunction with CamRoleName. this value can be obtained from the RoleType field in the API response of CAM [DescribeRoleList](https://www.tencentcloud.comom/document/product/598/36223?from_cn_redirect=1) or [GetRole](https://www.tencentcloud.comom/document/product/598/36221?from_cn_redirect=1). currently, only user, system, and service_linked types are accepted.
For example, when CamRoleName contains "LinkedRoleIn" (such as TKE_QCSLinkedRoleInPrometheusService), DescribeRoleList and GetRole return RoleType as service_linked, this parameter must also transmit service_linked.
The parameter default value is user. this parameter can be omitted if CameRoleName is not of the service_linked kind.
                     * 
                     */
                    std::string GetCamRoleType() const;

                    /**
                     * 设置Role type, used in conjunction with CamRoleName. this value can be obtained from the RoleType field in the API response of CAM [DescribeRoleList](https://www.tencentcloud.comom/document/product/598/36223?from_cn_redirect=1) or [GetRole](https://www.tencentcloud.comom/document/product/598/36221?from_cn_redirect=1). currently, only user, system, and service_linked types are accepted.
For example, when CamRoleName contains "LinkedRoleIn" (such as TKE_QCSLinkedRoleInPrometheusService), DescribeRoleList and GetRole return RoleType as service_linked, this parameter must also transmit service_linked.
The parameter default value is user. this parameter can be omitted if CameRoleName is not of the service_linked kind.
                     * @param _camRoleType Role type, used in conjunction with CamRoleName. this value can be obtained from the RoleType field in the API response of CAM [DescribeRoleList](https://www.tencentcloud.comom/document/product/598/36223?from_cn_redirect=1) or [GetRole](https://www.tencentcloud.comom/document/product/598/36221?from_cn_redirect=1). currently, only user, system, and service_linked types are accepted.
For example, when CamRoleName contains "LinkedRoleIn" (such as TKE_QCSLinkedRoleInPrometheusService), DescribeRoleList and GetRole return RoleType as service_linked, this parameter must also transmit service_linked.
The parameter default value is user. this parameter can be omitted if CameRoleName is not of the service_linked kind.
                     * 
                     */
                    void SetCamRoleType(const std::string& _camRoleType);

                    /**
                     * 判断参数 CamRoleType 是否已赋值
                     * @return CamRoleType 是否已赋值
                     * 
                     */
                    bool CamRoleTypeHasBeenSet() const;

                    /**
                     * 获取Whether to automatically restart an instance when modifying a hostname. If not specified, the instance will automatically restart by default.
- true: Modify the hostname and automatically restart the instance.
- false: Modify the hostname without automatically restarting the instance. A manual restart is required for the new hostname to take effect.
Note: This parameter is valid only when a hostname is modified.
                     * @return AutoReboot Whether to automatically restart an instance when modifying a hostname. If not specified, the instance will automatically restart by default.
- true: Modify the hostname and automatically restart the instance.
- false: Modify the hostname without automatically restarting the instance. A manual restart is required for the new hostname to take effect.
Note: This parameter is valid only when a hostname is modified.
                     * 
                     */
                    bool GetAutoReboot() const;

                    /**
                     * 设置Whether to automatically restart an instance when modifying a hostname. If not specified, the instance will automatically restart by default.
- true: Modify the hostname and automatically restart the instance.
- false: Modify the hostname without automatically restarting the instance. A manual restart is required for the new hostname to take effect.
Note: This parameter is valid only when a hostname is modified.
                     * @param _autoReboot Whether to automatically restart an instance when modifying a hostname. If not specified, the instance will automatically restart by default.
- true: Modify the hostname and automatically restart the instance.
- false: Modify the hostname without automatically restarting the instance. A manual restart is required for the new hostname to take effect.
Note: This parameter is valid only when a hostname is modified.
                     * 
                     */
                    void SetAutoReboot(const bool& _autoReboot);

                    /**
                     * 判断参数 AutoReboot 是否已赋值
                     * @return AutoReboot 是否已赋值
                     * 
                     */
                    bool AutoRebootHasBeenSet() const;

                private:

                    /**
                     * Instance ID(s). To obtain the instance IDs, you can call [`DescribeInstances`](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) and look for `InstanceId` in the response. The maximum number of instances in each request is 100.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Modified instance name. can be named as required but should not exceed 128 characters.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * User data provided to an instance, which needs to be encoded in Base64 format with a maximum size of 16 KB. For details on obtaining this parameter, refer to the startup commands for [Windows](https://intl.cloud.tencent.com/document/product/213/17526?from_cn_redirect=1) and [Linux](https://intl.cloud.tencent.com/document/product/213/17525?from_cn_redirect=1).
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * Specifies the security group Id list of the specified instance after modification. the instance will reassociate with the security groups in the specified list, and the associated security group will be unbound.
                     */
                    std::vector<std::string> m_securityGroups;
                    bool m_securityGroupsHasBeenSet;

                    /**
                     * The role bound with the instance. If it is not specified, it indicates to unbind the current role of the CVM.
                     */
                    std::string m_camRoleName;
                    bool m_camRoleNameHasBeenSet;

                    /**
                     * Modified hostname of an instance.<li>Period (.) and hyphen (-) should not be used as the first or last character of the hostname, and should not be used consecutively.</li><li>Windows instances: The hostname should contain 2 to 15 characters, including letters (case insensitive), digits, and hyphens (-), does not support periods (.), and should not be all digits.</li><li>Instances of other types (such as Linux instances): The hostname should contain 2 to 60 characters, including multiple periods (.), with each segment between periods considered as one section. Each section can contain letters (case insensitive), digits, and hyphens (-).</li>Note: After the hostname is modified, the instance will restart immediately, and the new hostname will take effect after the restart.
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Instance termination protection flag, indicating whether an instance is allowed to be deleted through an API. Valid values:<li>true: Instance protection is enabled, and the instance is not allowed to be deleted through the API.</li><li>false: Instance protection is disabled, and the instance is allowed to be deleted through the API.</li>Default value: false.
                     */
                    bool m_disableApiTermination;
                    bool m_disableApiTerminationHasBeenSet;

                    /**
                     * Role type, used in conjunction with CamRoleName. this value can be obtained from the RoleType field in the API response of CAM [DescribeRoleList](https://www.tencentcloud.comom/document/product/598/36223?from_cn_redirect=1) or [GetRole](https://www.tencentcloud.comom/document/product/598/36221?from_cn_redirect=1). currently, only user, system, and service_linked types are accepted.
For example, when CamRoleName contains "LinkedRoleIn" (such as TKE_QCSLinkedRoleInPrometheusService), DescribeRoleList and GetRole return RoleType as service_linked, this parameter must also transmit service_linked.
The parameter default value is user. this parameter can be omitted if CameRoleName is not of the service_linked kind.
                     */
                    std::string m_camRoleType;
                    bool m_camRoleTypeHasBeenSet;

                    /**
                     * Whether to automatically restart an instance when modifying a hostname. If not specified, the instance will automatically restart by default.
- true: Modify the hostname and automatically restart the instance.
- false: Modify the hostname without automatically restarting the instance. A manual restart is required for the new hostname to take effect.
Note: This parameter is valid only when a hostname is modified.
                     */
                    bool m_autoReboot;
                    bool m_autoRebootHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYINSTANCESATTRIBUTEREQUEST_H_
