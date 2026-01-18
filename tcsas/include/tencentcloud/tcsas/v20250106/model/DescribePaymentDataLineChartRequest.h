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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEPAYMENTDATALINECHARTREQUEST_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEPAYMENTDATALINECHARTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * DescribePaymentDataLineChart request structure.
                */
                class DescribePaymentDataLineChartRequest : public AbstractModel
                {
                public:
                    DescribePaymentDataLineChartRequest();
                    ~DescribePaymentDataLineChartRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Tenant ID
                     * @return PlatformId Tenant ID
                     * 
                     */
                    std::string GetPlatformId() const;

                    /**
                     * 设置Tenant ID
                     * @param _platformId Tenant ID
                     * 
                     */
                    void SetPlatformId(const std::string& _platformId);

                    /**
                     * 判断参数 PlatformId 是否已赋值
                     * @return PlatformId 是否已赋值
                     * 
                     */
                    bool PlatformIdHasBeenSet() const;

                    /**
                     * 获取Fixed value: payment_data_analysis
                     * @return ReportId Fixed value: payment_data_analysis
                     * 
                     */
                    std::string GetReportId() const;

                    /**
                     * 设置Fixed value: payment_data_analysis
                     * @param _reportId Fixed value: payment_data_analysis
                     * 
                     */
                    void SetReportId(const std::string& _reportId);

                    /**
                     * 判断参数 ReportId 是否已赋值
                     * @return ReportId 是否已赋值
                     * 
                     */
                    bool ReportIdHasBeenSet() const;

                    /**
                     * 获取IndexId (optional):
order_user_num: Number of users placing orders
order_num: Total orders
total_amount: Total amount
order_unpaid_num: Total unpaid orders
unpaid_amount: Unpaid amount
order_paid_num: Total paid orders
paid_amount: Amount paid
order_refund_num: Total refunded orders
refund_amount: Total amount refunded
                     * @return IndexId IndexId (optional):
order_user_num: Number of users placing orders
order_num: Total orders
total_amount: Total amount
order_unpaid_num: Total unpaid orders
unpaid_amount: Unpaid amount
order_paid_num: Total paid orders
paid_amount: Amount paid
order_refund_num: Total refunded orders
refund_amount: Total amount refunded
                     * 
                     */
                    std::string GetIndexId() const;

                    /**
                     * 设置IndexId (optional):
order_user_num: Number of users placing orders
order_num: Total orders
total_amount: Total amount
order_unpaid_num: Total unpaid orders
unpaid_amount: Unpaid amount
order_paid_num: Total paid orders
paid_amount: Amount paid
order_refund_num: Total refunded orders
refund_amount: Total amount refunded
                     * @param _indexId IndexId (optional):
order_user_num: Number of users placing orders
order_num: Total orders
total_amount: Total amount
order_unpaid_num: Total unpaid orders
unpaid_amount: Unpaid amount
order_paid_num: Total paid orders
paid_amount: Amount paid
order_refund_num: Total refunded orders
refund_amount: Total amount refunded
                     * 
                     */
                    void SetIndexId(const std::string& _indexId);

                    /**
                     * 判断参数 IndexId 是否已赋值
                     * @return IndexId 是否已赋值
                     * 
                     */
                    bool IndexIdHasBeenSet() const;

                    /**
                     * 获取Input parameter base64 string: {"Platform":0,"MnpIds":["mp9e7qluz4i3z3km"],"BeginDate":20251031,"EndDate":20251129,"DataType":"1","PaymentType":1}
                     * @return QueryData Input parameter base64 string: {"Platform":0,"MnpIds":["mp9e7qluz4i3z3km"],"BeginDate":20251031,"EndDate":20251129,"DataType":"1","PaymentType":1}
                     * 
                     */
                    std::string GetQueryData() const;

                    /**
                     * 设置Input parameter base64 string: {"Platform":0,"MnpIds":["mp9e7qluz4i3z3km"],"BeginDate":20251031,"EndDate":20251129,"DataType":"1","PaymentType":1}
                     * @param _queryData Input parameter base64 string: {"Platform":0,"MnpIds":["mp9e7qluz4i3z3km"],"BeginDate":20251031,"EndDate":20251129,"DataType":"1","PaymentType":1}
                     * 
                     */
                    void SetQueryData(const std::string& _queryData);

                    /**
                     * 判断参数 QueryData 是否已赋值
                     * @return QueryData 是否已赋值
                     * 
                     */
                    bool QueryDataHasBeenSet() const;

                private:

                    /**
                     * Tenant ID
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                    /**
                     * Fixed value: payment_data_analysis
                     */
                    std::string m_reportId;
                    bool m_reportIdHasBeenSet;

                    /**
                     * IndexId (optional):
order_user_num: Number of users placing orders
order_num: Total orders
total_amount: Total amount
order_unpaid_num: Total unpaid orders
unpaid_amount: Unpaid amount
order_paid_num: Total paid orders
paid_amount: Amount paid
order_refund_num: Total refunded orders
refund_amount: Total amount refunded
                     */
                    std::string m_indexId;
                    bool m_indexIdHasBeenSet;

                    /**
                     * Input parameter base64 string: {"Platform":0,"MnpIds":["mp9e7qluz4i3z3km"],"BeginDate":20251031,"EndDate":20251129,"DataType":"1","PaymentType":1}
                     */
                    std::string m_queryData;
                    bool m_queryDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEPAYMENTDATALINECHARTREQUEST_H_
