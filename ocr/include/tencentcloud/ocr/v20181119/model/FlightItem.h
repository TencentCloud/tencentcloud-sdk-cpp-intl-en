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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_FLIGHTITEM_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_FLIGHTITEM_H_

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
                * Flight items
                */
                class FlightItem : public AbstractModel
                {
                public:
                    FlightItem();
                    ~FlightItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Departure terminal
                     * @return TerminalGetOn Departure terminal
                     * 
                     */
                    std::string GetTerminalGetOn() const;

                    /**
                     * 设置Departure terminal
                     * @param _terminalGetOn Departure terminal
                     * 
                     */
                    void SetTerminalGetOn(const std::string& _terminalGetOn);

                    /**
                     * 判断参数 TerminalGetOn 是否已赋值
                     * @return TerminalGetOn 是否已赋值
                     * 
                     */
                    bool TerminalGetOnHasBeenSet() const;

                    /**
                     * 获取Arrival terminal
                     * @return TerminalGetOff Arrival terminal
                     * 
                     */
                    std::string GetTerminalGetOff() const;

                    /**
                     * 设置Arrival terminal
                     * @param _terminalGetOff Arrival terminal
                     * 
                     */
                    void SetTerminalGetOff(const std::string& _terminalGetOff);

                    /**
                     * 判断参数 TerminalGetOff 是否已赋值
                     * @return TerminalGetOff 是否已赋值
                     * 
                     */
                    bool TerminalGetOffHasBeenSet() const;

                    /**
                     * 获取Carrier
                     * @return Carrier Carrier
                     * 
                     */
                    std::string GetCarrier() const;

                    /**
                     * 设置Carrier
                     * @param _carrier Carrier
                     * 
                     */
                    void SetCarrier(const std::string& _carrier);

                    /**
                     * 判断参数 Carrier 是否已赋值
                     * @return Carrier 是否已赋值
                     * 
                     */
                    bool CarrierHasBeenSet() const;

                    /**
                     * 获取Flight number
                     * @return FlightNumber Flight number
                     * 
                     */
                    std::string GetFlightNumber() const;

                    /**
                     * 设置Flight number
                     * @param _flightNumber Flight number
                     * 
                     */
                    void SetFlightNumber(const std::string& _flightNumber);

                    /**
                     * 判断参数 FlightNumber 是否已赋值
                     * @return FlightNumber 是否已赋值
                     * 
                     */
                    bool FlightNumberHasBeenSet() const;

                    /**
                     * 获取Class
                     * @return Seat Class
                     * 
                     */
                    std::string GetSeat() const;

                    /**
                     * 设置Class
                     * @param _seat Class
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
                     * 获取Departure city
                     * @return StationGetOn Departure city
                     * 
                     */
                    std::string GetStationGetOn() const;

                    /**
                     * 设置Departure city
                     * @param _stationGetOn Departure city
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
                     * 获取Arrival city
                     * @return StationGetOff Arrival city
                     * 
                     */
                    std::string GetStationGetOff() const;

                    /**
                     * 设置Arrival city
                     * @param _stationGetOff Arrival city
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
                     * 获取Baggage allowance
                     * @return Allow Baggage allowance
                     * 
                     */
                    std::string GetAllow() const;

                    /**
                     * 设置Baggage allowance
                     * @param _allow Baggage allowance
                     * 
                     */
                    void SetAllow(const std::string& _allow);

                    /**
                     * 判断参数 Allow 是否已赋值
                     * @return Allow 是否已赋值
                     * 
                     */
                    bool AllowHasBeenSet() const;

                    /**
                     * 获取Fare category
                     * @return FareBasis Fare category
                     * 
                     */
                    std::string GetFareBasis() const;

                    /**
                     * 设置Fare category
                     * @param _fareBasis Fare category
                     * 
                     */
                    void SetFareBasis(const std::string& _fareBasis);

                    /**
                     * 判断参数 FareBasis 是否已赋值
                     * @return FareBasis 是否已赋值
                     * 
                     */
                    bool FareBasisHasBeenSet() const;

                private:

                    /**
                     * Departure terminal
                     */
                    std::string m_terminalGetOn;
                    bool m_terminalGetOnHasBeenSet;

                    /**
                     * Arrival terminal
                     */
                    std::string m_terminalGetOff;
                    bool m_terminalGetOffHasBeenSet;

                    /**
                     * Carrier
                     */
                    std::string m_carrier;
                    bool m_carrierHasBeenSet;

                    /**
                     * Flight number
                     */
                    std::string m_flightNumber;
                    bool m_flightNumberHasBeenSet;

                    /**
                     * Class
                     */
                    std::string m_seat;
                    bool m_seatHasBeenSet;

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
                     * Departure city
                     */
                    std::string m_stationGetOn;
                    bool m_stationGetOnHasBeenSet;

                    /**
                     * Arrival city
                     */
                    std::string m_stationGetOff;
                    bool m_stationGetOffHasBeenSet;

                    /**
                     * Baggage allowance
                     */
                    std::string m_allow;
                    bool m_allowHasBeenSet;

                    /**
                     * Fare category
                     */
                    std::string m_fareBasis;
                    bool m_fareBasisHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_FLIGHTITEM_H_
