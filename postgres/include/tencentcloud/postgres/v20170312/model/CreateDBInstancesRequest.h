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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateDBInstances request structure.
                */
                class CreateDBInstancesRequest : public AbstractModel
                {
                public:
                    CreateDBInstancesRequest();
                    ~CreateDBInstancesRequest() = default;
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
                     * 获取PostgreSQL kernel version. Currently, only two versions are supported: 9.3.5 and 9.5.4.
                     * @return DBVersion PostgreSQL kernel version. Currently, only two versions are supported: 9.3.5 and 9.5.4.
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置PostgreSQL kernel version. Currently, only two versions are supported: 9.3.5 and 9.5.4.
                     * @param DBVersion PostgreSQL kernel version. Currently, only two versions are supported: 9.3.5 and 9.5.4.
                     */
                    void SetDBVersion(const std::string& _dBVersion);

                    /**
                     * 判断参数 DBVersion 是否已赋值
                     * @return DBVersion 是否已赋值
                     */
                    bool DBVersionHasBeenSet() const;

                    /**
                     * 获取Instance capacity size in GB.
                     * @return Storage Instance capacity size in GB.
                     */
                    uint64_t GetStorage() const;

                    /**
                     * 设置Instance capacity size in GB.
                     * @param Storage Instance capacity size in GB.
                     */
                    void SetStorage(const uint64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取Number of instances purchased at a time. Value range: 1-100.
                     * @return InstanceCount Number of instances purchased at a time. Value range: 1-100.
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置Number of instances purchased at a time. Value range: 1-100.
                     * @param InstanceCount Number of instances purchased at a time. Value range: 1-100.
                     */
                    void SetInstanceCount(const uint64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取Length of purchase in months. Currently, only 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36 are supported.
                     * @return Period Length of purchase in months. Currently, only 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36 are supported.
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置Length of purchase in months. Currently, only 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36 are supported.
                     * @param Period Length of purchase in months. Currently, only 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36 are supported.
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取AZ ID, which can be obtained through the `Zone` field in the returned value of the `DescribeZones` API.
                     * @return Zone AZ ID, which can be obtained through the `Zone` field in the returned value of the `DescribeZones` API.
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ ID, which can be obtained through the `Zone` field in the returned value of the `DescribeZones` API.
                     * @param Zone AZ ID, which can be obtained through the `Zone` field in the returned value of the `DescribeZones` API.
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Project ID.
                     * @return ProjectId Project ID.
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID.
                     * @param ProjectId Project ID.
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Instance billing type.
                     * @return InstanceChargeType Instance billing type.
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置Instance billing type.
                     * @param InstanceChargeType Instance billing type.
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取Whether to automatically use vouchers. 1: yes, 0: no. Default value: no.
                     * @return AutoVoucher Whether to automatically use vouchers. 1: yes, 0: no. Default value: no.
                     */
                    uint64_t GetAutoVoucher() const;

                    /**
                     * 设置Whether to automatically use vouchers. 1: yes, 0: no. Default value: no.
                     * @param AutoVoucher Whether to automatically use vouchers. 1: yes, 0: no. Default value: no.
                     */
                    void SetAutoVoucher(const uint64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取Voucher ID list (only one voucher can be specified currently).
                     * @return VoucherIds Voucher ID list (only one voucher can be specified currently).
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置Voucher ID list (only one voucher can be specified currently).
                     * @param VoucherIds Voucher ID list (only one voucher can be specified currently).
                     */
                    void SetVoucherIds(const std::vector<std::string>& _voucherIds);

                    /**
                     * 判断参数 VoucherIds 是否已赋值
                     * @return VoucherIds 是否已赋值
                     */
                    bool VoucherIdsHasBeenSet() const;

                    /**
                     * 获取VPC ID.
                     * @return VpcId VPC ID.
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID.
                     * @param VpcId VPC ID.
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取VPC subnet ID.
                     * @return SubnetId VPC subnet ID.
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置VPC subnet ID.
                     * @param SubnetId VPC subnet ID.
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Renewal flag. 0: normal renewal (default), 1: auto-renewal.
                     * @return AutoRenewFlag Renewal flag. 0: normal renewal (default), 1: auto-renewal.
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Renewal flag. 0: normal renewal (default), 1: auto-renewal.
                     * @param AutoRenewFlag Renewal flag. 0: normal renewal (default), 1: auto-renewal.
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取
                     * @return ActivityId 
                     */
                    int64_t GetActivityId() const;

                    /**
                     * 设置
                     * @param ActivityId 
                     */
                    void SetActivityId(const int64_t& _activityId);

                    /**
                     * 判断参数 ActivityId 是否已赋值
                     * @return ActivityId 是否已赋值
                     */
                    bool ActivityIdHasBeenSet() const;

                    /**
                     * 获取Instance name (which will be supported in the future)
                     * @return Name Instance name (which will be supported in the future)
                     */
                    std::string GetName() const;

                    /**
                     * 设置Instance name (which will be supported in the future)
                     * @param Name Instance name (which will be supported in the future)
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Whether to support IPv6 address access. Valid values: 1 (yes), 0 (no)
                     * @return NeedSupportIpv6 Whether to support IPv6 address access. Valid values: 1 (yes), 0 (no)
                     */
                    uint64_t GetNeedSupportIpv6() const;

                    /**
                     * 设置Whether to support IPv6 address access. Valid values: 1 (yes), 0 (no)
                     * @param NeedSupportIpv6 Whether to support IPv6 address access. Valid values: 1 (yes), 0 (no)
                     */
                    void SetNeedSupportIpv6(const uint64_t& _needSupportIpv6);

                    /**
                     * 判断参数 NeedSupportIpv6 是否已赋值
                     * @return NeedSupportIpv6 是否已赋值
                     */
                    bool NeedSupportIpv6HasBeenSet() const;

                private:

                    /**
                     * Purchasable specification ID, which can be obtained through the `SpecCode` field in the returned value of the `DescribeProductConfig` API.
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * PostgreSQL kernel version. Currently, only two versions are supported: 9.3.5 and 9.5.4.
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                    /**
                     * Instance capacity size in GB.
                     */
                    uint64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * Number of instances purchased at a time. Value range: 1-100.
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * Length of purchase in months. Currently, only 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36 are supported.
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * AZ ID, which can be obtained through the `Zone` field in the returned value of the `DescribeZones` API.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Project ID.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Instance billing type.
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * Whether to automatically use vouchers. 1: yes, 0: no. Default value: no.
                     */
                    uint64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * Voucher ID list (only one voucher can be specified currently).
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                    /**
                     * VPC ID.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC subnet ID.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Renewal flag. 0: normal renewal (default), 1: auto-renewal.
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_activityId;
                    bool m_activityIdHasBeenSet;

                    /**
                     * Instance name (which will be supported in the future)
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Whether to support IPv6 address access. Valid values: 1 (yes), 0 (no)
                     */
                    uint64_t m_needSupportIpv6;
                    bool m_needSupportIpv6HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEDBINSTANCESREQUEST_H_
