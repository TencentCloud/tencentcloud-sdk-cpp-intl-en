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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEINSTANCESREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEINSTANCESREQUEST_H_

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
                * CreateInstances request structure.
                */
                class CreateInstancesRequest : public AbstractModel
                {
                public:
                    CreateInstancesRequest();
                    ~CreateInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Purchasable specification ID, which can be obtained through the `SpecCode` field in the returned value of the `DescribeProductConfig` API.
                     * @return SpecCode Purchasable specification ID, which can be obtained through the `SpecCode` field in the returned value of the `DescribeProductConfig` API.
                     */
                    std::string GetSpecCode() const;

                    /**
                     * 设置Purchasable specification ID, which can be obtained through the `SpecCode` field in the returned value of the `DescribeProductConfig` API.
                     * @param SpecCode Purchasable specification ID, which can be obtained through the `SpecCode` field in the returned value of the `DescribeProductConfig` API.
                     */
                    void SetSpecCode(const std::string& _specCode);

                    /**
                     * 判断参数 SpecCode 是否已赋值
                     * @return SpecCode 是否已赋值
                     */
                    bool SpecCodeHasBeenSet() const;

                    /**
                     * 获取Instance storage capacity in GB
                     * @return Storage Instance storage capacity in GB
                     */
                    uint64_t GetStorage() const;

                    /**
                     * 设置Instance storage capacity in GB
                     * @param Storage Instance storage capacity in GB
                     */
                    void SetStorage(const uint64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取The number of instances purchased at a time. Value range: 1-10.
                     * @return InstanceCount The number of instances purchased at a time. Value range: 1-10.
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置The number of instances purchased at a time. Value range: 1-10.
                     * @param InstanceCount The number of instances purchased at a time. Value range: 1-10.
                     */
                    void SetInstanceCount(const uint64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取Valid period in months of purchased instances. Valid values: `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, `36`. This parameter is set to `1` when the pay-as-you-go billing mode is used.
                     * @return Period Valid period in months of purchased instances. Valid values: `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, `36`. This parameter is set to `1` when the pay-as-you-go billing mode is used.
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置Valid period in months of purchased instances. Valid values: `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, `36`. This parameter is set to `1` when the pay-as-you-go billing mode is used.
                     * @param Period Valid period in months of purchased instances. Valid values: `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, `36`. This parameter is set to `1` when the pay-as-you-go billing mode is used.
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Availability zone ID, which can be obtained through the `Zone` field in the returned value of the `DescribeZones` API.
                     * @return Zone Availability zone ID, which can be obtained through the `Zone` field in the returned value of the `DescribeZones` API.
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone ID, which can be obtained through the `Zone` field in the returned value of the `DescribeZones` API.
                     * @param Zone Availability zone ID, which can be obtained through the `Zone` field in the returned value of the `DescribeZones` API.
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Instance character set. Valid values: `UTF8`, `LATIN1`.
                     * @return Charset Instance character set. Valid values: `UTF8`, `LATIN1`.
                     */
                    std::string GetCharset() const;

                    /**
                     * 设置Instance character set. Valid values: `UTF8`, `LATIN1`.
                     * @param Charset Instance character set. Valid values: `UTF8`, `LATIN1`.
                     */
                    void SetCharset(const std::string& _charset);

                    /**
                     * 判断参数 Charset 是否已赋值
                     * @return Charset 是否已赋值
                     */
                    bool CharsetHasBeenSet() const;

                    /**
                     * 获取Instance root account name
                     * @return AdminName Instance root account name
                     */
                    std::string GetAdminName() const;

                    /**
                     * 设置Instance root account name
                     * @param AdminName Instance root account name
                     */
                    void SetAdminName(const std::string& _adminName);

                    /**
                     * 判断参数 AdminName 是否已赋值
                     * @return AdminName 是否已赋值
                     */
                    bool AdminNameHasBeenSet() const;

                    /**
                     * 获取Instance root account password
                     * @return AdminPassword Instance root account password
                     */
                    std::string GetAdminPassword() const;

                    /**
                     * 设置Instance root account password
                     * @param AdminPassword Instance root account password
                     */
                    void SetAdminPassword(const std::string& _adminPassword);

                    /**
                     * 判断参数 AdminPassword 是否已赋值
                     * @return AdminPassword 是否已赋值
                     */
                    bool AdminPasswordHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param ProjectId Project ID
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取PostgreSQL version number. If it is specified, an instance running the latest kernel of PostgreSQL `DBVersion` will be created.
                     * @return DBVersion PostgreSQL version number. If it is specified, an instance running the latest kernel of PostgreSQL `DBVersion` will be created.
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置PostgreSQL version number. If it is specified, an instance running the latest kernel of PostgreSQL `DBVersion` will be created.
                     * @param DBVersion PostgreSQL version number. If it is specified, an instance running the latest kernel of PostgreSQL `DBVersion` will be created.
                     */
                    void SetDBVersion(const std::string& _dBVersion);

                    /**
                     * 判断参数 DBVersion 是否已赋值
                     * @return DBVersion 是否已赋值
                     */
                    bool DBVersionHasBeenSet() const;

                    /**
                     * 获取Instance billing mode. Valid values: `PREPAID` (monthly subscription), `POSTPAID_BY_HOUR` (pay-as-you-go).
                     * @return InstanceChargeType Instance billing mode. Valid values: `PREPAID` (monthly subscription), `POSTPAID_BY_HOUR` (pay-as-you-go).
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置Instance billing mode. Valid values: `PREPAID` (monthly subscription), `POSTPAID_BY_HOUR` (pay-as-you-go).
                     * @param InstanceChargeType Instance billing mode. Valid values: `PREPAID` (monthly subscription), `POSTPAID_BY_HOUR` (pay-as-you-go).
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取Whether to automatically use vouchers. Valid values: `1` (yes), `0` (no). Default value: `0`.
                     * @return AutoVoucher Whether to automatically use vouchers. Valid values: `1` (yes), `0` (no). Default value: `0`.
                     */
                    uint64_t GetAutoVoucher() const;

                    /**
                     * 设置Whether to automatically use vouchers. Valid values: `1` (yes), `0` (no). Default value: `0`.
                     * @param AutoVoucher Whether to automatically use vouchers. Valid values: `1` (yes), `0` (no). Default value: `0`.
                     */
                    void SetAutoVoucher(const uint64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取Voucher ID list. Currently, you can specify only one voucher.
                     * @return VoucherIds Voucher ID list. Currently, you can specify only one voucher.
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置Voucher ID list. Currently, you can specify only one voucher.
                     * @param VoucherIds Voucher ID list. Currently, you can specify only one voucher.
                     */
                    void SetVoucherIds(const std::vector<std::string>& _voucherIds);

                    /**
                     * 判断参数 VoucherIds 是否已赋值
                     * @return VoucherIds 是否已赋值
                     */
                    bool VoucherIdsHasBeenSet() const;

                    /**
                     * 获取VPC ID
                     * @return VpcId VPC ID
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
                     * @param VpcId VPC ID
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取ID of a subnet in the VPC specified by `VpcId`
                     * @return SubnetId ID of a subnet in the VPC specified by `VpcId`
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置ID of a subnet in the VPC specified by `VpcId`
                     * @param SubnetId ID of a subnet in the VPC specified by `VpcId`
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Renewal flag. Valid values: `0` (manual renewal), `1` (auto-renewal). Default value: `0`.
                     * @return AutoRenewFlag Renewal flag. Valid values: `0` (manual renewal), `1` (auto-renewal). Default value: `0`.
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Renewal flag. Valid values: `0` (manual renewal), `1` (auto-renewal). Default value: `0`.
                     * @param AutoRenewFlag Renewal flag. Valid values: `0` (manual renewal), `1` (auto-renewal). Default value: `0`.
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取Campaign ID
                     * @return ActivityId Campaign ID
                     */
                    int64_t GetActivityId() const;

                    /**
                     * 设置Campaign ID
                     * @param ActivityId Campaign ID
                     */
                    void SetActivityId(const int64_t& _activityId);

                    /**
                     * 判断参数 ActivityId 是否已赋值
                     * @return ActivityId 是否已赋值
                     */
                    bool ActivityIdHasBeenSet() const;

                    /**
                     * 获取Instance name
                     * @return Name Instance name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Instance name
                     * @param Name Instance name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Whether to support IPv6 address access. Valid values: `1` (yes), `0` (no). Default value: `0`
                     * @return NeedSupportIpv6 Whether to support IPv6 address access. Valid values: `1` (yes), `0` (no). Default value: `0`
                     */
                    uint64_t GetNeedSupportIpv6() const;

                    /**
                     * 设置Whether to support IPv6 address access. Valid values: `1` (yes), `0` (no). Default value: `0`
                     * @param NeedSupportIpv6 Whether to support IPv6 address access. Valid values: `1` (yes), `0` (no). Default value: `0`
                     */
                    void SetNeedSupportIpv6(const uint64_t& _needSupportIpv6);

                    /**
                     * 判断参数 NeedSupportIpv6 是否已赋值
                     * @return NeedSupportIpv6 是否已赋值
                     */
                    bool NeedSupportIpv6HasBeenSet() const;

                    /**
                     * 获取The information of tags to be associated with instances. This parameter is left empty by default.
                     * @return TagList The information of tags to be associated with instances. This parameter is left empty by default.
                     */
                    std::vector<Tag> GetTagList() const;

                    /**
                     * 设置The information of tags to be associated with instances. This parameter is left empty by default.
                     * @param TagList The information of tags to be associated with instances. This parameter is left empty by default.
                     */
                    void SetTagList(const std::vector<Tag>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取Security group IDs
                     * @return SecurityGroupIds Security group IDs
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Security group IDs
                     * @param SecurityGroupIds Security group IDs
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取PostgreSQL major version number. Valid values: `10`, `11`, `12`, `13`. If it is specified, an instance running the latest kernel of PostgreSQL `DBMajorVersion` will be created.
                     * @return DBMajorVersion PostgreSQL major version number. Valid values: `10`, `11`, `12`, `13`. If it is specified, an instance running the latest kernel of PostgreSQL `DBMajorVersion` will be created.
                     */
                    std::string GetDBMajorVersion() const;

                    /**
                     * 设置PostgreSQL major version number. Valid values: `10`, `11`, `12`, `13`. If it is specified, an instance running the latest kernel of PostgreSQL `DBMajorVersion` will be created.
                     * @param DBMajorVersion PostgreSQL major version number. Valid values: `10`, `11`, `12`, `13`. If it is specified, an instance running the latest kernel of PostgreSQL `DBMajorVersion` will be created.
                     */
                    void SetDBMajorVersion(const std::string& _dBMajorVersion);

                    /**
                     * 判断参数 DBMajorVersion 是否已赋值
                     * @return DBMajorVersion 是否已赋值
                     */
                    bool DBMajorVersionHasBeenSet() const;

                    /**
                     * 获取PostgreSQL kernel version number. If it is specified, an instance running kernel `DBKernelVersion` will be created.
                     * @return DBKernelVersion PostgreSQL kernel version number. If it is specified, an instance running kernel `DBKernelVersion` will be created.
                     */
                    std::string GetDBKernelVersion() const;

                    /**
                     * 设置PostgreSQL kernel version number. If it is specified, an instance running kernel `DBKernelVersion` will be created.
                     * @param DBKernelVersion PostgreSQL kernel version number. If it is specified, an instance running kernel `DBKernelVersion` will be created.
                     */
                    void SetDBKernelVersion(const std::string& _dBKernelVersion);

                    /**
                     * 判断参数 DBKernelVersion 是否已赋值
                     * @return DBKernelVersion 是否已赋值
                     */
                    bool DBKernelVersionHasBeenSet() const;

                    /**
                     * 获取Instance node information, which is required if you purchase a multi-AZ deployed instance.
                     * @return DBNodeSet Instance node information, which is required if you purchase a multi-AZ deployed instance.
                     */
                    std::vector<DBNode> GetDBNodeSet() const;

                    /**
                     * 设置Instance node information, which is required if you purchase a multi-AZ deployed instance.
                     * @param DBNodeSet Instance node information, which is required if you purchase a multi-AZ deployed instance.
                     */
                    void SetDBNodeSet(const std::vector<DBNode>& _dBNodeSet);

                    /**
                     * 判断参数 DBNodeSet 是否已赋值
                     * @return DBNodeSet 是否已赋值
                     */
                    bool DBNodeSetHasBeenSet() const;

                private:

                    /**
                     * Purchasable specification ID, which can be obtained through the `SpecCode` field in the returned value of the `DescribeProductConfig` API.
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * Instance storage capacity in GB
                     */
                    uint64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * The number of instances purchased at a time. Value range: 1-10.
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * Valid period in months of purchased instances. Valid values: `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, `36`. This parameter is set to `1` when the pay-as-you-go billing mode is used.
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Availability zone ID, which can be obtained through the `Zone` field in the returned value of the `DescribeZones` API.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Instance character set. Valid values: `UTF8`, `LATIN1`.
                     */
                    std::string m_charset;
                    bool m_charsetHasBeenSet;

                    /**
                     * Instance root account name
                     */
                    std::string m_adminName;
                    bool m_adminNameHasBeenSet;

                    /**
                     * Instance root account password
                     */
                    std::string m_adminPassword;
                    bool m_adminPasswordHasBeenSet;

                    /**
                     * Project ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * PostgreSQL version number. If it is specified, an instance running the latest kernel of PostgreSQL `DBVersion` will be created.
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                    /**
                     * Instance billing mode. Valid values: `PREPAID` (monthly subscription), `POSTPAID_BY_HOUR` (pay-as-you-go).
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * Whether to automatically use vouchers. Valid values: `1` (yes), `0` (no). Default value: `0`.
                     */
                    uint64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * Voucher ID list. Currently, you can specify only one voucher.
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * ID of a subnet in the VPC specified by `VpcId`
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Renewal flag. Valid values: `0` (manual renewal), `1` (auto-renewal). Default value: `0`.
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Campaign ID
                     */
                    int64_t m_activityId;
                    bool m_activityIdHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Whether to support IPv6 address access. Valid values: `1` (yes), `0` (no). Default value: `0`
                     */
                    uint64_t m_needSupportIpv6;
                    bool m_needSupportIpv6HasBeenSet;

                    /**
                     * The information of tags to be associated with instances. This parameter is left empty by default.
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * Security group IDs
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * PostgreSQL major version number. Valid values: `10`, `11`, `12`, `13`. If it is specified, an instance running the latest kernel of PostgreSQL `DBMajorVersion` will be created.
                     */
                    std::string m_dBMajorVersion;
                    bool m_dBMajorVersionHasBeenSet;

                    /**
                     * PostgreSQL kernel version number. If it is specified, an instance running kernel `DBKernelVersion` will be created.
                     */
                    std::string m_dBKernelVersion;
                    bool m_dBKernelVersionHasBeenSet;

                    /**
                     * Instance node information, which is required if you purchase a multi-AZ deployed instance.
                     */
                    std::vector<DBNode> m_dBNodeSet;
                    bool m_dBNodeSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEINSTANCESREQUEST_H_
