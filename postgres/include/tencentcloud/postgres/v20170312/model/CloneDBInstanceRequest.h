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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_CLONEDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_CLONEDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/Tag.h>
#include <tencentcloud/postgres/v20170312/model/DBNode.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CloneDBInstance request structure.
                */
                class CloneDBInstanceRequest : public AbstractModel
                {
                public:
                    CloneDBInstanceRequest();
                    ~CloneDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the original instance to be cloned.
                     * @return DBInstanceId ID of the original instance to be cloned.
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置ID of the original instance to be cloned.
                     * @param _dBInstanceId ID of the original instance to be cloned.
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

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
                     * 获取Instance storage capacity in GB.
                     * @return Storage Instance storage capacity in GB.
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置Instance storage capacity in GB.
                     * @param _storage Instance storage capacity in GB.
                     * 
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取Purchase duration, in months.

- Prepaid: Supports `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, and `36`.
- Pay-as-you-go: Only supports `1`.

                     * @return Period Purchase duration, in months.

- Prepaid: Supports `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, and `36`.
- Pay-as-you-go: Only supports `1`.

                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Purchase duration, in months.

- Prepaid: Supports `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, and `36`.
- Pay-as-you-go: Only supports `1`.

                     * @param _period Purchase duration, in months.

- Prepaid: Supports `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, and `36`.
- Pay-as-you-go: Only supports `1`.

                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Renewal Flag:

- `0`: manual renewal
`1`: auto-renewal

Default value: 0
                     * @return AutoRenewFlag Renewal Flag:

- `0`: manual renewal
`1`: auto-renewal

Default value: 0
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Renewal Flag:

- `0`: manual renewal
`1`: auto-renewal

Default value: 0
                     * @param _autoRenewFlag Renewal Flag:

- `0`: manual renewal
`1`: auto-renewal

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
                     * 获取VPC ID in the format of `vpc-xxxxxxx`, which can be obtained in the console or from the `unVpcId` field in the return value of the [DescribeVpcEx](https://intl.cloud.tencent.com/document/api/215/1372?from_cn_redirect=1) API.
                     * @return VpcId VPC ID in the format of `vpc-xxxxxxx`, which can be obtained in the console or from the `unVpcId` field in the return value of the [DescribeVpcEx](https://intl.cloud.tencent.com/document/api/215/1372?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID in the format of `vpc-xxxxxxx`, which can be obtained in the console or from the `unVpcId` field in the return value of the [DescribeVpcEx](https://intl.cloud.tencent.com/document/api/215/1372?from_cn_redirect=1) API.
                     * @param _vpcId VPC ID in the format of `vpc-xxxxxxx`, which can be obtained in the console or from the `unVpcId` field in the return value of the [DescribeVpcEx](https://intl.cloud.tencent.com/document/api/215/1372?from_cn_redirect=1) API.
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
                     * 获取VPC subnet ID in the format of `subnet-xxxxxxxx`, which can be obtained in the console or from the `unSubnetId` field in the return value of the [DescribeSubnets](https://intl.cloud.tencent.com/document/api/215/15784?from_cn_redirect=1) API.
                     * @return SubnetId VPC subnet ID in the format of `subnet-xxxxxxxx`, which can be obtained in the console or from the `unSubnetId` field in the return value of the [DescribeSubnets](https://intl.cloud.tencent.com/document/api/215/15784?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置VPC subnet ID in the format of `subnet-xxxxxxxx`, which can be obtained in the console or from the `unSubnetId` field in the return value of the [DescribeSubnets](https://intl.cloud.tencent.com/document/api/215/15784?from_cn_redirect=1) API.
                     * @param _subnetId VPC subnet ID in the format of `subnet-xxxxxxxx`, which can be obtained in the console or from the `unSubnetId` field in the return value of the [DescribeSubnets](https://intl.cloud.tencent.com/document/api/215/15784?from_cn_redirect=1) API.
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
                     * 获取Name of the newly purchased instance, which can contain up to 60 letters, digits, or symbols (-_). If this parameter is not specified, "Unnamed" will be displayed by default.
                     * @return Name Name of the newly purchased instance, which can contain up to 60 letters, digits, or symbols (-_). If this parameter is not specified, "Unnamed" will be displayed by default.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of the newly purchased instance, which can contain up to 60 letters, digits, or symbols (-_). If this parameter is not specified, "Unnamed" will be displayed by default.
                     * @param _name Name of the newly purchased instance, which can contain up to 60 letters, digits, or symbols (-_). If this parameter is not specified, "Unnamed" will be displayed by default.
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
                     * 获取Instance billing type, which currently supports:

- PREPAID: Prepaid, i.e., monthly subscription
- POSTPAID_BY_HOUR: Pay-as-you-go, i.e., pay by consumption

Default value: PREPAID
                     * @return InstanceChargeType Instance billing type, which currently supports:

- PREPAID: Prepaid, i.e., monthly subscription
- POSTPAID_BY_HOUR: Pay-as-you-go, i.e., pay by consumption

Default value: PREPAID
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置Instance billing type, which currently supports:

- PREPAID: Prepaid, i.e., monthly subscription
- POSTPAID_BY_HOUR: Pay-as-you-go, i.e., pay by consumption

Default value: PREPAID
                     * @param _instanceChargeType Instance billing type, which currently supports:

- PREPAID: Prepaid, i.e., monthly subscription
- POSTPAID_BY_HOUR: Pay-as-you-go, i.e., pay by consumption

Default value: PREPAID
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
                     * 获取Project ID.
                     * @return ProjectId Project ID.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID.
                     * @param _projectId Project ID.
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
                     * 获取The information of tags to be bound with the instance, which is left empty by default. This parameter can be obtained from the `Tags` field in the return value of the [DescribeTags](https://intl.cloud.tencent.com/document/api/651/35316?from_cn_redirect=1) API.
                     * @return TagList The information of tags to be bound with the instance, which is left empty by default. This parameter can be obtained from the `Tags` field in the return value of the [DescribeTags](https://intl.cloud.tencent.com/document/api/651/35316?from_cn_redirect=1) API.
                     * 
                     */
                    std::vector<Tag> GetTagList() const;

                    /**
                     * 设置The information of tags to be bound with the instance, which is left empty by default. This parameter can be obtained from the `Tags` field in the return value of the [DescribeTags](https://intl.cloud.tencent.com/document/api/651/35316?from_cn_redirect=1) API.
                     * @param _tagList The information of tags to be bound with the instance, which is left empty by default. This parameter can be obtained from the `Tags` field in the return value of the [DescribeTags](https://intl.cloud.tencent.com/document/api/651/35316?from_cn_redirect=1) API.
                     * 
                     */
                    void SetTagList(const std::vector<Tag>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取Deployment information of the instance node, which will display the information of each AZ when the instance node is deployed across multiple AZs.
The information of AZ can be obtained from the `Zone` field in the return value of the [DescribeZones](https://intl.cloud.tencent.com/document/api/409/16769?from_cn_redirect=1) API.
                     * @return DBNodeSet Deployment information of the instance node, which will display the information of each AZ when the instance node is deployed across multiple AZs.
The information of AZ can be obtained from the `Zone` field in the return value of the [DescribeZones](https://intl.cloud.tencent.com/document/api/409/16769?from_cn_redirect=1) API.
                     * 
                     */
                    std::vector<DBNode> GetDBNodeSet() const;

                    /**
                     * 设置Deployment information of the instance node, which will display the information of each AZ when the instance node is deployed across multiple AZs.
The information of AZ can be obtained from the `Zone` field in the return value of the [DescribeZones](https://intl.cloud.tencent.com/document/api/409/16769?from_cn_redirect=1) API.
                     * @param _dBNodeSet Deployment information of the instance node, which will display the information of each AZ when the instance node is deployed across multiple AZs.
The information of AZ can be obtained from the `Zone` field in the return value of the [DescribeZones](https://intl.cloud.tencent.com/document/api/409/16769?from_cn_redirect=1) API.
                     * 
                     */
                    void SetDBNodeSet(const std::vector<DBNode>& _dBNodeSet);

                    /**
                     * 判断参数 DBNodeSet 是否已赋值
                     * @return DBNodeSet 是否已赋值
                     * 
                     */
                    bool DBNodeSetHasBeenSet() const;

                    /**
                     * 获取Whether to automatically use coupons:

- 0: No
- 1: Yes

Default value: 0
                     * @return AutoVoucher Whether to automatically use coupons:

- 0: No
- 1: Yes

Default value: 0
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置Whether to automatically use coupons:

- 0: No
- 1: Yes

Default value: 0
                     * @param _autoVoucher Whether to automatically use coupons:

- 0: No
- 1: Yes

Default value: 0
                     * 
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取Voucher ID list.
                     * @return VoucherIds Voucher ID list.
                     * 
                     */
                    std::string GetVoucherIds() const;

                    /**
                     * 设置Voucher ID list.
                     * @param _voucherIds Voucher ID list.
                     * 
                     */
                    void SetVoucherIds(const std::string& _voucherIds);

                    /**
                     * 判断参数 VoucherIds 是否已赋值
                     * @return VoucherIds 是否已赋值
                     * 
                     */
                    bool VoucherIdsHasBeenSet() const;

                    /**
                     * 获取Campaign ID.
                     * @return ActivityId Campaign ID.
                     * 
                     */
                    int64_t GetActivityId() const;

                    /**
                     * 设置Campaign ID.
                     * @param _activityId Campaign ID.
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
                     * 获取Basic backup set ID.
                     * @return BackupSetId Basic backup set ID.
                     * 
                     */
                    std::string GetBackupSetId() const;

                    /**
                     * 设置Basic backup set ID.
                     * @param _backupSetId Basic backup set ID.
                     * 
                     */
                    void SetBackupSetId(const std::string& _backupSetId);

                    /**
                     * 判断参数 BackupSetId 是否已赋值
                     * @return BackupSetId 是否已赋值
                     * 
                     */
                    bool BackupSetIdHasBeenSet() const;

                    /**
                     * 获取Restoration point in time.
                     * @return RecoveryTargetTime Restoration point in time.
                     * 
                     */
                    std::string GetRecoveryTargetTime() const;

                    /**
                     * 设置Restoration point in time.
                     * @param _recoveryTargetTime Restoration point in time.
                     * 
                     */
                    void SetRecoveryTargetTime(const std::string& _recoveryTargetTime);

                    /**
                     * 判断参数 RecoveryTargetTime 是否已赋值
                     * @return RecoveryTargetTime 是否已赋值
                     * 
                     */
                    bool RecoveryTargetTimeHasBeenSet() const;

                    /**
                     * 获取Primary-standby sync mode, which supports:
<li>Semi-sync: Semi-sync</li>
<li>Async: Asynchronous</li>
Default value for the primary instance: Semi-sync
Default value for the read-only instance: Async
                     * @return SyncMode Primary-standby sync mode, which supports:
<li>Semi-sync: Semi-sync</li>
<li>Async: Asynchronous</li>
Default value for the primary instance: Semi-sync
Default value for the read-only instance: Async
                     * 
                     */
                    std::string GetSyncMode() const;

                    /**
                     * 设置Primary-standby sync mode, which supports:
<li>Semi-sync: Semi-sync</li>
<li>Async: Asynchronous</li>
Default value for the primary instance: Semi-sync
Default value for the read-only instance: Async
                     * @param _syncMode Primary-standby sync mode, which supports:
<li>Semi-sync: Semi-sync</li>
<li>Async: Asynchronous</li>
Default value for the primary instance: Semi-sync
Default value for the read-only instance: Async
                     * 
                     */
                    void SetSyncMode(const std::string& _syncMode);

                    /**
                     * 判断参数 SyncMode 是否已赋值
                     * @return SyncMode 是否已赋值
                     * 
                     */
                    bool SyncModeHasBeenSet() const;

                private:

                    /**
                     * ID of the original instance to be cloned.
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Purchasable code, which can be obtained from the `SpecCode` field in the return value of the [DescribeClasses](https://intl.cloud.tencent.com/document/api/409/89019?from_cn_redirect=1) API.
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * Instance storage capacity in GB.
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * Purchase duration, in months.

- Prepaid: Supports `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, and `36`.
- Pay-as-you-go: Only supports `1`.

                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Renewal Flag:

- `0`: manual renewal
`1`: auto-renewal

Default value: 0
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * VPC ID in the format of `vpc-xxxxxxx`, which can be obtained in the console or from the `unVpcId` field in the return value of the [DescribeVpcEx](https://intl.cloud.tencent.com/document/api/215/1372?from_cn_redirect=1) API.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC subnet ID in the format of `subnet-xxxxxxxx`, which can be obtained in the console or from the `unSubnetId` field in the return value of the [DescribeSubnets](https://intl.cloud.tencent.com/document/api/215/15784?from_cn_redirect=1) API.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Name of the newly purchased instance, which can contain up to 60 letters, digits, or symbols (-_). If this parameter is not specified, "Unnamed" will be displayed by default.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Instance billing type, which currently supports:

- PREPAID: Prepaid, i.e., monthly subscription
- POSTPAID_BY_HOUR: Pay-as-you-go, i.e., pay by consumption

Default value: PREPAID
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * Security group of the instance, which can be obtained from the `sgld` field in the return value of the [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808?from_cn_redirect=1) API. If this parameter is not specified, the default security group will be bound.

                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Project ID.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * The information of tags to be bound with the instance, which is left empty by default. This parameter can be obtained from the `Tags` field in the return value of the [DescribeTags](https://intl.cloud.tencent.com/document/api/651/35316?from_cn_redirect=1) API.
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * Deployment information of the instance node, which will display the information of each AZ when the instance node is deployed across multiple AZs.
The information of AZ can be obtained from the `Zone` field in the return value of the [DescribeZones](https://intl.cloud.tencent.com/document/api/409/16769?from_cn_redirect=1) API.
                     */
                    std::vector<DBNode> m_dBNodeSet;
                    bool m_dBNodeSetHasBeenSet;

                    /**
                     * Whether to automatically use coupons:

- 0: No
- 1: Yes

Default value: 0
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * Voucher ID list.
                     */
                    std::string m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                    /**
                     * Campaign ID.
                     */
                    int64_t m_activityId;
                    bool m_activityIdHasBeenSet;

                    /**
                     * Basic backup set ID.
                     */
                    std::string m_backupSetId;
                    bool m_backupSetIdHasBeenSet;

                    /**
                     * Restoration point in time.
                     */
                    std::string m_recoveryTargetTime;
                    bool m_recoveryTargetTimeHasBeenSet;

                    /**
                     * Primary-standby sync mode, which supports:
<li>Semi-sync: Semi-sync</li>
<li>Async: Asynchronous</li>
Default value for the primary instance: Semi-sync
Default value for the read-only instance: Async
                     */
                    std::string m_syncMode;
                    bool m_syncModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CLONEDBINSTANCEREQUEST_H_
