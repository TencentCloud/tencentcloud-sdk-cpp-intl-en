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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_MOTORVEHICLESALEINVOICE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_MOTORVEHICLESALEINVOICE_H_

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
                * Motor vehicle sales invoice
                */
                class MotorVehicleSaleInvoice : public AbstractModel
                {
                public:
                    MotorVehicleSaleInvoice();
                    ~MotorVehicleSaleInvoice() = default;
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
                     * 获取Amount before tax
                     * @return PretaxAmount Amount before tax
                     * 
                     */
                    std::string GetPretaxAmount() const;

                    /**
                     * 设置Amount before tax
                     * @param _pretaxAmount Amount before tax
                     * 
                     */
                    void SetPretaxAmount(const std::string& _pretaxAmount);

                    /**
                     * 判断参数 PretaxAmount 是否已赋值
                     * @return PretaxAmount 是否已赋值
                     * 
                     */
                    bool PretaxAmountHasBeenSet() const;

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
                     * 获取Seller's name
                     * @return Seller Seller's name
                     * 
                     */
                    std::string GetSeller() const;

                    /**
                     * 设置Seller's name
                     * @param _seller Seller's name
                     * 
                     */
                    void SetSeller(const std::string& _seller);

                    /**
                     * 判断参数 Seller 是否已赋值
                     * @return Seller 是否已赋值
                     * 
                     */
                    bool SellerHasBeenSet() const;

                    /**
                     * 获取Seller's company code
                     * @return SellerTaxID Seller's company code
                     * 
                     */
                    std::string GetSellerTaxID() const;

                    /**
                     * 设置Seller's company code
                     * @param _sellerTaxID Seller's company code
                     * 
                     */
                    void SetSellerTaxID(const std::string& _sellerTaxID);

                    /**
                     * 判断参数 SellerTaxID 是否已赋值
                     * @return SellerTaxID 是否已赋值
                     * 
                     */
                    bool SellerTaxIDHasBeenSet() const;

                    /**
                     * 获取Seller's phone number
                     * @return SellerTel Seller's phone number
                     * 
                     */
                    std::string GetSellerTel() const;

                    /**
                     * 设置Seller's phone number
                     * @param _sellerTel Seller's phone number
                     * 
                     */
                    void SetSellerTel(const std::string& _sellerTel);

                    /**
                     * 判断参数 SellerTel 是否已赋值
                     * @return SellerTel 是否已赋值
                     * 
                     */
                    bool SellerTelHasBeenSet() const;

                    /**
                     * 获取Seller's address
                     * @return SellerAddress Seller's address
                     * 
                     */
                    std::string GetSellerAddress() const;

                    /**
                     * 设置Seller's address
                     * @param _sellerAddress Seller's address
                     * 
                     */
                    void SetSellerAddress(const std::string& _sellerAddress);

                    /**
                     * 判断参数 SellerAddress 是否已赋值
                     * @return SellerAddress 是否已赋值
                     * 
                     */
                    bool SellerAddressHasBeenSet() const;

                    /**
                     * 获取Seller's account opening bank
                     * @return SellerBank Seller's account opening bank
                     * 
                     */
                    std::string GetSellerBank() const;

                    /**
                     * 设置Seller's account opening bank
                     * @param _sellerBank Seller's account opening bank
                     * 
                     */
                    void SetSellerBank(const std::string& _sellerBank);

                    /**
                     * 判断参数 SellerBank 是否已赋值
                     * @return SellerBank 是否已赋值
                     * 
                     */
                    bool SellerBankHasBeenSet() const;

                    /**
                     * 获取Seller's bank account number
                     * @return SellerBankAccount Seller's bank account number
                     * 
                     */
                    std::string GetSellerBankAccount() const;

                    /**
                     * 设置Seller's bank account number
                     * @param _sellerBankAccount Seller's bank account number
                     * 
                     */
                    void SetSellerBankAccount(const std::string& _sellerBankAccount);

                    /**
                     * 判断参数 SellerBankAccount 是否已赋值
                     * @return SellerBankAccount 是否已赋值
                     * 
                     */
                    bool SellerBankAccountHasBeenSet() const;

                    /**
                     * 获取Buyer's name
                     * @return Buyer Buyer's name
                     * 
                     */
                    std::string GetBuyer() const;

                    /**
                     * 设置Buyer's name
                     * @param _buyer Buyer's name
                     * 
                     */
                    void SetBuyer(const std::string& _buyer);

                    /**
                     * 判断参数 Buyer 是否已赋值
                     * @return Buyer 是否已赋值
                     * 
                     */
                    bool BuyerHasBeenSet() const;

                    /**
                     * 获取Buyer's taxpayer identification number
                     * @return BuyerTaxID Buyer's taxpayer identification number
                     * 
                     */
                    std::string GetBuyerTaxID() const;

                    /**
                     * 设置Buyer's taxpayer identification number
                     * @param _buyerTaxID Buyer's taxpayer identification number
                     * 
                     */
                    void SetBuyerTaxID(const std::string& _buyerTaxID);

                    /**
                     * 判断参数 BuyerTaxID 是否已赋值
                     * @return BuyerTaxID 是否已赋值
                     * 
                     */
                    bool BuyerTaxIDHasBeenSet() const;

                    /**
                     * 获取Buyer's ID number/organization code
                     * @return BuyerID Buyer's ID number/organization code
                     * 
                     */
                    std::string GetBuyerID() const;

                    /**
                     * 设置Buyer's ID number/organization code
                     * @param _buyerID Buyer's ID number/organization code
                     * 
                     */
                    void SetBuyerID(const std::string& _buyerID);

                    /**
                     * 判断参数 BuyerID 是否已赋值
                     * @return BuyerID 是否已赋值
                     * 
                     */
                    bool BuyerIDHasBeenSet() const;

                    /**
                     * 获取Tax authority
                     * @return TaxAuthorities Tax authority
                     * 
                     */
                    std::string GetTaxAuthorities() const;

                    /**
                     * 设置Tax authority
                     * @param _taxAuthorities Tax authority
                     * 
                     */
                    void SetTaxAuthorities(const std::string& _taxAuthorities);

                    /**
                     * 判断参数 TaxAuthorities 是否已赋值
                     * @return TaxAuthorities 是否已赋值
                     * 
                     */
                    bool TaxAuthoritiesHasBeenSet() const;

                    /**
                     * 获取Code of the tax authority
                     * @return TaxAuthoritiesCode Code of the tax authority
                     * 
                     */
                    std::string GetTaxAuthoritiesCode() const;

                    /**
                     * 设置Code of the tax authority
                     * @param _taxAuthoritiesCode Code of the tax authority
                     * 
                     */
                    void SetTaxAuthoritiesCode(const std::string& _taxAuthoritiesCode);

                    /**
                     * 判断参数 TaxAuthoritiesCode 是否已赋值
                     * @return TaxAuthoritiesCode 是否已赋值
                     * 
                     */
                    bool TaxAuthoritiesCodeHasBeenSet() const;

                    /**
                     * 获取VIN
                     * @return VIN VIN
                     * 
                     */
                    std::string GetVIN() const;

                    /**
                     * 设置VIN
                     * @param _vIN VIN
                     * 
                     */
                    void SetVIN(const std::string& _vIN);

                    /**
                     * 判断参数 VIN 是否已赋值
                     * @return VIN 是否已赋值
                     * 
                     */
                    bool VINHasBeenSet() const;

                    /**
                     * 获取Vehicle model
                     * @return VehicleModel Vehicle model
                     * 
                     */
                    std::string GetVehicleModel() const;

                    /**
                     * 设置Vehicle model
                     * @param _vehicleModel Vehicle model
                     * 
                     */
                    void SetVehicleModel(const std::string& _vehicleModel);

                    /**
                     * 判断参数 VehicleModel 是否已赋值
                     * @return VehicleModel 是否已赋值
                     * 
                     */
                    bool VehicleModelHasBeenSet() const;

                    /**
                     * 获取Engine No.
                     * @return VehicleEngineCode Engine No.
                     * 
                     */
                    std::string GetVehicleEngineCode() const;

                    /**
                     * 设置Engine No.
                     * @param _vehicleEngineCode Engine No.
                     * 
                     */
                    void SetVehicleEngineCode(const std::string& _vehicleEngineCode);

                    /**
                     * 判断参数 VehicleEngineCode 是否已赋值
                     * @return VehicleEngineCode 是否已赋值
                     * 
                     */
                    bool VehicleEngineCodeHasBeenSet() const;

                    /**
                     * 获取No. of the certificate of conformity
                     * @return CertificateNumber No. of the certificate of conformity
                     * 
                     */
                    std::string GetCertificateNumber() const;

                    /**
                     * 设置No. of the certificate of conformity
                     * @param _certificateNumber No. of the certificate of conformity
                     * 
                     */
                    void SetCertificateNumber(const std::string& _certificateNumber);

                    /**
                     * 判断参数 CertificateNumber 是否已赋值
                     * @return CertificateNumber 是否已赋值
                     * 
                     */
                    bool CertificateNumberHasBeenSet() const;

                    /**
                     * 获取Inspection No.
                     * @return InspectionNumber Inspection No.
                     * 
                     */
                    std::string GetInspectionNumber() const;

                    /**
                     * 设置Inspection No.
                     * @param _inspectionNumber Inspection No.
                     * 
                     */
                    void SetInspectionNumber(const std::string& _inspectionNumber);

                    /**
                     * 判断参数 InspectionNumber 是否已赋值
                     * @return InspectionNumber 是否已赋值
                     * 
                     */
                    bool InspectionNumberHasBeenSet() const;

                    /**
                     * 获取Machine No.
                     * @return MachineID Machine No.
                     * 
                     */
                    std::string GetMachineID() const;

                    /**
                     * 设置Machine No.
                     * @param _machineID Machine No.
                     * 
                     */
                    void SetMachineID(const std::string& _machineID);

                    /**
                     * 判断参数 MachineID 是否已赋值
                     * @return MachineID 是否已赋值
                     * 
                     */
                    bool MachineIDHasBeenSet() const;

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

                    /**
                     * 获取Tonnage
                     * @return Tonnage Tonnage
                     * 
                     */
                    std::string GetTonnage() const;

                    /**
                     * 设置Tonnage
                     * @param _tonnage Tonnage
                     * 
                     */
                    void SetTonnage(const std::string& _tonnage);

                    /**
                     * 判断参数 Tonnage 是否已赋值
                     * @return Tonnage 是否已赋值
                     * 
                     */
                    bool TonnageHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Remark Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
                     * @param _remark Remarks
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Form type
                     * @return FormType Form type
                     * 
                     */
                    std::string GetFormType() const;

                    /**
                     * 设置Form type
                     * @param _formType Form type
                     * 
                     */
                    void SetFormType(const std::string& _formType);

                    /**
                     * 判断参数 FormType 是否已赋值
                     * @return FormType 是否已赋值
                     * 
                     */
                    bool FormTypeHasBeenSet() const;

                    /**
                     * 获取Form name
                     * @return FormName Form name
                     * 
                     */
                    std::string GetFormName() const;

                    /**
                     * 设置Form name
                     * @param _formName Form name
                     * 
                     */
                    void SetFormName(const std::string& _formName);

                    /**
                     * 判断参数 FormName 是否已赋值
                     * @return FormName 是否已赋值
                     * 
                     */
                    bool FormNameHasBeenSet() const;

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
                     * 获取Tax payment voucher number
                     * @return TaxNum Tax payment voucher number
                     * 
                     */
                    std::string GetTaxNum() const;

                    /**
                     * 设置Tax payment voucher number
                     * @param _taxNum Tax payment voucher number
                     * 
                     */
                    void SetTaxNum(const std::string& _taxNum);

                    /**
                     * 判断参数 TaxNum 是否已赋值
                     * @return TaxNum 是否已赋值
                     * 
                     */
                    bool TaxNumHasBeenSet() const;

                    /**
                     * 获取Passenger capacity
                     * @return MaxPeopleNum Passenger capacity
                     * 
                     */
                    std::string GetMaxPeopleNum() const;

                    /**
                     * 设置Passenger capacity
                     * @param _maxPeopleNum Passenger capacity
                     * 
                     */
                    void SetMaxPeopleNum(const std::string& _maxPeopleNum);

                    /**
                     * 判断参数 MaxPeopleNum 是否已赋值
                     * @return MaxPeopleNum 是否已赋值
                     * 
                     */
                    bool MaxPeopleNumHasBeenSet() const;

                    /**
                     * 获取Origin
                     * @return Origin Origin
                     * 
                     */
                    std::string GetOrigin() const;

                    /**
                     * 设置Origin
                     * @param _origin Origin
                     * 
                     */
                    void SetOrigin(const std::string& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     * 
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取Machine-printed invoice code
                     * @return MachineCode Machine-printed invoice code
                     * 
                     */
                    std::string GetMachineCode() const;

                    /**
                     * 设置Machine-printed invoice code
                     * @param _machineCode Machine-printed invoice code
                     * 
                     */
                    void SetMachineCode(const std::string& _machineCode);

                    /**
                     * 判断参数 MachineCode 是否已赋值
                     * @return MachineCode 是否已赋值
                     * 
                     */
                    bool MachineCodeHasBeenSet() const;

                    /**
                     * 获取Machine-printed invoice number
                     * @return MachineNumber Machine-printed invoice number
                     * 
                     */
                    std::string GetMachineNumber() const;

                    /**
                     * 设置Machine-printed invoice number
                     * @param _machineNumber Machine-printed invoice number
                     * 
                     */
                    void SetMachineNumber(const std::string& _machineNumber);

                    /**
                     * 判断参数 MachineNumber 是否已赋值
                     * @return MachineNumber 是否已赋值
                     * 
                     */
                    bool MachineNumberHasBeenSet() const;

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

                private:

                    /**
                     * Invoice title
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

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
                     * Amount before tax
                     */
                    std::string m_pretaxAmount;
                    bool m_pretaxAmountHasBeenSet;

                    /**
                     * Total amount (in figures)
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Total amount (in words)
                     */
                    std::string m_totalCn;
                    bool m_totalCnHasBeenSet;

                    /**
                     * Seller's name
                     */
                    std::string m_seller;
                    bool m_sellerHasBeenSet;

                    /**
                     * Seller's company code
                     */
                    std::string m_sellerTaxID;
                    bool m_sellerTaxIDHasBeenSet;

                    /**
                     * Seller's phone number
                     */
                    std::string m_sellerTel;
                    bool m_sellerTelHasBeenSet;

                    /**
                     * Seller's address
                     */
                    std::string m_sellerAddress;
                    bool m_sellerAddressHasBeenSet;

                    /**
                     * Seller's account opening bank
                     */
                    std::string m_sellerBank;
                    bool m_sellerBankHasBeenSet;

                    /**
                     * Seller's bank account number
                     */
                    std::string m_sellerBankAccount;
                    bool m_sellerBankAccountHasBeenSet;

                    /**
                     * Buyer's name
                     */
                    std::string m_buyer;
                    bool m_buyerHasBeenSet;

                    /**
                     * Buyer's taxpayer identification number
                     */
                    std::string m_buyerTaxID;
                    bool m_buyerTaxIDHasBeenSet;

                    /**
                     * Buyer's ID number/organization code
                     */
                    std::string m_buyerID;
                    bool m_buyerIDHasBeenSet;

                    /**
                     * Tax authority
                     */
                    std::string m_taxAuthorities;
                    bool m_taxAuthoritiesHasBeenSet;

                    /**
                     * Code of the tax authority
                     */
                    std::string m_taxAuthoritiesCode;
                    bool m_taxAuthoritiesCodeHasBeenSet;

                    /**
                     * VIN
                     */
                    std::string m_vIN;
                    bool m_vINHasBeenSet;

                    /**
                     * Vehicle model
                     */
                    std::string m_vehicleModel;
                    bool m_vehicleModelHasBeenSet;

                    /**
                     * Engine No.
                     */
                    std::string m_vehicleEngineCode;
                    bool m_vehicleEngineCodeHasBeenSet;

                    /**
                     * No. of the certificate of conformity
                     */
                    std::string m_certificateNumber;
                    bool m_certificateNumberHasBeenSet;

                    /**
                     * Inspection No.
                     */
                    std::string m_inspectionNumber;
                    bool m_inspectionNumberHasBeenSet;

                    /**
                     * Machine No.
                     */
                    std::string m_machineID;
                    bool m_machineIDHasBeenSet;

                    /**
                     * Vehicle type
                     */
                    std::string m_vehicleType;
                    bool m_vehicleTypeHasBeenSet;

                    /**
                     * Invoice type
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

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
                     * Tax
                     */
                    std::string m_tax;
                    bool m_taxHasBeenSet;

                    /**
                     * Tax rate
                     */
                    std::string m_taxRate;
                    bool m_taxRateHasBeenSet;

                    /**
                     * Whether there is a company seal (0: No, 1: Yes)
                     */
                    int64_t m_companySealMark;
                    bool m_companySealMarkHasBeenSet;

                    /**
                     * Tonnage
                     */
                    std::string m_tonnage;
                    bool m_tonnageHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Form type
                     */
                    std::string m_formType;
                    bool m_formTypeHasBeenSet;

                    /**
                     * Form name
                     */
                    std::string m_formName;
                    bool m_formNameHasBeenSet;

                    /**
                     * Issuer
                     */
                    std::string m_issuer;
                    bool m_issuerHasBeenSet;

                    /**
                     * Tax payment voucher number
                     */
                    std::string m_taxNum;
                    bool m_taxNumHasBeenSet;

                    /**
                     * Passenger capacity
                     */
                    std::string m_maxPeopleNum;
                    bool m_maxPeopleNumHasBeenSet;

                    /**
                     * Origin
                     */
                    std::string m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * Machine-printed invoice code
                     */
                    std::string m_machineCode;
                    bool m_machineCodeHasBeenSet;

                    /**
                     * Machine-printed invoice number
                     */
                    std::string m_machineNumber;
                    bool m_machineNumberHasBeenSet;

                    /**
                     * Whether there is a QR code (0: No, 1: Yes)
                     */
                    int64_t m_qRCodeMark;
                    bool m_qRCodeMarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_MOTORVEHICLESALEINVOICE_H_
