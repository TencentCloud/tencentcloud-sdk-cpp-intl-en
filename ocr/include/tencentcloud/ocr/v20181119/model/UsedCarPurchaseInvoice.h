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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_USEDCARPURCHASEINVOICE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_USEDCARPURCHASEINVOICE_H_

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
                * Used car sales invoice
                */
                class UsedCarPurchaseInvoice : public AbstractModel
                {
                public:
                    UsedCarPurchaseInvoice();
                    ~UsedCarPurchaseInvoice() = default;
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
                     * 获取Seller's company code/personal ID card number
                     * @return SellerTaxID Seller's company code/personal ID card number
                     * 
                     */
                    std::string GetSellerTaxID() const;

                    /**
                     * 设置Seller's company code/personal ID card number
                     * @param _sellerTaxID Seller's company code/personal ID card number
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
                     * 获取Buyer's company code/personal ID card number
                     * @return BuyerID Buyer's company code/personal ID card number
                     * 
                     */
                    std::string GetBuyerID() const;

                    /**
                     * 设置Buyer's company code/personal ID card number
                     * @param _buyerID Buyer's company code/personal ID card number
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
                     * 获取Buyer's address
                     * @return BuyerAddress Buyer's address
                     * 
                     */
                    std::string GetBuyerAddress() const;

                    /**
                     * 设置Buyer's address
                     * @param _buyerAddress Buyer's address
                     * 
                     */
                    void SetBuyerAddress(const std::string& _buyerAddress);

                    /**
                     * 判断参数 BuyerAddress 是否已赋值
                     * @return BuyerAddress 是否已赋值
                     * 
                     */
                    bool BuyerAddressHasBeenSet() const;

                    /**
                     * 获取Buyer's phone number
                     * @return BuyerTel Buyer's phone number
                     * 
                     */
                    std::string GetBuyerTel() const;

                    /**
                     * 设置Buyer's phone number
                     * @param _buyerTel Buyer's phone number
                     * 
                     */
                    void SetBuyerTel(const std::string& _buyerTel);

                    /**
                     * 判断参数 BuyerTel 是否已赋值
                     * @return BuyerTel 是否已赋值
                     * 
                     */
                    bool BuyerTelHasBeenSet() const;

                    /**
                     * 获取Company (used car market) name
                     * @return CompanyName Company (used car market) name
                     * 
                     */
                    std::string GetCompanyName() const;

                    /**
                     * 设置Company (used car market) name
                     * @param _companyName Company (used car market) name
                     * 
                     */
                    void SetCompanyName(const std::string& _companyName);

                    /**
                     * 判断参数 CompanyName 是否已赋值
                     * @return CompanyName 是否已赋值
                     * 
                     */
                    bool CompanyNameHasBeenSet() const;

                    /**
                     * 获取Company's taxpayer identification number
                     * @return CompanyTaxID Company's taxpayer identification number
                     * 
                     */
                    std::string GetCompanyTaxID() const;

                    /**
                     * 设置Company's taxpayer identification number
                     * @param _companyTaxID Company's taxpayer identification number
                     * 
                     */
                    void SetCompanyTaxID(const std::string& _companyTaxID);

                    /**
                     * 判断参数 CompanyTaxID 是否已赋值
                     * @return CompanyTaxID 是否已赋值
                     * 
                     */
                    bool CompanyTaxIDHasBeenSet() const;

                    /**
                     * 获取Company's account opening bank and account number
                     * @return CompanyBankAccount Company's account opening bank and account number
                     * 
                     */
                    std::string GetCompanyBankAccount() const;

                    /**
                     * 设置Company's account opening bank and account number
                     * @param _companyBankAccount Company's account opening bank and account number
                     * 
                     */
                    void SetCompanyBankAccount(const std::string& _companyBankAccount);

                    /**
                     * 判断参数 CompanyBankAccount 是否已赋值
                     * @return CompanyBankAccount 是否已赋值
                     * 
                     */
                    bool CompanyBankAccountHasBeenSet() const;

                    /**
                     * 获取Company's phone number
                     * @return CompanyTel Company's phone number
                     * 
                     */
                    std::string GetCompanyTel() const;

                    /**
                     * 设置Company's phone number
                     * @param _companyTel Company's phone number
                     * 
                     */
                    void SetCompanyTel(const std::string& _companyTel);

                    /**
                     * 判断参数 CompanyTel 是否已赋值
                     * @return CompanyTel 是否已赋值
                     * 
                     */
                    bool CompanyTelHasBeenSet() const;

                    /**
                     * 获取Company's address
                     * @return CompanyAddress Company's address
                     * 
                     */
                    std::string GetCompanyAddress() const;

                    /**
                     * 设置Company's address
                     * @param _companyAddress Company's address
                     * 
                     */
                    void SetCompanyAddress(const std::string& _companyAddress);

                    /**
                     * 判断参数 CompanyAddress 是否已赋值
                     * @return CompanyAddress 是否已赋值
                     * 
                     */
                    bool CompanyAddressHasBeenSet() const;

                    /**
                     * 获取Name of the transfer-to department of motor vehicles
                     * @return TransferAdministrationName Name of the transfer-to department of motor vehicles
                     * 
                     */
                    std::string GetTransferAdministrationName() const;

                    /**
                     * 设置Name of the transfer-to department of motor vehicles
                     * @param _transferAdministrationName Name of the transfer-to department of motor vehicles
                     * 
                     */
                    void SetTransferAdministrationName(const std::string& _transferAdministrationName);

                    /**
                     * 判断参数 TransferAdministrationName 是否已赋值
                     * @return TransferAdministrationName 是否已赋值
                     * 
                     */
                    bool TransferAdministrationNameHasBeenSet() const;

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
                     * 获取Registration certificate No.
                     * @return RegistrationNumber Registration certificate No.
                     * 
                     */
                    std::string GetRegistrationNumber() const;

                    /**
                     * 设置Registration certificate No.
                     * @param _registrationNumber Registration certificate No.
                     * 
                     */
                    void SetRegistrationNumber(const std::string& _registrationNumber);

                    /**
                     * 判断参数 RegistrationNumber 是否已赋值
                     * @return RegistrationNumber 是否已赋值
                     * 
                     */
                    bool RegistrationNumberHasBeenSet() const;

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
                     * Seller's phone number
                     */
                    std::string m_sellerTel;
                    bool m_sellerTelHasBeenSet;

                    /**
                     * Seller's company code/personal ID card number
                     */
                    std::string m_sellerTaxID;
                    bool m_sellerTaxIDHasBeenSet;

                    /**
                     * Seller's address
                     */
                    std::string m_sellerAddress;
                    bool m_sellerAddressHasBeenSet;

                    /**
                     * Buyer's name
                     */
                    std::string m_buyer;
                    bool m_buyerHasBeenSet;

                    /**
                     * Buyer's company code/personal ID card number
                     */
                    std::string m_buyerID;
                    bool m_buyerIDHasBeenSet;

                    /**
                     * Buyer's address
                     */
                    std::string m_buyerAddress;
                    bool m_buyerAddressHasBeenSet;

                    /**
                     * Buyer's phone number
                     */
                    std::string m_buyerTel;
                    bool m_buyerTelHasBeenSet;

                    /**
                     * Company (used car market) name
                     */
                    std::string m_companyName;
                    bool m_companyNameHasBeenSet;

                    /**
                     * Company's taxpayer identification number
                     */
                    std::string m_companyTaxID;
                    bool m_companyTaxIDHasBeenSet;

                    /**
                     * Company's account opening bank and account number
                     */
                    std::string m_companyBankAccount;
                    bool m_companyBankAccountHasBeenSet;

                    /**
                     * Company's phone number
                     */
                    std::string m_companyTel;
                    bool m_companyTelHasBeenSet;

                    /**
                     * Company's address
                     */
                    std::string m_companyAddress;
                    bool m_companyAddressHasBeenSet;

                    /**
                     * Name of the transfer-to department of motor vehicles
                     */
                    std::string m_transferAdministrationName;
                    bool m_transferAdministrationNameHasBeenSet;

                    /**
                     * License plate number
                     */
                    std::string m_licensePlate;
                    bool m_licensePlateHasBeenSet;

                    /**
                     * Registration certificate No.
                     */
                    std::string m_registrationNumber;
                    bool m_registrationNumberHasBeenSet;

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
                     * Vehicle type
                     */
                    std::string m_vehicleType;
                    bool m_vehicleTypeHasBeenSet;

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
                     * Whether there is a company seal (0: No, 1: Yes)
                     */
                    int64_t m_companySealMark;
                    bool m_companySealMarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_USEDCARPURCHASEINVOICE_H_
