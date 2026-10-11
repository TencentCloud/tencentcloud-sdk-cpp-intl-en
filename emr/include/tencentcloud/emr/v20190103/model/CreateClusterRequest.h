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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CREATECLUSTERREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CREATECLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/LoginSettings.h>
#include <tencentcloud/emr/v20190103/model/SceneSoftwareConfig.h>
#include <tencentcloud/emr/v20190103/model/InstanceChargePrepaid.h>
#include <tencentcloud/emr/v20190103/model/ScriptBootstrapActionConfig.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>
#include <tencentcloud/emr/v20190103/model/CustomMetaDBInfo.h>
#include <tencentcloud/emr/v20190103/model/DependService.h>
#include <tencentcloud/emr/v20190103/model/ZoneResourceConfiguration.h>
#include <tencentcloud/emr/v20190103/model/NodeMark.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * CreateCluster request structure.
                */
                class CreateClusterRequest : public AbstractModel
                {
                public:
                    CreateClusterRequest();
                    ~CreateClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>EMR product version name, for example, EMR-V2.3.0 (EMR 2.3.0). Currently, product version names can be queried. For details, see <a href="https://www.tencentcloud.com/document/product/589/66338?from_cn_redirect=1">Product Version Name</a>.</p>
                     * @return ProductVersion <p>EMR product version name, for example, EMR-V2.3.0 (EMR 2.3.0). Currently, product version names can be queried. For details, see <a href="https://www.tencentcloud.com/document/product/589/66338?from_cn_redirect=1">Product Version Name</a>.</p>
                     * 
                     */
                    std::string GetProductVersion() const;

                    /**
                     * 设置<p>EMR product version name, for example, EMR-V2.3.0 (EMR 2.3.0). Currently, product version names can be queried. For details, see <a href="https://www.tencentcloud.com/document/product/589/66338?from_cn_redirect=1">Product Version Name</a>.</p>
                     * @param _productVersion <p>EMR product version name, for example, EMR-V2.3.0 (EMR 2.3.0). Currently, product version names can be queried. For details, see <a href="https://www.tencentcloud.com/document/product/589/66338?from_cn_redirect=1">Product Version Name</a>.</p>
                     * 
                     */
                    void SetProductVersion(const std::string& _productVersion);

                    /**
                     * 判断参数 ProductVersion 是否已赋值
                     * @return ProductVersion 是否已赋值
                     * 
                     */
                    bool ProductVersionHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable high availability for the node. Valid values:</p><li>true: yes</li><li>false: no</li>
                     * @return EnableSupportHAFlag <p>Whether to enable high availability for the node. Valid values:</p><li>true: yes</li><li>false: no</li>
                     * 
                     */
                    bool GetEnableSupportHAFlag() const;

                    /**
                     * 设置<p>Whether to enable high availability for the node. Valid values:</p><li>true: yes</li><li>false: no</li>
                     * @param _enableSupportHAFlag <p>Whether to enable high availability for the node. Valid values:</p><li>true: yes</li><li>false: no</li>
                     * 
                     */
                    void SetEnableSupportHAFlag(const bool& _enableSupportHAFlag);

                    /**
                     * 判断参数 EnableSupportHAFlag 是否已赋值
                     * @return EnableSupportHAFlag 是否已赋值
                     * 
                     */
                    bool EnableSupportHAFlagHasBeenSet() const;

                    /**
                     * 获取<p>Instance name.</p><li>The value can contain 6 to 36 characters.</li><li>Only Chinese characters, letters, digits, hyphens (-), and underscores (_) are allowed.</li>
                     * @return InstanceName <p>Instance name.</p><li>The value can contain 6 to 36 characters.</li><li>Only Chinese characters, letters, digits, hyphens (-), and underscores (_) are allowed.</li>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Instance name.</p><li>The value can contain 6 to 36 characters.</li><li>Only Chinese characters, letters, digits, hyphens (-), and underscores (_) are allowed.</li>
                     * @param _instanceName <p>Instance name.</p><li>The value can contain 6 to 36 characters.</li><li>Only Chinese characters, letters, digits, hyphens (-), and underscores (_) are allowed.</li>
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
                     * 获取<p>Instance billing mode. Valid values:</p><li>PREPAID: prepaid, that is, yearly/monthly subscription</li><li>POSTPAID_BY_HOUR: pay-as-you-go on an hourly basis</li>
                     * @return InstanceChargeType <p>Instance billing mode. Valid values:</p><li>PREPAID: prepaid, that is, yearly/monthly subscription</li><li>POSTPAID_BY_HOUR: pay-as-you-go on an hourly basis</li>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>Instance billing mode. Valid values:</p><li>PREPAID: prepaid, that is, yearly/monthly subscription</li><li>POSTPAID_BY_HOUR: pay-as-you-go on an hourly basis</li>
                     * @param _instanceChargeType <p>Instance billing mode. Valid values:</p><li>PREPAID: prepaid, that is, yearly/monthly subscription</li><li>POSTPAID_BY_HOUR: pay-as-you-go on an hourly basis</li>
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
                     * 获取<p>Instance login settings. This parameter is used to set the login method for the purchased node, either the password or key.</p><li>When a key is set, the password is only used to log in to the native WebUI shortcut entry for the component.</li><li>When no key is set, the password is used to log in to the purchased node as well as the native WebUI shortcut entry for the component.</li>
                     * @return LoginSettings <p>Instance login settings. This parameter is used to set the login method for the purchased node, either the password or key.</p><li>When a key is set, the password is only used to log in to the native WebUI shortcut entry for the component.</li><li>When no key is set, the password is used to log in to the purchased node as well as the native WebUI shortcut entry for the component.</li>
                     * 
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置<p>Instance login settings. This parameter is used to set the login method for the purchased node, either the password or key.</p><li>When a key is set, the password is only used to log in to the native WebUI shortcut entry for the component.</li><li>When no key is set, the password is used to log in to the purchased node as well as the native WebUI shortcut entry for the component.</li>
                     * @param _loginSettings <p>Instance login settings. This parameter is used to set the login method for the purchased node, either the password or key.</p><li>When a key is set, the password is only used to log in to the native WebUI shortcut entry for the component.</li><li>When no key is set, the password is used to log in to the purchased node as well as the native WebUI shortcut entry for the component.</li>
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
                     * 获取<p>Cluster application scenario and supported deployment component configuration.</p>
                     * @return SceneSoftwareConfig <p>Cluster application scenario and supported deployment component configuration.</p>
                     * 
                     */
                    SceneSoftwareConfig GetSceneSoftwareConfig() const;

                    /**
                     * 设置<p>Cluster application scenario and supported deployment component configuration.</p>
                     * @param _sceneSoftwareConfig <p>Cluster application scenario and supported deployment component configuration.</p>
                     * 
                     */
                    void SetSceneSoftwareConfig(const SceneSoftwareConfig& _sceneSoftwareConfig);

                    /**
                     * 判断参数 SceneSoftwareConfig 是否已赋值
                     * @return SceneSoftwareConfig 是否已赋值
                     * 
                     */
                    bool SceneSoftwareConfigHasBeenSet() const;

                    /**
                     * 获取<p>Parameter settings related to yearly/monthly subscription. This parameter can be used to specify the purchase duration of a yearly/monthly subscription instance, whether to enable auto-renewal, and other attributes. This parameter is required if the billing mode of the specified instance is prepaid.</p>
                     * @return InstanceChargePrepaid <p>Parameter settings related to yearly/monthly subscription. This parameter can be used to specify the purchase duration of a yearly/monthly subscription instance, whether to enable auto-renewal, and other attributes. This parameter is required if the billing mode of the specified instance is prepaid.</p>
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置<p>Parameter settings related to yearly/monthly subscription. This parameter can be used to specify the purchase duration of a yearly/monthly subscription instance, whether to enable auto-renewal, and other attributes. This parameter is required if the billing mode of the specified instance is prepaid.</p>
                     * @param _instanceChargePrepaid <p>Parameter settings related to yearly/monthly subscription. This parameter can be used to specify the purchase duration of a yearly/monthly subscription instance, whether to enable auto-renewal, and other attributes. This parameter is required if the billing mode of the specified instance is prepaid.</p>
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
                     * 获取<p>ID of the security group to which the instance belongs, for example, sg-xxxxxxxx. This parameter can be obtained by calling the SecurityGroupId field in the response result of <a href="https://www.tencentcloud.com/document/api/215/15808?from_cn_redirect=1">DescribeSecurityGroups</a>.</p>
                     * @return SecurityGroupIds <p>ID of the security group to which the instance belongs, for example, sg-xxxxxxxx. This parameter can be obtained by calling the SecurityGroupId field in the response result of <a href="https://www.tencentcloud.com/document/api/215/15808?from_cn_redirect=1">DescribeSecurityGroups</a>.</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>ID of the security group to which the instance belongs, for example, sg-xxxxxxxx. This parameter can be obtained by calling the SecurityGroupId field in the response result of <a href="https://www.tencentcloud.com/document/api/215/15808?from_cn_redirect=1">DescribeSecurityGroups</a>.</p>
                     * @param _securityGroupIds <p>ID of the security group to which the instance belongs, for example, sg-xxxxxxxx. This parameter can be obtained by calling the SecurityGroupId field in the response result of <a href="https://www.tencentcloud.com/document/api/215/15808?from_cn_redirect=1">DescribeSecurityGroups</a>.</p>
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
                     * 获取<p><a href="https://www.tencentcloud.com/document/product/589/35656?from_cn_redirect=1">Bootstrap operation</a> script settings.</p>
                     * @return ScriptBootstrapActionConfig <p><a href="https://www.tencentcloud.com/document/product/589/35656?from_cn_redirect=1">Bootstrap operation</a> script settings.</p>
                     * 
                     */
                    std::vector<ScriptBootstrapActionConfig> GetScriptBootstrapActionConfig() const;

                    /**
                     * 设置<p><a href="https://www.tencentcloud.com/document/product/589/35656?from_cn_redirect=1">Bootstrap operation</a> script settings.</p>
                     * @param _scriptBootstrapActionConfig <p><a href="https://www.tencentcloud.com/document/product/589/35656?from_cn_redirect=1">Bootstrap operation</a> script settings.</p>
                     * 
                     */
                    void SetScriptBootstrapActionConfig(const std::vector<ScriptBootstrapActionConfig>& _scriptBootstrapActionConfig);

                    /**
                     * 判断参数 ScriptBootstrapActionConfig 是否已赋值
                     * @return ScriptBootstrapActionConfig 是否已赋值
                     * 
                     */
                    bool ScriptBootstrapActionConfigHasBeenSet() const;

                    /**
                     * 获取<p>Unique random identifier with a time-to-live of 5 minutes, which needs to be specified by the caller to prevent the client from repeatedly creating resources, for example, a9a90aa6-<strong><strong>-</strong></strong>-****-fae360632808.</p>
                     * @return ClientToken <p>Unique random identifier with a time-to-live of 5 minutes, which needs to be specified by the caller to prevent the client from repeatedly creating resources, for example, a9a90aa6-<strong><strong>-</strong></strong>-****-fae360632808.</p>
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置<p>Unique random identifier with a time-to-live of 5 minutes, which needs to be specified by the caller to prevent the client from repeatedly creating resources, for example, a9a90aa6-<strong><strong>-</strong></strong>-****-fae360632808.</p>
                     * @param _clientToken <p>Unique random identifier with a time-to-live of 5 minutes, which needs to be specified by the caller to prevent the client from repeatedly creating resources, for example, a9a90aa6-<strong><strong>-</strong></strong>-****-fae360632808.</p>
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable public network access for the cluster Master node. Valid values:</p><li>NEED_MASTER_WAN: yes</li><li>NOT_NEED_MASTER_WAN: no</li>By default, public network access is enabled for the cluster Master node.
                     * @return NeedMasterWan <p>Whether to enable public network access for the cluster Master node. Valid values:</p><li>NEED_MASTER_WAN: yes</li><li>NOT_NEED_MASTER_WAN: no</li>By default, public network access is enabled for the cluster Master node.
                     * 
                     */
                    std::string GetNeedMasterWan() const;

                    /**
                     * 设置<p>Whether to enable public network access for the cluster Master node. Valid values:</p><li>NEED_MASTER_WAN: yes</li><li>NOT_NEED_MASTER_WAN: no</li>By default, public network access is enabled for the cluster Master node.
                     * @param _needMasterWan <p>Whether to enable public network access for the cluster Master node. Valid values:</p><li>NEED_MASTER_WAN: yes</li><li>NOT_NEED_MASTER_WAN: no</li>By default, public network access is enabled for the cluster Master node.
                     * 
                     */
                    void SetNeedMasterWan(const std::string& _needMasterWan);

                    /**
                     * 判断参数 NeedMasterWan 是否已赋值
                     * @return NeedMasterWan 是否已赋值
                     * 
                     */
                    bool NeedMasterWanHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable remote login in the public network. (When SecurityGroupId is not empty, this parameter is invalid.) If this parameter is left empty, it is disabled by default. Valid values:</p><li>true: enable</li><li>false: disable</li>
                     * @return EnableRemoteLoginFlag <p>Whether to enable remote login in the public network. (When SecurityGroupId is not empty, this parameter is invalid.) If this parameter is left empty, it is disabled by default. Valid values:</p><li>true: enable</li><li>false: disable</li>
                     * 
                     */
                    bool GetEnableRemoteLoginFlag() const;

                    /**
                     * 设置<p>Whether to enable remote login in the public network. (When SecurityGroupId is not empty, this parameter is invalid.) If this parameter is left empty, it is disabled by default. Valid values:</p><li>true: enable</li><li>false: disable</li>
                     * @param _enableRemoteLoginFlag <p>Whether to enable remote login in the public network. (When SecurityGroupId is not empty, this parameter is invalid.) If this parameter is left empty, it is disabled by default. Valid values:</p><li>true: enable</li><li>false: disable</li>
                     * 
                     */
                    void SetEnableRemoteLoginFlag(const bool& _enableRemoteLoginFlag);

                    /**
                     * 判断参数 EnableRemoteLoginFlag 是否已赋值
                     * @return EnableRemoteLoginFlag 是否已赋值
                     * 
                     */
                    bool EnableRemoteLoginFlagHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable Kerberos authentication. It is disabled by default. Valid values:</p><li>true: enabled</li><li>false: disabled</li>
                     * @return EnableKerberosFlag <p>Whether to enable Kerberos authentication. It is disabled by default. Valid values:</p><li>true: enabled</li><li>false: disabled</li>
                     * 
                     */
                    bool GetEnableKerberosFlag() const;

                    /**
                     * 设置<p>Whether to enable Kerberos authentication. It is disabled by default. Valid values:</p><li>true: enabled</li><li>false: disabled</li>
                     * @param _enableKerberosFlag <p>Whether to enable Kerberos authentication. It is disabled by default. Valid values:</p><li>true: enabled</li><li>false: disabled</li>
                     * 
                     */
                    void SetEnableKerberosFlag(const bool& _enableKerberosFlag);

                    /**
                     * 判断参数 EnableKerberosFlag 是否已赋值
                     * @return EnableKerberosFlag 是否已赋值
                     * 
                     */
                    bool EnableKerberosFlagHasBeenSet() const;

                    /**
                     * 获取<p><a href="https://www.tencentcloud.com/document/product/589/35655?from_cn_redirect=1?from_cn_redirect=1">Custom software configuration.</a></p>
                     * @return CustomConf <p><a href="https://www.tencentcloud.com/document/product/589/35655?from_cn_redirect=1?from_cn_redirect=1">Custom software configuration.</a></p>
                     * 
                     */
                    std::string GetCustomConf() const;

                    /**
                     * 设置<p><a href="https://www.tencentcloud.com/document/product/589/35655?from_cn_redirect=1?from_cn_redirect=1">Custom software configuration.</a></p>
                     * @param _customConf <p><a href="https://www.tencentcloud.com/document/product/589/35655?from_cn_redirect=1?from_cn_redirect=1">Custom software configuration.</a></p>
                     * 
                     */
                    void SetCustomConf(const std::string& _customConf);

                    /**
                     * 判断参数 CustomConf 是否已赋值
                     * @return CustomConf 是否已赋值
                     * 
                     */
                    bool CustomConfHasBeenSet() const;

                    /**
                     * 获取<p>List of tag descriptions. When this parameter is specified, tags are bound to the corresponding instance.</p>
                     * @return Tags <p>List of tag descriptions. When this parameter is specified, tags are bound to the corresponding instance.</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>List of tag descriptions. When this parameter is specified, tags are bound to the corresponding instance.</p>
                     * @param _tags <p>List of tag descriptions. When this parameter is specified, tags are bound to the corresponding instance.</p>
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
                     * 获取<p>List of dispersed placement group IDs. Currently, only one ID can be specified.<br>This parameter can be obtained by calling the DisasterRecoverGroupId field in the response result of <a href="https://www.tencentcloud.com/document/product/213/17810?from_cn_redirect=1">DescribeDisasterRecoverGroups</a>.</p>
                     * @return DisasterRecoverGroupIds <p>List of dispersed placement group IDs. Currently, only one ID can be specified.<br>This parameter can be obtained by calling the DisasterRecoverGroupId field in the response result of <a href="https://www.tencentcloud.com/document/product/213/17810?from_cn_redirect=1">DescribeDisasterRecoverGroups</a>.</p>
                     * 
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置<p>List of dispersed placement group IDs. Currently, only one ID can be specified.<br>This parameter can be obtained by calling the DisasterRecoverGroupId field in the response result of <a href="https://www.tencentcloud.com/document/product/213/17810?from_cn_redirect=1">DescribeDisasterRecoverGroups</a>.</p>
                     * @param _disasterRecoverGroupIds <p>List of dispersed placement group IDs. Currently, only one ID can be specified.<br>This parameter can be obtained by calling the DisasterRecoverGroupId field in the response result of <a href="https://www.tencentcloud.com/document/product/213/17810?from_cn_redirect=1">DescribeDisasterRecoverGroups</a>.</p>
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
                     * 获取<p>Whether to enable cluster-level CBS encryption. It is not encrypted by default. Valid values:</p><li>true: encrypted</li><li>false: not encrypted</li>
                     * @return EnableCbsEncryptFlag <p>Whether to enable cluster-level CBS encryption. It is not encrypted by default. Valid values:</p><li>true: encrypted</li><li>false: not encrypted</li>
                     * 
                     */
                    bool GetEnableCbsEncryptFlag() const;

                    /**
                     * 设置<p>Whether to enable cluster-level CBS encryption. It is not encrypted by default. Valid values:</p><li>true: encrypted</li><li>false: not encrypted</li>
                     * @param _enableCbsEncryptFlag <p>Whether to enable cluster-level CBS encryption. It is not encrypted by default. Valid values:</p><li>true: encrypted</li><li>false: not encrypted</li>
                     * 
                     */
                    void SetEnableCbsEncryptFlag(const bool& _enableCbsEncryptFlag);

                    /**
                     * 判断参数 EnableCbsEncryptFlag 是否已赋值
                     * @return EnableCbsEncryptFlag 是否已赋值
                     * 
                     */
                    bool EnableCbsEncryptFlagHasBeenSet() const;

                    /**
                     * 获取<p>MetaDB information. When MetaType is set to EMR_NEW_META, MetaDataJdbcUrl, MetaDataUser, MetaDataPass, and UnifyMetaInstanceId can be left empty.<br>When MetaType is set to EMR_EXIT_META, set UnifyMetaInstanceId.<br>When MetaType is set to USER_CUSTOM_META, set MetaDataJdbcUrl, MetaDataUser, and MetaDataPass.</p>
                     * @return MetaDBInfo <p>MetaDB information. When MetaType is set to EMR_NEW_META, MetaDataJdbcUrl, MetaDataUser, MetaDataPass, and UnifyMetaInstanceId can be left empty.<br>When MetaType is set to EMR_EXIT_META, set UnifyMetaInstanceId.<br>When MetaType is set to USER_CUSTOM_META, set MetaDataJdbcUrl, MetaDataUser, and MetaDataPass.</p>
                     * 
                     */
                    CustomMetaDBInfo GetMetaDBInfo() const;

                    /**
                     * 设置<p>MetaDB information. When MetaType is set to EMR_NEW_META, MetaDataJdbcUrl, MetaDataUser, MetaDataPass, and UnifyMetaInstanceId can be left empty.<br>When MetaType is set to EMR_EXIT_META, set UnifyMetaInstanceId.<br>When MetaType is set to USER_CUSTOM_META, set MetaDataJdbcUrl, MetaDataUser, and MetaDataPass.</p>
                     * @param _metaDBInfo <p>MetaDB information. When MetaType is set to EMR_NEW_META, MetaDataJdbcUrl, MetaDataUser, MetaDataPass, and UnifyMetaInstanceId can be left empty.<br>When MetaType is set to EMR_EXIT_META, set UnifyMetaInstanceId.<br>When MetaType is set to USER_CUSTOM_META, set MetaDataJdbcUrl, MetaDataUser, and MetaDataPass.</p>
                     * 
                     */
                    void SetMetaDBInfo(const CustomMetaDBInfo& _metaDBInfo);

                    /**
                     * 判断参数 MetaDBInfo 是否已赋值
                     * @return MetaDBInfo 是否已赋值
                     * 
                     */
                    bool MetaDBInfoHasBeenSet() const;

                    /**
                     * 获取<p>Shared component information.</p>
                     * @return DependService <p>Shared component information.</p>
                     * 
                     */
                    std::vector<DependService> GetDependService() const;

                    /**
                     * 设置<p>Shared component information.</p>
                     * @param _dependService <p>Shared component information.</p>
                     * 
                     */
                    void SetDependService(const std::vector<DependService>& _dependService);

                    /**
                     * 判断参数 DependService 是否已赋值
                     * @return DependService 是否已赋值
                     * 
                     */
                    bool DependServiceHasBeenSet() const;

                    /**
                     * 获取<p>Specifications of node resources. Set one for each AZ. The first is the primary AZ, the second is the secondary AZ, and the third is the arbitration AZ. If cross-AZ is disabled, the length only needs to be 1.</p>
                     * @return ZoneResourceConfiguration <p>Specifications of node resources. Set one for each AZ. The first is the primary AZ, the second is the secondary AZ, and the third is the arbitration AZ. If cross-AZ is disabled, the length only needs to be 1.</p>
                     * 
                     */
                    std::vector<ZoneResourceConfiguration> GetZoneResourceConfiguration() const;

                    /**
                     * 设置<p>Specifications of node resources. Set one for each AZ. The first is the primary AZ, the second is the secondary AZ, and the third is the arbitration AZ. If cross-AZ is disabled, the length only needs to be 1.</p>
                     * @param _zoneResourceConfiguration <p>Specifications of node resources. Set one for each AZ. The first is the primary AZ, the second is the secondary AZ, and the third is the arbitration AZ. If cross-AZ is disabled, the length only needs to be 1.</p>
                     * 
                     */
                    void SetZoneResourceConfiguration(const std::vector<ZoneResourceConfiguration>& _zoneResourceConfiguration);

                    /**
                     * 判断参数 ZoneResourceConfiguration 是否已赋值
                     * @return ZoneResourceConfiguration 是否已赋值
                     * 
                     */
                    bool ZoneResourceConfigurationHasBeenSet() const;

                    /**
                     * 获取<p>COS bucket path, which is used when a StarRocks compute-storage separation cluster is created.</p>
                     * @return CosBucket <p>COS bucket path, which is used when a StarRocks compute-storage separation cluster is created.</p>
                     * 
                     */
                    std::string GetCosBucket() const;

                    /**
                     * 设置<p>COS bucket path, which is used when a StarRocks compute-storage separation cluster is created.</p>
                     * @param _cosBucket <p>COS bucket path, which is used when a StarRocks compute-storage separation cluster is created.</p>
                     * 
                     */
                    void SetCosBucket(const std::string& _cosBucket);

                    /**
                     * 判断参数 CosBucket 是否已赋值
                     * @return CosBucket 是否已赋值
                     * 
                     */
                    bool CosBucketHasBeenSet() const;

                    /**
                     * 获取<p>Node flag information, which is currently only provided for the Terraform platform.</p>
                     * @return NodeMarks <p>Node flag information, which is currently only provided for the Terraform platform.</p>
                     * 
                     */
                    std::vector<NodeMark> GetNodeMarks() const;

                    /**
                     * 设置<p>Node flag information, which is currently only provided for the Terraform platform.</p>
                     * @param _nodeMarks <p>Node flag information, which is currently only provided for the Terraform platform.</p>
                     * 
                     */
                    void SetNodeMarks(const std::vector<NodeMark>& _nodeMarks);

                    /**
                     * 判断参数 NodeMarks 是否已赋值
                     * @return NodeMarks 是否已赋值
                     * 
                     */
                    bool NodeMarksHasBeenSet() const;

                    /**
                     * 获取<p>clb id</p>
                     * @return LoadBalancerId <p>clb id</p>
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置<p>clb id</p>
                     * @param _loadBalancerId <p>clb id</p>
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取<p>Database version. Valid values: mysql8/tdsql8/mysql5.</p>
                     * @return DefaultMetaVersion <p>Database version. Valid values: mysql8/tdsql8/mysql5.</p>
                     * 
                     */
                    std::string GetDefaultMetaVersion() const;

                    /**
                     * 设置<p>Database version. Valid values: mysql8/tdsql8/mysql5.</p>
                     * @param _defaultMetaVersion <p>Database version. Valid values: mysql8/tdsql8/mysql5.</p>
                     * 
                     */
                    void SetDefaultMetaVersion(const std::string& _defaultMetaVersion);

                    /**
                     * 判断参数 DefaultMetaVersion 是否已赋值
                     * @return DefaultMetaVersion 是否已赋值
                     * 
                     */
                    bool DefaultMetaVersionHasBeenSet() const;

                    /**
                     * 获取<p>Whether database audit is enabled.</p>
                     * @return NeedCdbAudit <p>Whether database audit is enabled.</p>
                     * 
                     */
                    int64_t GetNeedCdbAudit() const;

                    /**
                     * 设置<p>Whether database audit is enabled.</p>
                     * @param _needCdbAudit <p>Whether database audit is enabled.</p>
                     * 
                     */
                    void SetNeedCdbAudit(const int64_t& _needCdbAudit);

                    /**
                     * 判断参数 NeedCdbAudit 是否已赋值
                     * @return NeedCdbAudit 是否已赋值
                     * 
                     */
                    bool NeedCdbAuditHasBeenSet() const;

                    /**
                     * 获取<p>Source IP address, which is specified in the security group.</p>
                     * @return SgIP <p>Source IP address, which is specified in the security group.</p>
                     * 
                     */
                    std::string GetSgIP() const;

                    /**
                     * 设置<p>Source IP address, which is specified in the security group.</p>
                     * @param _sgIP <p>Source IP address, which is specified in the security group.</p>
                     * 
                     */
                    void SetSgIP(const std::string& _sgIP);

                    /**
                     * 判断参数 SgIP 是否已赋值
                     * @return SgIP 是否已赋值
                     * 
                     */
                    bool SgIPHasBeenSet() const;

                    /**
                     * 获取<p>Partition of a partition placement group.</p>
                     * @return PartitionNumber <p>Partition of a partition placement group.</p>
                     * 
                     */
                    int64_t GetPartitionNumber() const;

                    /**
                     * 设置<p>Partition of a partition placement group.</p>
                     * @param _partitionNumber <p>Partition of a partition placement group.</p>
                     * 
                     */
                    void SetPartitionNumber(const int64_t& _partitionNumber);

                    /**
                     * 判断参数 PartitionNumber 是否已赋值
                     * @return PartitionNumber 是否已赋值
                     * 
                     */
                    bool PartitionNumberHasBeenSet() const;

                    /**
                     * 获取<p>Service UI address.</p><p>Enumeration values:</p><ul><li>0: Service UI address. Only one service UI address is returned.</li><li>1: Service UI address. If the service has multiple UI addresses, all results are returned, such as Impalad, StateStore, and Catalogd of Impala.</li></ul><p>Default value: 0.</p>
                     * @return WebUiVersion <p>Service UI address.</p><p>Enumeration values:</p><ul><li>0: Service UI address. Only one service UI address is returned.</li><li>1: Service UI address. If the service has multiple UI addresses, all results are returned, such as Impalad, StateStore, and Catalogd of Impala.</li></ul><p>Default value: 0.</p>
                     * 
                     */
                    int64_t GetWebUiVersion() const;

                    /**
                     * 设置<p>Service UI address.</p><p>Enumeration values:</p><ul><li>0: Service UI address. Only one service UI address is returned.</li><li>1: Service UI address. If the service has multiple UI addresses, all results are returned, such as Impalad, StateStore, and Catalogd of Impala.</li></ul><p>Default value: 0.</p>
                     * @param _webUiVersion <p>Service UI address.</p><p>Enumeration values:</p><ul><li>0: Service UI address. Only one service UI address is returned.</li><li>1: Service UI address. If the service has multiple UI addresses, all results are returned, such as Impalad, StateStore, and Catalogd of Impala.</li></ul><p>Default value: 0.</p>
                     * 
                     */
                    void SetWebUiVersion(const int64_t& _webUiVersion);

                    /**
                     * 判断参数 WebUiVersion 是否已赋值
                     * @return WebUiVersion 是否已赋值
                     * 
                     */
                    bool WebUiVersionHasBeenSet() const;

                    /**
                     * 获取<p>Whether the system disk is encrypted.</p>
                     * @return EnableCbsSysEncryptFlag <p>Whether the system disk is encrypted.</p>
                     * 
                     */
                    bool GetEnableCbsSysEncryptFlag() const;

                    /**
                     * 设置<p>Whether the system disk is encrypted.</p>
                     * @param _enableCbsSysEncryptFlag <p>Whether the system disk is encrypted.</p>
                     * 
                     */
                    void SetEnableCbsSysEncryptFlag(const bool& _enableCbsSysEncryptFlag);

                    /**
                     * 判断参数 EnableCbsSysEncryptFlag 是否已赋值
                     * @return EnableCbsSysEncryptFlag 是否已赋值
                     * 
                     */
                    bool EnableCbsSysEncryptFlagHasBeenSet() const;

                    /**
                     * 获取<p>Custom MetaDB data.</p>
                     * @return MetaDBGroupInfo <p>Custom MetaDB data.</p>
                     * 
                     */
                    std::vector<CustomMetaDBInfo> GetMetaDBGroupInfo() const;

                    /**
                     * 设置<p>Custom MetaDB data.</p>
                     * @param _metaDBGroupInfo <p>Custom MetaDB data.</p>
                     * 
                     */
                    void SetMetaDBGroupInfo(const std::vector<CustomMetaDBInfo>& _metaDBGroupInfo);

                    /**
                     * 判断参数 MetaDBGroupInfo 是否已赋值
                     * @return MetaDBGroupInfo 是否已赋值
                     * 
                     */
                    bool MetaDBGroupInfoHasBeenSet() const;

                private:

                    /**
                     * <p>EMR product version name, for example, EMR-V2.3.0 (EMR 2.3.0). Currently, product version names can be queried. For details, see <a href="https://www.tencentcloud.com/document/product/589/66338?from_cn_redirect=1">Product Version Name</a>.</p>
                     */
                    std::string m_productVersion;
                    bool m_productVersionHasBeenSet;

                    /**
                     * <p>Whether to enable high availability for the node. Valid values:</p><li>true: yes</li><li>false: no</li>
                     */
                    bool m_enableSupportHAFlag;
                    bool m_enableSupportHAFlagHasBeenSet;

                    /**
                     * <p>Instance name.</p><li>The value can contain 6 to 36 characters.</li><li>Only Chinese characters, letters, digits, hyphens (-), and underscores (_) are allowed.</li>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Instance billing mode. Valid values:</p><li>PREPAID: prepaid, that is, yearly/monthly subscription</li><li>POSTPAID_BY_HOUR: pay-as-you-go on an hourly basis</li>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>Instance login settings. This parameter is used to set the login method for the purchased node, either the password or key.</p><li>When a key is set, the password is only used to log in to the native WebUI shortcut entry for the component.</li><li>When no key is set, the password is used to log in to the purchased node as well as the native WebUI shortcut entry for the component.</li>
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * <p>Cluster application scenario and supported deployment component configuration.</p>
                     */
                    SceneSoftwareConfig m_sceneSoftwareConfig;
                    bool m_sceneSoftwareConfigHasBeenSet;

                    /**
                     * <p>Parameter settings related to yearly/monthly subscription. This parameter can be used to specify the purchase duration of a yearly/monthly subscription instance, whether to enable auto-renewal, and other attributes. This parameter is required if the billing mode of the specified instance is prepaid.</p>
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * <p>ID of the security group to which the instance belongs, for example, sg-xxxxxxxx. This parameter can be obtained by calling the SecurityGroupId field in the response result of <a href="https://www.tencentcloud.com/document/api/215/15808?from_cn_redirect=1">DescribeSecurityGroups</a>.</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p><a href="https://www.tencentcloud.com/document/product/589/35656?from_cn_redirect=1">Bootstrap operation</a> script settings.</p>
                     */
                    std::vector<ScriptBootstrapActionConfig> m_scriptBootstrapActionConfig;
                    bool m_scriptBootstrapActionConfigHasBeenSet;

                    /**
                     * <p>Unique random identifier with a time-to-live of 5 minutes, which needs to be specified by the caller to prevent the client from repeatedly creating resources, for example, a9a90aa6-<strong><strong>-</strong></strong>-****-fae360632808.</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * <p>Whether to enable public network access for the cluster Master node. Valid values:</p><li>NEED_MASTER_WAN: yes</li><li>NOT_NEED_MASTER_WAN: no</li>By default, public network access is enabled for the cluster Master node.
                     */
                    std::string m_needMasterWan;
                    bool m_needMasterWanHasBeenSet;

                    /**
                     * <p>Whether to enable remote login in the public network. (When SecurityGroupId is not empty, this parameter is invalid.) If this parameter is left empty, it is disabled by default. Valid values:</p><li>true: enable</li><li>false: disable</li>
                     */
                    bool m_enableRemoteLoginFlag;
                    bool m_enableRemoteLoginFlagHasBeenSet;

                    /**
                     * <p>Whether to enable Kerberos authentication. It is disabled by default. Valid values:</p><li>true: enabled</li><li>false: disabled</li>
                     */
                    bool m_enableKerberosFlag;
                    bool m_enableKerberosFlagHasBeenSet;

                    /**
                     * <p><a href="https://www.tencentcloud.com/document/product/589/35655?from_cn_redirect=1?from_cn_redirect=1">Custom software configuration.</a></p>
                     */
                    std::string m_customConf;
                    bool m_customConfHasBeenSet;

                    /**
                     * <p>List of tag descriptions. When this parameter is specified, tags are bound to the corresponding instance.</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>List of dispersed placement group IDs. Currently, only one ID can be specified.<br>This parameter can be obtained by calling the DisasterRecoverGroupId field in the response result of <a href="https://www.tencentcloud.com/document/product/213/17810?from_cn_redirect=1">DescribeDisasterRecoverGroups</a>.</p>
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                    /**
                     * <p>Whether to enable cluster-level CBS encryption. It is not encrypted by default. Valid values:</p><li>true: encrypted</li><li>false: not encrypted</li>
                     */
                    bool m_enableCbsEncryptFlag;
                    bool m_enableCbsEncryptFlagHasBeenSet;

                    /**
                     * <p>MetaDB information. When MetaType is set to EMR_NEW_META, MetaDataJdbcUrl, MetaDataUser, MetaDataPass, and UnifyMetaInstanceId can be left empty.<br>When MetaType is set to EMR_EXIT_META, set UnifyMetaInstanceId.<br>When MetaType is set to USER_CUSTOM_META, set MetaDataJdbcUrl, MetaDataUser, and MetaDataPass.</p>
                     */
                    CustomMetaDBInfo m_metaDBInfo;
                    bool m_metaDBInfoHasBeenSet;

                    /**
                     * <p>Shared component information.</p>
                     */
                    std::vector<DependService> m_dependService;
                    bool m_dependServiceHasBeenSet;

                    /**
                     * <p>Specifications of node resources. Set one for each AZ. The first is the primary AZ, the second is the secondary AZ, and the third is the arbitration AZ. If cross-AZ is disabled, the length only needs to be 1.</p>
                     */
                    std::vector<ZoneResourceConfiguration> m_zoneResourceConfiguration;
                    bool m_zoneResourceConfigurationHasBeenSet;

                    /**
                     * <p>COS bucket path, which is used when a StarRocks compute-storage separation cluster is created.</p>
                     */
                    std::string m_cosBucket;
                    bool m_cosBucketHasBeenSet;

                    /**
                     * <p>Node flag information, which is currently only provided for the Terraform platform.</p>
                     */
                    std::vector<NodeMark> m_nodeMarks;
                    bool m_nodeMarksHasBeenSet;

                    /**
                     * <p>clb id</p>
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * <p>Database version. Valid values: mysql8/tdsql8/mysql5.</p>
                     */
                    std::string m_defaultMetaVersion;
                    bool m_defaultMetaVersionHasBeenSet;

                    /**
                     * <p>Whether database audit is enabled.</p>
                     */
                    int64_t m_needCdbAudit;
                    bool m_needCdbAuditHasBeenSet;

                    /**
                     * <p>Source IP address, which is specified in the security group.</p>
                     */
                    std::string m_sgIP;
                    bool m_sgIPHasBeenSet;

                    /**
                     * <p>Partition of a partition placement group.</p>
                     */
                    int64_t m_partitionNumber;
                    bool m_partitionNumberHasBeenSet;

                    /**
                     * <p>Service UI address.</p><p>Enumeration values:</p><ul><li>0: Service UI address. Only one service UI address is returned.</li><li>1: Service UI address. If the service has multiple UI addresses, all results are returned, such as Impalad, StateStore, and Catalogd of Impala.</li></ul><p>Default value: 0.</p>
                     */
                    int64_t m_webUiVersion;
                    bool m_webUiVersionHasBeenSet;

                    /**
                     * <p>Whether the system disk is encrypted.</p>
                     */
                    bool m_enableCbsSysEncryptFlag;
                    bool m_enableCbsSysEncryptFlagHasBeenSet;

                    /**
                     * <p>Custom MetaDB data.</p>
                     */
                    std::vector<CustomMetaDBInfo> m_metaDBGroupInfo;
                    bool m_metaDBGroupInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CREATECLUSTERREQUEST_H_
