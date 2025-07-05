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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEITEMINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEITEMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * Information about VAT invoice items
                */
                class VatInvoiceItemInfo : public AbstractModel
                {
                public:
                    VatInvoiceItemInfo();
                    ~VatInvoiceItemInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Item name
                     * @return Name Item name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Item name
                     * @param _name Item name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Specification
                     * @return Specification Specification
                     * 
                     */
                    std::string GetSpecification() const;

                    /**
                     * 设置Specification
                     * @param _specification Specification
                     * 
                     */
                    void SetSpecification(const std::string& _specification);

                    /**
                     * 判断参数 Specification 是否已赋值
                     * @return Specification 是否已赋值
                     * 
                     */
                    bool SpecificationHasBeenSet() const;

                    /**
                     * 获取Unit
                     * @return Unit Unit
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置Unit
                     * @param _unit Unit
                     * 
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取Quantity
                     * @return Quantity Quantity
                     * 
                     */
                    std::string GetQuantity() const;

                    /**
                     * 设置Quantity
                     * @param _quantity Quantity
                     * 
                     */
                    void SetQuantity(const std::string& _quantity);

                    /**
                     * 判断参数 Quantity 是否已赋值
                     * @return Quantity 是否已赋值
                     * 
                     */
                    bool QuantityHasBeenSet() const;

                    /**
                     * 获取Unit price
                     * @return Price Unit price
                     * 
                     */
                    std::string GetPrice() const;

                    /**
                     * 设置Unit price
                     * @param _price Unit price
                     * 
                     */
                    void SetPrice(const std::string& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取Amount
                     * @return Total Amount
                     * 
                     */
                    std::string GetTotal() const;

                    /**
                     * 设置Amount
                     * @param _total Amount
                     * 
                     */
                    void SetTotal(const std::string& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Tax rate
                     * @return TaxRate Tax rate
                     * 
                     */
                    std::string GetTaxRate() const;

                    /**
                     * 设置Tax rate
                     * @param _taxRate Tax rate
                     * 
                     */
                    void SetTaxRate(const std::string& _taxRate);

                    /**
                     * 判断参数 TaxRate 是否已赋值
                     * @return TaxRate 是否已赋值
                     * 
                     */
                    bool TaxRateHasBeenSet() const;

                    /**
                     * 获取Tax amount
                     * @return Tax Tax amount
                     * 
                     */
                    std::string GetTax() const;

                    /**
                     * 设置Tax amount
                     * @param _tax Tax amount
                     * 
                     */
                    void SetTax(const std::string& _tax);

                    /**
                     * 判断参数 Tax 是否已赋值
                     * @return Tax 是否已赋值
                     * 
                     */
                    bool TaxHasBeenSet() const;

                    /**
                     * 获取Start date
                     * @return DateStart Start date
                     * 
                     */
                    std::string GetDateStart() const;

                    /**
                     * 设置Start date
                     * @param _dateStart Start date
                     * 
                     */
                    void SetDateStart(const std::string& _dateStart);

                    /**
                     * 判断参数 DateStart 是否已赋值
                     * @return DateStart 是否已赋值
                     * 
                     */
                    bool DateStartHasBeenSet() const;

                    /**
                     * 获取End date
                     * @return DateEnd End date
                     * 
                     */
                    std::string GetDateEnd() const;

                    /**
                     * 设置End date
                     * @param _dateEnd End date
                     * 
                     */
                    void SetDateEnd(const std::string& _dateEnd);

                    /**
                     * 判断参数 DateEnd 是否已赋值
                     * @return DateEnd 是否已赋值
                     * 
                     */
                    bool DateEndHasBeenSet() const;

                    /**
                     * 获取License plate number
                     * @return LicensePlate License plate number
                     * 
                     */
                    std::string GetLicensePlate() const;

                    /**
                     * 设置License plate number
                     * @param _licensePlate License plate number
                     * 
                     */
                    void SetLicensePlate(const std::string& _licensePlate);

                    /**
                     * 判断参数 LicensePlate 是否已赋值
                     * @return LicensePlate 是否已赋值
                     * 
                     */
                    bool LicensePlateHasBeenSet() const;

                    /**
                     * 获取Vehicle type
                     * @return VehicleType Vehicle type
                     * 
                     */
                    std::string GetVehicleType() const;

                    /**
                     * 设置Vehicle type
                     * @param _vehicleType Vehicle type
                     * 
                     */
                    void SetVehicleType(const std::string& _vehicleType);

                    /**
                     * 判断参数 VehicleType 是否已赋值
                     * @return VehicleType 是否已赋值
                     * 
                     */
                    bool VehicleTypeHasBeenSet() const;

                private:

                    /**
                     * Item name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Specification
                     */
                    std::string m_specification;
                    bool m_specificationHasBeenSet;

                    /**
                     * Unit
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * Quantity
                     */
                    std::string m_quantity;
                    bool m_quantityHasBeenSet;

                    /**
                     * Unit price
                     */
                    std::string m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * Amount
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Tax rate
                     */
                    std::string m_taxRate;
                    bool m_taxRateHasBeenSet;

                    /**
                     * Tax amount
                     */
                    std::string m_tax;
                    bool m_taxHasBeenSet;

                    /**
                     * Start date
                     */
                    std::string m_dateStart;
                    bool m_dateStartHasBeenSet;

                    /**
                     * End date
                     */
                    std::string m_dateEnd;
                    bool m_dateEndHasBeenSet;

                    /**
                     * License plate number
                     */
                    std::string m_licensePlate;
                    bool m_licensePlateHasBeenSet;

                    /**
                     * Vehicle type
                     */
                    std::string m_vehicleType;
                    bool m_vehicleTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEITEMINFO_H_
