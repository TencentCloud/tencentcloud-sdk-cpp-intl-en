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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_UPGRADEDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_UPGRADEDBINSTANCEREQUEST_H_

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
                * UpgradeDBInstance request structure.
                */
                class UpgradeDBInstanceRequest : public AbstractModel
                {
                public:
                    UpgradeDBInstanceRequest();
                    ~UpgradeDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance memory size in GB after upgrade
                     * @return Memory Instance memory size in GB after upgrade
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Instance memory size in GB after upgrade
                     * @param _memory Instance memory size in GB after upgrade
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Instance disk size in GB after upgrade
                     * @return Storage Instance disk size in GB after upgrade
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置Instance disk size in GB after upgrade
                     * @param _storage Instance disk size in GB after upgrade
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
                     * 获取Instance ID in the format of postgres-lnp6j617
                     * @return DBInstanceId Instance ID in the format of postgres-lnp6j617
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID in the format of postgres-lnp6j617
                     * @param _dBInstanceId Instance ID in the format of postgres-lnp6j617
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
                     * 获取Whether to automatically use vouchers. 1: yes, 0: no. Default value: no
                     * @return AutoVoucher Whether to automatically use vouchers. 1: yes, 0: no. Default value: no
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置Whether to automatically use vouchers. 1: yes, 0: no. Default value: no
                     * @param _autoVoucher Whether to automatically use vouchers. 1: yes, 0: no. Default value: no
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
                     * 获取Voucher ID list (only one voucher can be specified currently)
                     * @return VoucherIds Voucher ID list (only one voucher can be specified currently)
                     * 
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置Voucher ID list (only one voucher can be specified currently)
                     * @param _voucherIds Voucher ID list (only one voucher can be specified currently)
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
                     * 获取Activity ID
                     * @return ActivityId Activity ID
                     * 
                     */
                    int64_t GetActivityId() const;

                    /**
                     * 设置Activity ID
                     * @param _activityId Activity ID
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
                     * 获取Switch time after instance configurations are modified. Valid values: `0` (switch immediately), `1` (switch at specified time). Default value: `0`
                     * @return SwitchTag Switch time after instance configurations are modified. Valid values: `0` (switch immediately), `1` (switch at specified time). Default value: `0`
                     * 
                     */
                    int64_t GetSwitchTag() const;

                    /**
                     * 设置Switch time after instance configurations are modified. Valid values: `0` (switch immediately), `1` (switch at specified time). Default value: `0`
                     * @param _switchTag Switch time after instance configurations are modified. Valid values: `0` (switch immediately), `1` (switch at specified time). Default value: `0`
                     * 
                     */
                    void SetSwitchTag(const int64_t& _switchTag);

                    /**
                     * 判断参数 SwitchTag 是否已赋值
                     * @return SwitchTag 是否已赋值
                     * 
                     */
                    bool SwitchTagHasBeenSet() const;

                    /**
                     * 获取The earliest time to start a switch
                     * @return SwitchStartTime The earliest time to start a switch
                     * 
                     */
                    std::string GetSwitchStartTime() const;

                    /**
                     * 设置The earliest time to start a switch
                     * @param _switchStartTime The earliest time to start a switch
                     * 
                     */
                    void SetSwitchStartTime(const std::string& _switchStartTime);

                    /**
                     * 判断参数 SwitchStartTime 是否已赋值
                     * @return SwitchStartTime 是否已赋值
                     * 
                     */
                    bool SwitchStartTimeHasBeenSet() const;

                    /**
                     * 获取The latest time to start a switch
                     * @return SwitchEndTime The latest time to start a switch
                     * 
                     */
                    std::string GetSwitchEndTime() const;

                    /**
                     * 设置The latest time to start a switch
                     * @param _switchEndTime The latest time to start a switch
                     * 
                     */
                    void SetSwitchEndTime(const std::string& _switchEndTime);

                    /**
                     * 判断参数 SwitchEndTime 是否已赋值
                     * @return SwitchEndTime 是否已赋值
                     * 
                     */
                    bool SwitchEndTimeHasBeenSet() const;

                private:

                    /**
                     * Instance memory size in GB after upgrade
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Instance disk size in GB after upgrade
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * Instance ID in the format of postgres-lnp6j617
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Whether to automatically use vouchers. 1: yes, 0: no. Default value: no
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * Voucher ID list (only one voucher can be specified currently)
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                    /**
                     * Activity ID
                     */
                    int64_t m_activityId;
                    bool m_activityIdHasBeenSet;

                    /**
                     * Switch time after instance configurations are modified. Valid values: `0` (switch immediately), `1` (switch at specified time). Default value: `0`
                     */
                    int64_t m_switchTag;
                    bool m_switchTagHasBeenSet;

                    /**
                     * The earliest time to start a switch
                     */
                    std::string m_switchStartTime;
                    bool m_switchStartTimeHasBeenSet;

                    /**
                     * The latest time to start a switch
                     */
                    std::string m_switchEndTime;
                    bool m_switchEndTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_UPGRADEDBINSTANCEREQUEST_H_
