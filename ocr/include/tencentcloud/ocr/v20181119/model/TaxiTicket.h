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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_TAXITICKET_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_TAXITICKET_H_

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
                * Taxi receipt
                */
                class TaxiTicket : public AbstractModel
                {
                public:
                    TaxiTicket();
                    ~TaxiTicket() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Invoice title
                     * @return Title Invoice title
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置Invoice title
                     * @param _title Invoice title
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取Whether there is a QR code (0: No, 1: Yes)
                     * @return QRCodeMark Whether there is a QR code (0: No, 1: Yes)
                     * 
                     */
                    int64_t GetQRCodeMark() const;

                    /**
                     * 设置Whether there is a QR code (0: No, 1: Yes)
                     * @param _qRCodeMark Whether there is a QR code (0: No, 1: Yes)
                     * 
                     */
                    void SetQRCodeMark(const int64_t& _qRCodeMark);

                    /**
                     * 判断参数 QRCodeMark 是否已赋值
                     * @return QRCodeMark 是否已赋值
                     * 
                     */
                    bool QRCodeMarkHasBeenSet() const;

                    /**
                     * 获取Invoice code
                     * @return Code Invoice code
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置Invoice code
                     * @param _code Invoice code
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取Invoice number
                     * @return Number Invoice number
                     * 
                     */
                    std::string GetNumber() const;

                    /**
                     * 设置Invoice number
                     * @param _number Invoice number
                     * 
                     */
                    void SetNumber(const std::string& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取Date of issue
                     * @return Date Date of issue
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置Date of issue
                     * @param _date Date of issue
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取Start time
                     * @return TimeGetOn Start time
                     * 
                     */
                    std::string GetTimeGetOn() const;

                    /**
                     * 设置Start time
                     * @param _timeGetOn Start time
                     * 
                     */
                    void SetTimeGetOn(const std::string& _timeGetOn);

                    /**
                     * 判断参数 TimeGetOn 是否已赋值
                     * @return TimeGetOn 是否已赋值
                     * 
                     */
                    bool TimeGetOnHasBeenSet() const;

                    /**
                     * 获取End time
                     * @return TimeGetOff End time
                     * 
                     */
                    std::string GetTimeGetOff() const;

                    /**
                     * 设置End time
                     * @param _timeGetOff End time
                     * 
                     */
                    void SetTimeGetOff(const std::string& _timeGetOff);

                    /**
                     * 判断参数 TimeGetOff 是否已赋值
                     * @return TimeGetOff 是否已赋值
                     * 
                     */
                    bool TimeGetOffHasBeenSet() const;

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
                     * 获取Distance
                     * @return Mileage Distance
                     * 
                     */
                    std::string GetMileage() const;

                    /**
                     * 设置Distance
                     * @param _mileage Distance
                     * 
                     */
                    void SetMileage(const std::string& _mileage);

                    /**
                     * 判断参数 Mileage 是否已赋值
                     * @return Mileage 是否已赋值
                     * 
                     */
                    bool MileageHasBeenSet() const;

                    /**
                     * 获取Total amount
                     * @return Total Total amount
                     * 
                     */
                    std::string GetTotal() const;

                    /**
                     * 设置Total amount
                     * @param _total Total amount
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
                     * 获取Invoice place
                     * @return Place Invoice place
                     * 
                     */
                    std::string GetPlace() const;

                    /**
                     * 设置Invoice place
                     * @param _place Invoice place
                     * 
                     */
                    void SetPlace(const std::string& _place);

                    /**
                     * 判断参数 Place 是否已赋值
                     * @return Place 是否已赋值
                     * 
                     */
                    bool PlaceHasBeenSet() const;

                    /**
                     * 获取Province
                     * @return Province Province
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置Province
                     * @param _province Province
                     * 
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取City
                     * @return City City
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置City
                     * @param _city City
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取Invoice type
                     * @return Kind Invoice type
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置Invoice type
                     * @param _kind Invoice type
                     * 
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

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
                     * 获取Fuel surcharge
                     * @return FuelFee Fuel surcharge
                     * 
                     */
                    std::string GetFuelFee() const;

                    /**
                     * 设置Fuel surcharge
                     * @param _fuelFee Fuel surcharge
                     * 
                     */
                    void SetFuelFee(const std::string& _fuelFee);

                    /**
                     * 判断参数 FuelFee 是否已赋值
                     * @return FuelFee 是否已赋值
                     * 
                     */
                    bool FuelFeeHasBeenSet() const;

                    /**
                     * 获取Booking fee
                     * @return BookingCallFee Booking fee
                     * 
                     */
                    std::string GetBookingCallFee() const;

                    /**
                     * 设置Booking fee
                     * @param _bookingCallFee Booking fee
                     * 
                     */
                    void SetBookingCallFee(const std::string& _bookingCallFee);

                    /**
                     * 判断参数 BookingCallFee 是否已赋值
                     * @return BookingCallFee 是否已赋值
                     * 
                     */
                    bool BookingCallFeeHasBeenSet() const;

                    /**
                     * 获取Whether there is a company seal (0: No, 1: Yes)
                     * @return CompanySealMark Whether there is a company seal (0: No, 1: Yes)
                     * 
                     */
                    int64_t GetCompanySealMark() const;

                    /**
                     * 设置Whether there is a company seal (0: No, 1: Yes)
                     * @param _companySealMark Whether there is a company seal (0: No, 1: Yes)
                     * 
                     */
                    void SetCompanySealMark(const int64_t& _companySealMark);

                    /**
                     * 判断参数 CompanySealMark 是否已赋值
                     * @return CompanySealMark 是否已赋值
                     * 
                     */
                    bool CompanySealMarkHasBeenSet() const;

                private:

                    /**
                     * Invoice title
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * Whether there is a QR code (0: No, 1: Yes)
                     */
                    int64_t m_qRCodeMark;
                    bool m_qRCodeMarkHasBeenSet;

                    /**
                     * Invoice code
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * Invoice number
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * Date of issue
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * Start time
                     */
                    std::string m_timeGetOn;
                    bool m_timeGetOnHasBeenSet;

                    /**
                     * End time
                     */
                    std::string m_timeGetOff;
                    bool m_timeGetOffHasBeenSet;

                    /**
                     * Unit price
                     */
                    std::string m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * Distance
                     */
                    std::string m_mileage;
                    bool m_mileageHasBeenSet;

                    /**
                     * Total amount
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Invoice place
                     */
                    std::string m_place;
                    bool m_placeHasBeenSet;

                    /**
                     * Province
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * City
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * Invoice type
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * License plate number
                     */
                    std::string m_licensePlate;
                    bool m_licensePlateHasBeenSet;

                    /**
                     * Fuel surcharge
                     */
                    std::string m_fuelFee;
                    bool m_fuelFeeHasBeenSet;

                    /**
                     * Booking fee
                     */
                    std::string m_bookingCallFee;
                    bool m_bookingCallFeeHasBeenSet;

                    /**
                     * Whether there is a company seal (0: No, 1: Yes)
                     */
                    int64_t m_companySealMark;
                    bool m_companySealMarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_TAXITICKET_H_
