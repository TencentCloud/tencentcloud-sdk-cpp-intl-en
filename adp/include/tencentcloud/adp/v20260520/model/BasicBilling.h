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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_BASICBILLING_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_BASICBILLING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * BasicBilling
                */
                class BasicBilling : public AbstractModel
                {
                public:
                    BasicBilling();
                    ~BasicBilling() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>UNKNOW</td><td>0</td><td></td></tr><tr><td>TOKEN</td><td>1</td><td>By token</td></tr><tr><td>PAGE_COUNT</td><td>2</td><td>By page number</td></tr><tr><td>TIMES</td><td>3</td><td>By times</td></tr><tr><td>TIMES_THOUSAND</td><td>4</td><td>By thousand times</td></tr><tr><td>SECOND</td><td>5</td><td>By duration</td></tr><tr><td>CHARACTER</td><td>6</td><td>By number of characters</td></tr><tr><td>CHARACTER_THOUSAND</td><td>7</td><td>By thousand characters</td></tr><tr><td>SHEET</td><td>8</td><td>By sheet</td></tr><tr><td>NUMBER</td><td>9</td><td>By count</td></tr></tbody></table>
                     * @return BillingUnit <table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>UNKNOW</td><td>0</td><td></td></tr><tr><td>TOKEN</td><td>1</td><td>By token</td></tr><tr><td>PAGE_COUNT</td><td>2</td><td>By page number</td></tr><tr><td>TIMES</td><td>3</td><td>By times</td></tr><tr><td>TIMES_THOUSAND</td><td>4</td><td>By thousand times</td></tr><tr><td>SECOND</td><td>5</td><td>By duration</td></tr><tr><td>CHARACTER</td><td>6</td><td>By number of characters</td></tr><tr><td>CHARACTER_THOUSAND</td><td>7</td><td>By thousand characters</td></tr><tr><td>SHEET</td><td>8</td><td>By sheet</td></tr><tr><td>NUMBER</td><td>9</td><td>By count</td></tr></tbody></table>
                     * 
                     */
                    int64_t GetBillingUnit() const;

                    /**
                     * 设置<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>UNKNOW</td><td>0</td><td></td></tr><tr><td>TOKEN</td><td>1</td><td>By token</td></tr><tr><td>PAGE_COUNT</td><td>2</td><td>By page number</td></tr><tr><td>TIMES</td><td>3</td><td>By times</td></tr><tr><td>TIMES_THOUSAND</td><td>4</td><td>By thousand times</td></tr><tr><td>SECOND</td><td>5</td><td>By duration</td></tr><tr><td>CHARACTER</td><td>6</td><td>By number of characters</td></tr><tr><td>CHARACTER_THOUSAND</td><td>7</td><td>By thousand characters</td></tr><tr><td>SHEET</td><td>8</td><td>By sheet</td></tr><tr><td>NUMBER</td><td>9</td><td>By count</td></tr></tbody></table>
                     * @param _billingUnit <table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>UNKNOW</td><td>0</td><td></td></tr><tr><td>TOKEN</td><td>1</td><td>By token</td></tr><tr><td>PAGE_COUNT</td><td>2</td><td>By page number</td></tr><tr><td>TIMES</td><td>3</td><td>By times</td></tr><tr><td>TIMES_THOUSAND</td><td>4</td><td>By thousand times</td></tr><tr><td>SECOND</td><td>5</td><td>By duration</td></tr><tr><td>CHARACTER</td><td>6</td><td>By number of characters</td></tr><tr><td>CHARACTER_THOUSAND</td><td>7</td><td>By thousand characters</td></tr><tr><td>SHEET</td><td>8</td><td>By sheet</td></tr><tr><td>NUMBER</td><td>9</td><td>By count</td></tr></tbody></table>
                     * 
                     */
                    void SetBillingUnit(const int64_t& _billingUnit);

                    /**
                     * 判断参数 BillingUnit 是否已赋值
                     * @return BillingUnit 是否已赋值
                     * 
                     */
                    bool BillingUnitHasBeenSet() const;

                    /**
                     * 获取<p>Cash price</p><p>Unit: CNY</p>
                     * @return CashPrice <p>Cash price</p><p>Unit: CNY</p>
                     * 
                     */
                    double GetCashPrice() const;

                    /**
                     * 设置<p>Cash price</p><p>Unit: CNY</p>
                     * @param _cashPrice <p>Cash price</p><p>Unit: CNY</p>
                     * 
                     */
                    void SetCashPrice(const double& _cashPrice);

                    /**
                     * 判断参数 CashPrice 是否已赋值
                     * @return CashPrice 是否已赋值
                     * 
                     */
                    bool CashPriceHasBeenSet() const;

                    /**
                     * 获取<p>PU price</p><p>Unit: pu</p>
                     * @return PuPrice <p>PU price</p><p>Unit: pu</p>
                     * 
                     */
                    double GetPuPrice() const;

                    /**
                     * 设置<p>PU price</p><p>Unit: pu</p>
                     * @param _puPrice <p>PU price</p><p>Unit: pu</p>
                     * 
                     */
                    void SetPuPrice(const double& _puPrice);

                    /**
                     * 判断参数 PuPrice 是否已赋值
                     * @return PuPrice 是否已赋值
                     * 
                     */
                    bool PuPriceHasBeenSet() const;

                private:

                    /**
                     * <table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>UNKNOW</td><td>0</td><td></td></tr><tr><td>TOKEN</td><td>1</td><td>By token</td></tr><tr><td>PAGE_COUNT</td><td>2</td><td>By page number</td></tr><tr><td>TIMES</td><td>3</td><td>By times</td></tr><tr><td>TIMES_THOUSAND</td><td>4</td><td>By thousand times</td></tr><tr><td>SECOND</td><td>5</td><td>By duration</td></tr><tr><td>CHARACTER</td><td>6</td><td>By number of characters</td></tr><tr><td>CHARACTER_THOUSAND</td><td>7</td><td>By thousand characters</td></tr><tr><td>SHEET</td><td>8</td><td>By sheet</td></tr><tr><td>NUMBER</td><td>9</td><td>By count</td></tr></tbody></table>
                     */
                    int64_t m_billingUnit;
                    bool m_billingUnitHasBeenSet;

                    /**
                     * <p>Cash price</p><p>Unit: CNY</p>
                     */
                    double m_cashPrice;
                    bool m_cashPriceHasBeenSet;

                    /**
                     * <p>PU price</p><p>Unit: pu</p>
                     */
                    double m_puPrice;
                    bool m_puPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_BASICBILLING_H_
