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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_BUSINVOICE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_BUSINVOICE_H_

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
                * Bus ticket
                */
                class BusInvoice : public AbstractModel
                {
                public:
                    BusInvoice();
                    ~BusInvoice() = default;
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
                     * 获取Departure time
                     * @return TimeGetOn Departure time
                     * 
                     */
                    std::string GetTimeGetOn() const;

                    /**
                     * 设置Departure time
                     * @param _timeGetOn Departure time
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
                     * 获取Departure date
                     * @return DateGetOn Departure date
                     * 
                     */
                    std::string GetDateGetOn() const;

                    /**
                     * 设置Departure date
                     * @param _dateGetOn Departure date
                     * 
                     */
                    void SetDateGetOn(const std::string& _dateGetOn);

                    /**
                     * 判断参数 DateGetOn 是否已赋值
                     * @return DateGetOn 是否已赋值
                     * 
                     */
                    bool DateGetOnHasBeenSet() const;

                    /**
                     * 获取Departure station
                     * @return StationGetOn Departure station
                     * 
                     */
                    std::string GetStationGetOn() const;

                    /**
                     * 设置Departure station
                     * @param _stationGetOn Departure station
                     * 
                     */
                    void SetStationGetOn(const std::string& _stationGetOn);

                    /**
                     * 判断参数 StationGetOn 是否已赋值
                     * @return StationGetOn 是否已赋值
                     * 
                     */
                    bool StationGetOnHasBeenSet() const;

                    /**
                     * 获取Destination
                     * @return StationGetOff Destination
                     * 
                     */
                    std::string GetStationGetOff() const;

                    /**
                     * 设置Destination
                     * @param _stationGetOff Destination
                     * 
                     */
                    void SetStationGetOff(const std::string& _stationGetOff);

                    /**
                     * 判断参数 StationGetOff 是否已赋值
                     * @return StationGetOff 是否已赋值
                     * 
                     */
                    bool StationGetOffHasBeenSet() const;

                    /**
                     * 获取Fare
                     * @return Total Fare
                     * 
                     */
                    std::string GetTotal() const;

                    /**
                     * 设置Fare
                     * @param _total Fare
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
                     * 获取Name
                     * @return UserName Name
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Name
                     * @param _userName Name
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Consumption type
                     * @return Kind Consumption type
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置Consumption type
                     * @param _kind Consumption type
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
                     * 获取ID card number
                     * @return UserID ID card number
                     * 
                     */
                    std::string GetUserID() const;

                    /**
                     * 设置ID card number
                     * @param _userID ID card number
                     * 
                     */
                    void SetUserID(const std::string& _userID);

                    /**
                     * 判断参数 UserID 是否已赋值
                     * @return UserID 是否已赋值
                     * 
                     */
                    bool UserIDHasBeenSet() const;

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
                     * 获取Departure place
                     * @return PlaceGetOn Departure place
                     * 
                     */
                    std::string GetPlaceGetOn() const;

                    /**
                     * 设置Departure place
                     * @param _placeGetOn Departure place
                     * 
                     */
                    void SetPlaceGetOn(const std::string& _placeGetOn);

                    /**
                     * 判断参数 PlaceGetOn 是否已赋值
                     * @return PlaceGetOn 是否已赋值
                     * 
                     */
                    bool PlaceGetOnHasBeenSet() const;

                    /**
                     * 获取Check-in gate
                     * @return GateNumber Check-in gate
                     * 
                     */
                    std::string GetGateNumber() const;

                    /**
                     * 设置Check-in gate
                     * @param _gateNumber Check-in gate
                     * 
                     */
                    void SetGateNumber(const std::string& _gateNumber);

                    /**
                     * 判断参数 GateNumber 是否已赋值
                     * @return GateNumber 是否已赋值
                     * 
                     */
                    bool GateNumberHasBeenSet() const;

                    /**
                     * 获取Fare category
                     * @return TicketType Fare category
                     * 
                     */
                    std::string GetTicketType() const;

                    /**
                     * 设置Fare category
                     * @param _ticketType Fare category
                     * 
                     */
                    void SetTicketType(const std::string& _ticketType);

                    /**
                     * 判断参数 TicketType 是否已赋值
                     * @return TicketType 是否已赋值
                     * 
                     */
                    bool TicketTypeHasBeenSet() const;

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
                     * 获取Seat No.
                     * @return SeatNumber Seat No.
                     * 
                     */
                    std::string GetSeatNumber() const;

                    /**
                     * 设置Seat No.
                     * @param _seatNumber Seat No.
                     * 
                     */
                    void SetSeatNumber(const std::string& _seatNumber);

                    /**
                     * 判断参数 SeatNumber 是否已赋值
                     * @return SeatNumber 是否已赋值
                     * 
                     */
                    bool SeatNumberHasBeenSet() const;

                    /**
                     * 获取Fleet number
                     * @return TrainNumber Fleet number
                     * 
                     */
                    std::string GetTrainNumber() const;

                    /**
                     * 设置Fleet number
                     * @param _trainNumber Fleet number
                     * 
                     */
                    void SetTrainNumber(const std::string& _trainNumber);

                    /**
                     * 判断参数 TrainNumber 是否已赋值
                     * @return TrainNumber 是否已赋值
                     * 
                     */
                    bool TrainNumberHasBeenSet() const;

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
                     * Invoice number
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * Invoice code
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * Date of issue
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * Departure time
                     */
                    std::string m_timeGetOn;
                    bool m_timeGetOnHasBeenSet;

                    /**
                     * Departure date
                     */
                    std::string m_dateGetOn;
                    bool m_dateGetOnHasBeenSet;

                    /**
                     * Departure station
                     */
                    std::string m_stationGetOn;
                    bool m_stationGetOnHasBeenSet;

                    /**
                     * Destination
                     */
                    std::string m_stationGetOff;
                    bool m_stationGetOffHasBeenSet;

                    /**
                     * Fare
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Name
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Consumption type
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * ID card number
                     */
                    std::string m_userID;
                    bool m_userIDHasBeenSet;

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
                     * Departure place
                     */
                    std::string m_placeGetOn;
                    bool m_placeGetOnHasBeenSet;

                    /**
                     * Check-in gate
                     */
                    std::string m_gateNumber;
                    bool m_gateNumberHasBeenSet;

                    /**
                     * Fare category
                     */
                    std::string m_ticketType;
                    bool m_ticketTypeHasBeenSet;

                    /**
                     * Vehicle type
                     */
                    std::string m_vehicleType;
                    bool m_vehicleTypeHasBeenSet;

                    /**
                     * Seat No.
                     */
                    std::string m_seatNumber;
                    bool m_seatNumberHasBeenSet;

                    /**
                     * Fleet number
                     */
                    std::string m_trainNumber;
                    bool m_trainNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_BUSINVOICE_H_
