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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_CLONEINSTANCESREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_CLONEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/RedisNodeInfo.h>
#include <tencentcloud/redis/v20180412/model/ResourceTag.h>
#include <tencentcloud/redis/v20180412/model/PasswordPolicy.h>


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
                     * 获取<p>Specify the source instance ID to be cloned. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     * @return InstanceId <p>Specify the source instance ID to be cloned. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Specify the source instance ID to be cloned. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     * @param _instanceId <p>Specify the source instance ID to be cloned. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>The number of clone instances per operation.</p><ul><li>The maximum allowed number for each Monthly Subscription purchase is 100.</li><li>The maximum allowed number for each Pay-As-You-Go purchase is 30.</li></ul>
                     * @return GoodsNum <p>The number of clone instances per operation.</p><ul><li>The maximum allowed number for each Monthly Subscription purchase is 100.</li><li>The maximum allowed number for each Pay-As-You-Go purchase is 30.</li></ul>
                     * 
                     */
                    uint64_t GetGoodsNum() const;

                    /**
                     * 设置<p>The number of clone instances per operation.</p><ul><li>The maximum allowed number for each Monthly Subscription purchase is 100.</li><li>The maximum allowed number for each Pay-As-You-Go purchase is 30.</li></ul>
                     * @param _goodsNum <p>The number of clone instances per operation.</p><ul><li>The maximum allowed number for each Monthly Subscription purchase is 100.</li><li>The maximum allowed number for each Pay-As-You-Go purchase is 30.</li></ul>
                     * 
                     */
                    void SetGoodsNum(const uint64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取<p>Availability zone ID of the cloned instance. For supported AZ IDs, see <a href="https://www.tencentcloud.com/document/product/239/4106?from_cn_redirect=1">Regions and Availability Zones</a>.</p>
                     * @return ZoneId <p>Availability zone ID of the cloned instance. For supported AZ IDs, see <a href="https://www.tencentcloud.com/document/product/239/4106?from_cn_redirect=1">Regions and Availability Zones</a>.</p>
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置<p>Availability zone ID of the cloned instance. For supported AZ IDs, see <a href="https://www.tencentcloud.com/document/product/239/4106?from_cn_redirect=1">Regions and Availability Zones</a>.</p>
                     * @param _zoneId <p>Availability zone ID of the cloned instance. For supported AZ IDs, see <a href="https://www.tencentcloud.com/document/product/239/4106?from_cn_redirect=1">Regions and Availability Zones</a>.</p>
                     * 
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>Payment method.<ul><li>0: Pay-As-You-Go.</li><li>1: Monthly Subscription.</li></ul></p>
                     * @return BillingMode <p>Payment method.<ul><li>0: Pay-As-You-Go.</li><li>1: Monthly Subscription.</li></ul></p>
                     * 
                     */
                    int64_t GetBillingMode() const;

                    /**
                     * 设置<p>Payment method.<ul><li>0: Pay-As-You-Go.</li><li>1: Monthly Subscription.</li></ul></p>
                     * @param _billingMode <p>Payment method.<ul><li>0: Pay-As-You-Go.</li><li>1: Monthly Subscription.</li></ul></p>
                     * 
                     */
                    void SetBillingMode(const int64_t& _billingMode);

                    /**
                     * 判断参数 BillingMode 是否已赋值
                     * @return BillingMode 是否已赋值
                     * 
                     */
                    bool BillingModeHasBeenSet() const;

                    /**
                     * 获取<p>Instance Purchase Duration.<ul><li>Unit: month.</li><li>When the payment method is set to Monthly Subscription, the value range is [1,2,3,4,5,6,7,8,9,10,11,12,24,36,48,60].</li><li>When the payment method is set to Pay-As-You-Go, it is set to 1.</li></ul></p>
                     * @return Period <p>Instance Purchase Duration.<ul><li>Unit: month.</li><li>When the payment method is set to Monthly Subscription, the value range is [1,2,3,4,5,6,7,8,9,10,11,12,24,36,48,60].</li><li>When the payment method is set to Pay-As-You-Go, it is set to 1.</li></ul></p>
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置<p>Instance Purchase Duration.<ul><li>Unit: month.</li><li>When the payment method is set to Monthly Subscription, the value range is [1,2,3,4,5,6,7,8,9,10,11,12,24,36,48,60].</li><li>When the payment method is set to Pay-As-You-Go, it is set to 1.</li></ul></p>
                     * @param _period <p>Instance Purchase Duration.<ul><li>Unit: month.</li><li>When the payment method is set to Monthly Subscription, the value range is [1,2,3,4,5,6,7,8,9,10,11,12,24,36,48,60].</li><li>When the payment method is set to Pay-As-You-Go, it is set to 1.</li></ul></p>
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取<p>Security group ID. Call the <a href="https://www.tencentcloud.com/document/product/239/34447?from_cn_redirect=1">DescribeInstanceSecurityGroup</a> API to obtain the security group ID for the instance.</p>
                     * @return SecurityGroupIdList <p>Security group ID. Call the <a href="https://www.tencentcloud.com/document/product/239/34447?from_cn_redirect=1">DescribeInstanceSecurityGroup</a> API to obtain the security group ID for the instance.</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIdList() const;

                    /**
                     * 设置<p>Security group ID. Call the <a href="https://www.tencentcloud.com/document/product/239/34447?from_cn_redirect=1">DescribeInstanceSecurityGroup</a> API to obtain the security group ID for the instance.</p>
                     * @param _securityGroupIdList <p>Security group ID. Call the <a href="https://www.tencentcloud.com/document/product/239/34447?from_cn_redirect=1">DescribeInstanceSecurityGroup</a> API to obtain the security group ID for the instance.</p>
                     * 
                     */
                    void SetSecurityGroupIdList(const std::vector<std::string>& _securityGroupIdList);

                    /**
                     * 判断参数 SecurityGroupIdList 是否已赋值
                     * @return SecurityGroupIdList 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdListHasBeenSet() const;

                    /**
                     * 获取<p>Backup ID used to clone an instance. Use the interface <a href="https://www.tencentcloud.com/document/product/239/20011?from_cn_redirect=1">DescribeInstanceBackups</a> to obtain the backup ID.</p>
                     * @return BackupId <p>Backup ID used to clone an instance. Use the interface <a href="https://www.tencentcloud.com/document/product/239/20011?from_cn_redirect=1">DescribeInstanceBackups</a> to obtain the backup ID.</p>
                     * 
                     */
                    std::string GetBackupId() const;

                    /**
                     * 设置<p>Backup ID used to clone an instance. Use the interface <a href="https://www.tencentcloud.com/document/product/239/20011?from_cn_redirect=1">DescribeInstanceBackups</a> to obtain the backup ID.</p>
                     * @param _backupId <p>Backup ID used to clone an instance. Use the interface <a href="https://www.tencentcloud.com/document/product/239/20011?from_cn_redirect=1">DescribeInstanceBackups</a> to obtain the backup ID.</p>
                     * 
                     */
                    void SetBackupId(const std::string& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     * 
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取<p>Configure whether the cloned instance supports password-free access. Enabling SSL or public network does not support password-free access.<ul><li>true: Password-free instance,</li><li>false: Non-password-free instance. Default for non-passwordless instance.</li></ul></p>
                     * @return NoAuth <p>Configure whether the cloned instance supports password-free access. Enabling SSL or public network does not support password-free access.<ul><li>true: Password-free instance,</li><li>false: Non-password-free instance. Default for non-passwordless instance.</li></ul></p>
                     * 
                     */
                    bool GetNoAuth() const;

                    /**
                     * 设置<p>Configure whether the cloned instance supports password-free access. Enabling SSL or public network does not support password-free access.<ul><li>true: Password-free instance,</li><li>false: Non-password-free instance. Default for non-passwordless instance.</li></ul></p>
                     * @param _noAuth <p>Configure whether the cloned instance supports password-free access. Enabling SSL or public network does not support password-free access.<ul><li>true: Password-free instance,</li><li>false: Non-password-free instance. Default for non-passwordless instance.</li></ul></p>
                     * 
                     */
                    void SetNoAuth(const bool& _noAuth);

                    /**
                     * 判断参数 NoAuth 是否已赋值
                     * @return NoAuth 是否已赋值
                     * 
                     */
                    bool NoAuthHasBeenSet() const;

                    /**
                     * 获取<p>Configure the VPC ID for the clone instance. If not configured, the basic network is selected by default.</p>
                     * @return VpcId <p>Configure the VPC ID for the clone instance. If not configured, the basic network is selected by default.</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>Configure the VPC ID for the clone instance. If not configured, the basic network is selected by default.</p>
                     * @param _vpcId <p>Configure the VPC ID for the clone instance. If not configured, the basic network is selected by default.</p>
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>Configure the subnet of the private network for the cloned instance. This parameter requires no configuration for the basic network.</p>
                     * @return SubnetId <p>Configure the subnet of the private network for the cloned instance. This parameter requires no configuration for the basic network.</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>Configure the subnet of the private network for the cloned instance. This parameter requires no configuration for the basic network.</p>
                     * @param _subnetId <p>Configure the subnet of the private network for the cloned instance. This parameter requires no configuration for the basic network.</p>
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>Name of the cloned instance.<br>Only Chinese characters, English letters, numbers, dashes ("-"), or underscores ("_") are allowed, with a length of less than 60.<br></p>
                     * @return InstanceName <p>Name of the cloned instance.<br>Only Chinese characters, English letters, numbers, dashes ("-"), or underscores ("_") are allowed, with a length of less than 60.<br></p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Name of the cloned instance.<br>Only Chinese characters, English letters, numbers, dashes ("-"), or underscores ("_") are allowed, with a length of less than 60.<br></p>
                     * @param _instanceName <p>Name of the cloned instance.<br>Only Chinese characters, English letters, numbers, dashes ("-"), or underscores ("_") are allowed, with a length of less than 60.<br></p>
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
                     * 获取<p>The access password of the clone instance.<ul><li>When the input parameter <b>NoAuth</b> is <b>true</b>, setting this parameter is optional.</li><li>For Redis 2.8, 4.0, and 5.0 instances, the password format is: 8-30 characters, containing at least lowercase letters, uppercase letters, digits, and 2 types of characters from ()`~!@#$%^&amp;*-+=_|{}[]:;&lt;&gt;,.?/, and cannot start with "/".</li><li>For CKV 3.2 instances, the password format is: 8-30 characters, must include letters and digits, and exclude other characters.</li></ul></p>
                     * @return Password <p>The access password of the clone instance.<ul><li>When the input parameter <b>NoAuth</b> is <b>true</b>, setting this parameter is optional.</li><li>For Redis 2.8, 4.0, and 5.0 instances, the password format is: 8-30 characters, containing at least lowercase letters, uppercase letters, digits, and 2 types of characters from ()`~!@#$%^&amp;*-+=_|{}[]:;&lt;&gt;,.?/, and cannot start with "/".</li><li>For CKV 3.2 instances, the password format is: 8-30 characters, must include letters and digits, and exclude other characters.</li></ul></p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>The access password of the clone instance.<ul><li>When the input parameter <b>NoAuth</b> is <b>true</b>, setting this parameter is optional.</li><li>For Redis 2.8, 4.0, and 5.0 instances, the password format is: 8-30 characters, containing at least lowercase letters, uppercase letters, digits, and 2 types of characters from ()`~!@#$%^&amp;*-+=_|{}[]:;&lt;&gt;,.?/, and cannot start with "/".</li><li>For CKV 3.2 instances, the password format is: 8-30 characters, must include letters and digits, and exclude other characters.</li></ul></p>
                     * @param _password <p>The access password of the clone instance.<ul><li>When the input parameter <b>NoAuth</b> is <b>true</b>, setting this parameter is optional.</li><li>For Redis 2.8, 4.0, and 5.0 instances, the password format is: 8-30 characters, containing at least lowercase letters, uppercase letters, digits, and 2 types of characters from ()`~!@#$%^&amp;*-+=_|{}[]:;&lt;&gt;,.?/, and cannot start with "/".</li><li>For CKV 3.2 instances, the password format is: 8-30 characters, must include letters and digits, and exclude other characters.</li></ul></p>
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取<p>Automatic renewal flag.<ul><li>0: default status, manual renewal.</li><li>1: automatic renewal.</li><li>2: no automatic renewal, auto-isolation upon expiration.</li></ul></p>
                     * @return AutoRenew <p>Automatic renewal flag.<ul><li>0: default status, manual renewal.</li><li>1: automatic renewal.</li><li>2: no automatic renewal, auto-isolation upon expiration.</li></ul></p>
                     * 
                     */
                    uint64_t GetAutoRenew() const;

                    /**
                     * 设置<p>Automatic renewal flag.<ul><li>0: default status, manual renewal.</li><li>1: automatic renewal.</li><li>2: no automatic renewal, auto-isolation upon expiration.</li></ul></p>
                     * @param _autoRenew <p>Automatic renewal flag.<ul><li>0: default status, manual renewal.</li><li>1: automatic renewal.</li><li>2: no automatic renewal, auto-isolation upon expiration.</li></ul></p>
                     * 
                     */
                    void SetAutoRenew(const uint64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取<p>User-defined port, defaults to 6379, in the range of [1024,65535].</p>
                     * @return VPort <p>User-defined port, defaults to 6379, in the range of [1024,65535].</p>
                     * 
                     */
                    uint64_t GetVPort() const;

                    /**
                     * 设置<p>User-defined port, defaults to 6379, in the range of [1024,65535].</p>
                     * @param _vPort <p>User-defined port, defaults to 6379, in the range of [1024,65535].</p>
                     * 
                     */
                    void SetVPort(const uint64_t& _vPort);

                    /**
                     * 判断参数 VPort 是否已赋值
                     * @return VPort 是否已赋值
                     * 
                     */
                    bool VPortHasBeenSet() const;

                    /**
                     * 获取<p>Node information of instance.<ul><li>Currently supports configuring node type (primary node or replica node) and its availability zone info. For details, please refer to <a href="https://www.tencentcloud.com/document/product/239/20022?from_cn_redirect=1#RedisNodeInfo">RedisNodeInfo</a>.</li><li>This parameter can be left blank for single-AZ deployment.</li></ul></p>
                     * @return NodeSet <p>Node information of instance.<ul><li>Currently supports configuring node type (primary node or replica node) and its availability zone info. For details, please refer to <a href="https://www.tencentcloud.com/document/product/239/20022?from_cn_redirect=1#RedisNodeInfo">RedisNodeInfo</a>.</li><li>This parameter can be left blank for single-AZ deployment.</li></ul></p>
                     * 
                     */
                    std::vector<RedisNodeInfo> GetNodeSet() const;

                    /**
                     * 设置<p>Node information of instance.<ul><li>Currently supports configuring node type (primary node or replica node) and its availability zone info. For details, please refer to <a href="https://www.tencentcloud.com/document/product/239/20022?from_cn_redirect=1#RedisNodeInfo">RedisNodeInfo</a>.</li><li>This parameter can be left blank for single-AZ deployment.</li></ul></p>
                     * @param _nodeSet <p>Node information of instance.<ul><li>Currently supports configuring node type (primary node or replica node) and its availability zone info. For details, please refer to <a href="https://www.tencentcloud.com/document/product/239/20022?from_cn_redirect=1#RedisNodeInfo">RedisNodeInfo</a>.</li><li>This parameter can be left blank for single-AZ deployment.</li></ul></p>
                     * 
                     */
                    void SetNodeSet(const std::vector<RedisNodeInfo>& _nodeSet);

                    /**
                     * 判断参数 NodeSet 是否已赋值
                     * @return NodeSet 是否已赋值
                     * 
                     */
                    bool NodeSetHasBeenSet() const;

                    /**
                     * 获取<p>Project ID. Log in to the <a href="https://console.cloud.tencent.com/redis#/">Redis console</a>. You can find the project ID in the <b>Account Center</b> &gt; <b>Project Management</b> at the top-right corner.</p>
                     * @return ProjectId <p>Project ID. Log in to the <a href="https://console.cloud.tencent.com/redis#/">Redis console</a>. You can find the project ID in the <b>Account Center</b> &gt; <b>Project Management</b> at the top-right corner.</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>Project ID. Log in to the <a href="https://console.cloud.tencent.com/redis#/">Redis console</a>. You can find the project ID in the <b>Account Center</b> &gt; <b>Project Management</b> at the top-right corner.</p>
                     * @param _projectId <p>Project ID. Log in to the <a href="https://console.cloud.tencent.com/redis#/">Redis console</a>. You can find the project ID in the <b>Account Center</b> &gt; <b>Project Management</b> at the top-right corner.</p>
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>Tag bound to the clone instance.</p>
                     * @return ResourceTags <p>Tag bound to the clone instance.</p>
                     * 
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 设置<p>Tag bound to the clone instance.</p>
                     * @param _resourceTags <p>Tag bound to the clone instance.</p>
                     * 
                     */
                    void SetResourceTags(const std::vector<ResourceTag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取<p>Specify the parameter template ID related to the cloned instance.</p><ul><li>If this parameter is not configured, the system will automatically adapt the corresponding default template based on the selected compatible version and architecture.</li><li>Query the parameter template list of the instance through the <a href="https://www.tencentcloud.com/document/product/239/58750?from_cn_redirect=1">DescribeParamTemplates</a> API to obtain the template ID number.</li></ul>
                     * @return TemplateId <p>Specify the parameter template ID related to the cloned instance.</p><ul><li>If this parameter is not configured, the system will automatically adapt the corresponding default template based on the selected compatible version and architecture.</li><li>Query the parameter template list of the instance through the <a href="https://www.tencentcloud.com/document/product/239/58750?from_cn_redirect=1">DescribeParamTemplates</a> API to obtain the template ID number.</li></ul>
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置<p>Specify the parameter template ID related to the cloned instance.</p><ul><li>If this parameter is not configured, the system will automatically adapt the corresponding default template based on the selected compatible version and architecture.</li><li>Query the parameter template list of the instance through the <a href="https://www.tencentcloud.com/document/product/239/58750?from_cn_redirect=1">DescribeParamTemplates</a> API to obtain the template ID number.</li></ul>
                     * @param _templateId <p>Specify the parameter template ID related to the cloned instance.</p><ul><li>If this parameter is not configured, the system will automatically adapt the corresponding default template based on the selected compatible version and architecture.</li><li>Query the parameter template list of the instance through the <a href="https://www.tencentcloud.com/document/product/239/58750?from_cn_redirect=1">DescribeParamTemplates</a> API to obtain the template ID number.</li></ul>
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>Specify the alarm policy ID of the clone instance. Log in to the <a href="https://console.cloud.tencent.com/monitor/alarm2/policy">Tencent Cloud observability platform console</a>, and get policy ID information on the <b>alarm management</b> &gt; <b>policy management</b> page.</p>
                     * @return AlarmPolicyList <p>Specify the alarm policy ID of the clone instance. Log in to the <a href="https://console.cloud.tencent.com/monitor/alarm2/policy">Tencent Cloud observability platform console</a>, and get policy ID information on the <b>alarm management</b> &gt; <b>policy management</b> page.</p>
                     * 
                     */
                    std::vector<std::string> GetAlarmPolicyList() const;

                    /**
                     * 设置<p>Specify the alarm policy ID of the clone instance. Log in to the <a href="https://console.cloud.tencent.com/monitor/alarm2/policy">Tencent Cloud observability platform console</a>, and get policy ID information on the <b>alarm management</b> &gt; <b>policy management</b> page.</p>
                     * @param _alarmPolicyList <p>Specify the alarm policy ID of the clone instance. Log in to the <a href="https://console.cloud.tencent.com/monitor/alarm2/policy">Tencent Cloud observability platform console</a>, and get policy ID information on the <b>alarm management</b> &gt; <b>policy management</b> page.</p>
                     * 
                     */
                    void SetAlarmPolicyList(const std::vector<std::string>& _alarmPolicyList);

                    /**
                     * 判断参数 AlarmPolicyList 是否已赋值
                     * @return AlarmPolicyList 是否已赋值
                     * 
                     */
                    bool AlarmPolicyListHasBeenSet() const;

                    /**
                     * 获取<p>Clone the time when data is recovered.<br>Only instances with second-level backup enabled are supported.</p>
                     * @return CloneTime <p>Clone the time when data is recovered.<br>Only instances with second-level backup enabled are supported.</p>
                     * 
                     */
                    std::string GetCloneTime() const;

                    /**
                     * 设置<p>Clone the time when data is recovered.<br>Only instances with second-level backup enabled are supported.</p>
                     * @param _cloneTime <p>Clone the time when data is recovered.<br>Only instances with second-level backup enabled are supported.</p>
                     * 
                     */
                    void SetCloneTime(const std::string& _cloneTime);

                    /**
                     * 判断参数 CloneTime 是否已赋值
                     * @return CloneTime 是否已赋值
                     * 
                     */
                    bool CloneTimeHasBeenSet() const;

                    /**
                     * 获取<p>Whether to encrypt the password</p>
                     * @return EncryptPassword <p>Whether to encrypt the password</p>
                     * 
                     */
                    bool GetEncryptPassword() const;

                    /**
                     * 设置<p>Whether to encrypt the password</p>
                     * @param _encryptPassword <p>Whether to encrypt the password</p>
                     * 
                     */
                    void SetEncryptPassword(const bool& _encryptPassword);

                    /**
                     * 判断参数 EncryptPassword 是否已赋值
                     * @return EncryptPassword 是否已赋值
                     * 
                     */
                    bool EncryptPasswordHasBeenSet() const;

                    /**
                     * 获取<p>Instance password complexity policy</p><p>Input parameter limit: If not passed or Enabled=false, deem as not enabled and verify by default rule.</p>
                     * @return PasswordPolicy <p>Instance password complexity policy</p><p>Input parameter limit: If not passed or Enabled=false, deem as not enabled and verify by default rule.</p>
                     * 
                     */
                    PasswordPolicy GetPasswordPolicy() const;

                    /**
                     * 设置<p>Instance password complexity policy</p><p>Input parameter limit: If not passed or Enabled=false, deem as not enabled and verify by default rule.</p>
                     * @param _passwordPolicy <p>Instance password complexity policy</p><p>Input parameter limit: If not passed or Enabled=false, deem as not enabled and verify by default rule.</p>
                     * 
                     */
                    void SetPasswordPolicy(const PasswordPolicy& _passwordPolicy);

                    /**
                     * 判断参数 PasswordPolicy 是否已赋值
                     * @return PasswordPolicy 是否已赋值
                     * 
                     */
                    bool PasswordPolicyHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable SSL encryption.</p><p>Enumeration value:</p><ul><li>true: Enable.</li><li>false: Disable (default value).</li></ul><p>Default value: false</p>
                     * @return EnableSSL <p>Whether to enable SSL encryption.</p><p>Enumeration value:</p><ul><li>true: Enable.</li><li>false: Disable (default value).</li></ul><p>Default value: false</p>
                     * 
                     */
                    bool GetEnableSSL() const;

                    /**
                     * 设置<p>Whether to enable SSL encryption.</p><p>Enumeration value:</p><ul><li>true: Enable.</li><li>false: Disable (default value).</li></ul><p>Default value: false</p>
                     * @param _enableSSL <p>Whether to enable SSL encryption.</p><p>Enumeration value:</p><ul><li>true: Enable.</li><li>false: Disable (default value).</li></ul><p>Default value: false</p>
                     * 
                     */
                    void SetEnableSSL(const bool& _enableSSL);

                    /**
                     * 判断参数 EnableSSL 是否已赋值
                     * @return EnableSSL 是否已赋值
                     * 
                     */
                    bool EnableSSLHasBeenSet() const;

                    /**
                     * 获取<p>Whether to write the private IPv4 address of the instance to the domain alias (SAN) of the certificate when SSL is enabled. This parameter is valid only when EnableSSL is true.</p><p>Enumeration value:</p><ul><li>true: The private IP is allowed for SSL certificate verification.</li><li>false: The SAN extended information of the certificate is not added.</li></ul><p>Default value: false</p>
                     * @return SSLBindPrivateIPv4 <p>Whether to write the private IPv4 address of the instance to the domain alias (SAN) of the certificate when SSL is enabled. This parameter is valid only when EnableSSL is true.</p><p>Enumeration value:</p><ul><li>true: The private IP is allowed for SSL certificate verification.</li><li>false: The SAN extended information of the certificate is not added.</li></ul><p>Default value: false</p>
                     * 
                     */
                    bool GetSSLBindPrivateIPv4() const;

                    /**
                     * 设置<p>Whether to write the private IPv4 address of the instance to the domain alias (SAN) of the certificate when SSL is enabled. This parameter is valid only when EnableSSL is true.</p><p>Enumeration value:</p><ul><li>true: The private IP is allowed for SSL certificate verification.</li><li>false: The SAN extended information of the certificate is not added.</li></ul><p>Default value: false</p>
                     * @param _sSLBindPrivateIPv4 <p>Whether to write the private IPv4 address of the instance to the domain alias (SAN) of the certificate when SSL is enabled. This parameter is valid only when EnableSSL is true.</p><p>Enumeration value:</p><ul><li>true: The private IP is allowed for SSL certificate verification.</li><li>false: The SAN extended information of the certificate is not added.</li></ul><p>Default value: false</p>
                     * 
                     */
                    void SetSSLBindPrivateIPv4(const bool& _sSLBindPrivateIPv4);

                    /**
                     * 判断参数 SSLBindPrivateIPv4 是否已赋值
                     * @return SSLBindPrivateIPv4 是否已赋值
                     * 
                     */
                    bool SSLBindPrivateIPv4HasBeenSet() const;

                    /**
                     * 获取<p>Indicates the instance type.</p><p>Enumeration value:</p><ul><li>local: Common I</li><li>localv2: Common II</li></ul><p>If not passed, it remains the same as the original instance type by default.</p>
                     * @return ProductVersion <p>Indicates the instance type.</p><p>Enumeration value:</p><ul><li>local: Common I</li><li>localv2: Common II</li></ul><p>If not passed, it remains the same as the original instance type by default.</p>
                     * 
                     */
                    std::string GetProductVersion() const;

                    /**
                     * 设置<p>Indicates the instance type.</p><p>Enumeration value:</p><ul><li>local: Common I</li><li>localv2: Common II</li></ul><p>If not passed, it remains the same as the original instance type by default.</p>
                     * @param _productVersion <p>Indicates the instance type.</p><p>Enumeration value:</p><ul><li>local: Common I</li><li>localv2: Common II</li></ul><p>If not passed, it remains the same as the original instance type by default.</p>
                     * 
                     */
                    void SetProductVersion(const std::string& _productVersion);

                    /**
                     * 判断参数 ProductVersion 是否已赋值
                     * @return ProductVersion 是否已赋值
                     * 
                     */
                    bool ProductVersionHasBeenSet() const;

                private:

                    /**
                     * <p>Specify the source instance ID to be cloned. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>The number of clone instances per operation.</p><ul><li>The maximum allowed number for each Monthly Subscription purchase is 100.</li><li>The maximum allowed number for each Pay-As-You-Go purchase is 30.</li></ul>
                     */
                    uint64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * <p>Availability zone ID of the cloned instance. For supported AZ IDs, see <a href="https://www.tencentcloud.com/document/product/239/4106?from_cn_redirect=1">Regions and Availability Zones</a>.</p>
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>Payment method.<ul><li>0: Pay-As-You-Go.</li><li>1: Monthly Subscription.</li></ul></p>
                     */
                    int64_t m_billingMode;
                    bool m_billingModeHasBeenSet;

                    /**
                     * <p>Instance Purchase Duration.<ul><li>Unit: month.</li><li>When the payment method is set to Monthly Subscription, the value range is [1,2,3,4,5,6,7,8,9,10,11,12,24,36,48,60].</li><li>When the payment method is set to Pay-As-You-Go, it is set to 1.</li></ul></p>
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>Security group ID. Call the <a href="https://www.tencentcloud.com/document/product/239/34447?from_cn_redirect=1">DescribeInstanceSecurityGroup</a> API to obtain the security group ID for the instance.</p>
                     */
                    std::vector<std::string> m_securityGroupIdList;
                    bool m_securityGroupIdListHasBeenSet;

                    /**
                     * <p>Backup ID used to clone an instance. Use the interface <a href="https://www.tencentcloud.com/document/product/239/20011?from_cn_redirect=1">DescribeInstanceBackups</a> to obtain the backup ID.</p>
                     */
                    std::string m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * <p>Configure whether the cloned instance supports password-free access. Enabling SSL or public network does not support password-free access.<ul><li>true: Password-free instance,</li><li>false: Non-password-free instance. Default for non-passwordless instance.</li></ul></p>
                     */
                    bool m_noAuth;
                    bool m_noAuthHasBeenSet;

                    /**
                     * <p>Configure the VPC ID for the clone instance. If not configured, the basic network is selected by default.</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>Configure the subnet of the private network for the cloned instance. This parameter requires no configuration for the basic network.</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>Name of the cloned instance.<br>Only Chinese characters, English letters, numbers, dashes ("-"), or underscores ("_") are allowed, with a length of less than 60.<br></p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>The access password of the clone instance.<ul><li>When the input parameter <b>NoAuth</b> is <b>true</b>, setting this parameter is optional.</li><li>For Redis 2.8, 4.0, and 5.0 instances, the password format is: 8-30 characters, containing at least lowercase letters, uppercase letters, digits, and 2 types of characters from ()`~!@#$%^&amp;*-+=_|{}[]:;&lt;&gt;,.?/, and cannot start with "/".</li><li>For CKV 3.2 instances, the password format is: 8-30 characters, must include letters and digits, and exclude other characters.</li></ul></p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>Automatic renewal flag.<ul><li>0: default status, manual renewal.</li><li>1: automatic renewal.</li><li>2: no automatic renewal, auto-isolation upon expiration.</li></ul></p>
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * <p>User-defined port, defaults to 6379, in the range of [1024,65535].</p>
                     */
                    uint64_t m_vPort;
                    bool m_vPortHasBeenSet;

                    /**
                     * <p>Node information of instance.<ul><li>Currently supports configuring node type (primary node or replica node) and its availability zone info. For details, please refer to <a href="https://www.tencentcloud.com/document/product/239/20022?from_cn_redirect=1#RedisNodeInfo">RedisNodeInfo</a>.</li><li>This parameter can be left blank for single-AZ deployment.</li></ul></p>
                     */
                    std::vector<RedisNodeInfo> m_nodeSet;
                    bool m_nodeSetHasBeenSet;

                    /**
                     * <p>Project ID. Log in to the <a href="https://console.cloud.tencent.com/redis#/">Redis console</a>. You can find the project ID in the <b>Account Center</b> &gt; <b>Project Management</b> at the top-right corner.</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>Tag bound to the clone instance.</p>
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>Specify the parameter template ID related to the cloned instance.</p><ul><li>If this parameter is not configured, the system will automatically adapt the corresponding default template based on the selected compatible version and architecture.</li><li>Query the parameter template list of the instance through the <a href="https://www.tencentcloud.com/document/product/239/58750?from_cn_redirect=1">DescribeParamTemplates</a> API to obtain the template ID number.</li></ul>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>Specify the alarm policy ID of the clone instance. Log in to the <a href="https://console.cloud.tencent.com/monitor/alarm2/policy">Tencent Cloud observability platform console</a>, and get policy ID information on the <b>alarm management</b> &gt; <b>policy management</b> page.</p>
                     */
                    std::vector<std::string> m_alarmPolicyList;
                    bool m_alarmPolicyListHasBeenSet;

                    /**
                     * <p>Clone the time when data is recovered.<br>Only instances with second-level backup enabled are supported.</p>
                     */
                    std::string m_cloneTime;
                    bool m_cloneTimeHasBeenSet;

                    /**
                     * <p>Whether to encrypt the password</p>
                     */
                    bool m_encryptPassword;
                    bool m_encryptPasswordHasBeenSet;

                    /**
                     * <p>Instance password complexity policy</p><p>Input parameter limit: If not passed or Enabled=false, deem as not enabled and verify by default rule.</p>
                     */
                    PasswordPolicy m_passwordPolicy;
                    bool m_passwordPolicyHasBeenSet;

                    /**
                     * <p>Whether to enable SSL encryption.</p><p>Enumeration value:</p><ul><li>true: Enable.</li><li>false: Disable (default value).</li></ul><p>Default value: false</p>
                     */
                    bool m_enableSSL;
                    bool m_enableSSLHasBeenSet;

                    /**
                     * <p>Whether to write the private IPv4 address of the instance to the domain alias (SAN) of the certificate when SSL is enabled. This parameter is valid only when EnableSSL is true.</p><p>Enumeration value:</p><ul><li>true: The private IP is allowed for SSL certificate verification.</li><li>false: The SAN extended information of the certificate is not added.</li></ul><p>Default value: false</p>
                     */
                    bool m_sSLBindPrivateIPv4;
                    bool m_sSLBindPrivateIPv4HasBeenSet;

                    /**
                     * <p>Indicates the instance type.</p><p>Enumeration value:</p><ul><li>local: Common I</li><li>localv2: Common II</li></ul><p>If not passed, it remains the same as the original instance type by default.</p>
                     */
                    std::string m_productVersion;
                    bool m_productVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_CLONEINSTANCESREQUEST_H_
