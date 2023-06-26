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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_AIRTRANSPORT_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_AIRTRANSPORT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/FlightItem.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * Itinerary/Receipt of e-ticket for air transportation
                */
                class AirTransport : public AbstractModel
                {
                public:
                    AirTransport();
                    ~AirTransport() = default;
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
                     * 获取E-ticket No.
                     * @return Number E-ticket No.
                     * 
                     */
                    std::string GetNumber() const;

                    /**
                     * 设置E-ticket No.
                     * @param _number E-ticket No.
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
                     * 获取Check code
                     * @return CheckCode Check code
                     * 
                     */
                    std::string GetCheckCode() const;

                    /**
                     * 设置Check code
                     * @param _checkCode Check code
                     * 
                     */
                    void SetCheckCode(const std::string& _checkCode);

                    /**
                     * 判断参数 CheckCode 是否已赋值
                     * @return CheckCode 是否已赋值
                     * 
                     */
                    bool CheckCodeHasBeenSet() const;

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
                     * 获取Agent code
                     * @return AgentCode Agent code
                     * 
                     */
                    std::string GetAgentCode() const;

                    /**
                     * 设置Agent code
                     * @param _agentCode Agent code
                     * 
                     */
                    void SetAgentCode(const std::string& _agentCode);

                    /**
                     * 判断参数 AgentCode 是否已赋值
                     * @return AgentCode 是否已赋值
                     * 
                     */
                    bool AgentCodeHasBeenSet() const;

                    /**
                     * 获取First line of the agent code
                     * @return AgentCodeFirst First line of the agent code
                     * 
                     */
                    std::string GetAgentCodeFirst() const;

                    /**
                     * 设置First line of the agent code
                     * @param _agentCodeFirst First line of the agent code
                     * 
                     */
                    void SetAgentCodeFirst(const std::string& _agentCodeFirst);

                    /**
                     * 判断参数 AgentCodeFirst 是否已赋值
                     * @return AgentCodeFirst 是否已赋值
                     * 
                     */
                    bool AgentCodeFirstHasBeenSet() const;

                    /**
                     * 获取Second line of the agent code
                     * @return AgentCodeSecond Second line of the agent code
                     * 
                     */
                    std::string GetAgentCodeSecond() const;

                    /**
                     * 设置Second line of the agent code
                     * @param _agentCodeSecond Second line of the agent code
                     * 
                     */
                    void SetAgentCodeSecond(const std::string& _agentCodeSecond);

                    /**
                     * 判断参数 AgentCodeSecond 是否已赋值
                     * @return AgentCodeSecond 是否已赋值
                     * 
                     */
                    bool AgentCodeSecondHasBeenSet() const;

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
                     * 获取Issuer
                     * @return Issuer Issuer
                     * 
                     */
                    std::string GetIssuer() const;

                    /**
                     * 设置Issuer
                     * @param _issuer Issuer
                     * 
                     */
                    void SetIssuer(const std::string& _issuer);

                    /**
                     * 判断参数 Issuer 是否已赋值
                     * @return Issuer 是否已赋值
                     * 
                     */
                    bool IssuerHasBeenSet() const;

                    /**
                     * 获取Fare
                     * @return Fare Fare
                     * 
                     */
                    std::string GetFare() const;

                    /**
                     * 设置Fare
                     * @param _fare Fare
                     * 
                     */
                    void SetFare(const std::string& _fare);

                    /**
                     * 判断参数 Fare 是否已赋值
                     * @return Fare 是否已赋值
                     * 
                     */
                    bool FareHasBeenSet() const;

                    /**
                     * 获取Tax
                     * @return Tax Tax
                     * 
                     */
                    std::string GetTax() const;

                    /**
                     * 设置Tax
                     * @param _tax Tax
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
                     * 获取Fuel surcharge
                     * @return FuelSurcharge Fuel surcharge
                     * 
                     */
                    std::string GetFuelSurcharge() const;

                    /**
                     * 设置Fuel surcharge
                     * @param _fuelSurcharge Fuel surcharge
                     * 
                     */
                    void SetFuelSurcharge(const std::string& _fuelSurcharge);

                    /**
                     * 判断参数 FuelSurcharge 是否已赋值
                     * @return FuelSurcharge 是否已赋值
                     * 
                     */
                    bool FuelSurchargeHasBeenSet() const;

                    /**
                     * 获取Aviation Development Fund
                     * @return AirDevelopmentFund Aviation Development Fund
                     * 
                     */
                    std::string GetAirDevelopmentFund() const;

                    /**
                     * 设置Aviation Development Fund
                     * @param _airDevelopmentFund Aviation Development Fund
                     * 
                     */
                    void SetAirDevelopmentFund(const std::string& _airDevelopmentFund);

                    /**
                     * 判断参数 AirDevelopmentFund 是否已赋值
                     * @return AirDevelopmentFund 是否已赋值
                     * 
                     */
                    bool AirDevelopmentFundHasBeenSet() const;

                    /**
                     * 获取Insurance
                     * @return Insurance Insurance
                     * 
                     */
                    std::string GetInsurance() const;

                    /**
                     * 设置Insurance
                     * @param _insurance Insurance
                     * 
                     */
                    void SetInsurance(const std::string& _insurance);

                    /**
                     * 判断参数 Insurance 是否已赋值
                     * @return Insurance 是否已赋值
                     * 
                     */
                    bool InsuranceHasBeenSet() const;

                    /**
                     * 获取Total amount (in figures)
                     * @return Total Total amount (in figures)
                     * 
                     */
                    std::string GetTotal() const;

                    /**
                     * 设置Total amount (in figures)
                     * @param _total Total amount (in figures)
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
                     * 获取Domestic or international tag
                     * @return DomesticInternationalTag Domestic or international tag
                     * 
                     */
                    std::string GetDomesticInternationalTag() const;

                    /**
                     * 设置Domestic or international tag
                     * @param _domesticInternationalTag Domestic or international tag
                     * 
                     */
                    void SetDomesticInternationalTag(const std::string& _domesticInternationalTag);

                    /**
                     * 判断参数 DomesticInternationalTag 是否已赋值
                     * @return DomesticInternationalTag 是否已赋值
                     * 
                     */
                    bool DomesticInternationalTagHasBeenSet() const;

                    /**
                     * 获取Not-valid-before date
                     * @return DateStart Not-valid-before date
                     * 
                     */
                    std::string GetDateStart() const;

                    /**
                     * 设置Not-valid-before date
                     * @param _dateStart Not-valid-before date
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
                     * 获取Not-valid-after date
                     * @return DateEnd Not-valid-after date
                     * 
                     */
                    std::string GetDateEnd() const;

                    /**
                     * 设置Not-valid-after date
                     * @param _dateEnd Not-valid-after date
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
                     * 获取Endorsements/Restrictions
                     * @return Endorsement Endorsements/Restrictions
                     * 
                     */
                    std::string GetEndorsement() const;

                    /**
                     * 设置Endorsements/Restrictions
                     * @param _endorsement Endorsements/Restrictions
                     * 
                     */
                    void SetEndorsement(const std::string& _endorsement);

                    /**
                     * 判断参数 Endorsement 是否已赋值
                     * @return Endorsement 是否已赋值
                     * 
                     */
                    bool EndorsementHasBeenSet() const;

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
                     * 获取Items
                     * @return FlightItems Items
                     * 
                     */
                    std::vector<FlightItem> GetFlightItems() const;

                    /**
                     * 设置Items
                     * @param _flightItems Items
                     * 
                     */
                    void SetFlightItems(const std::vector<FlightItem>& _flightItems);

                    /**
                     * 判断参数 FlightItems 是否已赋值
                     * @return FlightItems 是否已赋值
                     * 
                     */
                    bool FlightItemsHasBeenSet() const;

                private:

                    /**
                     * Invoice title
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * E-ticket No.
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * Check code
                     */
                    std::string m_checkCode;
                    bool m_checkCodeHasBeenSet;

                    /**
                     * Serial number
                     */
                    std::string m_serialNumber;
                    bool m_serialNumberHasBeenSet;

                    /**
                     * Date of issue
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * Agent code
                     */
                    std::string m_agentCode;
                    bool m_agentCodeHasBeenSet;

                    /**
                     * First line of the agent code
                     */
                    std::string m_agentCodeFirst;
                    bool m_agentCodeFirstHasBeenSet;

                    /**
                     * Second line of the agent code
                     */
                    std::string m_agentCodeSecond;
                    bool m_agentCodeSecondHasBeenSet;

                    /**
                     * Name
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * ID card number
                     */
                    std::string m_userID;
                    bool m_userIDHasBeenSet;

                    /**
                     * Issuer
                     */
                    std::string m_issuer;
                    bool m_issuerHasBeenSet;

                    /**
                     * Fare
                     */
                    std::string m_fare;
                    bool m_fareHasBeenSet;

                    /**
                     * Tax
                     */
                    std::string m_tax;
                    bool m_taxHasBeenSet;

                    /**
                     * Fuel surcharge
                     */
                    std::string m_fuelSurcharge;
                    bool m_fuelSurchargeHasBeenSet;

                    /**
                     * Aviation Development Fund
                     */
                    std::string m_airDevelopmentFund;
                    bool m_airDevelopmentFundHasBeenSet;

                    /**
                     * Insurance
                     */
                    std::string m_insurance;
                    bool m_insuranceHasBeenSet;

                    /**
                     * Total amount (in figures)
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Invoice type
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * Domestic or international tag
                     */
                    std::string m_domesticInternationalTag;
                    bool m_domesticInternationalTagHasBeenSet;

                    /**
                     * Not-valid-before date
                     */
                    std::string m_dateStart;
                    bool m_dateStartHasBeenSet;

                    /**
                     * Not-valid-after date
                     */
                    std::string m_dateEnd;
                    bool m_dateEndHasBeenSet;

                    /**
                     * Endorsements/Restrictions
                     */
                    std::string m_endorsement;
                    bool m_endorsementHasBeenSet;

                    /**
                     * Whether there is a QR code (0: No, 1: Yes)
                     */
                    int64_t m_qRCodeMark;
                    bool m_qRCodeMarkHasBeenSet;

                    /**
                     * Items
                     */
                    std::vector<FlightItem> m_flightItems;
                    bool m_flightItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_AIRTRANSPORT_H_
