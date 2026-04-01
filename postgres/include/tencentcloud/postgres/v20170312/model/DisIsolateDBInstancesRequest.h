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
                     * 获取Instance ID list. obtain through the api [DescribeDBInstances](https://www.tencentcloud.comom/document/api/409/16773?from_cn_redirect=1). supports de-isolating multiple instances simultaneously.
                     * @return DBInstanceIdSet Instance ID list. obtain through the api [DescribeDBInstances](https://www.tencentcloud.comom/document/api/409/16773?from_cn_redirect=1). supports de-isolating multiple instances simultaneously.
                     * 
                     */
                    std::vector<std::string> GetDBInstanceIdSet() const;

                    /**
                     * 设置Instance ID list. obtain through the api [DescribeDBInstances](https://www.tencentcloud.comom/document/api/409/16773?from_cn_redirect=1). supports de-isolating multiple instances simultaneously.
                     * @param _dBInstanceIdSet Instance ID list. obtain through the api [DescribeDBInstances](https://www.tencentcloud.comom/document/api/409/16773?from_cn_redirect=1). supports de-isolating multiple instances simultaneously.
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
                     * 获取Purchase duration, in months.
<Li>Prepaid: Yearly/monthly subscription, supports `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, and `36`.</li>.
<Li>Postpaid: Pay-as-you-go, this parameter does not take effect.</li>.
                     * @return Period Purchase duration, in months.
<Li>Prepaid: Yearly/monthly subscription, supports `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, and `36`.</li>.
<Li>Postpaid: Pay-as-you-go, this parameter does not take effect.</li>.
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Purchase duration, in months.
<Li>Prepaid: Yearly/monthly subscription, supports `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, and `36`.</li>.
<Li>Postpaid: Pay-as-you-go, this parameter does not take effect.</li>.
                     * @param _period Purchase duration, in months.
<Li>Prepaid: Yearly/monthly subscription, supports `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, and `36`.</li>.
<Li>Postpaid: Pay-as-you-go, this parameter does not take effect.</li>.
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
                     * 获取Whether to use vouchers.
<li>true: use.</li>.
<li>false: non-use.</li>.
Default value: `false`.
                     * @return AutoVoucher Whether to use vouchers.
<li>true: use.</li>.
<li>false: non-use.</li>.
Default value: `false`.
                     * 
                     */
                    bool GetAutoVoucher() const;

                    /**
                     * 设置Whether to use vouchers.
<li>true: use.</li>.
<li>false: non-use.</li>.
Default value: `false`.
                     * @param _autoVoucher Whether to use vouchers.
<li>true: use.</li>.
<li>false: non-use.</li>.
Default value: `false`.
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
                     * 获取Voucher ID list
                     * @return VoucherIds Voucher ID list
                     * 
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置Voucher ID list
                     * @param _voucherIds Voucher ID list
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
                     * Instance ID list. obtain through the api [DescribeDBInstances](https://www.tencentcloud.comom/document/api/409/16773?from_cn_redirect=1). supports de-isolating multiple instances simultaneously.
                     */
                    std::vector<std::string> m_dBInstanceIdSet;
                    bool m_dBInstanceIdSetHasBeenSet;

                    /**
                     * Purchase duration, in months.
<Li>Prepaid: Yearly/monthly subscription, supports `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, and `36`.</li>.
<Li>Postpaid: Pay-as-you-go, this parameter does not take effect.</li>.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Whether to use vouchers.
<li>true: use.</li>.
<li>false: non-use.</li>.
Default value: `false`.
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
