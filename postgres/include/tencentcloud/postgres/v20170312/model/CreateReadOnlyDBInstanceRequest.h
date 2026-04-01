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
                     * 获取Primary AZ of an instance, such as "ap-guangzhou-3".
The information of AZ can be obtained from the `Zone` field in the return value of the [DescribeZones](https://intl.cloud.tencent.com/document/api/409/16769?from_cn_redirect=1) API.
                     * @return Zone Primary AZ of an instance, such as "ap-guangzhou-3".
The information of AZ can be obtained from the `Zone` field in the return value of the [DescribeZones](https://intl.cloud.tencent.com/document/api/409/16769?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Primary AZ of an instance, such as "ap-guangzhou-3".
The information of AZ can be obtained from the `Zone` field in the return value of the [DescribeZones](https://intl.cloud.tencent.com/document/api/409/16769?from_cn_redirect=1) API.
                     * @param _zone Primary AZ of an instance, such as "ap-guangzhou-3".
The information of AZ can be obtained from the `Zone` field in the return value of the [DescribeZones](https://intl.cloud.tencent.com/document/api/409/16769?from_cn_redirect=1) API.
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
                     * 获取Primary instance ID of the read-only instance. obtain through the api [DescribeDBInstances](https://www.tencentcloud.comom/document/api/409/16773?from_cn_redirect=1).
                     * @return MasterDBInstanceId Primary instance ID of the read-only instance. obtain through the api [DescribeDBInstances](https://www.tencentcloud.comom/document/api/409/16773?from_cn_redirect=1).
                     * 
                     */
                    std::string GetMasterDBInstanceId() const;

                    /**
                     * 设置Primary instance ID of the read-only instance. obtain through the api [DescribeDBInstances](https://www.tencentcloud.comom/document/api/409/16773?from_cn_redirect=1).
                     * @param _masterDBInstanceId Primary instance ID of the read-only instance. obtain through the api [DescribeDBInstances](https://www.tencentcloud.comom/document/api/409/16773?from_cn_redirect=1).
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
                     * 获取Purchasable code, which can be obtained from the `SpecCode` field in the return value of the [DescribeClasses](https://intl.cloud.tencent.com/document/api/409/89019?from_cn_redirect=1) API.
                     * @return SpecCode Purchasable code, which can be obtained from the `SpecCode` field in the return value of the [DescribeClasses](https://intl.cloud.tencent.com/document/api/409/89019?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetSpecCode() const;

                    /**
                     * 设置Purchasable code, which can be obtained from the `SpecCode` field in the return value of the [DescribeClasses](https://intl.cloud.tencent.com/document/api/409/89019?from_cn_redirect=1) API.
                     * @param _specCode Purchasable code, which can be obtained from the `SpecCode` field in the return value of the [DescribeClasses](https://intl.cloud.tencent.com/document/api/409/89019?from_cn_redirect=1) API.
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
                     * 获取Instance disk capacity size in GB. specifies the step length for parameter settings as 10.
                     * @return Storage Instance disk capacity size in GB. specifies the step length for parameter settings as 10.
                     * 
                     */
                    uint64_t GetStorage() const;

                    /**
                     * 设置Instance disk capacity size in GB. specifies the step length for parameter settings as 10.
                     * @param _storage Instance disk capacity size in GB. specifies the step length for parameter settings as 10.
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
                     * 获取Number of instances to purchase. value range: [1-6]. maximum allowed number is 6.
                     * @return InstanceCount Number of instances to purchase. value range: [1-6]. maximum allowed number is 6.
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置Number of instances to purchase. value range: [1-6]. maximum allowed number is 6.
                     * @param _instanceCount Number of instances to purchase. value range: [1-6]. maximum allowed number is 6.
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
                     * 获取Purchase duration, in months.
<Li>Prepaid: supports `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, and `36`.</li>.
<li>Pay-as-you-go: Only supports `1`.</li>
                     * @return Period Purchase duration, in months.
<Li>Prepaid: supports `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, and `36`.</li>.
<li>Pay-as-you-go: Only supports `1`.</li>
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置Purchase duration, in months.
<Li>Prepaid: supports `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, and `36`.</li>.
<li>Pay-as-you-go: Only supports `1`.</li>
                     * @param _period Purchase duration, in months.
<Li>Prepaid: supports `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, and `36`.</li>.
<li>Pay-as-you-go: Only supports `1`.</li>
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
                     * 获取VPC ID, in the format of vpc-xxxxxxxx (this parameter is currently required). A valid VpcId can be obtained by logging into the console; it can also be obtained from the unVpcId field in the return value of calling of the [DescribeVpcEx](https://intl.cloud.tencent.com/document/api/215/1372?from_cn_redirect=1) API.
                     * @return VpcId VPC ID, in the format of vpc-xxxxxxxx (this parameter is currently required). A valid VpcId can be obtained by logging into the console; it can also be obtained from the unVpcId field in the return value of calling of the [DescribeVpcEx](https://intl.cloud.tencent.com/document/api/215/1372?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID, in the format of vpc-xxxxxxxx (this parameter is currently required). A valid VpcId can be obtained by logging into the console; it can also be obtained from the unVpcId field in the return value of calling of the [DescribeVpcEx](https://intl.cloud.tencent.com/document/api/215/1372?from_cn_redirect=1) API.
                     * @param _vpcId VPC ID, in the format of vpc-xxxxxxxx (this parameter is currently required). A valid VpcId can be obtained by logging into the console; it can also be obtained from the unVpcId field in the return value of calling of the [DescribeVpcEx](https://intl.cloud.tencent.com/document/api/215/1372?from_cn_redirect=1) API.
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
                     * 获取VPC subnet ID, in the format of subnet-xxxxxxxx (this parameter is currently required). A valid VPC subnet ID can be obtained by logging into the console; it can also be obtained from the unSubnetId field in the return value of calling of the [DescribeSubnets](https://intl.cloud.tencent.com/document/api/215/15784?from_cn_redirect=1) API.
                     * @return SubnetId VPC subnet ID, in the format of subnet-xxxxxxxx (this parameter is currently required). A valid VPC subnet ID can be obtained by logging into the console; it can also be obtained from the unSubnetId field in the return value of calling of the [DescribeSubnets](https://intl.cloud.tencent.com/document/api/215/15784?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置VPC subnet ID, in the format of subnet-xxxxxxxx (this parameter is currently required). A valid VPC subnet ID can be obtained by logging into the console; it can also be obtained from the unSubnetId field in the return value of calling of the [DescribeSubnets](https://intl.cloud.tencent.com/document/api/215/15784?from_cn_redirect=1) API.
                     * @param _subnetId VPC subnet ID, in the format of subnet-xxxxxxxx (this parameter is currently required). A valid VPC subnet ID can be obtained by logging into the console; it can also be obtained from the unSubnetId field in the return value of calling of the [DescribeSubnets](https://intl.cloud.tencent.com/document/api/215/15784?from_cn_redirect=1) API.
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
                     * 获取Instance billing type, which currently supports:.
<Li>PREPAID: prepaid, i.e., yearly/monthly subscription.</li>.
<Li>POSTPAID_BY_HOUR: pay-as-you-go, i.e., pay by consumption.</li>.
Default value: PREPAID. if the primary instance is postpaid, the read-only instance must also be postpaid.
                     * @return InstanceChargeType Instance billing type, which currently supports:.
<Li>PREPAID: prepaid, i.e., yearly/monthly subscription.</li>.
<Li>POSTPAID_BY_HOUR: pay-as-you-go, i.e., pay by consumption.</li>.
Default value: PREPAID. if the primary instance is postpaid, the read-only instance must also be postpaid.
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置Instance billing type, which currently supports:.
<Li>PREPAID: prepaid, i.e., yearly/monthly subscription.</li>.
<Li>POSTPAID_BY_HOUR: pay-as-you-go, i.e., pay by consumption.</li>.
Default value: PREPAID. if the primary instance is postpaid, the read-only instance must also be postpaid.
                     * @param _instanceChargeType Instance billing type, which currently supports:.
<Li>PREPAID: prepaid, i.e., yearly/monthly subscription.</li>.
<Li>POSTPAID_BY_HOUR: pay-as-you-go, i.e., pay by consumption.</li>.
Default value: PREPAID. if the primary instance is postpaid, the read-only instance must also be postpaid.
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
                     * 获取Specifies whether to automatically use a voucher.
<Li>0: no.</li>.
<Li>`1`: yes.</li>.
Default value: 0
                     * @return AutoVoucher Specifies whether to automatically use a voucher.
<Li>0: no.</li>.
<Li>`1`: yes.</li>.
Default value: 0
                     * 
                     */
                    uint64_t GetAutoVoucher() const;

                    /**
                     * 设置Specifies whether to automatically use a voucher.
<Li>0: no.</li>.
<Li>`1`: yes.</li>.
Default value: 0
                     * @param _autoVoucher Specifies whether to automatically use a voucher.
<Li>0: no.</li>.
<Li>`1`: yes.</li>.
Default value: 0
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
                     * 获取Voucher ID list. Currently, you can specify only one voucher.
                     * @return VoucherIds Voucher ID list. Currently, you can specify only one voucher.
                     * 
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置Voucher ID list. Currently, you can specify only one voucher.
                     * @param _voucherIds Voucher ID list. Currently, you can specify only one voucher.
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
                     * 获取Specifies the auto-renewal flag.
<Li>`0`: manual renewal.</li>.
<Li>`1`: auto-renewal</li>.
Default value: 0
                     * @return AutoRenewFlag Specifies the auto-renewal flag.
<Li>`0`: manual renewal.</li>.
<Li>`1`: auto-renewal</li>.
Default value: 0
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Specifies the auto-renewal flag.
<Li>`0`: manual renewal.</li>.
<Li>`1`: auto-renewal</li>.
Default value: 0
                     * @param _autoRenewFlag Specifies the auto-renewal flag.
<Li>`0`: manual renewal.</li>.
<Li>`1`: auto-renewal</li>.
Default value: 0
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
                     * 获取Project ID. default value is 0, means it belongs to the default project.
                     * @return ProjectId Project ID. default value is 0, means it belongs to the default project.
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Project ID. default value is 0, means it belongs to the default project.
                     * @param _projectId Project ID. default value is 0, means it belongs to the default project.
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
                     * 获取Special offer ID
                     * @return ActivityId Special offer ID
                     * 
                     */
                    int64_t GetActivityId() const;

                    /**
                     * 设置Special offer ID
                     * @param _activityId Special offer ID
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
                     * 获取RO group ID
                     * @return ReadOnlyGroupId RO group ID
                     * 
                     */
                    std::string GetReadOnlyGroupId() const;

                    /**
                     * 设置RO group ID
                     * @param _readOnlyGroupId RO group ID
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
                     * 获取The information of tags to be bound with the instance, which is left empty by default. This parameter can be obtained from the `Tags` field in the return value of the [DescribeTags](https://intl.cloud.tencent.com/document/api/651/35316?from_cn_redirect=1) API.
                     * @return TagList The information of tags to be bound with the instance, which is left empty by default. This parameter can be obtained from the `Tags` field in the return value of the [DescribeTags](https://intl.cloud.tencent.com/document/api/651/35316?from_cn_redirect=1) API.
                     * 
                     */
                    Tag GetTagList() const;

                    /**
                     * 设置The information of tags to be bound with the instance, which is left empty by default. This parameter can be obtained from the `Tags` field in the return value of the [DescribeTags](https://intl.cloud.tencent.com/document/api/651/35316?from_cn_redirect=1) API.
                     * @param _tagList The information of tags to be bound with the instance, which is left empty by default. This parameter can be obtained from the `Tags` field in the return value of the [DescribeTags](https://intl.cloud.tencent.com/document/api/651/35316?from_cn_redirect=1) API.
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
                     * 获取Security group of the instance, which can be obtained from the `sgld` field in the return value of the [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808?from_cn_redirect=1) API. If this parameter is not specified, the default security group will be bound.

                     * @return SecurityGroupIds Security group of the instance, which can be obtained from the `sgld` field in the return value of the [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808?from_cn_redirect=1) API. If this parameter is not specified, the default security group will be bound.

                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Security group of the instance, which can be obtained from the `sgld` field in the return value of the [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808?from_cn_redirect=1) API. If this parameter is not specified, the default security group will be bound.

                     * @param _securityGroupIds Security group of the instance, which can be obtained from the `sgld` field in the return value of the [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808?from_cn_redirect=1) API. If this parameter is not specified, the default security group will be bound.

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
                     * 获取Specifies whether to support Ipv6.
<Li>0: no.</li>.
<Li>`1`: yes.</li>.
Default value: 0
                     * @return NeedSupportIpv6 Specifies whether to support Ipv6.
<Li>0: no.</li>.
<Li>`1`: yes.</li>.
Default value: 0
                     * 
                     */
                    uint64_t GetNeedSupportIpv6() const;

                    /**
                     * 设置Specifies whether to support Ipv6.
<Li>0: no.</li>.
<Li>`1`: yes.</li>.
Default value: 0
                     * @param _needSupportIpv6 Specifies whether to support Ipv6.
<Li>0: no.</li>.
<Li>`1`: yes.</li>.
Default value: 0
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
                     * 获取Instance name. only chinese characters, letters, digits, underscores (_), and delimiters (-) are supported. the length must be less than 60 characters.
                     * @return Name Instance name. only chinese characters, letters, digits, underscores (_), and delimiters (-) are supported. the length must be less than 60 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Instance name. only chinese characters, letters, digits, underscores (_), and delimiters (-) are supported. the length must be less than 60 characters.
                     * @param _name Instance name. only chinese characters, letters, digits, underscores (_), and delimiters (-) are supported. the length must be less than 60 characters.
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
                     * 获取Specifies the kernel version number should be consistent with the primary instance and no longer needed to be specified.
                     * @return DBVersion Specifies the kernel version number should be consistent with the primary instance and no longer needed to be specified.
                     * @deprecated
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置Specifies the kernel version number should be consistent with the primary instance and no longer needed to be specified.
                     * @param _dBVersion Specifies the kernel version number should be consistent with the primary instance and no longer needed to be specified.
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
                     * 获取CDC ID.
                     * @return DedicatedClusterId CDC ID.
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置CDC ID.
                     * @param _dedicatedClusterId CDC ID.
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
                     * 获取Specifies whether to enable deletion protection for the instance. valid values: true (enable deletion protection), false (disable deletion protection).
                     * @return DeletionProtection Specifies whether to enable deletion protection for the instance. valid values: true (enable deletion protection), false (disable deletion protection).
                     * 
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置Specifies whether to enable deletion protection for the instance. valid values: true (enable deletion protection), false (disable deletion protection).
                     * @param _deletionProtection Specifies whether to enable deletion protection for the instance. valid values: true (enable deletion protection), false (disable deletion protection).
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
                     * Primary AZ of an instance, such as "ap-guangzhou-3".
The information of AZ can be obtained from the `Zone` field in the return value of the [DescribeZones](https://intl.cloud.tencent.com/document/api/409/16769?from_cn_redirect=1) API.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Primary instance ID of the read-only instance. obtain through the api [DescribeDBInstances](https://www.tencentcloud.comom/document/api/409/16773?from_cn_redirect=1).
                     */
                    std::string m_masterDBInstanceId;
                    bool m_masterDBInstanceIdHasBeenSet;

                    /**
                     * Purchasable code, which can be obtained from the `SpecCode` field in the return value of the [DescribeClasses](https://intl.cloud.tencent.com/document/api/409/89019?from_cn_redirect=1) API.
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * Instance disk capacity size in GB. specifies the step length for parameter settings as 10.
                     */
                    uint64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * Number of instances to purchase. value range: [1-6]. maximum allowed number is 6.
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * Purchase duration, in months.
<Li>Prepaid: supports `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, and `36`.</li>.
<li>Pay-as-you-go: Only supports `1`.</li>
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * VPC ID, in the format of vpc-xxxxxxxx (this parameter is currently required). A valid VpcId can be obtained by logging into the console; it can also be obtained from the unVpcId field in the return value of calling of the [DescribeVpcEx](https://intl.cloud.tencent.com/document/api/215/1372?from_cn_redirect=1) API.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC subnet ID, in the format of subnet-xxxxxxxx (this parameter is currently required). A valid VPC subnet ID can be obtained by logging into the console; it can also be obtained from the unSubnetId field in the return value of calling of the [DescribeSubnets](https://intl.cloud.tencent.com/document/api/215/15784?from_cn_redirect=1) API.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Instance billing type, which currently supports:.
<Li>PREPAID: prepaid, i.e., yearly/monthly subscription.</li>.
<Li>POSTPAID_BY_HOUR: pay-as-you-go, i.e., pay by consumption.</li>.
Default value: PREPAID. if the primary instance is postpaid, the read-only instance must also be postpaid.
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * Specifies whether to automatically use a voucher.
<Li>0: no.</li>.
<Li>`1`: yes.</li>.
Default value: 0
                     */
                    uint64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * Voucher ID list. Currently, you can specify only one voucher.
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                    /**
                     * Specifies the auto-renewal flag.
<Li>`0`: manual renewal.</li>.
<Li>`1`: auto-renewal</li>.
Default value: 0
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Project ID. default value is 0, means it belongs to the default project.
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Special offer ID
                     */
                    int64_t m_activityId;
                    bool m_activityIdHasBeenSet;

                    /**
                     * RO group ID
                     */
                    std::string m_readOnlyGroupId;
                    bool m_readOnlyGroupIdHasBeenSet;

                    /**
                     * The information of tags to be bound with the instance, which is left empty by default. This parameter can be obtained from the `Tags` field in the return value of the [DescribeTags](https://intl.cloud.tencent.com/document/api/651/35316?from_cn_redirect=1) API.
                     */
                    Tag m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * Security group of the instance, which can be obtained from the `sgld` field in the return value of the [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808?from_cn_redirect=1) API. If this parameter is not specified, the default security group will be bound.

                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Specifies whether to support Ipv6.
<Li>0: no.</li>.
<Li>`1`: yes.</li>.
Default value: 0
                     */
                    uint64_t m_needSupportIpv6;
                    bool m_needSupportIpv6HasBeenSet;

                    /**
                     * Instance name. only chinese characters, letters, digits, underscores (_), and delimiters (-) are supported. the length must be less than 60 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Specifies the kernel version number should be consistent with the primary instance and no longer needed to be specified.
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                    /**
                     * CDC ID.
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                    /**
                     * Specifies whether to enable deletion protection for the instance. valid values: true (enable deletion protection), false (disable deletion protection).
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEREADONLYDBINSTANCEREQUEST_H_
