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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VATELECTRONICITEMINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VATELECTRONICITEMINFO_H_

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
                * Detailed items of an electronic invoice
                */
                class VatElectronicItemInfo : public AbstractModel
                {
                public:
                    VatElectronicItemInfo();
                    ~VatElectronicItemInfo() = default;
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

                    /**
                     * 获取Vehicle No.
                     * @return VehicleBrand Vehicle No.
                     * 
                     */
                    std::string GetVehicleBrand() const;

                    /**
                     * 设置Vehicle No.
                     * @param _vehicleBrand Vehicle No.
                     * 
                     */
                    void SetVehicleBrand(const std::string& _vehicleBrand);

                    /**
                     * 判断参数 VehicleBrand 是否已赋值
                     * @return VehicleBrand 是否已赋值
                     * 
                     */
                    bool VehicleBrandHasBeenSet() const;

                    /**
                     * 获取Departure place
                     * @return DeparturePlace Departure place
                     * 
                     */
                    std::string GetDeparturePlace() const;

                    /**
                     * 设置Departure place
                     * @param _departurePlace Departure place
                     * 
                     */
                    void SetDeparturePlace(const std::string& _departurePlace);

                    /**
                     * 判断参数 DeparturePlace 是否已赋值
                     * @return DeparturePlace 是否已赋值
                     * 
                     */
                    bool DeparturePlaceHasBeenSet() const;

                    /**
                     * 获取Destination
                     * @return ArrivalPlace Destination
                     * 
                     */
                    std::string GetArrivalPlace() const;

                    /**
                     * 设置Destination
                     * @param _arrivalPlace Destination
                     * 
                     */
                    void SetArrivalPlace(const std::string& _arrivalPlace);

                    /**
                     * 判断参数 ArrivalPlace 是否已赋值
                     * @return ArrivalPlace 是否已赋值
                     * 
                     */
                    bool ArrivalPlaceHasBeenSet() const;

                    /**
                     * 获取Name of the transported goods. It is returned only for a goods transport service invoice.
                     * @return TransportItemsName Name of the transported goods. It is returned only for a goods transport service invoice.
                     * 
                     */
                    std::string GetTransportItemsName() const;

                    /**
                     * 设置Name of the transported goods. It is returned only for a goods transport service invoice.
                     * @param _transportItemsName Name of the transported goods. It is returned only for a goods transport service invoice.
                     * 
                     */
                    void SetTransportItemsName(const std::string& _transportItemsName);

                    /**
                     * 判断参数 TransportItemsName 是否已赋值
                     * @return TransportItemsName 是否已赋值
                     * 
                     */
                    bool TransportItemsNameHasBeenSet() const;

                    /**
                     * 获取Location of the construction service. It is returned only for a construction invoice.
                     * @return PlaceOfBuildingService Location of the construction service. It is returned only for a construction invoice.
                     * 
                     */
                    std::string GetPlaceOfBuildingService() const;

                    /**
                     * 设置Location of the construction service. It is returned only for a construction invoice.
                     * @param _placeOfBuildingService Location of the construction service. It is returned only for a construction invoice.
                     * 
                     */
                    void SetPlaceOfBuildingService(const std::string& _placeOfBuildingService);

                    /**
                     * 判断参数 PlaceOfBuildingService 是否已赋值
                     * @return PlaceOfBuildingService 是否已赋值
                     * 
                     */
                    bool PlaceOfBuildingServiceHasBeenSet() const;

                    /**
                     * 获取Name of the construction project. It is returned only for a construction invoice.
                     * @return BuildingName Name of the construction project. It is returned only for a construction invoice.
                     * 
                     */
                    std::string GetBuildingName() const;

                    /**
                     * 设置Name of the construction project. It is returned only for a construction invoice.
                     * @param _buildingName Name of the construction project. It is returned only for a construction invoice.
                     * 
                     */
                    void SetBuildingName(const std::string& _buildingName);

                    /**
                     * 判断参数 BuildingName 是否已赋值
                     * @return BuildingName 是否已赋值
                     * 
                     */
                    bool BuildingNameHasBeenSet() const;

                    /**
                     * 获取Property or real estate ownership certificate No. It is returned only for a real estate operation and leasing service invoice.
                     * @return EstateNumber Property or real estate ownership certificate No. It is returned only for a real estate operation and leasing service invoice.
                     * 
                     */
                    std::string GetEstateNumber() const;

                    /**
                     * 设置Property or real estate ownership certificate No. It is returned only for a real estate operation and leasing service invoice.
                     * @param _estateNumber Property or real estate ownership certificate No. It is returned only for a real estate operation and leasing service invoice.
                     * 
                     */
                    void SetEstateNumber(const std::string& _estateNumber);

                    /**
                     * 判断参数 EstateNumber 是否已赋值
                     * @return EstateNumber 是否已赋值
                     * 
                     */
                    bool EstateNumberHasBeenSet() const;

                    /**
                     * 获取Unit of area. It is returned only for a real estate operation and leasing service invoice.
                     * @return AreaUnit Unit of area. It is returned only for a real estate operation and leasing service invoice.
                     * 
                     */
                    std::string GetAreaUnit() const;

                    /**
                     * 设置Unit of area. It is returned only for a real estate operation and leasing service invoice.
                     * @param _areaUnit Unit of area. It is returned only for a real estate operation and leasing service invoice.
                     * 
                     */
                    void SetAreaUnit(const std::string& _areaUnit);

                    /**
                     * 判断参数 AreaUnit 是否已赋值
                     * @return AreaUnit 是否已赋值
                     * 
                     */
                    bool AreaUnitHasBeenSet() const;

                private:

                    /**
                     * Item name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Quantity
                     */
                    std::string m_quantity;
                    bool m_quantityHasBeenSet;

                    /**
                     * Specification
                     */
                    std::string m_specification;
                    bool m_specificationHasBeenSet;

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
                     * Unit
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * Vehicle type
                     */
                    std::string m_vehicleType;
                    bool m_vehicleTypeHasBeenSet;

                    /**
                     * Vehicle No.
                     */
                    std::string m_vehicleBrand;
                    bool m_vehicleBrandHasBeenSet;

                    /**
                     * Departure place
                     */
                    std::string m_departurePlace;
                    bool m_departurePlaceHasBeenSet;

                    /**
                     * Destination
                     */
                    std::string m_arrivalPlace;
                    bool m_arrivalPlaceHasBeenSet;

                    /**
                     * Name of the transported goods. It is returned only for a goods transport service invoice.
                     */
                    std::string m_transportItemsName;
                    bool m_transportItemsNameHasBeenSet;

                    /**
                     * Location of the construction service. It is returned only for a construction invoice.
                     */
                    std::string m_placeOfBuildingService;
                    bool m_placeOfBuildingServiceHasBeenSet;

                    /**
                     * Name of the construction project. It is returned only for a construction invoice.
                     */
                    std::string m_buildingName;
                    bool m_buildingNameHasBeenSet;

                    /**
                     * Property or real estate ownership certificate No. It is returned only for a real estate operation and leasing service invoice.
                     */
                    std::string m_estateNumber;
                    bool m_estateNumberHasBeenSet;

                    /**
                     * Unit of area. It is returned only for a real estate operation and leasing service invoice.
                     */
                    std::string m_areaUnit;
                    bool m_areaUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VATELECTRONICITEMINFO_H_
