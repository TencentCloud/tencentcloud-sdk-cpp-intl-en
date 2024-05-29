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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEPLANREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEPLANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/PrepaidPlanParam.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreatePlan request structure.
                */
                class CreatePlanRequest : public AbstractModel
                {
                public:
                    CreatePlanRequest();
                    ~CreatePlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Type of plan subscribed to. Valid values:<li>personal: Personal Edition Plan, prepaid;</li><li>basic: Basic Edition Plan, prepaid;</li><li>standard: Standard Edition Plan, prepaid;</li><li>enterprise: Enterprise Edition Plan, post-paid. </li>When subscribing to a prepaid plan, ensure there is sufficient balance in the account, as insufficient balance will result in a pending payment order.
For an overview of billing, refer to [Billing Overview](https://intl.cloud.tencent.com/document/product/1552/94156?from_cn_redirect=1).
For differences between plans, refer to [ Comparison of EdgeOne Plan](https://intl.cloud.tencent.com/document/product/1552/94165?from_cn_redirect=1).
                     * @return PlanType Type of plan subscribed to. Valid values:<li>personal: Personal Edition Plan, prepaid;</li><li>basic: Basic Edition Plan, prepaid;</li><li>standard: Standard Edition Plan, prepaid;</li><li>enterprise: Enterprise Edition Plan, post-paid. </li>When subscribing to a prepaid plan, ensure there is sufficient balance in the account, as insufficient balance will result in a pending payment order.
For an overview of billing, refer to [Billing Overview](https://intl.cloud.tencent.com/document/product/1552/94156?from_cn_redirect=1).
For differences between plans, refer to [ Comparison of EdgeOne Plan](https://intl.cloud.tencent.com/document/product/1552/94165?from_cn_redirect=1).
                     * 
                     */
                    std::string GetPlanType() const;

                    /**
                     * 设置Type of plan subscribed to. Valid values:<li>personal: Personal Edition Plan, prepaid;</li><li>basic: Basic Edition Plan, prepaid;</li><li>standard: Standard Edition Plan, prepaid;</li><li>enterprise: Enterprise Edition Plan, post-paid. </li>When subscribing to a prepaid plan, ensure there is sufficient balance in the account, as insufficient balance will result in a pending payment order.
For an overview of billing, refer to [Billing Overview](https://intl.cloud.tencent.com/document/product/1552/94156?from_cn_redirect=1).
For differences between plans, refer to [ Comparison of EdgeOne Plan](https://intl.cloud.tencent.com/document/product/1552/94165?from_cn_redirect=1).
                     * @param _planType Type of plan subscribed to. Valid values:<li>personal: Personal Edition Plan, prepaid;</li><li>basic: Basic Edition Plan, prepaid;</li><li>standard: Standard Edition Plan, prepaid;</li><li>enterprise: Enterprise Edition Plan, post-paid. </li>When subscribing to a prepaid plan, ensure there is sufficient balance in the account, as insufficient balance will result in a pending payment order.
For an overview of billing, refer to [Billing Overview](https://intl.cloud.tencent.com/document/product/1552/94156?from_cn_redirect=1).
For differences between plans, refer to [ Comparison of EdgeOne Plan](https://intl.cloud.tencent.com/document/product/1552/94165?from_cn_redirect=1).
                     * 
                     */
                    void SetPlanType(const std::string& _planType);

                    /**
                     * 判断参数 PlanType 是否已赋值
                     * @return PlanType 是否已赋值
                     * 
                     */
                    bool PlanTypeHasBeenSet() const;

                    /**
                     * 获取Whether to automatically use a voucher. Valid values: <li>true: Yes;</li><li>false: No. </li> This parameter is valid only when PlanType is personal, basic, or standard.
If this field is not specified, the default value 'false' will be used.
                     * @return AutoUseVoucher Whether to automatically use a voucher. Valid values: <li>true: Yes;</li><li>false: No. </li> This parameter is valid only when PlanType is personal, basic, or standard.
If this field is not specified, the default value 'false' will be used.
                     * 
                     */
                    std::string GetAutoUseVoucher() const;

                    /**
                     * 设置Whether to automatically use a voucher. Valid values: <li>true: Yes;</li><li>false: No. </li> This parameter is valid only when PlanType is personal, basic, or standard.
If this field is not specified, the default value 'false' will be used.
                     * @param _autoUseVoucher Whether to automatically use a voucher. Valid values: <li>true: Yes;</li><li>false: No. </li> This parameter is valid only when PlanType is personal, basic, or standard.
If this field is not specified, the default value 'false' will be used.
                     * 
                     */
                    void SetAutoUseVoucher(const std::string& _autoUseVoucher);

                    /**
                     * 判断参数 AutoUseVoucher 是否已赋值
                     * @return AutoUseVoucher 是否已赋值
                     * 
                     */
                    bool AutoUseVoucherHasBeenSet() const;

                    /**
                     * 获取Parameters for subscribing to prepaid plans. When PlanType is personal, basic, or standard, this parameter can be optionally set to specify the subscription duration and whether to enable auto-renewal for the plan.
If this field is not specified, the default plan duration is 1 month, with auto-renewal disabled.
                     * @return PrepaidPlanParam Parameters for subscribing to prepaid plans. When PlanType is personal, basic, or standard, this parameter can be optionally set to specify the subscription duration and whether to enable auto-renewal for the plan.
If this field is not specified, the default plan duration is 1 month, with auto-renewal disabled.
                     * 
                     */
                    PrepaidPlanParam GetPrepaidPlanParam() const;

                    /**
                     * 设置Parameters for subscribing to prepaid plans. When PlanType is personal, basic, or standard, this parameter can be optionally set to specify the subscription duration and whether to enable auto-renewal for the plan.
If this field is not specified, the default plan duration is 1 month, with auto-renewal disabled.
                     * @param _prepaidPlanParam Parameters for subscribing to prepaid plans. When PlanType is personal, basic, or standard, this parameter can be optionally set to specify the subscription duration and whether to enable auto-renewal for the plan.
If this field is not specified, the default plan duration is 1 month, with auto-renewal disabled.
                     * 
                     */
                    void SetPrepaidPlanParam(const PrepaidPlanParam& _prepaidPlanParam);

                    /**
                     * 判断参数 PrepaidPlanParam 是否已赋值
                     * @return PrepaidPlanParam 是否已赋值
                     * 
                     */
                    bool PrepaidPlanParamHasBeenSet() const;

                private:

                    /**
                     * Type of plan subscribed to. Valid values:<li>personal: Personal Edition Plan, prepaid;</li><li>basic: Basic Edition Plan, prepaid;</li><li>standard: Standard Edition Plan, prepaid;</li><li>enterprise: Enterprise Edition Plan, post-paid. </li>When subscribing to a prepaid plan, ensure there is sufficient balance in the account, as insufficient balance will result in a pending payment order.
For an overview of billing, refer to [Billing Overview](https://intl.cloud.tencent.com/document/product/1552/94156?from_cn_redirect=1).
For differences between plans, refer to [ Comparison of EdgeOne Plan](https://intl.cloud.tencent.com/document/product/1552/94165?from_cn_redirect=1).
                     */
                    std::string m_planType;
                    bool m_planTypeHasBeenSet;

                    /**
                     * Whether to automatically use a voucher. Valid values: <li>true: Yes;</li><li>false: No. </li> This parameter is valid only when PlanType is personal, basic, or standard.
If this field is not specified, the default value 'false' will be used.
                     */
                    std::string m_autoUseVoucher;
                    bool m_autoUseVoucherHasBeenSet;

                    /**
                     * Parameters for subscribing to prepaid plans. When PlanType is personal, basic, or standard, this parameter can be optionally set to specify the subscription duration and whether to enable auto-renewal for the plan.
If this field is not specified, the default plan duration is 1 month, with auto-renewal disabled.
                     */
                    PrepaidPlanParam m_prepaidPlanParam;
                    bool m_prepaidPlanParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEPLANREQUEST_H_
