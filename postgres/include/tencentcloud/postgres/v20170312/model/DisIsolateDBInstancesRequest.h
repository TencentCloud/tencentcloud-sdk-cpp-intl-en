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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DISISOLATEDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DISISOLATEDBINSTANCESREQUEST_H_

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
                * DisIsolateDBInstances request structure.
                */
                class DisIsolateDBInstancesRequest : public AbstractModel
                {
                public:
                    DisIsolateDBInstancesRequest();
                    ~DisIsolateDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of resource IDs. Note that currently you cannot remove multiple instances from isolation at the same time. Only one instance ID can be passed in here.
                     * @return DBInstanceIdSet List of resource IDs. Note that currently you cannot remove multiple instances from isolation at the same time. Only one instance ID can be passed in here.
                     */
                    std::vector<std::string> GetDBInstanceIdSet() const;

                    /**
                     * 设置List of resource IDs. Note that currently you cannot remove multiple instances from isolation at the same time. Only one instance ID can be passed in here.
                     * @param DBInstanceIdSet List of resource IDs. Note that currently you cannot remove multiple instances from isolation at the same time. Only one instance ID can be passed in here.
                     */
                    void SetDBInstanceIdSet(const std::vector<std::string>& _dBInstanceIdSet);

                    /**
                     * 判断参数 DBInstanceIdSet 是否已赋值
                     * @return DBInstanceIdSet 是否已赋值
                     */
                    bool DBInstanceIdSetHasBeenSet() const;

                    /**
                     * 获取The valid period (in months) of the monthly-subscribed instance when removing it from isolation
                     * @return Period The valid period (in months) of the monthly-subscribed instance when removing it from isolation
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置The valid period (in months) of the monthly-subscribed instance when removing it from isolation
                     * @param Period The valid period (in months) of the monthly-subscribed instance when removing it from isolation
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Whether to use vouchers. Valid values: `true` (yes), `false` (no). Default value: `false`.
                     * @return AutoVoucher Whether to use vouchers. Valid values: `true` (yes), `false` (no). Default value: `false`.
                     */
                    bool GetAutoVoucher() const;

                    /**
                     * 设置Whether to use vouchers. Valid values: `true` (yes), `false` (no). Default value: `false`.
                     * @param AutoVoucher Whether to use vouchers. Valid values: `true` (yes), `false` (no). Default value: `false`.
                     */
                    void SetAutoVoucher(const bool& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取Voucher ID list
                     * @return VoucherIds Voucher ID list
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置Voucher ID list
                     * @param VoucherIds Voucher ID list
                     */
                    void SetVoucherIds(const std::vector<std::string>& _voucherIds);

                    /**
                     * 判断参数 VoucherIds 是否已赋值
                     * @return VoucherIds 是否已赋值
                     */
                    bool VoucherIdsHasBeenSet() const;

                private:

                    /**
                     * List of resource IDs. Note that currently you cannot remove multiple instances from isolation at the same time. Only one instance ID can be passed in here.
                     */
                    std::vector<std::string> m_dBInstanceIdSet;
                    bool m_dBInstanceIdSetHasBeenSet;

                    /**
                     * The valid period (in months) of the monthly-subscribed instance when removing it from isolation
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Whether to use vouchers. Valid values: `true` (yes), `false` (no). Default value: `false`.
                     */
                    bool m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * Voucher ID list
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DISISOLATEDBINSTANCESREQUEST_H_
