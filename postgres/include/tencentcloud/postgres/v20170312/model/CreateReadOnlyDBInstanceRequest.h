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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEREADONLYDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEREADONLYDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateReadOnlyDBInstance request structure.
                */
                class CreateReadOnlyDBInstanceRequest : public AbstractModel
                {
                public:
                    CreateReadOnlyDBInstanceRequest();
                    ~CreateReadOnlyDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Primary availability zone of the instance, such as: ap-guangzhou-3.<br>The availability zone can be obtained from the returned Zone field of the <a href="https://www.tencentcloud.com/document/api/409/16769?from_cn_redirect=1">DescribeZones</a> API.</p>
                     * @return Zone <p>Primary availability zone of the instance, such as: ap-guangzhou-3.<br>The availability zone can be obtained from the returned Zone field of the <a href="https://www.tencentcloud.com/document/api/409/16769?from_cn_redirect=1">DescribeZones</a> API.</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>Primary availability zone of the instance, such as: ap-guangzhou-3.<br>The availability zone can be obtained from the returned Zone field of the <a href="https://www.tencentcloud.com/document/api/409/16769?from_cn_redirect=1">DescribeZones</a> API.</p>
                     * @param _zone <p>Primary availability zone of the instance, such as: ap-guangzhou-3.<br>The availability zone can be obtained from the returned Zone field of the <a href="https://www.tencentcloud.com/document/api/409/16769?from_cn_redirect=1">DescribeZones</a> API.</p>
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>Primary instance ID of the read-only instance, which can be obtained through the <a href="https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1">DescribeDBInstances</a> API.</p>
                     * @return MasterDBInstanceId <p>Primary instance ID of the read-only instance, which can be obtained through the <a href="https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1">DescribeDBInstances</a> API.</p>
                     * 
                     */
                    std::string GetMasterDBInstanceId() const;

                    /**
                     * 设置<p>Primary instance ID of the read-only instance, which can be obtained through the <a href="https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1">DescribeDBInstances</a> API.</p>
                     * @param _masterDBInstanceId <p>Primary instance ID of the read-only instance, which can be obtained through the <a href="https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1">DescribeDBInstances</a> API.</p>
                     * 
                     */
                    void SetMasterDBInstanceId(const std::string& _masterDBInstanceId);

                    /**
                     * 判断参数 MasterDBInstanceId 是否已赋值
                     * @return MasterDBInstanceId 是否已赋值
                     * 
                     */
                    bool MasterDBInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Purchasable specification code. The value of this parameter can be obtained from the returned SpecCode field of the <a href="https://www.tencentcloud.com/document/api/409/89019?from_cn_redirect=1">DescribeClasses</a> API.</p>
                     * @return SpecCode <p>Purchasable specification code. The value of this parameter can be obtained from the returned SpecCode field of the <a href="https://www.tencentcloud.com/document/api/409/89019?from_cn_redirect=1">DescribeClasses</a> API.</p>
                     * 
                     */
                    std::string GetSpecCode() const;

                    /**
                     * 设置<p>Purchasable specification code. The value of this parameter can be obtained from the returned SpecCode field of the <a href="https://www.tencentcloud.com/document/api/409/89019?from_cn_redirect=1">DescribeClasses</a> API.</p>
                     * @param _specCode <p>Purchasable specification code. The value of this parameter can be obtained from the returned SpecCode field of the <a href="https://www.tencentcloud.com/document/api/409/89019?from_cn_redirect=1">DescribeClasses</a> API.</p>
                     * 
                     */
                    void SetSpecCode(const std::string& _specCode);

                    /**
                     * 判断参数 SpecCode 是否已赋值
                     * @return SpecCode 是否已赋值
                     * 
                     */
                    bool SpecCodeHasBeenSet() const;

                    /**
                     * 获取<p>Instance disk capacity, in GB. The value for this parameter must be set in increments of 10.</p>
                     * @return Storage <p>Instance disk capacity, in GB. The value for this parameter must be set in increments of 10.</p>
                     * 
                     */
                    uint64_t GetStorage() const;

                    /**
                     * 设置<p>Instance disk capacity, in GB. The value for this parameter must be set in increments of 10.</p>
                     * @param _storage <p>Instance disk capacity, in GB. The value for this parameter must be set in increments of 10.</p>
                     * 
                     */
                    void SetStorage(const uint64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取<p>Number of instances to purchase. Value range: [1-6]. The maximum allowed number is 6.</p>
                     * @return InstanceCount <p>Number of instances to purchase. Value range: [1-6]. The maximum allowed number is 6.</p>
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置<p>Number of instances to purchase. Value range: [1-6]. The maximum allowed number is 6.</p>
                     * @param _instanceCount <p>Number of instances to purchase. Value range: [1-6]. The maximum allowed number is 6.</p>
                     * 
                     */
                    void SetInstanceCount(const uint64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取<p>Purchase duration, in months.</p><li>Prepaid: supports 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36.</li><li>Postpaid: supports only 1.</li>
                     * @return Period <p>Purchase duration, in months.</p><li>Prepaid: supports 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36.</li><li>Postpaid: supports only 1.</li>
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置<p>Purchase duration, in months.</p><li>Prepaid: supports 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36.</li><li>Postpaid: supports only 1.</li>
                     * @param _period <p>Purchase duration, in months.</p><li>Prepaid: supports 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36.</li><li>Postpaid: supports only 1.</li>
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
                     * 获取<p>VPC ID, such as vpc-xxxxxxxx (this parameter is required). A valid VPC ID can be queried by logging in to the console. You can also call the <a href="https://www.tencentcloud.com/document/api/215/1372?from_cn_redirect=1">DescribeVpcEx</a> API to obtain it from the unVpcId field in the return value.</p>
                     * @return VpcId <p>VPC ID, such as vpc-xxxxxxxx (this parameter is required). A valid VPC ID can be queried by logging in to the console. You can also call the <a href="https://www.tencentcloud.com/document/api/215/1372?from_cn_redirect=1">DescribeVpcEx</a> API to obtain it from the unVpcId field in the return value.</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC ID, such as vpc-xxxxxxxx (this parameter is required). A valid VPC ID can be queried by logging in to the console. You can also call the <a href="https://www.tencentcloud.com/document/api/215/1372?from_cn_redirect=1">DescribeVpcEx</a> API to obtain it from the unVpcId field in the return value.</p>
                     * @param _vpcId <p>VPC ID, such as vpc-xxxxxxxx (this parameter is required). A valid VPC ID can be queried by logging in to the console. You can also call the <a href="https://www.tencentcloud.com/document/api/215/1372?from_cn_redirect=1">DescribeVpcEx</a> API to obtain it from the unVpcId field in the return value.</p>
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
                     * 获取<p>VPC subnet ID, such as subnet-xxxxxxxx (this parameter is required). A valid VPC subnet ID can be queried by logging in to the console. You can also call the <a href="https://www.tencentcloud.com/document/api/215/15784?from_cn_redirect=1">DescribeSubnets</a> API and obtain it from the unSubnetId field in the return value.</p>
                     * @return SubnetId <p>VPC subnet ID, such as subnet-xxxxxxxx (this parameter is required). A valid VPC subnet ID can be queried by logging in to the console. You can also call the <a href="https://www.tencentcloud.com/document/api/215/15784?from_cn_redirect=1">DescribeSubnets</a> API and obtain it from the unSubnetId field in the return value.</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>VPC subnet ID, such as subnet-xxxxxxxx (this parameter is required). A valid VPC subnet ID can be queried by logging in to the console. You can also call the <a href="https://www.tencentcloud.com/document/api/215/15784?from_cn_redirect=1">DescribeSubnets</a> API and obtain it from the unSubnetId field in the return value.</p>
                     * @param _subnetId <p>VPC subnet ID, such as subnet-xxxxxxxx (this parameter is required). A valid VPC subnet ID can be queried by logging in to the console. You can also call the <a href="https://www.tencentcloud.com/document/api/215/15784?from_cn_redirect=1">DescribeSubnets</a> API and obtain it from the unSubnetId field in the return value.</p>
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
                     * 获取<p>Instance billing type. Valid values:</p><li>PREPAID: prepaid (yearly/monthly subscription).</li><li>POSTPAID_BY_HOUR: postpaid (pay-as-you-go).</li>Default value: PREPAID. If the primary instance is postpaid, the read-only instance must also be postpaid.
                     * @return InstanceChargeType <p>Instance billing type. Valid values:</p><li>PREPAID: prepaid (yearly/monthly subscription).</li><li>POSTPAID_BY_HOUR: postpaid (pay-as-you-go).</li>Default value: PREPAID. If the primary instance is postpaid, the read-only instance must also be postpaid.
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>Instance billing type. Valid values:</p><li>PREPAID: prepaid (yearly/monthly subscription).</li><li>POSTPAID_BY_HOUR: postpaid (pay-as-you-go).</li>Default value: PREPAID. If the primary instance is postpaid, the read-only instance must also be postpaid.
                     * @param _instanceChargeType <p>Instance billing type. Valid values:</p><li>PREPAID: prepaid (yearly/monthly subscription).</li><li>POSTPAID_BY_HOUR: postpaid (pay-as-you-go).</li>Default value: PREPAID. If the primary instance is postpaid, the read-only instance must also be postpaid.
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
                     * 获取<p>Indicates whether to use vouchers automatically:</p><li>0: No.</li><li>1: Yes.</li>Default value: 0.
                     * @return AutoVoucher <p>Indicates whether to use vouchers automatically:</p><li>0: No.</li><li>1: Yes.</li>Default value: 0.
                     * 
                     */
                    uint64_t GetAutoVoucher() const;

                    /**
                     * 设置<p>Indicates whether to use vouchers automatically:</p><li>0: No.</li><li>1: Yes.</li>Default value: 0.
                     * @param _autoVoucher <p>Indicates whether to use vouchers automatically:</p><li>0: No.</li><li>1: Yes.</li>Default value: 0.
                     * 
                     */
                    void SetAutoVoucher(const uint64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取<p>Voucher ID list. Only one voucher can be specified.</p>
                     * @return VoucherIds <p>Voucher ID list. Only one voucher can be specified.</p>
                     * 
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置<p>Voucher ID list. Only one voucher can be specified.</p>
                     * @param _voucherIds <p>Voucher ID list. Only one voucher can be specified.</p>
                     * 
                     */
                    void SetVoucherIds(const std::vector<std::string>& _voucherIds);

                    /**
                     * 判断参数 VoucherIds 是否已赋值
                     * @return VoucherIds 是否已赋值
                     * 
                     */
                    bool VoucherIdsHasBeenSet() const;

                    /**
                     * 获取<p>Renewal flag:</p><li>0: manual renewal.</li><li>1: auto-renewal.</li>Default value: 0.
                     * @return AutoRenewFlag <p>Renewal flag:</p><li>0: manual renewal.</li><li>1: auto-renewal.</li>Default value: 0.
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置<p>Renewal flag:</p><li>0: manual renewal.</li><li>1: auto-renewal.</li>Default value: 0.
                     * @param _autoRenewFlag <p>Renewal flag:</p><li>0: manual renewal.</li><li>1: auto-renewal.</li>Default value: 0.
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>Project ID. The default value is 0, which means it belongs to the default project.</p>
                     * @return ProjectId <p>Project ID. The default value is 0, which means it belongs to the default project.</p>
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置<p>Project ID. The default value is 0, which means it belongs to the default project.</p>
                     * @param _projectId <p>Project ID. The default value is 0, which means it belongs to the default project.</p>
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
                     * 获取<p>Discount offer ID.</p>
                     * @return ActivityId <p>Discount offer ID.</p>
                     * 
                     */
                    int64_t GetActivityId() const;

                    /**
                     * 设置<p>Discount offer ID.</p>
                     * @param _activityId <p>Discount offer ID.</p>
                     * 
                     */
                    void SetActivityId(const int64_t& _activityId);

                    /**
                     * 判断参数 ActivityId 是否已赋值
                     * @return ActivityId 是否已赋值
                     * 
                     */
                    bool ActivityIdHasBeenSet() const;

                    /**
                     * 获取<p>Read-only group ID.</p>
                     * @return ReadOnlyGroupId <p>Read-only group ID.</p>
                     * 
                     */
                    std::string GetReadOnlyGroupId() const;

                    /**
                     * 设置<p>Read-only group ID.</p>
                     * @param _readOnlyGroupId <p>Read-only group ID.</p>
                     * 
                     */
                    void SetReadOnlyGroupId(const std::string& _readOnlyGroupId);

                    /**
                     * 判断参数 ReadOnlyGroupId 是否已赋值
                     * @return ReadOnlyGroupId 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>Tags to be bound to the instance. This is empty by default. Tags can be obtained from the returned Tags field of the <a href="https://www.tencentcloud.com/document/api/651/35316?from_cn_redirect=1">DescribeTags</a> API.</p>
                     * @return TagList <p>Tags to be bound to the instance. This is empty by default. Tags can be obtained from the returned Tags field of the <a href="https://www.tencentcloud.com/document/api/651/35316?from_cn_redirect=1">DescribeTags</a> API.</p>
                     * 
                     */
                    Tag GetTagList() const;

                    /**
                     * 设置<p>Tags to be bound to the instance. This is empty by default. Tags can be obtained from the returned Tags field of the <a href="https://www.tencentcloud.com/document/api/651/35316?from_cn_redirect=1">DescribeTags</a> API.</p>
                     * @param _tagList <p>Tags to be bound to the instance. This is empty by default. Tags can be obtained from the returned Tags field of the <a href="https://www.tencentcloud.com/document/api/651/35316?from_cn_redirect=1">DescribeTags</a> API.</p>
                     * 
                     */
                    void SetTagList(const Tag& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取<p>Security group to which the instance belongs. The value of this parameter can be obtained from the returned sgId field of the <a href="https://www.tencentcloud.com/document/api/215/15808?from_cn_redirect=1">DescribeSecurityGroups</a> API. If this parameter is not specified, the default security group is bound.</p>
                     * @return SecurityGroupIds <p>Security group to which the instance belongs. The value of this parameter can be obtained from the returned sgId field of the <a href="https://www.tencentcloud.com/document/api/215/15808?from_cn_redirect=1">DescribeSecurityGroups</a> API. If this parameter is not specified, the default security group is bound.</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>Security group to which the instance belongs. The value of this parameter can be obtained from the returned sgId field of the <a href="https://www.tencentcloud.com/document/api/215/15808?from_cn_redirect=1">DescribeSecurityGroups</a> API. If this parameter is not specified, the default security group is bound.</p>
                     * @param _securityGroupIds <p>Security group to which the instance belongs. The value of this parameter can be obtained from the returned sgId field of the <a href="https://www.tencentcloud.com/document/api/215/15808?from_cn_redirect=1">DescribeSecurityGroups</a> API. If this parameter is not specified, the default security group is bound.</p>
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
                     * 获取<p>Indicates whether to support IPv6:</p><li>0: No.</li><li>1: Yes.</li>Default value: 0.
                     * @return NeedSupportIpv6 <p>Indicates whether to support IPv6:</p><li>0: No.</li><li>1: Yes.</li>Default value: 0.
                     * 
                     */
                    uint64_t GetNeedSupportIpv6() const;

                    /**
                     * 设置<p>Indicates whether to support IPv6:</p><li>0: No.</li><li>1: Yes.</li>Default value: 0.
                     * @param _needSupportIpv6 <p>Indicates whether to support IPv6:</p><li>0: No.</li><li>1: Yes.</li>Default value: 0.
                     * 
                     */
                    void SetNeedSupportIpv6(const uint64_t& _needSupportIpv6);

                    /**
                     * 判断参数 NeedSupportIpv6 是否已赋值
                     * @return NeedSupportIpv6 是否已赋值
                     * 
                     */
                    bool NeedSupportIpv6HasBeenSet() const;

                    /**
                     * 获取<p>Instance name. The name can contain only Chinese characters, letters, digits, underscores (&quot;_&quot;), and hyphens (&quot;-&quot;), with a length of less than 60.</p>
                     * @return Name <p>Instance name. The name can contain only Chinese characters, letters, digits, underscores (&quot;_&quot;), and hyphens (&quot;-&quot;), with a length of less than 60.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Instance name. The name can contain only Chinese characters, letters, digits, underscores (&quot;_&quot;), and hyphens (&quot;-&quot;), with a length of less than 60.</p>
                     * @param _name <p>Instance name. The name can contain only Chinese characters, letters, digits, underscores (&quot;_&quot;), and hyphens (&quot;-&quot;), with a length of less than 60.</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Not required anymore. The kernel version is consistent with that of the primary instance.</p>
                     * @return DBVersion <p>Not required anymore. The kernel version is consistent with that of the primary instance.</p>
                     * @deprecated
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置<p>Not required anymore. The kernel version is consistent with that of the primary instance.</p>
                     * @param _dBVersion <p>Not required anymore. The kernel version is consistent with that of the primary instance.</p>
                     * @deprecated
                     */
                    void SetDBVersion(const std::string& _dBVersion);

                    /**
                     * 判断参数 DBVersion 是否已赋值
                     * @return DBVersion 是否已赋值
                     * @deprecated
                     */
                    bool DBVersionHasBeenSet() const;

                    /**
                     * 获取<p>Dedicated cluster ID.</p>
                     * @return DedicatedClusterId <p>Dedicated cluster ID.</p>
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置<p>Dedicated cluster ID.</p>
                     * @param _dedicatedClusterId <p>Dedicated cluster ID.</p>
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
                     * 获取<p>Indicates whether to enable deletion protection for the instance: true - enables deletion protection. false - disables deletion protection.</p>
                     * @return DeletionProtection <p>Indicates whether to enable deletion protection for the instance: true - enables deletion protection. false - disables deletion protection.</p>
                     * 
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置<p>Indicates whether to enable deletion protection for the instance: true - enables deletion protection. false - disables deletion protection.</p>
                     * @param _deletionProtection <p>Indicates whether to enable deletion protection for the instance: true - enables deletion protection. false - disables deletion protection.</p>
                     * 
                     */
                    void SetDeletionProtection(const bool& _deletionProtection);

                    /**
                     * 判断参数 DeletionProtection 是否已赋值
                     * @return DeletionProtection 是否已赋值
                     * 
                     */
                    bool DeletionProtectionHasBeenSet() const;

                private:

                    /**
                     * <p>Primary availability zone of the instance, such as: ap-guangzhou-3.<br>The availability zone can be obtained from the returned Zone field of the <a href="https://www.tencentcloud.com/document/api/409/16769?from_cn_redirect=1">DescribeZones</a> API.</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>Primary instance ID of the read-only instance, which can be obtained through the <a href="https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1">DescribeDBInstances</a> API.</p>
                     */
                    std::string m_masterDBInstanceId;
                    bool m_masterDBInstanceIdHasBeenSet;

                    /**
                     * <p>Purchasable specification code. The value of this parameter can be obtained from the returned SpecCode field of the <a href="https://www.tencentcloud.com/document/api/409/89019?from_cn_redirect=1">DescribeClasses</a> API.</p>
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * <p>Instance disk capacity, in GB. The value for this parameter must be set in increments of 10.</p>
                     */
                    uint64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * <p>Number of instances to purchase. Value range: [1-6]. The maximum allowed number is 6.</p>
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * <p>Purchase duration, in months.</p><li>Prepaid: supports 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36.</li><li>Postpaid: supports only 1.</li>
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>VPC ID, such as vpc-xxxxxxxx (this parameter is required). A valid VPC ID can be queried by logging in to the console. You can also call the <a href="https://www.tencentcloud.com/document/api/215/1372?from_cn_redirect=1">DescribeVpcEx</a> API to obtain it from the unVpcId field in the return value.</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>VPC subnet ID, such as subnet-xxxxxxxx (this parameter is required). A valid VPC subnet ID can be queried by logging in to the console. You can also call the <a href="https://www.tencentcloud.com/document/api/215/15784?from_cn_redirect=1">DescribeSubnets</a> API and obtain it from the unSubnetId field in the return value.</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>Instance billing type. Valid values:</p><li>PREPAID: prepaid (yearly/monthly subscription).</li><li>POSTPAID_BY_HOUR: postpaid (pay-as-you-go).</li>Default value: PREPAID. If the primary instance is postpaid, the read-only instance must also be postpaid.
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>Indicates whether to use vouchers automatically:</p><li>0: No.</li><li>1: Yes.</li>Default value: 0.
                     */
                    uint64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * <p>Voucher ID list. Only one voucher can be specified.</p>
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                    /**
                     * <p>Renewal flag:</p><li>0: manual renewal.</li><li>1: auto-renewal.</li>Default value: 0.
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>Project ID. The default value is 0, which means it belongs to the default project.</p>
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>Discount offer ID.</p>
                     */
                    int64_t m_activityId;
                    bool m_activityIdHasBeenSet;

                    /**
                     * <p>Read-only group ID.</p>
                     */
                    std::string m_readOnlyGroupId;
                    bool m_readOnlyGroupIdHasBeenSet;

                    /**
                     * <p>Tags to be bound to the instance. This is empty by default. Tags can be obtained from the returned Tags field of the <a href="https://www.tencentcloud.com/document/api/651/35316?from_cn_redirect=1">DescribeTags</a> API.</p>
                     */
                    Tag m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * <p>Security group to which the instance belongs. The value of this parameter can be obtained from the returned sgId field of the <a href="https://www.tencentcloud.com/document/api/215/15808?from_cn_redirect=1">DescribeSecurityGroups</a> API. If this parameter is not specified, the default security group is bound.</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p>Indicates whether to support IPv6:</p><li>0: No.</li><li>1: Yes.</li>Default value: 0.
                     */
                    uint64_t m_needSupportIpv6;
                    bool m_needSupportIpv6HasBeenSet;

                    /**
                     * <p>Instance name. The name can contain only Chinese characters, letters, digits, underscores (&quot;_&quot;), and hyphens (&quot;-&quot;), with a length of less than 60.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Not required anymore. The kernel version is consistent with that of the primary instance.</p>
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                    /**
                     * <p>Dedicated cluster ID.</p>
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                    /**
                     * <p>Indicates whether to enable deletion protection for the instance: true - enables deletion protection. false - disables deletion protection.</p>
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEREADONLYDBINSTANCEREQUEST_H_
