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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CREATEINSTANCEREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CREATEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/VPCSettings.h>
#include <tencentcloud/emr/v20190103/model/NewResourceSpec.h>
#include <tencentcloud/emr/v20190103/model/Placement.h>
#include <tencentcloud/emr/v20190103/model/LoginSettings.h>
#include <tencentcloud/emr/v20190103/model/COSSettings.h>
#include <tencentcloud/emr/v20190103/model/PreExecuteFileSettings.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>
#include <tencentcloud/emr/v20190103/model/CustomMetaInfo.h>
#include <tencentcloud/emr/v20190103/model/ExternalService.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * CreateInstance request structure.
                */
                class CreateInstanceRequest : public AbstractModel
                {
                public:
                    CreateInstanceRequest();
                    ~CreateInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Product ID. Different product IDs represent different EMR product versions. Valid values:
<li>1: EMR v1.3.1</li>
<li>2: EMR v2.0.1</li>
<li>4: EMR v2.1.0</li>
<li>7: EMR v3.0.0</li>
<li>9: EMR v2.2.0</li>
<li>11: ClickHouse v1.0.0</li>
<li>13: Druid v1.0.0</li>
<li>15: EMR v2.2.1</li>
<li>16: EMR v2.3.0</li>
<li>17: ClickHouse v1.1.0</li>
<li>19: EMR v2.4.0</li>
<li>20: EMR v2.5.0</li>
<li>22: ClickHouse v1.2.0</li>
<li>24: EMR TianQiong v1.0.0</li>
<li>25: EMR v3.1.0</li>
<li>26: Doris v1.0.0</li>
<li>27: Kafka v1.0.0</li>
<li>28: EMR v3.2.0</li>
<li>29: EMR v2.5.1</li>
<li>30: EMR v2.6.0</li>
                     * @return ProductId Product ID. Different product IDs represent different EMR product versions. Valid values:
<li>1: EMR v1.3.1</li>
<li>2: EMR v2.0.1</li>
<li>4: EMR v2.1.0</li>
<li>7: EMR v3.0.0</li>
<li>9: EMR v2.2.0</li>
<li>11: ClickHouse v1.0.0</li>
<li>13: Druid v1.0.0</li>
<li>15: EMR v2.2.1</li>
<li>16: EMR v2.3.0</li>
<li>17: ClickHouse v1.1.0</li>
<li>19: EMR v2.4.0</li>
<li>20: EMR v2.5.0</li>
<li>22: ClickHouse v1.2.0</li>
<li>24: EMR TianQiong v1.0.0</li>
<li>25: EMR v3.1.0</li>
<li>26: Doris v1.0.0</li>
<li>27: Kafka v1.0.0</li>
<li>28: EMR v3.2.0</li>
<li>29: EMR v2.5.1</li>
<li>30: EMR v2.6.0</li>
                     */
                    uint64_t GetProductId() const;

                    /**
                     * 设置Product ID. Different product IDs represent different EMR product versions. Valid values:
<li>1: EMR v1.3.1</li>
<li>2: EMR v2.0.1</li>
<li>4: EMR v2.1.0</li>
<li>7: EMR v3.0.0</li>
<li>9: EMR v2.2.0</li>
<li>11: ClickHouse v1.0.0</li>
<li>13: Druid v1.0.0</li>
<li>15: EMR v2.2.1</li>
<li>16: EMR v2.3.0</li>
<li>17: ClickHouse v1.1.0</li>
<li>19: EMR v2.4.0</li>
<li>20: EMR v2.5.0</li>
<li>22: ClickHouse v1.2.0</li>
<li>24: EMR TianQiong v1.0.0</li>
<li>25: EMR v3.1.0</li>
<li>26: Doris v1.0.0</li>
<li>27: Kafka v1.0.0</li>
<li>28: EMR v3.2.0</li>
<li>29: EMR v2.5.1</li>
<li>30: EMR v2.6.0</li>
                     * @param ProductId Product ID. Different product IDs represent different EMR product versions. Valid values:
<li>1: EMR v1.3.1</li>
<li>2: EMR v2.0.1</li>
<li>4: EMR v2.1.0</li>
<li>7: EMR v3.0.0</li>
<li>9: EMR v2.2.0</li>
<li>11: ClickHouse v1.0.0</li>
<li>13: Druid v1.0.0</li>
<li>15: EMR v2.2.1</li>
<li>16: EMR v2.3.0</li>
<li>17: ClickHouse v1.1.0</li>
<li>19: EMR v2.4.0</li>
<li>20: EMR v2.5.0</li>
<li>22: ClickHouse v1.2.0</li>
<li>24: EMR TianQiong v1.0.0</li>
<li>25: EMR v3.1.0</li>
<li>26: Doris v1.0.0</li>
<li>27: Kafka v1.0.0</li>
<li>28: EMR v3.2.0</li>
<li>29: EMR v2.5.1</li>
<li>30: EMR v2.6.0</li>
                     */
                    void SetProductId(const uint64_t& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取Configuration information of VPC. This parameter is used to specify the VPC ID, subnet ID, etc.
                     * @return VPCSettings Configuration information of VPC. This parameter is used to specify the VPC ID, subnet ID, etc.
                     */
                    VPCSettings GetVPCSettings() const;

                    /**
                     * 设置Configuration information of VPC. This parameter is used to specify the VPC ID, subnet ID, etc.
                     * @param VPCSettings Configuration information of VPC. This parameter is used to specify the VPC ID, subnet ID, etc.
                     */
                    void SetVPCSettings(const VPCSettings& _vPCSettings);

                    /**
                     * 判断参数 VPCSettings 是否已赋值
                     * @return VPCSettings 是否已赋值
                     */
                    bool VPCSettingsHasBeenSet() const;

                    /**
                     * 获取List of deployed components. The list of component options varies by EMR product ID (i.e., `ProductId`; for specific meanings, please see the `ProductId` input parameter). For more information, please see [Component Version](https://intl.cloud.tencent.com/document/product/589/20279?from_cn_redirect=1).
Enter an instance value: `hive` or `flink`.
                     * @return Software List of deployed components. The list of component options varies by EMR product ID (i.e., `ProductId`; for specific meanings, please see the `ProductId` input parameter). For more information, please see [Component Version](https://intl.cloud.tencent.com/document/product/589/20279?from_cn_redirect=1).
Enter an instance value: `hive` or `flink`.
                     */
                    std::vector<std::string> GetSoftware() const;

                    /**
                     * 设置List of deployed components. The list of component options varies by EMR product ID (i.e., `ProductId`; for specific meanings, please see the `ProductId` input parameter). For more information, please see [Component Version](https://intl.cloud.tencent.com/document/product/589/20279?from_cn_redirect=1).
Enter an instance value: `hive` or `flink`.
                     * @param Software List of deployed components. The list of component options varies by EMR product ID (i.e., `ProductId`; for specific meanings, please see the `ProductId` input parameter). For more information, please see [Component Version](https://intl.cloud.tencent.com/document/product/589/20279?from_cn_redirect=1).
Enter an instance value: `hive` or `flink`.
                     */
                    void SetSoftware(const std::vector<std::string>& _software);

                    /**
                     * 判断参数 Software 是否已赋值
                     * @return Software 是否已赋值
                     */
                    bool SoftwareHasBeenSet() const;

                    /**
                     * 获取Node resource specification.
                     * @return ResourceSpec Node resource specification.
                     */
                    NewResourceSpec GetResourceSpec() const;

                    /**
                     * 设置Node resource specification.
                     * @param ResourceSpec Node resource specification.
                     */
                    void SetResourceSpec(const NewResourceSpec& _resourceSpec);

                    /**
                     * 判断参数 ResourceSpec 是否已赋值
                     * @return ResourceSpec 是否已赋值
                     */
                    bool ResourceSpecHasBeenSet() const;

                    /**
                     * 获取Whether to enable high node availability. Valid values:
<li>0: does not enable high availability of node.</li>
<li>1: enables high availability of node.</li>
                     * @return SupportHA Whether to enable high node availability. Valid values:
<li>0: does not enable high availability of node.</li>
<li>1: enables high availability of node.</li>
                     */
                    uint64_t GetSupportHA() const;

                    /**
                     * 设置Whether to enable high node availability. Valid values:
<li>0: does not enable high availability of node.</li>
<li>1: enables high availability of node.</li>
                     * @param SupportHA Whether to enable high node availability. Valid values:
<li>0: does not enable high availability of node.</li>
<li>1: enables high availability of node.</li>
                     */
                    void SetSupportHA(const uint64_t& _supportHA);

                    /**
                     * 判断参数 SupportHA 是否已赋值
                     * @return SupportHA 是否已赋值
                     */
                    bool SupportHAHasBeenSet() const;

                    /**
                     * 获取Instance name.
<li>Length limit: 6-36 characters.</li>
<li>Only letters, numbers, dashes (-), and underscores (_) are supported.</li>
                     * @return InstanceName Instance name.
<li>Length limit: 6-36 characters.</li>
<li>Only letters, numbers, dashes (-), and underscores (_) are supported.</li>
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name.
<li>Length limit: 6-36 characters.</li>
<li>Only letters, numbers, dashes (-), and underscores (_) are supported.</li>
                     * @param InstanceName Instance name.
<li>Length limit: 6-36 characters.</li>
<li>Only letters, numbers, dashes (-), and underscores (_) are supported.</li>
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Instance billing mode. Valid values:
<li>0: pay-as-you-go.</li>
                     * @return PayMode Instance billing mode. Valid values:
<li>0: pay-as-you-go.</li>
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置Instance billing mode. Valid values:
<li>0: pay-as-you-go.</li>
                     * @param PayMode Instance billing mode. Valid values:
<li>0: pay-as-you-go.</li>
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Instance location. This parameter is used to specify the AZ, project, and other attributes of the instance.
                     * @return Placement Instance location. This parameter is used to specify the AZ, project, and other attributes of the instance.
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置Instance location. This parameter is used to specify the AZ, project, and other attributes of the instance.
                     * @param Placement Instance location. This parameter is used to specify the AZ, project, and other attributes of the instance.
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取Purchase duration of instance, which needs to be used together with `TimeUnit`.
<li>When `TimeUnit` is `s`, this parameter can only be filled with 3600, indicating a pay-as-you-go instance.</li>
<li>When `TimeUnit` is `m`, the number entered in this parameter indicates the purchase duration of the monthly-subscription instance; for example, 1 means one month</li>
                     * @return TimeSpan Purchase duration of instance, which needs to be used together with `TimeUnit`.
<li>When `TimeUnit` is `s`, this parameter can only be filled with 3600, indicating a pay-as-you-go instance.</li>
<li>When `TimeUnit` is `m`, the number entered in this parameter indicates the purchase duration of the monthly-subscription instance; for example, 1 means one month</li>
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置Purchase duration of instance, which needs to be used together with `TimeUnit`.
<li>When `TimeUnit` is `s`, this parameter can only be filled with 3600, indicating a pay-as-you-go instance.</li>
<li>When `TimeUnit` is `m`, the number entered in this parameter indicates the purchase duration of the monthly-subscription instance; for example, 1 means one month</li>
                     * @param TimeSpan Purchase duration of instance, which needs to be used together with `TimeUnit`.
<li>When `TimeUnit` is `s`, this parameter can only be filled with 3600, indicating a pay-as-you-go instance.</li>
<li>When `TimeUnit` is `m`, the number entered in this parameter indicates the purchase duration of the monthly-subscription instance; for example, 1 means one month</li>
                     */
                    void SetTimeSpan(const uint64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取Time unit of instance purchase duration. Valid values:
<li>s: seconds. When `PayMode` is 0, `TimeUnit` can only be `s`.</li>
<li>m: month. When `PayMode` is 1, `TimeUnit` can only be `m`.</li>
                     * @return TimeUnit Time unit of instance purchase duration. Valid values:
<li>s: seconds. When `PayMode` is 0, `TimeUnit` can only be `s`.</li>
<li>m: month. When `PayMode` is 1, `TimeUnit` can only be `m`.</li>
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Time unit of instance purchase duration. Valid values:
<li>s: seconds. When `PayMode` is 0, `TimeUnit` can only be `s`.</li>
<li>m: month. When `PayMode` is 1, `TimeUnit` can only be `m`.</li>
                     * @param TimeUnit Time unit of instance purchase duration. Valid values:
<li>s: seconds. When `PayMode` is 0, `TimeUnit` can only be `s`.</li>
<li>m: month. When `PayMode` is 1, `TimeUnit` can only be `m`.</li>
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取Instance login settings. This parameter allows you to set the login password or key for your purchased node.
<li>If the key is set, the password will be only used for login to the native component WebUI.</li>
<li>If the key is not set, the password will be used for login to all purchased nodes and the native component WebUI.</li>
                     * @return LoginSettings Instance login settings. This parameter allows you to set the login password or key for your purchased node.
<li>If the key is set, the password will be only used for login to the native component WebUI.</li>
<li>If the key is not set, the password will be used for login to all purchased nodes and the native component WebUI.</li>
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置Instance login settings. This parameter allows you to set the login password or key for your purchased node.
<li>If the key is set, the password will be only used for login to the native component WebUI.</li>
<li>If the key is not set, the password will be used for login to all purchased nodes and the native component WebUI.</li>
                     * @param LoginSettings Instance login settings. This parameter allows you to set the login password or key for your purchased node.
<li>If the key is set, the password will be only used for login to the native component WebUI.</li>
<li>If the key is not set, the password will be used for login to all purchased nodes and the native component WebUI.</li>
                     */
                    void SetLoginSettings(const LoginSettings& _loginSettings);

                    /**
                     * 判断参数 LoginSettings 是否已赋值
                     * @return LoginSettings 是否已赋值
                     */
                    bool LoginSettingsHasBeenSet() const;

                    /**
                     * 获取Parameter required for enabling COS access.
                     * @return COSSettings Parameter required for enabling COS access.
                     */
                    COSSettings GetCOSSettings() const;

                    /**
                     * 设置Parameter required for enabling COS access.
                     * @param COSSettings Parameter required for enabling COS access.
                     */
                    void SetCOSSettings(const COSSettings& _cOSSettings);

                    /**
                     * 判断参数 COSSettings 是否已赋值
                     * @return COSSettings 是否已赋值
                     */
                    bool COSSettingsHasBeenSet() const;

                    /**
                     * 获取Security group to which an instance belongs in the format of `sg-xxxxxxxx`. This parameter can be obtained from the `SecurityGroupId` field in the return value of the [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808) API.
                     * @return SgId Security group to which an instance belongs in the format of `sg-xxxxxxxx`. This parameter can be obtained from the `SecurityGroupId` field in the return value of the [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808) API.
                     */
                    std::string GetSgId() const;

                    /**
                     * 设置Security group to which an instance belongs in the format of `sg-xxxxxxxx`. This parameter can be obtained from the `SecurityGroupId` field in the return value of the [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808) API.
                     * @param SgId Security group to which an instance belongs in the format of `sg-xxxxxxxx`. This parameter can be obtained from the `SecurityGroupId` field in the return value of the [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808) API.
                     */
                    void SetSgId(const std::string& _sgId);

                    /**
                     * 判断参数 SgId 是否已赋值
                     * @return SgId 是否已赋值
                     */
                    bool SgIdHasBeenSet() const;

                    /**
                     * 获取[Bootstrap action](https://intl.cloud.tencent.com/document/product/589/35656?from_cn_redirect=1) script settings
                     * @return PreExecutedFileSettings [Bootstrap action](https://intl.cloud.tencent.com/document/product/589/35656?from_cn_redirect=1) script settings
                     */
                    std::vector<PreExecuteFileSettings> GetPreExecutedFileSettings() const;

                    /**
                     * 设置[Bootstrap action](https://intl.cloud.tencent.com/document/product/589/35656?from_cn_redirect=1) script settings
                     * @param PreExecutedFileSettings [Bootstrap action](https://intl.cloud.tencent.com/document/product/589/35656?from_cn_redirect=1) script settings
                     */
                    void SetPreExecutedFileSettings(const std::vector<PreExecuteFileSettings>& _preExecutedFileSettings);

                    /**
                     * 判断参数 PreExecutedFileSettings 是否已赋值
                     * @return PreExecutedFileSettings 是否已赋值
                     */
                    bool PreExecutedFileSettingsHasBeenSet() const;

                    /**
                     * 获取Whether auto-renewal is enabled. Valid values:
<li>0: auto-renewal not enabled.</li>
<li>1: auto-renewal enabled.</li>
                     * @return AutoRenew Whether auto-renewal is enabled. Valid values:
<li>0: auto-renewal not enabled.</li>
<li>1: auto-renewal enabled.</li>
                     */
                    uint64_t GetAutoRenew() const;

                    /**
                     * 设置Whether auto-renewal is enabled. Valid values:
<li>0: auto-renewal not enabled.</li>
<li>1: auto-renewal enabled.</li>
                     * @param AutoRenew Whether auto-renewal is enabled. Valid values:
<li>0: auto-renewal not enabled.</li>
<li>1: auto-renewal enabled.</li>
                     */
                    void SetAutoRenew(const uint64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取Client token.
                     * @return ClientToken Client token.
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置Client token.
                     * @param ClientToken Client token.
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取Whether to enable public IP access for master node. Valid values:
<li>NEED_MASTER_WAN: enables public IP for master node.</li>
<li>NOT_NEED_MASTER_WAN: does not enable.</li>Public IP is enabled for master node by default.
                     * @return NeedMasterWan Whether to enable public IP access for master node. Valid values:
<li>NEED_MASTER_WAN: enables public IP for master node.</li>
<li>NOT_NEED_MASTER_WAN: does not enable.</li>Public IP is enabled for master node by default.
                     */
                    std::string GetNeedMasterWan() const;

                    /**
                     * 设置Whether to enable public IP access for master node. Valid values:
<li>NEED_MASTER_WAN: enables public IP for master node.</li>
<li>NOT_NEED_MASTER_WAN: does not enable.</li>Public IP is enabled for master node by default.
                     * @param NeedMasterWan Whether to enable public IP access for master node. Valid values:
<li>NEED_MASTER_WAN: enables public IP for master node.</li>
<li>NOT_NEED_MASTER_WAN: does not enable.</li>Public IP is enabled for master node by default.
                     */
                    void SetNeedMasterWan(const std::string& _needMasterWan);

                    /**
                     * 判断参数 NeedMasterWan 是否已赋值
                     * @return NeedMasterWan 是否已赋值
                     */
                    bool NeedMasterWanHasBeenSet() const;

                    /**
                     * 获取Whether to enable remote public network login, i.e., port 22. When `SgId` is not empty, this parameter does not take effect.
                     * @return RemoteLoginAtCreate Whether to enable remote public network login, i.e., port 22. When `SgId` is not empty, this parameter does not take effect.
                     */
                    int64_t GetRemoteLoginAtCreate() const;

                    /**
                     * 设置Whether to enable remote public network login, i.e., port 22. When `SgId` is not empty, this parameter does not take effect.
                     * @param RemoteLoginAtCreate Whether to enable remote public network login, i.e., port 22. When `SgId` is not empty, this parameter does not take effect.
                     */
                    void SetRemoteLoginAtCreate(const int64_t& _remoteLoginAtCreate);

                    /**
                     * 判断参数 RemoteLoginAtCreate 是否已赋值
                     * @return RemoteLoginAtCreate 是否已赋值
                     */
                    bool RemoteLoginAtCreateHasBeenSet() const;

                    /**
                     * 获取Whether to enable secure cluster. 0: no; other values: yes.
                     * @return CheckSecurity Whether to enable secure cluster. 0: no; other values: yes.
                     */
                    int64_t GetCheckSecurity() const;

                    /**
                     * 设置Whether to enable secure cluster. 0: no; other values: yes.
                     * @param CheckSecurity Whether to enable secure cluster. 0: no; other values: yes.
                     */
                    void SetCheckSecurity(const int64_t& _checkSecurity);

                    /**
                     * 判断参数 CheckSecurity 是否已赋值
                     * @return CheckSecurity 是否已赋值
                     */
                    bool CheckSecurityHasBeenSet() const;

                    /**
                     * 获取Accesses to external file system.
                     * @return ExtendFsField Accesses to external file system.
                     */
                    std::string GetExtendFsField() const;

                    /**
                     * 设置Accesses to external file system.
                     * @param ExtendFsField Accesses to external file system.
                     */
                    void SetExtendFsField(const std::string& _extendFsField);

                    /**
                     * 判断参数 ExtendFsField 是否已赋值
                     * @return ExtendFsField 是否已赋值
                     */
                    bool ExtendFsFieldHasBeenSet() const;

                    /**
                     * 获取Tag description list. This parameter is used to bind a tag to a resource instance.
                     * @return Tags Tag description list. This parameter is used to bind a tag to a resource instance.
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag description list. This parameter is used to bind a tag to a resource instance.
                     * @param Tags Tag description list. This parameter is used to bind a tag to a resource instance.
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取List of spread placement group IDs. Only one can be specified currently.
This parameter can be obtained in the `SecurityGroupId` field in the return value of the [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/product/213/15486?from_cn_redirect=1) API.
                     * @return DisasterRecoverGroupIds List of spread placement group IDs. Only one can be specified currently.
This parameter can be obtained in the `SecurityGroupId` field in the return value of the [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/product/213/15486?from_cn_redirect=1) API.
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置List of spread placement group IDs. Only one can be specified currently.
This parameter can be obtained in the `SecurityGroupId` field in the return value of the [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/product/213/15486?from_cn_redirect=1) API.
                     * @param DisasterRecoverGroupIds List of spread placement group IDs. Only one can be specified currently.
This parameter can be obtained in the `SecurityGroupId` field in the return value of the [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/product/213/15486?from_cn_redirect=1) API.
                     */
                    void SetDisasterRecoverGroupIds(const std::vector<std::string>& _disasterRecoverGroupIds);

                    /**
                     * 判断参数 DisasterRecoverGroupIds 是否已赋值
                     * @return DisasterRecoverGroupIds 是否已赋值
                     */
                    bool DisasterRecoverGroupIdsHasBeenSet() const;

                    /**
                     * 获取CBS disk encryption at the cluster level. 0: not encrypted, 1: encrypted
                     * @return CbsEncrypt CBS disk encryption at the cluster level. 0: not encrypted, 1: encrypted
                     */
                    uint64_t GetCbsEncrypt() const;

                    /**
                     * 设置CBS disk encryption at the cluster level. 0: not encrypted, 1: encrypted
                     * @param CbsEncrypt CBS disk encryption at the cluster level. 0: not encrypted, 1: encrypted
                     */
                    void SetCbsEncrypt(const uint64_t& _cbsEncrypt);

                    /**
                     * 判断参数 CbsEncrypt 是否已赋值
                     * @return CbsEncrypt 是否已赋值
                     */
                    bool CbsEncryptHasBeenSet() const;

                    /**
                     * 获取Hive-shared metadatabase type. Valid values:
<li>EMR_DEFAULT_META: the cluster creates one by default.</li>
<li>EMR_EXIST_META: the cluster uses the specified EMR-MetaDB instance.</li>
<li>USER_CUSTOM_META: the cluster uses a custom MetaDB instance.</li>
                     * @return MetaType Hive-shared metadatabase type. Valid values:
<li>EMR_DEFAULT_META: the cluster creates one by default.</li>
<li>EMR_EXIST_META: the cluster uses the specified EMR-MetaDB instance.</li>
<li>USER_CUSTOM_META: the cluster uses a custom MetaDB instance.</li>
                     */
                    std::string GetMetaType() const;

                    /**
                     * 设置Hive-shared metadatabase type. Valid values:
<li>EMR_DEFAULT_META: the cluster creates one by default.</li>
<li>EMR_EXIST_META: the cluster uses the specified EMR-MetaDB instance.</li>
<li>USER_CUSTOM_META: the cluster uses a custom MetaDB instance.</li>
                     * @param MetaType Hive-shared metadatabase type. Valid values:
<li>EMR_DEFAULT_META: the cluster creates one by default.</li>
<li>EMR_EXIST_META: the cluster uses the specified EMR-MetaDB instance.</li>
<li>USER_CUSTOM_META: the cluster uses a custom MetaDB instance.</li>
                     */
                    void SetMetaType(const std::string& _metaType);

                    /**
                     * 判断参数 MetaType 是否已赋值
                     * @return MetaType 是否已赋值
                     */
                    bool MetaTypeHasBeenSet() const;

                    /**
                     * 获取EMR-MetaDB instance
                     * @return UnifyMetaInstanceId EMR-MetaDB instance
                     */
                    std::string GetUnifyMetaInstanceId() const;

                    /**
                     * 设置EMR-MetaDB instance
                     * @param UnifyMetaInstanceId EMR-MetaDB instance
                     */
                    void SetUnifyMetaInstanceId(const std::string& _unifyMetaInstanceId);

                    /**
                     * 判断参数 UnifyMetaInstanceId 是否已赋值
                     * @return UnifyMetaInstanceId 是否已赋值
                     */
                    bool UnifyMetaInstanceIdHasBeenSet() const;

                    /**
                     * 获取Custom MetaDB instance information
                     * @return MetaDBInfo Custom MetaDB instance information
                     */
                    CustomMetaInfo GetMetaDBInfo() const;

                    /**
                     * 设置Custom MetaDB instance information
                     * @param MetaDBInfo Custom MetaDB instance information
                     */
                    void SetMetaDBInfo(const CustomMetaInfo& _metaDBInfo);

                    /**
                     * 判断参数 MetaDBInfo 是否已赋值
                     * @return MetaDBInfo 是否已赋值
                     */
                    bool MetaDBInfoHasBeenSet() const;

                    /**
                     * 获取Custom application role.
                     * @return ApplicationRole Custom application role.
                     */
                    std::string GetApplicationRole() const;

                    /**
                     * 设置Custom application role.
                     * @param ApplicationRole Custom application role.
                     */
                    void SetApplicationRole(const std::string& _applicationRole);

                    /**
                     * 判断参数 ApplicationRole 是否已赋值
                     * @return ApplicationRole 是否已赋值
                     */
                    bool ApplicationRoleHasBeenSet() const;

                    /**
                     * 获取Scenario-based values:
Hadoop-Kudu
Hadoop-Zookeeper
Hadoop-Presto
Hadoop-Hbase
                     * @return SceneName Scenario-based values:
Hadoop-Kudu
Hadoop-Zookeeper
Hadoop-Presto
Hadoop-Hbase
                     */
                    std::string GetSceneName() const;

                    /**
                     * 设置Scenario-based values:
Hadoop-Kudu
Hadoop-Zookeeper
Hadoop-Presto
Hadoop-Hbase
                     * @param SceneName Scenario-based values:
Hadoop-Kudu
Hadoop-Zookeeper
Hadoop-Presto
Hadoop-Hbase
                     */
                    void SetSceneName(const std::string& _sceneName);

                    /**
                     * 判断参数 SceneName 是否已赋值
                     * @return SceneName 是否已赋值
                     */
                    bool SceneNameHasBeenSet() const;

                    /**
                     * 获取Shared component information
                     * @return ExternalService Shared component information
                     */
                    std::vector<ExternalService> GetExternalService() const;

                    /**
                     * 设置Shared component information
                     * @param ExternalService Shared component information
                     */
                    void SetExternalService(const std::vector<ExternalService>& _externalService);

                    /**
                     * 判断参数 ExternalService 是否已赋值
                     * @return ExternalService 是否已赋值
                     */
                    bool ExternalServiceHasBeenSet() const;

                private:

                    /**
                     * Product ID. Different product IDs represent different EMR product versions. Valid values:
<li>1: EMR v1.3.1</li>
<li>2: EMR v2.0.1</li>
<li>4: EMR v2.1.0</li>
<li>7: EMR v3.0.0</li>
<li>9: EMR v2.2.0</li>
<li>11: ClickHouse v1.0.0</li>
<li>13: Druid v1.0.0</li>
<li>15: EMR v2.2.1</li>
<li>16: EMR v2.3.0</li>
<li>17: ClickHouse v1.1.0</li>
<li>19: EMR v2.4.0</li>
<li>20: EMR v2.5.0</li>
<li>22: ClickHouse v1.2.0</li>
<li>24: EMR TianQiong v1.0.0</li>
<li>25: EMR v3.1.0</li>
<li>26: Doris v1.0.0</li>
<li>27: Kafka v1.0.0</li>
<li>28: EMR v3.2.0</li>
<li>29: EMR v2.5.1</li>
<li>30: EMR v2.6.0</li>
                     */
                    uint64_t m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * Configuration information of VPC. This parameter is used to specify the VPC ID, subnet ID, etc.
                     */
                    VPCSettings m_vPCSettings;
                    bool m_vPCSettingsHasBeenSet;

                    /**
                     * List of deployed components. The list of component options varies by EMR product ID (i.e., `ProductId`; for specific meanings, please see the `ProductId` input parameter). For more information, please see [Component Version](https://intl.cloud.tencent.com/document/product/589/20279?from_cn_redirect=1).
Enter an instance value: `hive` or `flink`.
                     */
                    std::vector<std::string> m_software;
                    bool m_softwareHasBeenSet;

                    /**
                     * Node resource specification.
                     */
                    NewResourceSpec m_resourceSpec;
                    bool m_resourceSpecHasBeenSet;

                    /**
                     * Whether to enable high node availability. Valid values:
<li>0: does not enable high availability of node.</li>
<li>1: enables high availability of node.</li>
                     */
                    uint64_t m_supportHA;
                    bool m_supportHAHasBeenSet;

                    /**
                     * Instance name.
<li>Length limit: 6-36 characters.</li>
<li>Only letters, numbers, dashes (-), and underscores (_) are supported.</li>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Instance billing mode. Valid values:
<li>0: pay-as-you-go.</li>
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Instance location. This parameter is used to specify the AZ, project, and other attributes of the instance.
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * Purchase duration of instance, which needs to be used together with `TimeUnit`.
<li>When `TimeUnit` is `s`, this parameter can only be filled with 3600, indicating a pay-as-you-go instance.</li>
<li>When `TimeUnit` is `m`, the number entered in this parameter indicates the purchase duration of the monthly-subscription instance; for example, 1 means one month</li>
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Time unit of instance purchase duration. Valid values:
<li>s: seconds. When `PayMode` is 0, `TimeUnit` can only be `s`.</li>
<li>m: month. When `PayMode` is 1, `TimeUnit` can only be `m`.</li>
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * Instance login settings. This parameter allows you to set the login password or key for your purchased node.
<li>If the key is set, the password will be only used for login to the native component WebUI.</li>
<li>If the key is not set, the password will be used for login to all purchased nodes and the native component WebUI.</li>
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * Parameter required for enabling COS access.
                     */
                    COSSettings m_cOSSettings;
                    bool m_cOSSettingsHasBeenSet;

                    /**
                     * Security group to which an instance belongs in the format of `sg-xxxxxxxx`. This parameter can be obtained from the `SecurityGroupId` field in the return value of the [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808) API.
                     */
                    std::string m_sgId;
                    bool m_sgIdHasBeenSet;

                    /**
                     * [Bootstrap action](https://intl.cloud.tencent.com/document/product/589/35656?from_cn_redirect=1) script settings
                     */
                    std::vector<PreExecuteFileSettings> m_preExecutedFileSettings;
                    bool m_preExecutedFileSettingsHasBeenSet;

                    /**
                     * Whether auto-renewal is enabled. Valid values:
<li>0: auto-renewal not enabled.</li>
<li>1: auto-renewal enabled.</li>
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * Client token.
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * Whether to enable public IP access for master node. Valid values:
<li>NEED_MASTER_WAN: enables public IP for master node.</li>
<li>NOT_NEED_MASTER_WAN: does not enable.</li>Public IP is enabled for master node by default.
                     */
                    std::string m_needMasterWan;
                    bool m_needMasterWanHasBeenSet;

                    /**
                     * Whether to enable remote public network login, i.e., port 22. When `SgId` is not empty, this parameter does not take effect.
                     */
                    int64_t m_remoteLoginAtCreate;
                    bool m_remoteLoginAtCreateHasBeenSet;

                    /**
                     * Whether to enable secure cluster. 0: no; other values: yes.
                     */
                    int64_t m_checkSecurity;
                    bool m_checkSecurityHasBeenSet;

                    /**
                     * Accesses to external file system.
                     */
                    std::string m_extendFsField;
                    bool m_extendFsFieldHasBeenSet;

                    /**
                     * Tag description list. This parameter is used to bind a tag to a resource instance.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * List of spread placement group IDs. Only one can be specified currently.
This parameter can be obtained in the `SecurityGroupId` field in the return value of the [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/product/213/15486?from_cn_redirect=1) API.
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                    /**
                     * CBS disk encryption at the cluster level. 0: not encrypted, 1: encrypted
                     */
                    uint64_t m_cbsEncrypt;
                    bool m_cbsEncryptHasBeenSet;

                    /**
                     * Hive-shared metadatabase type. Valid values:
<li>EMR_DEFAULT_META: the cluster creates one by default.</li>
<li>EMR_EXIST_META: the cluster uses the specified EMR-MetaDB instance.</li>
<li>USER_CUSTOM_META: the cluster uses a custom MetaDB instance.</li>
                     */
                    std::string m_metaType;
                    bool m_metaTypeHasBeenSet;

                    /**
                     * EMR-MetaDB instance
                     */
                    std::string m_unifyMetaInstanceId;
                    bool m_unifyMetaInstanceIdHasBeenSet;

                    /**
                     * Custom MetaDB instance information
                     */
                    CustomMetaInfo m_metaDBInfo;
                    bool m_metaDBInfoHasBeenSet;

                    /**
                     * Custom application role.
                     */
                    std::string m_applicationRole;
                    bool m_applicationRoleHasBeenSet;

                    /**
                     * Scenario-based values:
Hadoop-Kudu
Hadoop-Zookeeper
Hadoop-Presto
Hadoop-Hbase
                     */
                    std::string m_sceneName;
                    bool m_sceneNameHasBeenSet;

                    /**
                     * Shared component information
                     */
                    std::vector<ExternalService> m_externalService;
                    bool m_externalServiceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CREATEINSTANCEREQUEST_H_
