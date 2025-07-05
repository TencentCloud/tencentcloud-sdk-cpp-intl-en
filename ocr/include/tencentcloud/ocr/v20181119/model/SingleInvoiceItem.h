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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_SINGLEINVOICEITEM_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_SINGLEINVOICEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/VatInvoiceInfo.h>
#include <tencentcloud/ocr/v20181119/model/VatElectronicInfo.h>
#include <tencentcloud/ocr/v20181119/model/MachinePrintedInvoice.h>
#include <tencentcloud/ocr/v20181119/model/BusInvoice.h>
#include <tencentcloud/ocr/v20181119/model/ShippingInvoice.h>
#include <tencentcloud/ocr/v20181119/model/TollInvoice.h>
#include <tencentcloud/ocr/v20181119/model/OtherInvoice.h>
#include <tencentcloud/ocr/v20181119/model/MotorVehicleSaleInvoice.h>
#include <tencentcloud/ocr/v20181119/model/UsedCarPurchaseInvoice.h>
#include <tencentcloud/ocr/v20181119/model/VatInvoiceRoll.h>
#include <tencentcloud/ocr/v20181119/model/TaxiTicket.h>
#include <tencentcloud/ocr/v20181119/model/QuotaInvoice.h>
#include <tencentcloud/ocr/v20181119/model/AirTransport.h>
#include <tencentcloud/ocr/v20181119/model/NonTaxIncomeBill.h>
#include <tencentcloud/ocr/v20181119/model/TrainTicket.h>
#include <tencentcloud/ocr/v20181119/model/MedicalInvoice.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * Content of a single invoice/ticket among multiple types of invoices/tickets
                */
                class SingleInvoiceItem : public AbstractModel
                {
                public:
                    SingleInvoiceItem();
                    ~SingleInvoiceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Special VAT invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VatSpecialInvoice Special VAT invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    VatInvoiceInfo GetVatSpecialInvoice() const;

                    /**
                     * 设置Special VAT invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vatSpecialInvoice Special VAT invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVatSpecialInvoice(const VatInvoiceInfo& _vatSpecialInvoice);

                    /**
                     * 判断参数 VatSpecialInvoice 是否已赋值
                     * @return VatSpecialInvoice 是否已赋值
                     * 
                     */
                    bool VatSpecialInvoiceHasBeenSet() const;

                    /**
                     * 获取General VAT invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VatCommonInvoice General VAT invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    VatInvoiceInfo GetVatCommonInvoice() const;

                    /**
                     * 设置General VAT invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vatCommonInvoice General VAT invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVatCommonInvoice(const VatInvoiceInfo& _vatCommonInvoice);

                    /**
                     * 判断参数 VatCommonInvoice 是否已赋值
                     * @return VatCommonInvoice 是否已赋值
                     * 
                     */
                    bool VatCommonInvoiceHasBeenSet() const;

                    /**
                     * 获取Electronic general VAT invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VatElectronicCommonInvoice Electronic general VAT invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    VatInvoiceInfo GetVatElectronicCommonInvoice() const;

                    /**
                     * 设置Electronic general VAT invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vatElectronicCommonInvoice Electronic general VAT invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVatElectronicCommonInvoice(const VatInvoiceInfo& _vatElectronicCommonInvoice);

                    /**
                     * 判断参数 VatElectronicCommonInvoice 是否已赋值
                     * @return VatElectronicCommonInvoice 是否已赋值
                     * 
                     */
                    bool VatElectronicCommonInvoiceHasBeenSet() const;

                    /**
                     * 获取Electronic special VAT invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VatElectronicSpecialInvoice Electronic special VAT invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    VatInvoiceInfo GetVatElectronicSpecialInvoice() const;

                    /**
                     * 设置Electronic special VAT invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vatElectronicSpecialInvoice Electronic special VAT invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVatElectronicSpecialInvoice(const VatInvoiceInfo& _vatElectronicSpecialInvoice);

                    /**
                     * 判断参数 VatElectronicSpecialInvoice 是否已赋值
                     * @return VatElectronicSpecialInvoice 是否已赋值
                     * 
                     */
                    bool VatElectronicSpecialInvoiceHasBeenSet() const;

                    /**
                     * 获取Blockchain electronic invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VatElectronicInvoiceBlockchain Blockchain electronic invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    VatInvoiceInfo GetVatElectronicInvoiceBlockchain() const;

                    /**
                     * 设置Blockchain electronic invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vatElectronicInvoiceBlockchain Blockchain electronic invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVatElectronicInvoiceBlockchain(const VatInvoiceInfo& _vatElectronicInvoiceBlockchain);

                    /**
                     * 判断参数 VatElectronicInvoiceBlockchain 是否已赋值
                     * @return VatElectronicInvoiceBlockchain 是否已赋值
                     * 
                     */
                    bool VatElectronicInvoiceBlockchainHasBeenSet() const;

                    /**
                     * 获取Electronic general VAT invoice (toll)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VatElectronicInvoiceToll Electronic general VAT invoice (toll)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    VatInvoiceInfo GetVatElectronicInvoiceToll() const;

                    /**
                     * 设置Electronic general VAT invoice (toll)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vatElectronicInvoiceToll Electronic general VAT invoice (toll)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVatElectronicInvoiceToll(const VatInvoiceInfo& _vatElectronicInvoiceToll);

                    /**
                     * 判断参数 VatElectronicInvoiceToll 是否已赋值
                     * @return VatElectronicInvoiceToll 是否已赋值
                     * 
                     */
                    bool VatElectronicInvoiceTollHasBeenSet() const;

                    /**
                     * 获取Electronic invoice (special)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VatElectronicSpecialInvoiceFull Electronic invoice (special)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    VatElectronicInfo GetVatElectronicSpecialInvoiceFull() const;

                    /**
                     * 设置Electronic invoice (special)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vatElectronicSpecialInvoiceFull Electronic invoice (special)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVatElectronicSpecialInvoiceFull(const VatElectronicInfo& _vatElectronicSpecialInvoiceFull);

                    /**
                     * 判断参数 VatElectronicSpecialInvoiceFull 是否已赋值
                     * @return VatElectronicSpecialInvoiceFull 是否已赋值
                     * 
                     */
                    bool VatElectronicSpecialInvoiceFullHasBeenSet() const;

                    /**
                     * 获取Electronic invoice (general)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VatElectronicInvoiceFull Electronic invoice (general)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    VatElectronicInfo GetVatElectronicInvoiceFull() const;

                    /**
                     * 设置Electronic invoice (general)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vatElectronicInvoiceFull Electronic invoice (general)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVatElectronicInvoiceFull(const VatElectronicInfo& _vatElectronicInvoiceFull);

                    /**
                     * 判断参数 VatElectronicInvoiceFull 是否已赋值
                     * @return VatElectronicInvoiceFull 是否已赋值
                     * 
                     */
                    bool VatElectronicInvoiceFullHasBeenSet() const;

                    /**
                     * 获取General machine-printed invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MachinePrintedInvoice General machine-printed invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MachinePrintedInvoice GetMachinePrintedInvoice() const;

                    /**
                     * 设置General machine-printed invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _machinePrintedInvoice General machine-printed invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMachinePrintedInvoice(const MachinePrintedInvoice& _machinePrintedInvoice);

                    /**
                     * 判断参数 MachinePrintedInvoice 是否已赋值
                     * @return MachinePrintedInvoice 是否已赋值
                     * 
                     */
                    bool MachinePrintedInvoiceHasBeenSet() const;

                    /**
                     * 获取Bus ticket
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BusInvoice Bus ticket
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    BusInvoice GetBusInvoice() const;

                    /**
                     * 设置Bus ticket
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _busInvoice Bus ticket
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBusInvoice(const BusInvoice& _busInvoice);

                    /**
                     * 判断参数 BusInvoice 是否已赋值
                     * @return BusInvoice 是否已赋值
                     * 
                     */
                    bool BusInvoiceHasBeenSet() const;

                    /**
                     * 获取Ship ticket
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ShippingInvoice Ship ticket
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ShippingInvoice GetShippingInvoice() const;

                    /**
                     * 设置Ship ticket
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _shippingInvoice Ship ticket
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetShippingInvoice(const ShippingInvoice& _shippingInvoice);

                    /**
                     * 判断参数 ShippingInvoice 是否已赋值
                     * @return ShippingInvoice 是否已赋值
                     * 
                     */
                    bool ShippingInvoiceHasBeenSet() const;

                    /**
                     * 获取Toll receipt
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TollInvoice Toll receipt
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TollInvoice GetTollInvoice() const;

                    /**
                     * 设置Toll receipt
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tollInvoice Toll receipt
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTollInvoice(const TollInvoice& _tollInvoice);

                    /**
                     * 判断参数 TollInvoice 是否已赋值
                     * @return TollInvoice 是否已赋值
                     * 
                     */
                    bool TollInvoiceHasBeenSet() const;

                    /**
                     * 获取Other invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OtherInvoice Other invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    OtherInvoice GetOtherInvoice() const;

                    /**
                     * 设置Other invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _otherInvoice Other invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOtherInvoice(const OtherInvoice& _otherInvoice);

                    /**
                     * 判断参数 OtherInvoice 是否已赋值
                     * @return OtherInvoice 是否已赋值
                     * 
                     */
                    bool OtherInvoiceHasBeenSet() const;

                    /**
                     * 获取Motor vehicle sales invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MotorVehicleSaleInvoice Motor vehicle sales invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MotorVehicleSaleInvoice GetMotorVehicleSaleInvoice() const;

                    /**
                     * 设置Motor vehicle sales invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _motorVehicleSaleInvoice Motor vehicle sales invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMotorVehicleSaleInvoice(const MotorVehicleSaleInvoice& _motorVehicleSaleInvoice);

                    /**
                     * 判断参数 MotorVehicleSaleInvoice 是否已赋值
                     * @return MotorVehicleSaleInvoice 是否已赋值
                     * 
                     */
                    bool MotorVehicleSaleInvoiceHasBeenSet() const;

                    /**
                     * 获取Used car invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UsedCarPurchaseInvoice Used car invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    UsedCarPurchaseInvoice GetUsedCarPurchaseInvoice() const;

                    /**
                     * 设置Used car invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _usedCarPurchaseInvoice Used car invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUsedCarPurchaseInvoice(const UsedCarPurchaseInvoice& _usedCarPurchaseInvoice);

                    /**
                     * 判断参数 UsedCarPurchaseInvoice 是否已赋值
                     * @return UsedCarPurchaseInvoice 是否已赋值
                     * 
                     */
                    bool UsedCarPurchaseInvoiceHasBeenSet() const;

                    /**
                     * 获取General VAT invoice (roll)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VatInvoiceRoll General VAT invoice (roll)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    VatInvoiceRoll GetVatInvoiceRoll() const;

                    /**
                     * 设置General VAT invoice (roll)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vatInvoiceRoll General VAT invoice (roll)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVatInvoiceRoll(const VatInvoiceRoll& _vatInvoiceRoll);

                    /**
                     * 判断参数 VatInvoiceRoll 是否已赋值
                     * @return VatInvoiceRoll 是否已赋值
                     * 
                     */
                    bool VatInvoiceRollHasBeenSet() const;

                    /**
                     * 获取Taxi receipt
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaxiTicket Taxi receipt
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TaxiTicket GetTaxiTicket() const;

                    /**
                     * 设置Taxi receipt
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taxiTicket Taxi receipt
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaxiTicket(const TaxiTicket& _taxiTicket);

                    /**
                     * 判断参数 TaxiTicket 是否已赋值
                     * @return TaxiTicket 是否已赋值
                     * 
                     */
                    bool TaxiTicketHasBeenSet() const;

                    /**
                     * 获取Quota invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return QuotaInvoice Quota invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    QuotaInvoice GetQuotaInvoice() const;

                    /**
                     * 设置Quota invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _quotaInvoice Quota invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetQuotaInvoice(const QuotaInvoice& _quotaInvoice);

                    /**
                     * 判断参数 QuotaInvoice 是否已赋值
                     * @return QuotaInvoice 是否已赋值
                     * 
                     */
                    bool QuotaInvoiceHasBeenSet() const;

                    /**
                     * 获取Itinerary/Receipt of e-ticket for air transportation
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AirTransport Itinerary/Receipt of e-ticket for air transportation
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AirTransport GetAirTransport() const;

                    /**
                     * 设置Itinerary/Receipt of e-ticket for air transportation
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _airTransport Itinerary/Receipt of e-ticket for air transportation
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAirTransport(const AirTransport& _airTransport);

                    /**
                     * 判断参数 AirTransport 是否已赋值
                     * @return AirTransport 是否已赋值
                     * 
                     */
                    bool AirTransportHasBeenSet() const;

                    /**
                     * 获取Non-tax revenue general receipt
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NonTaxIncomeGeneralBill Non-tax revenue general receipt
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    NonTaxIncomeBill GetNonTaxIncomeGeneralBill() const;

                    /**
                     * 设置Non-tax revenue general receipt
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nonTaxIncomeGeneralBill Non-tax revenue general receipt
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNonTaxIncomeGeneralBill(const NonTaxIncomeBill& _nonTaxIncomeGeneralBill);

                    /**
                     * 判断参数 NonTaxIncomeGeneralBill 是否已赋值
                     * @return NonTaxIncomeGeneralBill 是否已赋值
                     * 
                     */
                    bool NonTaxIncomeGeneralBillHasBeenSet() const;

                    /**
                     * 获取Non-tax revenue unified payment voucher
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NonTaxIncomeElectronicBill Non-tax revenue unified payment voucher
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    NonTaxIncomeBill GetNonTaxIncomeElectronicBill() const;

                    /**
                     * 设置Non-tax revenue unified payment voucher
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nonTaxIncomeElectronicBill Non-tax revenue unified payment voucher
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNonTaxIncomeElectronicBill(const NonTaxIncomeBill& _nonTaxIncomeElectronicBill);

                    /**
                     * 判断参数 NonTaxIncomeElectronicBill 是否已赋值
                     * @return NonTaxIncomeElectronicBill 是否已赋值
                     * 
                     */
                    bool NonTaxIncomeElectronicBillHasBeenSet() const;

                    /**
                     * 获取Train ticket
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TrainTicket Train ticket
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TrainTicket GetTrainTicket() const;

                    /**
                     * 设置Train ticket
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _trainTicket Train ticket
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTrainTicket(const TrainTicket& _trainTicket);

                    /**
                     * 判断参数 TrainTicket 是否已赋值
                     * @return TrainTicket 是否已赋值
                     * 
                     */
                    bool TrainTicketHasBeenSet() const;

                    /**
                     * 获取
                     * @return MedicalOutpatientInvoice 
                     * 
                     */
                    MedicalInvoice GetMedicalOutpatientInvoice() const;

                    /**
                     * 设置
                     * @param _medicalOutpatientInvoice 
                     * 
                     */
                    void SetMedicalOutpatientInvoice(const MedicalInvoice& _medicalOutpatientInvoice);

                    /**
                     * 判断参数 MedicalOutpatientInvoice 是否已赋值
                     * @return MedicalOutpatientInvoice 是否已赋值
                     * 
                     */
                    bool MedicalOutpatientInvoiceHasBeenSet() const;

                    /**
                     * 获取
                     * @return MedicalHospitalizedInvoice 
                     * 
                     */
                    MedicalInvoice GetMedicalHospitalizedInvoice() const;

                    /**
                     * 设置
                     * @param _medicalHospitalizedInvoice 
                     * 
                     */
                    void SetMedicalHospitalizedInvoice(const MedicalInvoice& _medicalHospitalizedInvoice);

                    /**
                     * 判断参数 MedicalHospitalizedInvoice 是否已赋值
                     * @return MedicalHospitalizedInvoice 是否已赋值
                     * 
                     */
                    bool MedicalHospitalizedInvoiceHasBeenSet() const;

                private:

                    /**
                     * Special VAT invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    VatInvoiceInfo m_vatSpecialInvoice;
                    bool m_vatSpecialInvoiceHasBeenSet;

                    /**
                     * General VAT invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    VatInvoiceInfo m_vatCommonInvoice;
                    bool m_vatCommonInvoiceHasBeenSet;

                    /**
                     * Electronic general VAT invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    VatInvoiceInfo m_vatElectronicCommonInvoice;
                    bool m_vatElectronicCommonInvoiceHasBeenSet;

                    /**
                     * Electronic special VAT invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    VatInvoiceInfo m_vatElectronicSpecialInvoice;
                    bool m_vatElectronicSpecialInvoiceHasBeenSet;

                    /**
                     * Blockchain electronic invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    VatInvoiceInfo m_vatElectronicInvoiceBlockchain;
                    bool m_vatElectronicInvoiceBlockchainHasBeenSet;

                    /**
                     * Electronic general VAT invoice (toll)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    VatInvoiceInfo m_vatElectronicInvoiceToll;
                    bool m_vatElectronicInvoiceTollHasBeenSet;

                    /**
                     * Electronic invoice (special)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    VatElectronicInfo m_vatElectronicSpecialInvoiceFull;
                    bool m_vatElectronicSpecialInvoiceFullHasBeenSet;

                    /**
                     * Electronic invoice (general)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    VatElectronicInfo m_vatElectronicInvoiceFull;
                    bool m_vatElectronicInvoiceFullHasBeenSet;

                    /**
                     * General machine-printed invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MachinePrintedInvoice m_machinePrintedInvoice;
                    bool m_machinePrintedInvoiceHasBeenSet;

                    /**
                     * Bus ticket
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    BusInvoice m_busInvoice;
                    bool m_busInvoiceHasBeenSet;

                    /**
                     * Ship ticket
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ShippingInvoice m_shippingInvoice;
                    bool m_shippingInvoiceHasBeenSet;

                    /**
                     * Toll receipt
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TollInvoice m_tollInvoice;
                    bool m_tollInvoiceHasBeenSet;

                    /**
                     * Other invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    OtherInvoice m_otherInvoice;
                    bool m_otherInvoiceHasBeenSet;

                    /**
                     * Motor vehicle sales invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MotorVehicleSaleInvoice m_motorVehicleSaleInvoice;
                    bool m_motorVehicleSaleInvoiceHasBeenSet;

                    /**
                     * Used car invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    UsedCarPurchaseInvoice m_usedCarPurchaseInvoice;
                    bool m_usedCarPurchaseInvoiceHasBeenSet;

                    /**
                     * General VAT invoice (roll)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    VatInvoiceRoll m_vatInvoiceRoll;
                    bool m_vatInvoiceRollHasBeenSet;

                    /**
                     * Taxi receipt
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TaxiTicket m_taxiTicket;
                    bool m_taxiTicketHasBeenSet;

                    /**
                     * Quota invoice
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    QuotaInvoice m_quotaInvoice;
                    bool m_quotaInvoiceHasBeenSet;

                    /**
                     * Itinerary/Receipt of e-ticket for air transportation
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AirTransport m_airTransport;
                    bool m_airTransportHasBeenSet;

                    /**
                     * Non-tax revenue general receipt
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    NonTaxIncomeBill m_nonTaxIncomeGeneralBill;
                    bool m_nonTaxIncomeGeneralBillHasBeenSet;

                    /**
                     * Non-tax revenue unified payment voucher
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    NonTaxIncomeBill m_nonTaxIncomeElectronicBill;
                    bool m_nonTaxIncomeElectronicBillHasBeenSet;

                    /**
                     * Train ticket
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TrainTicket m_trainTicket;
                    bool m_trainTicketHasBeenSet;

                    /**
                     * 
                     */
                    MedicalInvoice m_medicalOutpatientInvoice;
                    bool m_medicalOutpatientInvoiceHasBeenSet;

                    /**
                     * 
                     */
                    MedicalInvoice m_medicalHospitalizedInvoice;
                    bool m_medicalHospitalizedInvoiceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_SINGLEINVOICEITEM_H_
