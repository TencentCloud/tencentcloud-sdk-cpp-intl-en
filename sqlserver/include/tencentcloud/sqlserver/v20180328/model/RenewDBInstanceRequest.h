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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_RENEWDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_RENEWDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * RenewDBInstance request structure.
                */
                class RenewDBInstanceRequest : public AbstractModel
                {
                public:
                    RenewDBInstanceRequest();
                    ~RenewDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. For example, mssql-j8kv137v.
                     * @return InstanceId Instance ID. For example, mssql-j8kv137v.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID. For example, mssql-j8kv137v.
                     * @param _instanceId Instance ID. For example, mssql-j8kv137v.
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
                     * 获取Renewal duration, in months. Value range: 1~48. Default value: 1.
                     * @return Period Renewal duration, in months. Value range: 1~48. Default value: 1.
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置Renewal duration, in months. Value range: 1~48. Default value: 1.
                     * @param _period Renewal duration, in months. Value range: 1~48. Default value: 1.
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
                     * 获取Whether to automatically use voucher. 0: no, 1: yes. Default value: no.
                     * @return AutoVoucher Whether to automatically use voucher. 0: no, 1: yes. Default value: no.
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置Whether to automatically use voucher. 0: no, 1: yes. Default value: no.
                     * @param _autoVoucher Whether to automatically use voucher. 0: no, 1: yes. Default value: no.
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
                     * 获取Array of voucher IDs (currently, only one voucher can be used per order).
                     * @return VoucherIds Array of voucher IDs (currently, only one voucher can be used per order).
                     * 
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置Array of voucher IDs (currently, only one voucher can be used per order).
                     * @param _voucherIds Array of voucher IDs (currently, only one voucher can be used per order).
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
                     * 获取Renewal flag. 0: normal renewal; 1: automatic renewal. This parameter is valid only for pay-as-you-go instances changing to monthly subscription ones.
                     * @return AutoRenewFlag Renewal flag. 0: normal renewal; 1: automatic renewal. This parameter is valid only for pay-as-you-go instances changing to monthly subscription ones.
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Renewal flag. 0: normal renewal; 1: automatic renewal. This parameter is valid only for pay-as-you-go instances changing to monthly subscription ones.
                     * @param _autoRenewFlag Renewal flag. 0: normal renewal; 1: automatic renewal. This parameter is valid only for pay-as-you-go instances changing to monthly subscription ones.
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                private:

                    /**
                     * Instance ID. For example, mssql-j8kv137v.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Renewal duration, in months. Value range: 1~48. Default value: 1.
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Whether to automatically use voucher. 0: no, 1: yes. Default value: no.
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * Array of voucher IDs (currently, only one voucher can be used per order).
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                    /**
                     * Renewal flag. 0: normal renewal; 1: automatic renewal. This parameter is valid only for pay-as-you-go instances changing to monthly subscription ones.
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_RENEWDBINSTANCEREQUEST_H_
