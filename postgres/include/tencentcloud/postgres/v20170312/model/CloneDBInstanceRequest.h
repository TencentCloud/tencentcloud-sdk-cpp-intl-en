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
                     * 获取The source instance ID to be cloned. can be obtained through the DescribeDBInstances api (https://www.tencentcloud.comom/document/api/409/16773?from_cn_redirect=1).
                     * @return DBInstanceId The source instance ID to be cloned. can be obtained through the DescribeDBInstances api (https://www.tencentcloud.comom/document/api/409/16773?from_cn_redirect=1).
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置The source instance ID to be cloned. can be obtained through the DescribeDBInstances api (https://www.tencentcloud.comom/document/api/409/16773?from_cn_redirect=1).
                     * @param _dBInstanceId The source instance ID to be cloned. can be obtained through the DescribeDBInstances api (https://www.tencentcloud.comom/document/api/409/16773?from_cn_redirect=1).
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
                     * 获取Instance disk capacity size. set step size to 10. unit: GB.
                     * @return Storage Instance disk capacity size. set step size to 10. unit: GB.
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置Instance disk capacity size. set step size to 10. unit: GB.
                     * @param _storage Instance disk capacity size. set step size to 10. unit: GB.
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
                     * 获取Specifies the auto-renewal flag. this parameter is valid only when the billing mode is prepaid.
Valid values:.

- `0`: specifies manual renewal.
-`1`: specifies auto-renewal.

Default value: 0
                     * @return AutoRenewFlag Specifies the auto-renewal flag. this parameter is valid only when the billing mode is prepaid.
Valid values:.

- `0`: specifies manual renewal.
-`1`: specifies auto-renewal.

Default value: 0
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Specifies the auto-renewal flag. this parameter is valid only when the billing mode is prepaid.
Valid values:.

- `0`: specifies manual renewal.
-`1`: specifies auto-renewal.

Default value: 0
                     * @param _autoRenewFlag Specifies the auto-renewal flag. this parameter is valid only when the billing mode is prepaid.
Valid values:.

- `0`: specifies manual renewal.
-`1`: specifies auto-renewal.

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
                     * 获取Specifies the instance name for new purchase, only supports chinese/english/digits/"_"/"-" with length less than 60. displays "source instance name-Copy" by default if no instance name is specified.
                     * @return Name Specifies the instance name for new purchase, only supports chinese/english/digits/"_"/"-" with length less than 60. displays "source instance name-Copy" by default if no instance name is specified.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Specifies the instance name for new purchase, only supports chinese/english/digits/"_"/"-" with length less than 60. displays "source instance name-Copy" by default if no instance name is specified.
                     * @param _name Specifies the instance name for new purchase, only supports chinese/english/digits/"_"/"-" with length less than 60. displays "source instance name-Copy" by default if no instance name is specified.
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

- PREPAID: Prepaid, i.e., yearly/monthly subscription
- POSTPAID_BY_HOUR: Pay-as-you-go, i.e., pay by consumption

Default value: PREPAID
                     * @return InstanceChargeType Instance billing type, which currently supports:

- PREPAID: Prepaid, i.e., yearly/monthly subscription
- POSTPAID_BY_HOUR: Pay-as-you-go, i.e., pay by consumption

Default value: PREPAID
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置Instance billing type, which currently supports:

- PREPAID: Prepaid, i.e., yearly/monthly subscription
- POSTPAID_BY_HOUR: Pay-as-you-go, i.e., pay by consumption

Default value: PREPAID
                     * @param _instanceChargeType Instance billing type, which currently supports:

- PREPAID: Prepaid, i.e., yearly/monthly subscription
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
                     * 获取Security group to which an instance belongs. obtain this parameter by calling the SecurityGroupId field in the return value of [DescribeSecurityGroups](https://www.tencentcloud.comom/document/api/215/15808?from_cn_redirect=1). if not specified, the default security group is bound.

                     * @return SecurityGroupIds Security group to which an instance belongs. obtain this parameter by calling the SecurityGroupId field in the return value of [DescribeSecurityGroups](https://www.tencentcloud.comom/document/api/215/15808?from_cn_redirect=1). if not specified, the default security group is bound.

                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Security group to which an instance belongs. obtain this parameter by calling the SecurityGroupId field in the return value of [DescribeSecurityGroups](https://www.tencentcloud.comom/document/api/215/15808?from_cn_redirect=1). if not specified, the default security group is bound.

                     * @param _securityGroupIds Security group to which an instance belongs. obtain this parameter by calling the SecurityGroupId field in the return value of [DescribeSecurityGroups](https://www.tencentcloud.comom/document/api/215/15808?from_cn_redirect=1). if not specified, the default security group is bound.

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
                     * 获取Project ID. default value is 0, which means it belongs to the default project.
                     * @return ProjectId Project ID. default value is 0, which means it belongs to the default project.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID. default value is 0, which means it belongs to the default project.
                     * @param _projectId Project ID. default value is 0, which means it belongs to the default project.
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
                     * 获取Deployment information of instance nodes. the availability zone of primary and secondary nodes is required. when multi-availability zone deployment is supported, the availability zone information for each node must be specified.
AZ information can be obtained by calling the DescribeZones api (https://www.tencentcloud.comom/document/api/409/16769?from_cn_redirect=1) and checking the Zone field in the returned value.
                     * @return DBNodeSet Deployment information of instance nodes. the availability zone of primary and secondary nodes is required. when multi-availability zone deployment is supported, the availability zone information for each node must be specified.
AZ information can be obtained by calling the DescribeZones api (https://www.tencentcloud.comom/document/api/409/16769?from_cn_redirect=1) and checking the Zone field in the returned value.
                     * 
                     */
                    std::vector<DBNode> GetDBNodeSet() const;

                    /**
                     * 设置Deployment information of instance nodes. the availability zone of primary and secondary nodes is required. when multi-availability zone deployment is supported, the availability zone information for each node must be specified.
AZ information can be obtained by calling the DescribeZones api (https://www.tencentcloud.comom/document/api/409/16769?from_cn_redirect=1) and checking the Zone field in the returned value.
                     * @param _dBNodeSet Deployment information of instance nodes. the availability zone of primary and secondary nodes is required. when multi-availability zone deployment is supported, the availability zone information for each node must be specified.
AZ information can be obtained by calling the DescribeZones api (https://www.tencentcloud.comom/document/api/409/16769?from_cn_redirect=1) and checking the Zone field in the returned value.
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
                     * 获取Basic backup set ID. either `BackupSetId` or `RecoveryTargetTime` must be provided, and cannot include both.
                     * @return BackupSetId Basic backup set ID. either `BackupSetId` or `RecoveryTargetTime` must be provided, and cannot include both.
                     * 
                     */
                    std::string GetBackupSetId() const;

                    /**
                     * 设置Basic backup set ID. either `BackupSetId` or `RecoveryTargetTime` must be provided, and cannot include both.
                     * @param _backupSetId Basic backup set ID. either `BackupSetId` or `RecoveryTargetTime` must be provided, and cannot include both.
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
                     * 获取Specifies the recovery time point. either `BackupSetId` or `RecoveryTargetTime` must be provided, and cannot include both.
                     * @return RecoveryTargetTime Specifies the recovery time point. either `BackupSetId` or `RecoveryTargetTime` must be provided, and cannot include both.
                     * 
                     */
                    std::string GetRecoveryTargetTime() const;

                    /**
                     * 设置Specifies the recovery time point. either `BackupSetId` or `RecoveryTargetTime` must be provided, and cannot include both.
                     * @param _recoveryTargetTime Specifies the recovery time point. either `BackupSetId` or `RecoveryTargetTime` must be provided, and cannot include both.
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
                     * The source instance ID to be cloned. can be obtained through the DescribeDBInstances api (https://www.tencentcloud.comom/document/api/409/16773?from_cn_redirect=1).
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Purchasable code, which can be obtained from the `SpecCode` field in the return value of the [DescribeClasses](https://intl.cloud.tencent.com/document/api/409/89019?from_cn_redirect=1) API.
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * Instance disk capacity size. set step size to 10. unit: GB.
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
                     * Specifies the auto-renewal flag. this parameter is valid only when the billing mode is prepaid.
Valid values:.

- `0`: specifies manual renewal.
-`1`: specifies auto-renewal.

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
                     * Specifies the instance name for new purchase, only supports chinese/english/digits/"_"/"-" with length less than 60. displays "source instance name-Copy" by default if no instance name is specified.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Instance billing type, which currently supports:

- PREPAID: Prepaid, i.e., yearly/monthly subscription
- POSTPAID_BY_HOUR: Pay-as-you-go, i.e., pay by consumption

Default value: PREPAID
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * Security group to which an instance belongs. obtain this parameter by calling the SecurityGroupId field in the return value of [DescribeSecurityGroups](https://www.tencentcloud.comom/document/api/215/15808?from_cn_redirect=1). if not specified, the default security group is bound.

                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Project ID. default value is 0, which means it belongs to the default project.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * The information of tags to be bound with the instance, which is left empty by default. This parameter can be obtained from the `Tags` field in the return value of the [DescribeTags](https://intl.cloud.tencent.com/document/api/651/35316?from_cn_redirect=1) API.
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * Deployment information of instance nodes. the availability zone of primary and secondary nodes is required. when multi-availability zone deployment is supported, the availability zone information for each node must be specified.
AZ information can be obtained by calling the DescribeZones api (https://www.tencentcloud.comom/document/api/409/16769?from_cn_redirect=1) and checking the Zone field in the returned value.
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
                     * Basic backup set ID. either `BackupSetId` or `RecoveryTargetTime` must be provided, and cannot include both.
                     */
                    std::string m_backupSetId;
                    bool m_backupSetIdHasBeenSet;

                    /**
                     * Specifies the recovery time point. either `BackupSetId` or `RecoveryTargetTime` must be provided, and cannot include both.
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

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CLONEDBINSTANCEREQUEST_H_
