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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_TRAINTICKET_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_TRAINTICKET_H_

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
                * Train ticket
                */
                class TrainTicket : public AbstractModel
                {
                public:
                    TrainTicket();
                    ~TrainTicket() = default;
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
                     * 获取Passenger's name
                     * @return Name Passenger's name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Passenger's name
                     * @param _name Passenger's name
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
                     * 获取Seat class
                     * @return Seat Seat class
                     * 
                     */
                    std::string GetSeat() const;

                    /**
                     * 设置Seat class
                     * @param _seat Seat class
                     * 
                     */
                    void SetSeat(const std::string& _seat);

                    /**
                     * 判断参数 Seat 是否已赋值
                     * @return Seat 是否已赋值
                     * 
                     */
                    bool SeatHasBeenSet() const;

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
                     * 获取Serial number
                     * @return SerialNumber Serial number
                     * 
                     */
                    std::string GetSerialNumber() const;

                    /**
                     * 设置Serial number
                     * @param _serialNumber Serial number
                     * 
                     */
                    void SetSerialNumber(const std::string& _serialNumber);

                    /**
                     * 判断参数 SerialNumber 是否已赋值
                     * @return SerialNumber 是否已赋值
                     * 
                     */
                    bool SerialNumberHasBeenSet() const;

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

                    /**
                     * 获取Handling fee
                     * @return HandlingFee Handling fee
                     * 
                     */
                    std::string GetHandlingFee() const;

                    /**
                     * 设置Handling fee
                     * @param _handlingFee Handling fee
                     * 
                     */
                    void SetHandlingFee(const std::string& _handlingFee);

                    /**
                     * 判断参数 HandlingFee 是否已赋值
                     * @return HandlingFee 是否已赋值
                     * 
                     */
                    bool HandlingFeeHasBeenSet() const;

                    /**
                     * 获取Original ticket price
                     * @return OriginalFare Original ticket price
                     * 
                     */
                    std::string GetOriginalFare() const;

                    /**
                     * 设置Original ticket price
                     * @param _originalFare Original ticket price
                     * 
                     */
                    void SetOriginalFare(const std::string& _originalFare);

                    /**
                     * 判断参数 OriginalFare 是否已赋值
                     * @return OriginalFare 是否已赋值
                     * 
                     */
                    bool OriginalFareHasBeenSet() const;

                    /**
                     * 获取Total amount (in words)
                     * @return TotalCn Total amount (in words)
                     * 
                     */
                    std::string GetTotalCn() const;

                    /**
                     * 设置Total amount (in words)
                     * @param _totalCn Total amount (in words)
                     * 
                     */
                    void SetTotalCn(const std::string& _totalCn);

                    /**
                     * 判断参数 TotalCn 是否已赋值
                     * @return TotalCn 是否已赋值
                     * 
                     */
                    bool TotalCnHasBeenSet() const;

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
                     * 获取Ticket pickup address
                     * @return PickUpAddress Ticket pickup address
                     * 
                     */
                    std::string GetPickUpAddress() const;

                    /**
                     * 设置Ticket pickup address
                     * @param _pickUpAddress Ticket pickup address
                     * 
                     */
                    void SetPickUpAddress(const std::string& _pickUpAddress);

                    /**
                     * 判断参数 PickUpAddress 是否已赋值
                     * @return PickUpAddress 是否已赋值
                     * 
                     */
                    bool PickUpAddressHasBeenSet() const;

                    /**
                     * 获取Ticket change information
                     * @return TicketChange Ticket change information
                     * 
                     */
                    std::string GetTicketChange() const;

                    /**
                     * 设置Ticket change information
                     * @param _ticketChange Ticket change information
                     * 
                     */
                    void SetTicketChange(const std::string& _ticketChange);

                    /**
                     * 判断参数 TicketChange 是否已赋值
                     * @return TicketChange 是否已赋值
                     * 
                     */
                    bool TicketChangeHasBeenSet() const;

                    /**
                     * 获取Additional fare
                     * @return AdditionalFare Additional fare
                     * 
                     */
                    std::string GetAdditionalFare() const;

                    /**
                     * 设置Additional fare
                     * @param _additionalFare Additional fare
                     * 
                     */
                    void SetAdditionalFare(const std::string& _additionalFare);

                    /**
                     * 判断参数 AdditionalFare 是否已赋值
                     * @return AdditionalFare 是否已赋值
                     * 
                     */
                    bool AdditionalFareHasBeenSet() const;

                    /**
                     * 获取Receipt No.
                     * @return ReceiptNumber Receipt No.
                     * 
                     */
                    std::string GetReceiptNumber() const;

                    /**
                     * 设置Receipt No.
                     * @param _receiptNumber Receipt No.
                     * 
                     */
                    void SetReceiptNumber(const std::string& _receiptNumber);

                    /**
                     * 判断参数 ReceiptNumber 是否已赋值
                     * @return ReceiptNumber 是否已赋值
                     * 
                     */
                    bool ReceiptNumberHasBeenSet() const;

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
                     * 获取Whether it is for reimbursement only (0: No, 1: Yes)
                     * @return ReimburseOnlyMark Whether it is for reimbursement only (0: No, 1: Yes)
                     * 
                     */
                    int64_t GetReimburseOnlyMark() const;

                    /**
                     * 设置Whether it is for reimbursement only (0: No, 1: Yes)
                     * @param _reimburseOnlyMark Whether it is for reimbursement only (0: No, 1: Yes)
                     * 
                     */
                    void SetReimburseOnlyMark(const int64_t& _reimburseOnlyMark);

                    /**
                     * 判断参数 ReimburseOnlyMark 是否已赋值
                     * @return ReimburseOnlyMark 是否已赋值
                     * 
                     */
                    bool ReimburseOnlyMarkHasBeenSet() const;

                private:

                    /**
                     * Invoice title
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * Invoice number
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * Departure date
                     */
                    std::string m_dateGetOn;
                    bool m_dateGetOnHasBeenSet;

                    /**
                     * Departure time
                     */
                    std::string m_timeGetOn;
                    bool m_timeGetOnHasBeenSet;

                    /**
                     * Passenger's name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

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
                     * Seat class
                     */
                    std::string m_seat;
                    bool m_seatHasBeenSet;

                    /**
                     * Total amount
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Invoice type
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * Serial number
                     */
                    std::string m_serialNumber;
                    bool m_serialNumberHasBeenSet;

                    /**
                     * ID card number
                     */
                    std::string m_userID;
                    bool m_userIDHasBeenSet;

                    /**
                     * Check-in gate
                     */
                    std::string m_gateNumber;
                    bool m_gateNumberHasBeenSet;

                    /**
                     * Fleet number
                     */
                    std::string m_trainNumber;
                    bool m_trainNumberHasBeenSet;

                    /**
                     * Handling fee
                     */
                    std::string m_handlingFee;
                    bool m_handlingFeeHasBeenSet;

                    /**
                     * Original ticket price
                     */
                    std::string m_originalFare;
                    bool m_originalFareHasBeenSet;

                    /**
                     * Total amount (in words)
                     */
                    std::string m_totalCn;
                    bool m_totalCnHasBeenSet;

                    /**
                     * Seat No.
                     */
                    std::string m_seatNumber;
                    bool m_seatNumberHasBeenSet;

                    /**
                     * Ticket pickup address
                     */
                    std::string m_pickUpAddress;
                    bool m_pickUpAddressHasBeenSet;

                    /**
                     * Ticket change information
                     */
                    std::string m_ticketChange;
                    bool m_ticketChangeHasBeenSet;

                    /**
                     * Additional fare
                     */
                    std::string m_additionalFare;
                    bool m_additionalFareHasBeenSet;

                    /**
                     * Receipt No.
                     */
                    std::string m_receiptNumber;
                    bool m_receiptNumberHasBeenSet;

                    /**
                     * Whether there is a QR code (0: No, 1: Yes)
                     */
                    int64_t m_qRCodeMark;
                    bool m_qRCodeMarkHasBeenSet;

                    /**
                     * Whether it is for reimbursement only (0: No, 1: Yes)
                     */
                    int64_t m_reimburseOnlyMark;
                    bool m_reimburseOnlyMarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_TRAINTICKET_H_
