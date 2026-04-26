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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_USAGEDETAILS_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_USAGEDETAILS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * The product purchased.
                */
                class UsageDetails : public AbstractModel
                {
                public:
                    UsageDetails();
                    ~UsageDetails() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Product name
                     * @return ProductName Product name
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置Product name
                     * @param _productName Product name
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取product details
                     * @return SubProductName product details
                     * 
                     */
                    std::string GetSubProductName() const;

                    /**
                     * 设置product details
                     * @param _subProductName product details
                     * 
                     */
                    void SetSubProductName(const std::string& _subProductName);

                    /**
                     * 判断参数 SubProductName 是否已赋值
                     * @return SubProductName 是否已赋值
                     * 
                     */
                    bool SubProductNameHasBeenSet() const;

                    /**
                     * 获取Product code	
                     * @return ProductCode Product code	
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置Product code	
                     * @param _productCode Product code	
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
                     * 获取Sub-product code	
                     * @return SubProductCode Sub-product code	
                     * 
                     */
                    std::string GetSubProductCode() const;

                    /**
                     * 设置Sub-product code	
                     * @param _subProductCode Sub-product code	
                     * 
                     */
                    void SetSubProductCode(const std::string& _subProductCode);

                    /**
                     * 判断参数 SubProductCode 是否已赋值
                     * @return SubProductCode 是否已赋值
                     * 
                     */
                    bool SubProductCodeHasBeenSet() const;

                    /**
                     * 获取Billing item code.	
                     * @return BillingItemCode Billing item code.	
                     * 
                     */
                    std::string GetBillingItemCode() const;

                    /**
                     * 设置Billing item code.	
                     * @param _billingItemCode Billing item code.	
                     * 
                     */
                    void SetBillingItemCode(const std::string& _billingItemCode);

                    /**
                     * 判断参数 BillingItemCode 是否已赋值
                     * @return BillingItemCode 是否已赋值
                     * 
                     */
                    bool BillingItemCodeHasBeenSet() const;

                    /**
                     * 获取Billing sub-item code.	
                     * @return SubBillingItemCode Billing sub-item code.	
                     * 
                     */
                    std::string GetSubBillingItemCode() const;

                    /**
                     * 设置Billing sub-item code.	
                     * @param _subBillingItemCode Billing sub-item code.	
                     * 
                     */
                    void SetSubBillingItemCode(const std::string& _subBillingItemCode);

                    /**
                     * 判断参数 SubBillingItemCode 是否已赋值
                     * @return SubBillingItemCode 是否已赋值
                     * 
                     */
                    bool SubBillingItemCodeHasBeenSet() const;

                    /**
                     * 获取Product English Name	
                     * @return ProductEnName Product English Name	
                     * 
                     */
                    std::string GetProductEnName() const;

                    /**
                     * 设置Product English Name	
                     * @param _productEnName Product English Name	
                     * 
                     */
                    void SetProductEnName(const std::string& _productEnName);

                    /**
                     * 判断参数 ProductEnName 是否已赋值
                     * @return ProductEnName 是否已赋值
                     * 
                     */
                    bool ProductEnNameHasBeenSet() const;

                    /**
                     * 获取English name of the sub-product.	
                     * @return SubProductEnName English name of the sub-product.	
                     * 
                     */
                    std::string GetSubProductEnName() const;

                    /**
                     * 设置English name of the sub-product.	
                     * @param _subProductEnName English name of the sub-product.	
                     * 
                     */
                    void SetSubProductEnName(const std::string& _subProductEnName);

                    /**
                     * 判断参数 SubProductEnName 是否已赋值
                     * @return SubProductEnName 是否已赋值
                     * 
                     */
                    bool SubProductEnNameHasBeenSet() const;

                    /**
                     * 获取billing cycle	
                     * @return CalcUnit billing cycle	
                     * 
                     */
                    std::string GetCalcUnit() const;

                    /**
                     * 设置billing cycle	
                     * @param _calcUnit billing cycle	
                     * 
                     */
                    void SetCalcUnit(const std::string& _calcUnit);

                    /**
                     * 判断参数 CalcUnit 是否已赋值
                     * @return CalcUnit 是否已赋值
                     * 
                     */
                    bool CalcUnitHasBeenSet() const;

                    /**
                     * 获取payMode is prepay and payScene is common in the current situation
                     * @return Action payMode is prepay and payScene is common in the current situation
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置payMode is prepay and payScene is common in the current situation
                     * @param _action payMode is prepay and payScene is common in the current situation
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                private:

                    /**
                     * Product name
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * product details
                     */
                    std::string m_subProductName;
                    bool m_subProductNameHasBeenSet;

                    /**
                     * Product code	
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * Sub-product code	
                     */
                    std::string m_subProductCode;
                    bool m_subProductCodeHasBeenSet;

                    /**
                     * Billing item code.	
                     */
                    std::string m_billingItemCode;
                    bool m_billingItemCodeHasBeenSet;

                    /**
                     * Billing sub-item code.	
                     */
                    std::string m_subBillingItemCode;
                    bool m_subBillingItemCodeHasBeenSet;

                    /**
                     * Product English Name	
                     */
                    std::string m_productEnName;
                    bool m_productEnNameHasBeenSet;

                    /**
                     * English name of the sub-product.	
                     */
                    std::string m_subProductEnName;
                    bool m_subProductEnNameHasBeenSet;

                    /**
                     * billing cycle	
                     */
                    std::string m_calcUnit;
                    bool m_calcUnitHasBeenSet;

                    /**
                     * payMode is prepay and payScene is common in the current situation
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_USAGEDETAILS_H_
