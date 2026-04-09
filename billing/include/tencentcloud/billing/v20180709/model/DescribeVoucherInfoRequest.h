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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEVOUCHERINFOREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEVOUCHERINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeVoucherInfo request structure.
                */
                class DescribeVoucherInfoRequest : public AbstractModel
                {
                public:
                    DescribeVoucherInfoRequest();
                    ~DescribeVoucherInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>How many data entries per page, 20 is selected by default, maximum not exceeding 1000</p>
                     * @return Limit <p>How many data entries per page, 20 is selected by default, maximum not exceeding 1000</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>How many data entries per page, 20 is selected by default, maximum not exceeding 1000</p>
                     * @param _limit <p>How many data entries per page, 20 is selected by default, maximum not exceeding 1000</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>Page number, starts from 1 by default</p>
                     * @return Offset <p>Page number, starts from 1 by default</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Page number, starts from 1 by default</p>
                     * @param _offset <p>Page number, starts from 1 by default</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>Voucher status: pending use: unUsed, Used: used, delivered: delivered, discarded: cancel, expired: overdue</p>
                     * @return Status <p>Voucher status: pending use: unUsed, Used: used, delivered: delivered, discarded: cancel, expired: overdue</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Voucher status: pending use: unUsed, Used: used, delivered: delivered, discarded: cancel, expired: overdue</p>
                     * @param _status <p>Voucher status: pending use: unUsed, Used: used, delivered: delivered, discarded: cancel, expired: overdue</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Voucher id</p>
                     * @return VoucherId <p>Voucher id</p>
                     * 
                     */
                    std::string GetVoucherId() const;

                    /**
                     * 设置<p>Voucher id</p>
                     * @param _voucherId <p>Voucher id</p>
                     * 
                     */
                    void SetVoucherId(const std::string& _voucherId);

                    /**
                     * 判断参数 VoucherId 是否已赋值
                     * @return VoucherId 是否已赋值
                     * 
                     */
                    bool VoucherIdHasBeenSet() const;

                    /**
                     * 获取<p>Voucher order id</p>
                     * @return CodeId <p>Voucher order id</p>
                     * 
                     */
                    std::string GetCodeId() const;

                    /**
                     * 设置<p>Voucher order id</p>
                     * @param _codeId <p>Voucher order id</p>
                     * 
                     */
                    void SetCodeId(const std::string& _codeId);

                    /**
                     * 判断参数 CodeId 是否已赋值
                     * @return CodeId 是否已赋值
                     * 
                     */
                    bool CodeIdHasBeenSet() const;

                    /**
                     * 获取<p>product code</p>
                     * @return ProductCode <p>product code</p>
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置<p>product code</p>
                     * @param _productCode <p>product code</p>
                     * 
                     */
                    void SetProductCode(const std::string& _productCode);

                    /**
                     * 判断参数 ProductCode 是否已赋值
                     * @return ProductCode 是否已赋值
                     * 
                     */
                    bool ProductCodeHasBeenSet() const;

                    /**
                     * 获取<p>Activity id</p>
                     * @return ActivityId <p>Activity id</p>
                     * 
                     */
                    std::string GetActivityId() const;

                    /**
                     * 设置<p>Activity id</p>
                     * @param _activityId <p>Activity id</p>
                     * 
                     */
                    void SetActivityId(const std::string& _activityId);

                    /**
                     * 判断参数 ActivityId 是否已赋值
                     * @return ActivityId 是否已赋值
                     * 
                     */
                    bool ActivityIdHasBeenSet() const;

                    /**
                     * 获取<p>Voucher name</p>
                     * @return VoucherName <p>Voucher name</p>
                     * 
                     */
                    std::string GetVoucherName() const;

                    /**
                     * 设置<p>Voucher name</p>
                     * @param _voucherName <p>Voucher name</p>
                     * 
                     */
                    void SetVoucherName(const std::string& _voucherName);

                    /**
                     * 判断参数 VoucherName 是否已赋值
                     * @return VoucherName 是否已赋值
                     * 
                     */
                    bool VoucherNameHasBeenSet() const;

                    /**
                     * 获取<p>Start time of delivery. Example: 2021-01-01</p>
                     * @return TimeFrom <p>Start time of delivery. Example: 2021-01-01</p>
                     * 
                     */
                    std::string GetTimeFrom() const;

                    /**
                     * 设置<p>Start time of delivery. Example: 2021-01-01</p>
                     * @param _timeFrom <p>Start time of delivery. Example: 2021-01-01</p>
                     * 
                     */
                    void SetTimeFrom(const std::string& _timeFrom);

                    /**
                     * 判断参数 TimeFrom 是否已赋值
                     * @return TimeFrom 是否已赋值
                     * 
                     */
                    bool TimeFromHasBeenSet() const;

                    /**
                     * 获取<p>Delivery end time. Example: 2021-01-01</p>
                     * @return TimeTo <p>Delivery end time. Example: 2021-01-01</p>
                     * 
                     */
                    std::string GetTimeTo() const;

                    /**
                     * 设置<p>Delivery end time. Example: 2021-01-01</p>
                     * @param _timeTo <p>Delivery end time. Example: 2021-01-01</p>
                     * 
                     */
                    void SetTimeTo(const std::string& _timeTo);

                    /**
                     * 判断参数 TimeTo 是否已赋值
                     * @return TimeTo 是否已赋值
                     * 
                     */
                    bool TimeToHasBeenSet() const;

                    /**
                     * 获取<p>Specified sorting field: BeginTime start time, EndTime expiry time, CreateTime creation time</p>
                     * @return SortField <p>Specified sorting field: BeginTime start time, EndTime expiry time, CreateTime creation time</p>
                     * 
                     */
                    std::string GetSortField() const;

                    /**
                     * 设置<p>Specified sorting field: BeginTime start time, EndTime expiry time, CreateTime creation time</p>
                     * @param _sortField <p>Specified sorting field: BeginTime start time, EndTime expiry time, CreateTime creation time</p>
                     * 
                     */
                    void SetSortField(const std::string& _sortField);

                    /**
                     * 判断参数 SortField 是否已赋值
                     * @return SortField 是否已赋值
                     * 
                     */
                    bool SortFieldHasBeenSet() const;

                    /**
                     * 获取<p>Specify ascending/descending order: desc, asc</p>
                     * @return SortOrder <p>Specify ascending/descending order: desc, asc</p>
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置<p>Specify ascending/descending order: desc, asc</p>
                     * @param _sortOrder <p>Specify ascending/descending order: desc, asc</p>
                     * 
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                    /**
                     * 获取<p>Payment mode, postPay (postpaid)/prePay (prepaid)/riPay (reserved instance)/"" or "*" means all modes. If payMode is "" or "*", productCode and subProductCode must be empty.</p>
                     * @return PayMode <p>Payment mode, postPay (postpaid)/prePay (prepaid)/riPay (reserved instance)/"" or "*" means all modes. If payMode is "" or "*", productCode and subProductCode must be empty.</p>
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置<p>Payment mode, postPay (postpaid)/prePay (prepaid)/riPay (reserved instance)/"" or "*" means all modes. If payMode is "" or "*", productCode and subProductCode must be empty.</p>
                     * @param _payMode <p>Payment mode, postPay (postpaid)/prePay (prepaid)/riPay (reserved instance)/"" or "*" means all modes. If payMode is "" or "*", productCode and subProductCode must be empty.</p>
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>Payment scenario PayMode=postPay: spotpay - spot instance, "settle account" - standard post-paid. PayMode=prePay: purchase - monthly subscription new purchase, renew - annual and monthly renewal (auto renewal), modify - monthly subscription configuration change. PayMode=riPay: oneOffFee - prepayment of reserved instance, hourlyFee - hourly charge for reserved instance, * - support all payment scenarios.</p>
                     * @return PayScene <p>Payment scenario PayMode=postPay: spotpay - spot instance, "settle account" - standard post-paid. PayMode=prePay: purchase - monthly subscription new purchase, renew - annual and monthly renewal (auto renewal), modify - monthly subscription configuration change. PayMode=riPay: oneOffFee - prepayment of reserved instance, hourlyFee - hourly charge for reserved instance, * - support all payment scenarios.</p>
                     * 
                     */
                    std::string GetPayScene() const;

                    /**
                     * 设置<p>Payment scenario PayMode=postPay: spotpay - spot instance, "settle account" - standard post-paid. PayMode=prePay: purchase - monthly subscription new purchase, renew - annual and monthly renewal (auto renewal), modify - monthly subscription configuration change. PayMode=riPay: oneOffFee - prepayment of reserved instance, hourlyFee - hourly charge for reserved instance, * - support all payment scenarios.</p>
                     * @param _payScene <p>Payment scenario PayMode=postPay: spotpay - spot instance, "settle account" - standard post-paid. PayMode=prePay: purchase - monthly subscription new purchase, renew - annual and monthly renewal (auto renewal), modify - monthly subscription configuration change. PayMode=riPay: oneOffFee - prepayment of reserved instance, hourlyFee - hourly charge for reserved instance, * - support all payment scenarios.</p>
                     * 
                     */
                    void SetPayScene(const std::string& _payScene);

                    /**
                     * 判断参数 PayScene 是否已赋值
                     * @return PayScene 是否已赋值
                     * 
                     */
                    bool PaySceneHasBeenSet() const;

                    /**
                     * 获取<p>Operator is used by default as user uin</p>
                     * @return Operator <p>Operator is used by default as user uin</p>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置<p>Operator is used by default as user uin</p>
                     * @param _operator <p>Operator is used by default as user uin</p>
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取<p>The primary types of vouchers are has_price and no_price, which represent the cash voucher with a price and the cash voucher without a price respectively.</p>
                     * @return VoucherMainType <p>The primary types of vouchers are has_price and no_price, which represent the cash voucher with a price and the cash voucher without a price respectively.</p>
                     * 
                     */
                    std::string GetVoucherMainType() const;

                    /**
                     * 设置<p>The primary types of vouchers are has_price and no_price, which represent the cash voucher with a price and the cash voucher without a price respectively.</p>
                     * @param _voucherMainType <p>The primary types of vouchers are has_price and no_price, which represent the cash voucher with a price and the cash voucher without a price respectively.</p>
                     * 
                     */
                    void SetVoucherMainType(const std::string& _voucherMainType);

                    /**
                     * 判断参数 VoucherMainType 是否已赋值
                     * @return VoucherMainType 是否已赋值
                     * 
                     */
                    bool VoucherMainTypeHasBeenSet() const;

                    /**
                     * 获取<p>Voucher subtype: Discount is a discount voucher, and deduct is a deduction voucher.</p>
                     * @return VoucherSubType <p>Voucher subtype: Discount is a discount voucher, and deduct is a deduction voucher.</p>
                     * 
                     */
                    std::string GetVoucherSubType() const;

                    /**
                     * 设置<p>Voucher subtype: Discount is a discount voucher, and deduct is a deduction voucher.</p>
                     * @param _voucherSubType <p>Voucher subtype: Discount is a discount voucher, and deduct is a deduction voucher.</p>
                     * 
                     */
                    void SetVoucherSubType(const std::string& _voucherSubType);

                    /**
                     * 判断参数 VoucherSubType 是否已赋值
                     * @return VoucherSubType 是否已赋值
                     * 
                     */
                    bool VoucherSubTypeHasBeenSet() const;

                    /**
                     * 获取<p>Voucher validity start time</p>
                     * @return StartTimeFrom <p>Voucher validity start time</p>
                     * 
                     */
                    std::string GetStartTimeFrom() const;

                    /**
                     * 设置<p>Voucher validity start time</p>
                     * @param _startTimeFrom <p>Voucher validity start time</p>
                     * 
                     */
                    void SetStartTimeFrom(const std::string& _startTimeFrom);

                    /**
                     * 判断参数 StartTimeFrom 是否已赋值
                     * @return StartTimeFrom 是否已赋值
                     * 
                     */
                    bool StartTimeFromHasBeenSet() const;

                    /**
                     * 获取<p>Voucher validity time end time</p>
                     * @return StartTimeTo <p>Voucher validity time end time</p>
                     * 
                     */
                    std::string GetStartTimeTo() const;

                    /**
                     * 设置<p>Voucher validity time end time</p>
                     * @param _startTimeTo <p>Voucher validity time end time</p>
                     * 
                     */
                    void SetStartTimeTo(const std::string& _startTimeTo);

                    /**
                     * 判断参数 StartTimeTo 是否已赋值
                     * @return StartTimeTo 是否已赋值
                     * 
                     */
                    bool StartTimeToHasBeenSet() const;

                    /**
                     * 获取<p>Voucher expiration time start time</p>
                     * @return EndTimeFrom <p>Voucher expiration time start time</p>
                     * 
                     */
                    std::string GetEndTimeFrom() const;

                    /**
                     * 设置<p>Voucher expiration time start time</p>
                     * @param _endTimeFrom <p>Voucher expiration time start time</p>
                     * 
                     */
                    void SetEndTimeFrom(const std::string& _endTimeFrom);

                    /**
                     * 判断参数 EndTimeFrom 是否已赋值
                     * @return EndTimeFrom 是否已赋值
                     * 
                     */
                    bool EndTimeFromHasBeenSet() const;

                    /**
                     * 获取<p>Voucher expiration time end time</p>
                     * @return EndTimeTo <p>Voucher expiration time end time</p>
                     * 
                     */
                    std::string GetEndTimeTo() const;

                    /**
                     * 设置<p>Voucher expiration time end time</p>
                     * @param _endTimeTo <p>Voucher expiration time end time</p>
                     * 
                     */
                    void SetEndTimeTo(const std::string& _endTimeTo);

                    /**
                     * 判断参数 EndTimeTo 是否已赋值
                     * @return EndTimeTo 是否已赋值
                     * 
                     */
                    bool EndTimeToHasBeenSet() const;

                    /**
                     * 获取<p>Voucher issuance start time</p>
                     * @return CreateTimeFrom <p>Voucher issuance start time</p>
                     * 
                     */
                    std::string GetCreateTimeFrom() const;

                    /**
                     * 设置<p>Voucher issuance start time</p>
                     * @param _createTimeFrom <p>Voucher issuance start time</p>
                     * 
                     */
                    void SetCreateTimeFrom(const std::string& _createTimeFrom);

                    /**
                     * 判断参数 CreateTimeFrom 是否已赋值
                     * @return CreateTimeFrom 是否已赋值
                     * 
                     */
                    bool CreateTimeFromHasBeenSet() const;

                    /**
                     * 获取<p>Voucher issuance time end time</p>
                     * @return CreateTimeTo <p>Voucher issuance time end time</p>
                     * 
                     */
                    std::string GetCreateTimeTo() const;

                    /**
                     * 设置<p>Voucher issuance time end time</p>
                     * @param _createTimeTo <p>Voucher issuance time end time</p>
                     * 
                     */
                    void SetCreateTimeTo(const std::string& _createTimeTo);

                    /**
                     * 判断参数 CreateTimeTo 是否已赋值
                     * @return CreateTimeTo 是否已赋值
                     * 
                     */
                    bool CreateTimeToHasBeenSet() const;

                    /**
                     * 获取<p>Language parameter</p><p>Default value: zh</p><p>Expect the product name to return in Chinese or other languages. Currently only support Chinese and English. Return in Chinese when "zh" is entered or left blank; return in English in other cases.</p>
                     * @return Lang <p>Language parameter</p><p>Default value: zh</p><p>Expect the product name to return in Chinese or other languages. Currently only support Chinese and English. Return in Chinese when "zh" is entered or left blank; return in English in other cases.</p>
                     * 
                     */
                    std::string GetLang() const;

                    /**
                     * 设置<p>Language parameter</p><p>Default value: zh</p><p>Expect the product name to return in Chinese or other languages. Currently only support Chinese and English. Return in Chinese when "zh" is entered or left blank; return in English in other cases.</p>
                     * @param _lang <p>Language parameter</p><p>Default value: zh</p><p>Expect the product name to return in Chinese or other languages. Currently only support Chinese and English. Return in Chinese when "zh" is entered or left blank; return in English in other cases.</p>
                     * 
                     */
                    void SetLang(const std::string& _lang);

                    /**
                     * 判断参数 Lang 是否已赋值
                     * @return Lang 是否已赋值
                     * 
                     */
                    bool LangHasBeenSet() const;

                private:

                    /**
                     * <p>How many data entries per page, 20 is selected by default, maximum not exceeding 1000</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Page number, starts from 1 by default</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Voucher status: pending use: unUsed, Used: used, delivered: delivered, discarded: cancel, expired: overdue</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Voucher id</p>
                     */
                    std::string m_voucherId;
                    bool m_voucherIdHasBeenSet;

                    /**
                     * <p>Voucher order id</p>
                     */
                    std::string m_codeId;
                    bool m_codeIdHasBeenSet;

                    /**
                     * <p>product code</p>
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * <p>Activity id</p>
                     */
                    std::string m_activityId;
                    bool m_activityIdHasBeenSet;

                    /**
                     * <p>Voucher name</p>
                     */
                    std::string m_voucherName;
                    bool m_voucherNameHasBeenSet;

                    /**
                     * <p>Start time of delivery. Example: 2021-01-01</p>
                     */
                    std::string m_timeFrom;
                    bool m_timeFromHasBeenSet;

                    /**
                     * <p>Delivery end time. Example: 2021-01-01</p>
                     */
                    std::string m_timeTo;
                    bool m_timeToHasBeenSet;

                    /**
                     * <p>Specified sorting field: BeginTime start time, EndTime expiry time, CreateTime creation time</p>
                     */
                    std::string m_sortField;
                    bool m_sortFieldHasBeenSet;

                    /**
                     * <p>Specify ascending/descending order: desc, asc</p>
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                    /**
                     * <p>Payment mode, postPay (postpaid)/prePay (prepaid)/riPay (reserved instance)/"" or "*" means all modes. If payMode is "" or "*", productCode and subProductCode must be empty.</p>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>Payment scenario PayMode=postPay: spotpay - spot instance, "settle account" - standard post-paid. PayMode=prePay: purchase - monthly subscription new purchase, renew - annual and monthly renewal (auto renewal), modify - monthly subscription configuration change. PayMode=riPay: oneOffFee - prepayment of reserved instance, hourlyFee - hourly charge for reserved instance, * - support all payment scenarios.</p>
                     */
                    std::string m_payScene;
                    bool m_paySceneHasBeenSet;

                    /**
                     * <p>Operator is used by default as user uin</p>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>The primary types of vouchers are has_price and no_price, which represent the cash voucher with a price and the cash voucher without a price respectively.</p>
                     */
                    std::string m_voucherMainType;
                    bool m_voucherMainTypeHasBeenSet;

                    /**
                     * <p>Voucher subtype: Discount is a discount voucher, and deduct is a deduction voucher.</p>
                     */
                    std::string m_voucherSubType;
                    bool m_voucherSubTypeHasBeenSet;

                    /**
                     * <p>Voucher validity start time</p>
                     */
                    std::string m_startTimeFrom;
                    bool m_startTimeFromHasBeenSet;

                    /**
                     * <p>Voucher validity time end time</p>
                     */
                    std::string m_startTimeTo;
                    bool m_startTimeToHasBeenSet;

                    /**
                     * <p>Voucher expiration time start time</p>
                     */
                    std::string m_endTimeFrom;
                    bool m_endTimeFromHasBeenSet;

                    /**
                     * <p>Voucher expiration time end time</p>
                     */
                    std::string m_endTimeTo;
                    bool m_endTimeToHasBeenSet;

                    /**
                     * <p>Voucher issuance start time</p>
                     */
                    std::string m_createTimeFrom;
                    bool m_createTimeFromHasBeenSet;

                    /**
                     * <p>Voucher issuance time end time</p>
                     */
                    std::string m_createTimeTo;
                    bool m_createTimeToHasBeenSet;

                    /**
                     * <p>Language parameter</p><p>Default value: zh</p><p>Expect the product name to return in Chinese or other languages. Currently only support Chinese and English. Return in Chinese when "zh" is entered or left blank; return in English in other cases.</p>
                     */
                    std::string m_lang;
                    bool m_langHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEVOUCHERINFOREQUEST_H_
