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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMEROWNCOSTEXPLORERSUMMARYREQUEST_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMEROWNCOSTEXPLORERSUMMARYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/CostAnalyzeFilter.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * DescribeCustomerOwnCostExplorerSummary request structure.
                */
                class DescribeCustomerOwnCostExplorerSummaryRequest : public AbstractModel
                {
                public:
                    DescribeCustomerOwnCostExplorerSummaryRequest();
                    ~DescribeCustomerOwnCostExplorerSummaryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Classification dimension</p><p>Enumeration value:</p><ul><li>Default: Default dimension</li><li>Business: Product</li><li>Product: Subproduct</li><li>Region: Region</li><li>Zone: Availability zone</li><li>ActionType: Transaction type</li><li>PayMode: Payment mode</li><li>Project: Project</li><li>PayerUin: Payer uin</li><li>OwnerUin: Owner uin</li><li>Tag: Tag</li></ul>
                     * @return Dimension <p>Classification dimension</p><p>Enumeration value:</p><ul><li>Default: Default dimension</li><li>Business: Product</li><li>Product: Subproduct</li><li>Region: Region</li><li>Zone: Availability zone</li><li>ActionType: Transaction type</li><li>PayMode: Payment mode</li><li>Project: Project</li><li>PayerUin: Payer uin</li><li>OwnerUin: Owner uin</li><li>Tag: Tag</li></ul>
                     * 
                     */
                    std::string GetDimension() const;

                    /**
                     * 设置<p>Classification dimension</p><p>Enumeration value:</p><ul><li>Default: Default dimension</li><li>Business: Product</li><li>Product: Subproduct</li><li>Region: Region</li><li>Zone: Availability zone</li><li>ActionType: Transaction type</li><li>PayMode: Payment mode</li><li>Project: Project</li><li>PayerUin: Payer uin</li><li>OwnerUin: Owner uin</li><li>Tag: Tag</li></ul>
                     * @param _dimension <p>Classification dimension</p><p>Enumeration value:</p><ul><li>Default: Default dimension</li><li>Business: Product</li><li>Product: Subproduct</li><li>Region: Region</li><li>Zone: Availability zone</li><li>ActionType: Transaction type</li><li>PayMode: Payment mode</li><li>Project: Project</li><li>PayerUin: Payer uin</li><li>OwnerUin: Owner uin</li><li>Tag: Tag</li></ul>
                     * 
                     */
                    void SetDimension(const std::string& _dimension);

                    /**
                     * 判断参数 Dimension 是否已赋值
                     * @return Dimension 是否已赋值
                     * 
                     */
                    bool DimensionHasBeenSet() const;

                    /**
                     * 获取<p>Fee type</p><p>Enumeration value:</p><ul><li>originalCost: Original Cost</li><li>totalCost: Total Cost</li></ul>
                     * @return FeeType <p>Fee type</p><p>Enumeration value:</p><ul><li>originalCost: Original Cost</li><li>totalCost: Total Cost</li></ul>
                     * 
                     */
                    std::string GetFeeType() const;

                    /**
                     * 设置<p>Fee type</p><p>Enumeration value:</p><ul><li>originalCost: Original Cost</li><li>totalCost: Total Cost</li></ul>
                     * @param _feeType <p>Fee type</p><p>Enumeration value:</p><ul><li>originalCost: Original Cost</li><li>totalCost: Total Cost</li></ul>
                     * 
                     */
                    void SetFeeType(const std::string& _feeType);

                    /**
                     * 判断参数 FeeType 是否已赋值
                     * @return FeeType 是否已赋值
                     * 
                     */
                    bool FeeTypeHasBeenSet() const;

                    /**
                     * 获取<p>Billing mode</p><p>Enumeration value:</p><ul><li>1: Billing statement</li></ul>
                     * @return BillType <p>Billing mode</p><p>Enumeration value:</p><ul><li>1: Billing statement</li></ul>
                     * 
                     */
                    int64_t GetBillType() const;

                    /**
                     * 设置<p>Billing mode</p><p>Enumeration value:</p><ul><li>1: Billing statement</li></ul>
                     * @param _billType <p>Billing mode</p><p>Enumeration value:</p><ul><li>1: Billing statement</li></ul>
                     * 
                     */
                    void SetBillType(const int64_t& _billType);

                    /**
                     * 判断参数 BillType 是否已赋值
                     * @return BillType 是否已赋值
                     * 
                     */
                    bool BillTypeHasBeenSet() const;

                    /**
                     * 获取<p>Start time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss, for example 2006-01-02 00:00:00</p><p>Input limit: When PeriodType is month, the time range is 6 calendar months; when PeriodType is day, the time range is 2 calendar months;</p>
                     * @return StartTime <p>Start time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss, for example 2006-01-02 00:00:00</p><p>Input limit: When PeriodType is month, the time range is 6 calendar months; when PeriodType is day, the time range is 2 calendar months;</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Start time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss, for example 2006-01-02 00:00:00</p><p>Input limit: When PeriodType is month, the time range is 6 calendar months; when PeriodType is day, the time range is 2 calendar months;</p>
                     * @param _startTime <p>Start time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss, for example 2006-01-02 00:00:00</p><p>Input limit: When PeriodType is month, the time range is 6 calendar months; when PeriodType is day, the time range is 2 calendar months;</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>End time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss, for example 2006-01-02 00:00:00</p><p>Input limit: When PeriodType is month, the time range is 6 calendar months. When PeriodType is day, the time range is 2 calendar months.</p>
                     * @return EndTime <p>End time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss, for example 2006-01-02 00:00:00</p><p>Input limit: When PeriodType is month, the time range is 6 calendar months. When PeriodType is day, the time range is 2 calendar months.</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>End time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss, for example 2006-01-02 00:00:00</p><p>Input limit: When PeriodType is month, the time range is 6 calendar months. When PeriodType is day, the time range is 2 calendar months.</p>
                     * @param _endTime <p>End time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss, for example 2006-01-02 00:00:00</p><p>Input limit: When PeriodType is month, the time range is 6 calendar months. When PeriodType is day, the time range is 2 calendar months.</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>Time type</p><p>Enumeration value:</p><ul><li>day: By day</li><li>month: By month</li></ul>
                     * @return PeriodType <p>Time type</p><p>Enumeration value:</p><ul><li>day: By day</li><li>month: By month</li></ul>
                     * 
                     */
                    std::string GetPeriodType() const;

                    /**
                     * 设置<p>Time type</p><p>Enumeration value:</p><ul><li>day: By day</li><li>month: By month</li></ul>
                     * @param _periodType <p>Time type</p><p>Enumeration value:</p><ul><li>day: By day</li><li>month: By month</li></ul>
                     * 
                     */
                    void SetPeriodType(const std::string& _periodType);

                    /**
                     * 判断参数 PeriodType 是否已赋值
                     * @return PeriodType 是否已赋值
                     * 
                     */
                    bool PeriodTypeHasBeenSet() const;

                    /**
                     * 获取<p>Page number</p><p>Value range: [1, 10000]</p>
                     * @return Page <p>Page number</p><p>Value range: [1, 10000]</p>
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置<p>Page number</p><p>Value range: [1, 10000]</p>
                     * @param _page <p>Page number</p><p>Value range: [1, 10000]</p>
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取<p>Page size</p><p>Value range: [1, 200]</p>
                     * @return PageSize <p>Page size</p><p>Value range: [1, 200]</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>Page size</p><p>Value range: [1, 200]</p>
                     * @param _pageSize <p>Page size</p><p>Value range: [1, 200]</p>
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>Tag key of the statistical dimension. When Dimension is Tag, TagKey is required.</p>
                     * @return TagKey <p>Tag key of the statistical dimension. When Dimension is Tag, TagKey is required.</p>
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置<p>Tag key of the statistical dimension. When Dimension is Tag, TagKey is required.</p>
                     * @param _tagKey <p>Tag key of the statistical dimension. When Dimension is Tag, TagKey is required.</p>
                     * 
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                    /**
                     * 获取Filter

You can pass the data returned by [DescribeCustomerOwnCostExplorerFilter](https://www.tencentcloud.com/document/product/1085/80125) as a parameter to filter the data.
                     * @return Filter Filter

You can pass the data returned by [DescribeCustomerOwnCostExplorerFilter](https://www.tencentcloud.com/document/product/1085/80125) as a parameter to filter the data.
                     * 
                     */
                    CostAnalyzeFilter GetFilter() const;

                    /**
                     * 设置Filter

You can pass the data returned by [DescribeCustomerOwnCostExplorerFilter](https://www.tencentcloud.com/document/product/1085/80125) as a parameter to filter the data.
                     * @param _filter Filter

You can pass the data returned by [DescribeCustomerOwnCostExplorerFilter](https://www.tencentcloud.com/document/product/1085/80125) as a parameter to filter the data.
                     * 
                     */
                    void SetFilter(const CostAnalyzeFilter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                private:

                    /**
                     * <p>Classification dimension</p><p>Enumeration value:</p><ul><li>Default: Default dimension</li><li>Business: Product</li><li>Product: Subproduct</li><li>Region: Region</li><li>Zone: Availability zone</li><li>ActionType: Transaction type</li><li>PayMode: Payment mode</li><li>Project: Project</li><li>PayerUin: Payer uin</li><li>OwnerUin: Owner uin</li><li>Tag: Tag</li></ul>
                     */
                    std::string m_dimension;
                    bool m_dimensionHasBeenSet;

                    /**
                     * <p>Fee type</p><p>Enumeration value:</p><ul><li>originalCost: Original Cost</li><li>totalCost: Total Cost</li></ul>
                     */
                    std::string m_feeType;
                    bool m_feeTypeHasBeenSet;

                    /**
                     * <p>Billing mode</p><p>Enumeration value:</p><ul><li>1: Billing statement</li></ul>
                     */
                    int64_t m_billType;
                    bool m_billTypeHasBeenSet;

                    /**
                     * <p>Start time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss, for example 2006-01-02 00:00:00</p><p>Input limit: When PeriodType is month, the time range is 6 calendar months; when PeriodType is day, the time range is 2 calendar months;</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>End time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss, for example 2006-01-02 00:00:00</p><p>Input limit: When PeriodType is month, the time range is 6 calendar months. When PeriodType is day, the time range is 2 calendar months.</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Time type</p><p>Enumeration value:</p><ul><li>day: By day</li><li>month: By month</li></ul>
                     */
                    std::string m_periodType;
                    bool m_periodTypeHasBeenSet;

                    /**
                     * <p>Page number</p><p>Value range: [1, 10000]</p>
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * <p>Page size</p><p>Value range: [1, 200]</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>Tag key of the statistical dimension. When Dimension is Tag, TagKey is required.</p>
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * Filter

You can pass the data returned by [DescribeCustomerOwnCostExplorerFilter](https://www.tencentcloud.com/document/product/1085/80125) as a parameter to filter the data.
                     */
                    CostAnalyzeFilter m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMEROWNCOSTEXPLORERSUMMARYREQUEST_H_
