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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCECHARGETYPEREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCECHARGETYPEREQUEST_H_

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
                * ModifyDBInstanceChargeType request structure.
                */
                class ModifyDBInstanceChargeTypeRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceChargeTypeRequest();
                    ~ModifyDBInstanceChargeTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of `postgres-6fego161`
                     * @return DBInstanceId Instance ID in the format of `postgres-6fego161`
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID in the format of `postgres-6fego161`
                     * @param _dBInstanceId Instance ID in the format of `postgres-6fego161`
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
                     * 获取Instance billing mode.  Valid values:  `PREPAID` (monthly subscription), `POSTPAID_BY_HOUR` (pay-as-you-go). Default value:  `PREPAID`.
                     * @return InstanceChargeType Instance billing mode.  Valid values:  `PREPAID` (monthly subscription), `POSTPAID_BY_HOUR` (pay-as-you-go). Default value:  `PREPAID`.
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置Instance billing mode.  Valid values:  `PREPAID` (monthly subscription), `POSTPAID_BY_HOUR` (pay-as-you-go). Default value:  `PREPAID`.
                     * @param _instanceChargeType Instance billing mode.  Valid values:  `PREPAID` (monthly subscription), `POSTPAID_BY_HOUR` (pay-as-you-go). Default value:  `PREPAID`.
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
                     * 获取Validity period  in months. Valid values:  Valid period in months of the purchased instance. Valid values: `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, `36`. This parameter is set to `1` when the pay-as-you-go billing mode is used.
                     * @return Period Validity period  in months. Valid values:  Valid period in months of the purchased instance. Valid values: `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, `36`. This parameter is set to `1` when the pay-as-you-go billing mode is used.
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Validity period  in months. Valid values:  Valid period in months of the purchased instance. Valid values: `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, `36`. This parameter is set to `1` when the pay-as-you-go billing mode is used.
                     * @param _period Validity period  in months. Valid values:  Valid period in months of the purchased instance. Valid values: `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, `36`. This parameter is set to `1` when the pay-as-you-go billing mode is used.
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
                     * 获取Renewal flag. Valid values；  Valid values: `0` (manual renewal), `1` (auto-renewal).
                     * @return AutoRenewFlag Renewal flag. Valid values；  Valid values: `0` (manual renewal), `1` (auto-renewal).
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Renewal flag. Valid values；  Valid values: `0` (manual renewal), `1` (auto-renewal).
                     * @param _autoRenewFlag Renewal flag. Valid values；  Valid values: `0` (manual renewal), `1` (auto-renewal).
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
                     * 获取Whether to automatically use vouchers. Valid values: `1` (yes), `0` (no). Default value: `0`.
                     * @return AutoVoucher Whether to automatically use vouchers. Valid values: `1` (yes), `0` (no). Default value: `0`.
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置Whether to automatically use vouchers. Valid values: `1` (yes), `0` (no). Default value: `0`.
                     * @param _autoVoucher Whether to automatically use vouchers. Valid values: `1` (yes), `0` (no). Default value: `0`.
                     * 
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of `postgres-6fego161`
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Instance billing mode.  Valid values:  `PREPAID` (monthly subscription), `POSTPAID_BY_HOUR` (pay-as-you-go). Default value:  `PREPAID`.
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * Validity period  in months. Valid values:  Valid period in months of the purchased instance. Valid values: `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, `36`. This parameter is set to `1` when the pay-as-you-go billing mode is used.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Renewal flag. Valid values；  Valid values: `0` (manual renewal), `1` (auto-renewal).
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Whether to automatically use vouchers. Valid values: `1` (yes), `0` (no). Default value: `0`.
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCECHARGETYPEREQUEST_H_
