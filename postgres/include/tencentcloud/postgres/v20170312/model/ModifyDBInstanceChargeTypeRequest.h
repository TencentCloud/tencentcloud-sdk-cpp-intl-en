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
                     * 获取Specifies the instance ID, such as postgres-6fego161. obtain through the api [DescribeDBInstances](https://www.tencentcloud.comom/document/api/409/16773?from_cn_redirect=1).
                     * @return DBInstanceId Specifies the instance ID, such as postgres-6fego161. obtain through the api [DescribeDBInstances](https://www.tencentcloud.comom/document/api/409/16773?from_cn_redirect=1).
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Specifies the instance ID, such as postgres-6fego161. obtain through the api [DescribeDBInstances](https://www.tencentcloud.comom/document/api/409/16773?from_cn_redirect=1).
                     * @param _dBInstanceId Specifies the instance ID, such as postgres-6fego161. obtain through the api [DescribeDBInstances](https://www.tencentcloud.comom/document/api/409/16773?from_cn_redirect=1).
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
                     * 获取Instance billing type, which currently supports:.
<Li>PREPAID: prepaid, i.e., yearly/monthly subscription</li>.
<Li>POSTPAID_BY_HOUR: pay-as-you-go, i.e., pay by consumption.</li>.
Default value: PREPAID
                     * @return InstanceChargeType Instance billing type, which currently supports:.
<Li>PREPAID: prepaid, i.e., yearly/monthly subscription</li>.
<Li>POSTPAID_BY_HOUR: pay-as-you-go, i.e., pay by consumption.</li>.
Default value: PREPAID
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置Instance billing type, which currently supports:.
<Li>PREPAID: prepaid, i.e., yearly/monthly subscription</li>.
<Li>POSTPAID_BY_HOUR: pay-as-you-go, i.e., pay by consumption.</li>.
Default value: PREPAID
                     * @param _instanceChargeType Instance billing type, which currently supports:.
<Li>PREPAID: prepaid, i.e., yearly/monthly subscription</li>.
<Li>POSTPAID_BY_HOUR: pay-as-you-go, i.e., pay by consumption.</li>.
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
                     * 获取Purchase duration, in months.
<Li>Prepaid: supports `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, and `36`.</li>.
<li>Pay-as-you-go: Only supports `1`.</li>
                     * @return Period Purchase duration, in months.
<Li>Prepaid: supports `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, and `36`.</li>.
<li>Pay-as-you-go: Only supports `1`.</li>
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Purchase duration, in months.
<Li>Prepaid: supports `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, and `36`.</li>.
<li>Pay-as-you-go: Only supports `1`.</li>
                     * @param _period Purchase duration, in months.
<Li>Prepaid: supports `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, and `36`.</li>.
<li>Pay-as-you-go: Only supports `1`.</li>
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
                     * 获取Specifies the auto-renewal flag.
<Li>`0`: manual renewal.</li>.
<Li>`1`: auto-renewal</li>.
Default value: 0
                     * @return AutoRenewFlag Specifies the auto-renewal flag.
<Li>`0`: manual renewal.</li>.
<Li>`1`: auto-renewal</li>.
Default value: 0
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Specifies the auto-renewal flag.
<Li>`0`: manual renewal.</li>.
<Li>`1`: auto-renewal</li>.
Default value: 0
                     * @param _autoRenewFlag Specifies the auto-renewal flag.
<Li>`0`: manual renewal.</li>.
<Li>`1`: auto-renewal</li>.
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
                     * 获取Specifies whether to automatically use a voucher.
<Li>0: no.</li>.
<Li>`1`: yes.</li>.
Default value: 0
                     * @return AutoVoucher Specifies whether to automatically use a voucher.
<Li>0: no.</li>.
<Li>`1`: yes.</li>.
Default value: 0
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置Specifies whether to automatically use a voucher.
<Li>0: no.</li>.
<Li>`1`: yes.</li>.
Default value: 0
                     * @param _autoVoucher Specifies whether to automatically use a voucher.
<Li>0: no.</li>.
<Li>`1`: yes.</li>.
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

                private:

                    /**
                     * Specifies the instance ID, such as postgres-6fego161. obtain through the api [DescribeDBInstances](https://www.tencentcloud.comom/document/api/409/16773?from_cn_redirect=1).
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Instance billing type, which currently supports:.
<Li>PREPAID: prepaid, i.e., yearly/monthly subscription</li>.
<Li>POSTPAID_BY_HOUR: pay-as-you-go, i.e., pay by consumption.</li>.
Default value: PREPAID
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * Purchase duration, in months.
<Li>Prepaid: supports `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, and `36`.</li>.
<li>Pay-as-you-go: Only supports `1`.</li>
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Specifies the auto-renewal flag.
<Li>`0`: manual renewal.</li>.
<Li>`1`: auto-renewal</li>.
Default value: 0
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Specifies whether to automatically use a voucher.
<Li>0: no.</li>.
<Li>`1`: yes.</li>.
Default value: 0
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCECHARGETYPEREQUEST_H_
