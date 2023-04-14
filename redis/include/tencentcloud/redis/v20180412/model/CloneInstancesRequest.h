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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_CLONEINSTANCESREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_CLONEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/RedisNodeInfo.h>
#include <tencentcloud/redis/v20180412/model/ResourceTag.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * CloneInstances request structure.
                */
                class CloneInstancesRequest : public AbstractModel
                {
                public:
                    CloneInstancesRequest();
                    ~CloneInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the current instance
                     * @return InstanceId ID of the current instance
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the current instance
                     * @param InstanceId ID of the current instance
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Number of instance to be cloned each time. You can purchase up to 100 monthly subscribed instances or up to 30 pay-as-you-go instances at a time. You can purchase up to 100 instances in each region.
                     * @return GoodsNum Number of instance to be cloned each time. You can purchase up to 100 monthly subscribed instances or up to 30 pay-as-you-go instances at a time. You can purchase up to 100 instances in each region.
                     */
                    uint64_t GetGoodsNum() const;

                    /**
                     * 设置Number of instance to be cloned each time. You can purchase up to 100 monthly subscribed instances or up to 30 pay-as-you-go instances at a time. You can purchase up to 100 instances in each region.
                     * @param GoodsNum Number of instance to be cloned each time. You can purchase up to 100 monthly subscribed instances or up to 30 pay-as-you-go instances at a time. You can purchase up to 100 instances in each region.
                     */
                    void SetGoodsNum(const uint64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取ID of the AZ where the clone instance resides. For more information, see [Regions and AZs](https://intl.cloud.tencent.com/document/product/239/4106?from_cn_redirect=1).
                     * @return ZoneId ID of the AZ where the clone instance resides. For more information, see [Regions and AZs](https://intl.cloud.tencent.com/document/product/239/4106?from_cn_redirect=1).
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置ID of the AZ where the clone instance resides. For more information, see [Regions and AZs](https://intl.cloud.tencent.com/document/product/239/4106?from_cn_redirect=1).
                     * @param ZoneId ID of the AZ where the clone instance resides. For more information, see [Regions and AZs](https://intl.cloud.tencent.com/document/product/239/4106?from_cn_redirect=1).
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Billing mode. Valid values: <ul><li>`0` (Pay-as-you-go) </li><li>`1` (Monthly subscription) </li></ul>
                     * @return BillingMode Billing mode. Valid values: <ul><li>`0` (Pay-as-you-go) </li><li>`1` (Monthly subscription) </li></ul>
                     */
                    int64_t GetBillingMode() const;

                    /**
                     * 设置Billing mode. Valid values: <ul><li>`0` (Pay-as-you-go) </li><li>`1` (Monthly subscription) </li></ul>
                     * @param BillingMode Billing mode. Valid values: <ul><li>`0` (Pay-as-you-go) </li><li>`1` (Monthly subscription) </li></ul>
                     */
                    void SetBillingMode(const int64_t& _billingMode);

                    /**
                     * 判断参数 BillingMode 是否已赋值
                     * @return BillingMode 是否已赋值
                     */
                    bool BillingModeHasBeenSet() const;

                    /**
                     * 获取Purchase duration of an instance. <ul><li>Unit: Month</li><li>Valid values: `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, `36`, `48`, `60` (for monthly subscription mode).</li><li> Valid value: `1` (for pay-as-you-go mode).</li></ul>
                     * @return Period Purchase duration of an instance. <ul><li>Unit: Month</li><li>Valid values: `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, `36`, `48`, `60` (for monthly subscription mode).</li><li> Valid value: `1` (for pay-as-you-go mode).</li></ul>
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置Purchase duration of an instance. <ul><li>Unit: Month</li><li>Valid values: `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, `36`, `48`, `60` (for monthly subscription mode).</li><li> Valid value: `1` (for pay-as-you-go mode).</li></ul>
                     * @param Period Purchase duration of an instance. <ul><li>Unit: Month</li><li>Valid values: `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, `36`, `48`, `60` (for monthly subscription mode).</li><li> Valid value: `1` (for pay-as-you-go mode).</li></ul>
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Security group ID, which can be obtained on the <b>Security Group</b> page in the console.
                     * @return SecurityGroupIdList Security group ID, which can be obtained on the <b>Security Group</b> page in the console.
                     */
                    std::vector<std::string> GetSecurityGroupIdList() const;

                    /**
                     * 设置Security group ID, which can be obtained on the <b>Security Group</b> page in the console.
                     * @param SecurityGroupIdList Security group ID, which can be obtained on the <b>Security Group</b> page in the console.
                     */
                    void SetSecurityGroupIdList(const std::vector<std::string>& _securityGroupIdList);

                    /**
                     * 判断参数 SecurityGroupIdList 是否已赋值
                     * @return SecurityGroupIdList 是否已赋值
                     */
                    bool SecurityGroupIdListHasBeenSet() const;

                    /**
                     * 获取Backup ID of the clone instance, which can be obtained through the [DescribeInstanceBackups](https://intl.cloud.tencent.com/document/product/239/20011?from_cn_redirect=1) API.
                     * @return BackupId Backup ID of the clone instance, which can be obtained through the [DescribeInstanceBackups](https://intl.cloud.tencent.com/document/product/239/20011?from_cn_redirect=1) API.
                     */
                    std::string GetBackupId() const;

                    /**
                     * 设置Backup ID of the clone instance, which can be obtained through the [DescribeInstanceBackups](https://intl.cloud.tencent.com/document/product/239/20011?from_cn_redirect=1) API.
                     * @param BackupId Backup ID of the clone instance, which can be obtained through the [DescribeInstanceBackups](https://intl.cloud.tencent.com/document/product/239/20011?from_cn_redirect=1) API.
                     */
                    void SetBackupId(const std::string& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取Whether the clone instance supports password-free access. Valid values: <ul><li>`true` (Yes)</li><li>`false` (No. When SSL or public network is enabled). Default value: `false`.</li></ul>
                     * @return NoAuth Whether the clone instance supports password-free access. Valid values: <ul><li>`true` (Yes)</li><li>`false` (No. When SSL or public network is enabled). Default value: `false`.</li></ul>
                     */
                    bool GetNoAuth() const;

                    /**
                     * 设置Whether the clone instance supports password-free access. Valid values: <ul><li>`true` (Yes)</li><li>`false` (No. When SSL or public network is enabled). Default value: `false`.</li></ul>
                     * @param NoAuth Whether the clone instance supports password-free access. Valid values: <ul><li>`true` (Yes)</li><li>`false` (No. When SSL or public network is enabled). Default value: `false`.</li></ul>
                     */
                    void SetNoAuth(const bool& _noAuth);

                    /**
                     * 判断参数 NoAuth 是否已赋值
                     * @return NoAuth 是否已赋值
                     */
                    bool NoAuthHasBeenSet() const;

                    /**
                     * 获取VPC ID. If this parameter is not passed in, the classic network will be selected by default.
                     * @return VpcId VPC ID. If this parameter is not passed in, the classic network will be selected by default.
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID. If this parameter is not passed in, the classic network will be selected by default.
                     * @param VpcId VPC ID. If this parameter is not passed in, the classic network will be selected by default.
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取VPC subnet ID, which is not required for the classic network.
                     * @return SubnetId VPC subnet ID, which is not required for the classic network.
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置VPC subnet ID, which is not required for the classic network.
                     * @param SubnetId VPC subnet ID, which is not required for the classic network.
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Name of the clone instance. <br>Enter up to 60 letters, digits, hyphens, and underscores.</br>
                     * @return InstanceName Name of the clone instance. <br>Enter up to 60 letters, digits, hyphens, and underscores.</br>
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Name of the clone instance. <br>Enter up to 60 letters, digits, hyphens, and underscores.</br>
                     * @param InstanceName Name of the clone instance. <br>Enter up to 60 letters, digits, hyphens, and underscores.</br>
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取The access password of the clone instance. <ul><li>When the input parameter <b>NoAuth</b> is <b>true</b>, this parameter is not required. </li><li>When the instance is Redis 2.8, 4.0, or 5.0, the password must contain 8–30 characters in at least two of the following types: lowercase letters, uppercase letters, digits, and special characters `()`~!@#$%^&*-+=_|{}[]:;<>,.?/` and cannot start with `/`.</li><li>When the instance is CKV 3.2, the password must and can only contain 8–30 letters and digits.</li></ul>
                     * @return Password The access password of the clone instance. <ul><li>When the input parameter <b>NoAuth</b> is <b>true</b>, this parameter is not required. </li><li>When the instance is Redis 2.8, 4.0, or 5.0, the password must contain 8–30 characters in at least two of the following types: lowercase letters, uppercase letters, digits, and special characters `()`~!@#$%^&*-+=_|{}[]:;<>,.?/` and cannot start with `/`.</li><li>When the instance is CKV 3.2, the password must and can only contain 8–30 letters and digits.</li></ul>
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置The access password of the clone instance. <ul><li>When the input parameter <b>NoAuth</b> is <b>true</b>, this parameter is not required. </li><li>When the instance is Redis 2.8, 4.0, or 5.0, the password must contain 8–30 characters in at least two of the following types: lowercase letters, uppercase letters, digits, and special characters `()`~!@#$%^&*-+=_|{}[]:;<>,.?/` and cannot start with `/`.</li><li>When the instance is CKV 3.2, the password must and can only contain 8–30 letters and digits.</li></ul>
                     * @param Password The access password of the clone instance. <ul><li>When the input parameter <b>NoAuth</b> is <b>true</b>, this parameter is not required. </li><li>When the instance is Redis 2.8, 4.0, or 5.0, the password must contain 8–30 characters in at least two of the following types: lowercase letters, uppercase letters, digits, and special characters `()`~!@#$%^&*-+=_|{}[]:;<>,.?/` and cannot start with `/`.</li><li>When the instance is CKV 3.2, the password must and can only contain 8–30 letters and digits.</li></ul>
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取The auto-renewal flag. Valid values <ul><li>`0`: Manual renewal (default) </li><li>`1`: Auto-renewal. </li><li>`2`: Not auto-renewal (set by user)</ul>
                     * @return AutoRenew The auto-renewal flag. Valid values <ul><li>`0`: Manual renewal (default) </li><li>`1`: Auto-renewal. </li><li>`2`: Not auto-renewal (set by user)</ul>
                     */
                    uint64_t GetAutoRenew() const;

                    /**
                     * 设置The auto-renewal flag. Valid values <ul><li>`0`: Manual renewal (default) </li><li>`1`: Auto-renewal. </li><li>`2`: Not auto-renewal (set by user)</ul>
                     * @param AutoRenew The auto-renewal flag. Valid values <ul><li>`0`: Manual renewal (default) </li><li>`1`: Auto-renewal. </li><li>`2`: Not auto-renewal (set by user)</ul>
                     */
                    void SetAutoRenew(const uint64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取Customized port. Valid range: 1024-65535. Default value: `6379`.
                     * @return VPort Customized port. Valid range: 1024-65535. Default value: `6379`.
                     */
                    uint64_t GetVPort() const;

                    /**
                     * 设置Customized port. Valid range: 1024-65535. Default value: `6379`.
                     * @param VPort Customized port. Valid range: 1024-65535. Default value: `6379`.
                     */
                    void SetVPort(const uint64_t& _vPort);

                    /**
                     * 判断参数 VPort 是否已赋值
                     * @return VPort 是否已赋值
                     */
                    bool VPortHasBeenSet() const;

                    /**
                     * 获取Node information of an instance. <ul><li>Currently supported type and AZ information of a node to be configured (master node or replica node) For more information, see [RedisNodeInfo](https://intl.cloud.tencent.com/document/product/239/20022?from_cn_redirect=1#RedisNodeInfo).</li><li>This parameter is not required for single-AZ deployment.</li></ul>
                     * @return NodeSet Node information of an instance. <ul><li>Currently supported type and AZ information of a node to be configured (master node or replica node) For more information, see [RedisNodeInfo](https://intl.cloud.tencent.com/document/product/239/20022?from_cn_redirect=1#RedisNodeInfo).</li><li>This parameter is not required for single-AZ deployment.</li></ul>
                     */
                    std::vector<RedisNodeInfo> GetNodeSet() const;

                    /**
                     * 设置Node information of an instance. <ul><li>Currently supported type and AZ information of a node to be configured (master node or replica node) For more information, see [RedisNodeInfo](https://intl.cloud.tencent.com/document/product/239/20022?from_cn_redirect=1#RedisNodeInfo).</li><li>This parameter is not required for single-AZ deployment.</li></ul>
                     * @param NodeSet Node information of an instance. <ul><li>Currently supported type and AZ information of a node to be configured (master node or replica node) For more information, see [RedisNodeInfo](https://intl.cloud.tencent.com/document/product/239/20022?from_cn_redirect=1#RedisNodeInfo).</li><li>This parameter is not required for single-AZ deployment.</li></ul>
                     */
                    void SetNodeSet(const std::vector<RedisNodeInfo>& _nodeSet);

                    /**
                     * 判断参数 NodeSet 是否已赋值
                     * @return NodeSet 是否已赋值
                     */
                    bool NodeSetHasBeenSet() const;

                    /**
                     * 获取Project ID, which can be obtained in <b>Account Center</b> > <b>Project Management</b> in the upper-right corner in the console.
                     * @return ProjectId Project ID, which can be obtained in <b>Account Center</b> > <b>Project Management</b> in the upper-right corner in the console.
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID, which can be obtained in <b>Account Center</b> > <b>Project Management</b> in the upper-right corner in the console.
                     * @param ProjectId Project ID, which can be obtained in <b>Account Center</b> > <b>Project Management</b> in the upper-right corner in the console.
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Tag to be bound for the clone instance
                     * @return ResourceTags Tag to be bound for the clone instance
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 设置Tag to be bound for the clone instance
                     * @param ResourceTags Tag to be bound for the clone instance
                     */
                    void SetResourceTags(const std::vector<ResourceTag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取The ID of a parameter template to be applied to the clone instance, which can be obtained on <b>Parameter Template</b> page in the console. If this parameter is not configured, the default parameter template will be applied.
                     * @return TemplateId The ID of a parameter template to be applied to the clone instance, which can be obtained on <b>Parameter Template</b> page in the console. If this parameter is not configured, the default parameter template will be applied.
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置The ID of a parameter template to be applied to the clone instance, which can be obtained on <b>Parameter Template</b> page in the console. If this parameter is not configured, the default parameter template will be applied.
                     * @param TemplateId The ID of a parameter template to be applied to the clone instance, which can be obtained on <b>Parameter Template</b> page in the console. If this parameter is not configured, the default parameter template will be applied.
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取Alarm policy ID of the specified clone instance, which can be obtained on <b>Cloud Monitor</b> > <b>Alarm Configuration</b> > <b>Alarm Policy</b> in the console.
                     * @return AlarmPolicyList Alarm policy ID of the specified clone instance, which can be obtained on <b>Cloud Monitor</b> > <b>Alarm Configuration</b> > <b>Alarm Policy</b> in the console.
                     */
                    std::vector<std::string> GetAlarmPolicyList() const;

                    /**
                     * 设置Alarm policy ID of the specified clone instance, which can be obtained on <b>Cloud Monitor</b> > <b>Alarm Configuration</b> > <b>Alarm Policy</b> in the console.
                     * @param AlarmPolicyList Alarm policy ID of the specified clone instance, which can be obtained on <b>Cloud Monitor</b> > <b>Alarm Configuration</b> > <b>Alarm Policy</b> in the console.
                     */
                    void SetAlarmPolicyList(const std::vector<std::string>& _alarmPolicyList);

                    /**
                     * 判断参数 AlarmPolicyList 是否已赋值
                     * @return AlarmPolicyList 是否已赋值
                     */
                    bool AlarmPolicyListHasBeenSet() const;

                private:

                    /**
                     * ID of the current instance
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Number of instance to be cloned each time. You can purchase up to 100 monthly subscribed instances or up to 30 pay-as-you-go instances at a time. You can purchase up to 100 instances in each region.
                     */
                    uint64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * ID of the AZ where the clone instance resides. For more information, see [Regions and AZs](https://intl.cloud.tencent.com/document/product/239/4106?from_cn_redirect=1).
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Billing mode. Valid values: <ul><li>`0` (Pay-as-you-go) </li><li>`1` (Monthly subscription) </li></ul>
                     */
                    int64_t m_billingMode;
                    bool m_billingModeHasBeenSet;

                    /**
                     * Purchase duration of an instance. <ul><li>Unit: Month</li><li>Valid values: `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, `36`, `48`, `60` (for monthly subscription mode).</li><li> Valid value: `1` (for pay-as-you-go mode).</li></ul>
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Security group ID, which can be obtained on the <b>Security Group</b> page in the console.
                     */
                    std::vector<std::string> m_securityGroupIdList;
                    bool m_securityGroupIdListHasBeenSet;

                    /**
                     * Backup ID of the clone instance, which can be obtained through the [DescribeInstanceBackups](https://intl.cloud.tencent.com/document/product/239/20011?from_cn_redirect=1) API.
                     */
                    std::string m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * Whether the clone instance supports password-free access. Valid values: <ul><li>`true` (Yes)</li><li>`false` (No. When SSL or public network is enabled). Default value: `false`.</li></ul>
                     */
                    bool m_noAuth;
                    bool m_noAuthHasBeenSet;

                    /**
                     * VPC ID. If this parameter is not passed in, the classic network will be selected by default.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC subnet ID, which is not required for the classic network.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Name of the clone instance. <br>Enter up to 60 letters, digits, hyphens, and underscores.</br>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * The access password of the clone instance. <ul><li>When the input parameter <b>NoAuth</b> is <b>true</b>, this parameter is not required. </li><li>When the instance is Redis 2.8, 4.0, or 5.0, the password must contain 8–30 characters in at least two of the following types: lowercase letters, uppercase letters, digits, and special characters `()`~!@#$%^&*-+=_|{}[]:;<>,.?/` and cannot start with `/`.</li><li>When the instance is CKV 3.2, the password must and can only contain 8–30 letters and digits.</li></ul>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * The auto-renewal flag. Valid values <ul><li>`0`: Manual renewal (default) </li><li>`1`: Auto-renewal. </li><li>`2`: Not auto-renewal (set by user)</ul>
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * Customized port. Valid range: 1024-65535. Default value: `6379`.
                     */
                    uint64_t m_vPort;
                    bool m_vPortHasBeenSet;

                    /**
                     * Node information of an instance. <ul><li>Currently supported type and AZ information of a node to be configured (master node or replica node) For more information, see [RedisNodeInfo](https://intl.cloud.tencent.com/document/product/239/20022?from_cn_redirect=1#RedisNodeInfo).</li><li>This parameter is not required for single-AZ deployment.</li></ul>
                     */
                    std::vector<RedisNodeInfo> m_nodeSet;
                    bool m_nodeSetHasBeenSet;

                    /**
                     * Project ID, which can be obtained in <b>Account Center</b> > <b>Project Management</b> in the upper-right corner in the console.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Tag to be bound for the clone instance
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * The ID of a parameter template to be applied to the clone instance, which can be obtained on <b>Parameter Template</b> page in the console. If this parameter is not configured, the default parameter template will be applied.
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Alarm policy ID of the specified clone instance, which can be obtained on <b>Cloud Monitor</b> > <b>Alarm Configuration</b> > <b>Alarm Policy</b> in the console.
                     */
                    std::vector<std::string> m_alarmPolicyList;
                    bool m_alarmPolicyListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_CLONEINSTANCESREQUEST_H_
