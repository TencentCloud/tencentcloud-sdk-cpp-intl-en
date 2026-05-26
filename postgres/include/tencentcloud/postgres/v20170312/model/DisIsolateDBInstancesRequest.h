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
                     * 获取<p>Instance ID list, which can be obtained through the <a href="https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1">DescribeDBInstances</a> API. Supports simultaneous de-isolation of multiple instances.</p>
                     * @return DBInstanceIdSet <p>Instance ID list, which can be obtained through the <a href="https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1">DescribeDBInstances</a> API. Supports simultaneous de-isolation of multiple instances.</p>
                     * 
                     */
                    std::vector<std::string> GetDBInstanceIdSet() const;

                    /**
                     * 设置<p>Instance ID list, which can be obtained through the <a href="https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1">DescribeDBInstances</a> API. Supports simultaneous de-isolation of multiple instances.</p>
                     * @param _dBInstanceIdSet <p>Instance ID list, which can be obtained through the <a href="https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1">DescribeDBInstances</a> API. Supports simultaneous de-isolation of multiple instances.</p>
                     * 
                     */
                    void SetDBInstanceIdSet(const std::vector<std::string>& _dBInstanceIdSet);

                    /**
                     * 判断参数 DBInstanceIdSet 是否已赋值
                     * @return DBInstanceIdSet 是否已赋值
                     * 
                     */
                    bool DBInstanceIdSetHasBeenSet() const;

                    /**
                     * 获取<p>Purchase duration, in months.</p><li>Prepaid: supports 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36.</li><li>Postpaid: this parameter does not take effect.</li>
                     * @return Period <p>Purchase duration, in months.</p><li>Prepaid: supports 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36.</li><li>Postpaid: this parameter does not take effect.</li>
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置<p>Purchase duration, in months.</p><li>Prepaid: supports 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36.</li><li>Postpaid: this parameter does not take effect.</li>
                     * @param _period <p>Purchase duration, in months.</p><li>Prepaid: supports 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36.</li><li>Postpaid: this parameter does not take effect.</li>
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
                     * 获取<p>Whether to use a voucher:</p><li>true: Use</li><li>false: Non-use</li>Default value: false
                     * @return AutoVoucher <p>Whether to use a voucher:</p><li>true: Use</li><li>false: Non-use</li>Default value: false
                     * 
                     */
                    bool GetAutoVoucher() const;

                    /**
                     * 设置<p>Whether to use a voucher:</p><li>true: Use</li><li>false: Non-use</li>Default value: false
                     * @param _autoVoucher <p>Whether to use a voucher:</p><li>true: Use</li><li>false: Non-use</li>Default value: false
                     * 
                     */
                    void SetAutoVoucher(const bool& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取<p>Voucher id list.</p>
                     * @return VoucherIds <p>Voucher id list.</p>
                     * 
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置<p>Voucher id list.</p>
                     * @param _voucherIds <p>Voucher id list.</p>
                     * 
                     */
                    void SetVoucherIds(const std::vector<std::string>& _voucherIds);

                    /**
                     * 判断参数 VoucherIds 是否已赋值
                     * @return VoucherIds 是否已赋值
                     * 
                     */
                    bool VoucherIdsHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID list, which can be obtained through the <a href="https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1">DescribeDBInstances</a> API. Supports simultaneous de-isolation of multiple instances.</p>
                     */
                    std::vector<std::string> m_dBInstanceIdSet;
                    bool m_dBInstanceIdSetHasBeenSet;

                    /**
                     * <p>Purchase duration, in months.</p><li>Prepaid: supports 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36.</li><li>Postpaid: this parameter does not take effect.</li>
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>Whether to use a voucher:</p><li>true: Use</li><li>false: Non-use</li>Default value: false
                     */
                    bool m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * <p>Voucher id list.</p>
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DISISOLATEDBINSTANCESREQUEST_H_
