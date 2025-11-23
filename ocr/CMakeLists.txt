#
# Copyright (c) 2017-2025 Tencent. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(ocr_public_header
  include/tencentcloud/ocr/v20181119/OcrClient.h
  )

set(ocr_public_header_model
  include/tencentcloud/ocr/v20181119/model/InvoiceItem.h
  include/tencentcloud/ocr/v20181119/model/RecognizeMexicoVTIDResponse.h
  include/tencentcloud/ocr/v20181119/model/HKIDCardOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/ExtractDocMultiRequest.h
  include/tencentcloud/ocr/v20181119/model/RecognizeBrazilIDCardOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/RecognizePhilippinesDrivingLicenseOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/WordItem.h
  include/tencentcloud/ocr/v20181119/model/MLIDPassportOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/ItemInfo.h
  include/tencentcloud/ocr/v20181119/model/SmartStructuralOCRV2Request.h
  include/tencentcloud/ocr/v20181119/model/OtherInvoiceList.h
  include/tencentcloud/ocr/v20181119/model/RecognizeBrazilCommonOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/RecognizeMacaoIDCardOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/GetCardVerificationExternalResultResponse.h
  include/tencentcloud/ocr/v20181119/model/PermitOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/RecognizeBrazilDriverLicenseOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/Rect.h
  include/tencentcloud/ocr/v20181119/model/RecognizeMainlandIDCardOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/VatRollItem.h
  include/tencentcloud/ocr/v20181119/model/HmtResidentPermitOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/WordPolygon.h
  include/tencentcloud/ocr/v20181119/model/FlightItem.h
  include/tencentcloud/ocr/v20181119/model/Value.h
  include/tencentcloud/ocr/v20181119/model/RecognizeDetectCardCoordsResponse.h
  include/tencentcloud/ocr/v20181119/model/SealInfo.h
  include/tencentcloud/ocr/v20181119/model/RecognizePhilippinesVoteIDOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/RecognizeKoreanDrivingLicenseOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/BrazilRNMInfo.h
  include/tencentcloud/ocr/v20181119/model/OtherInvoiceItem.h
  include/tencentcloud/ocr/v20181119/model/SmartStructuralProRequest.h
  include/tencentcloud/ocr/v20181119/model/LicensePlateOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/RecognizeDetectCardCoordsRequest.h
  include/tencentcloud/ocr/v20181119/model/VatInvoiceItemInfo.h
  include/tencentcloud/ocr/v20181119/model/GeneralCard.h
  include/tencentcloud/ocr/v20181119/model/MainlandPermitOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/RecognizeBrazilCommonOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/TextDetection.h
  include/tencentcloud/ocr/v20181119/model/RecognizePhilippinesTinIDOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/DetectedWords.h
  include/tencentcloud/ocr/v20181119/model/TableCellInfo.h
  include/tencentcloud/ocr/v20181119/model/ShippingInvoice.h
  include/tencentcloud/ocr/v20181119/model/RecognizePhilippinesVoteIDOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/BrazilDriverLicenseInfo.h
  include/tencentcloud/ocr/v20181119/model/GeneralMachineItem.h
  include/tencentcloud/ocr/v20181119/model/GeneralAccurateOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/HmtResidentPermitOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/BusInvoice.h
  include/tencentcloud/ocr/v20181119/model/RecognizeGeneralInvoiceRequest.h
  include/tencentcloud/ocr/v20181119/model/GeneralBasicOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/RecognizeThaiIDCardOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/OtherInvoice.h
  include/tencentcloud/ocr/v20181119/model/RecognizePhilippinesDrivingLicenseOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/BankCardOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/RecognizePhilippinesSssIDOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/Key.h
  include/tencentcloud/ocr/v20181119/model/IDCardOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/MLIDCardOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/BrazilIDCardInfo.h
  include/tencentcloud/ocr/v20181119/model/HKIDCardOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/GroupInfo.h
  include/tencentcloud/ocr/v20181119/model/QuotaInvoice.h
  include/tencentcloud/ocr/v20181119/model/PermitOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/SingleInvoiceItem.h
  include/tencentcloud/ocr/v20181119/model/VatInvoiceInfo.h
  include/tencentcloud/ocr/v20181119/model/ExtractDocMultiResponse.h
  include/tencentcloud/ocr/v20181119/model/RecognizePhilippinesSssIDOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/MachinePrintedInvoice.h
  include/tencentcloud/ocr/v20181119/model/RecognizeKoreanIDCardOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/RecognizePhilippinesUMIDOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/TrainTicket.h
  include/tencentcloud/ocr/v20181119/model/ApplyCardVerificationExternalRequest.h
  include/tencentcloud/ocr/v20181119/model/MotorVehicleSaleInvoice.h
  include/tencentcloud/ocr/v20181119/model/RecognizeKoreanIDCardOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/TableOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/PassportRecognizeInfos.h
  include/tencentcloud/ocr/v20181119/model/RecognizeSingaporeIDCardOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/TaxiTicket.h
  include/tencentcloud/ocr/v20181119/model/RecognizeBrazilRNMOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/RecognizeThaiIDCardOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/LicensePlateOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/GeneralBasicOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/RecognizeBrazilRNMOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/RecognizeBrazilIDCardOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/RecognizeBrazilRNEOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/VatElectronicInfo.h
  include/tencentcloud/ocr/v20181119/model/IDCardOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/GeneralAccurateOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/UsedCarPurchaseInvoice.h
  include/tencentcloud/ocr/v20181119/model/RecognizeMacaoIDCardOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/NonTaxIncomeBill.h
  include/tencentcloud/ocr/v20181119/model/MLIDPassportOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/AirTransport.h
  include/tencentcloud/ocr/v20181119/model/GetCardVerificationExternalResultRequest.h
  include/tencentcloud/ocr/v20181119/model/RecognizeTableAccurateOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/Coord.h
  include/tencentcloud/ocr/v20181119/model/SealOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/RecognizeBrazilRNEOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/RecognizeIndonesiaIDCardOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/TableInfo.h
  include/tencentcloud/ocr/v20181119/model/VinOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/RecognizeKoreanDrivingLicenseOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/VatElectronicItemInfo.h
  include/tencentcloud/ocr/v20181119/model/ConfigAdvanced.h
  include/tencentcloud/ocr/v20181119/model/LineInfo.h
  include/tencentcloud/ocr/v20181119/model/ItemCoord.h
  include/tencentcloud/ocr/v20181119/model/LicensePlateInfo.h
  include/tencentcloud/ocr/v20181119/model/VatInvoiceRoll.h
  include/tencentcloud/ocr/v20181119/model/ApplyCardVerificationExternalResponse.h
  include/tencentcloud/ocr/v20181119/model/Polygon.h
  include/tencentcloud/ocr/v20181119/model/TextDetectionResult.h
  include/tencentcloud/ocr/v20181119/model/RecognizeGeneralInvoiceResponse.h
  include/tencentcloud/ocr/v20181119/model/RecognizeSingaporeIDCardOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/SealOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/MedicalInvoice.h
  include/tencentcloud/ocr/v20181119/model/TextTable.h
  include/tencentcloud/ocr/v20181119/model/RecognizeTableAccurateOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/SmartStructuralOCRV2Response.h
  include/tencentcloud/ocr/v20181119/model/RecognizeMainlandIDCardOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/MainlandPermitOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/NonTaxItem.h
  include/tencentcloud/ocr/v20181119/model/RecognizeMexicoVTIDRequest.h
  include/tencentcloud/ocr/v20181119/model/TollInvoice.h
  include/tencentcloud/ocr/v20181119/model/SmartStructuralProResponse.h
  include/tencentcloud/ocr/v20181119/model/TableOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/DetectedWordCoordPoint.h
  include/tencentcloud/ocr/v20181119/model/RecognizeBrazilDriverLicenseOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/BrazilCardInfo.h
  include/tencentcloud/ocr/v20181119/model/RecognizeIndonesiaIDCardOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/CoordsItem.h
  include/tencentcloud/ocr/v20181119/model/VinOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/BrazilRNEInfo.h
  include/tencentcloud/ocr/v20181119/model/MLIDCardOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/RecognizePhilippinesTinIDOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/RecognizeThaiPinkCardRequest.h
  include/tencentcloud/ocr/v20181119/model/BankCardOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/RecognizeThaiPinkCardResponse.h
  include/tencentcloud/ocr/v20181119/model/RecognizePhilippinesUMIDOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/AddressInfo.h
  )

set(ocr_src
  src/v20181119/OcrClient.cpp
  src/v20181119/model/InvoiceItem.cpp
  src/v20181119/model/RecognizeMexicoVTIDResponse.cpp
  src/v20181119/model/HKIDCardOCRRequest.cpp
  src/v20181119/model/ExtractDocMultiRequest.cpp
  src/v20181119/model/RecognizeBrazilIDCardOCRRequest.cpp
  src/v20181119/model/RecognizePhilippinesDrivingLicenseOCRRequest.cpp
  src/v20181119/model/WordItem.cpp
  src/v20181119/model/MLIDPassportOCRRequest.cpp
  src/v20181119/model/ItemInfo.cpp
  src/v20181119/model/SmartStructuralOCRV2Request.cpp
  src/v20181119/model/OtherInvoiceList.cpp
  src/v20181119/model/RecognizeBrazilCommonOCRResponse.cpp
  src/v20181119/model/RecognizeMacaoIDCardOCRResponse.cpp
  src/v20181119/model/GetCardVerificationExternalResultResponse.cpp
  src/v20181119/model/PermitOCRResponse.cpp
  src/v20181119/model/RecognizeBrazilDriverLicenseOCRRequest.cpp
  src/v20181119/model/Rect.cpp
  src/v20181119/model/RecognizeMainlandIDCardOCRRequest.cpp
  src/v20181119/model/VatRollItem.cpp
  src/v20181119/model/HmtResidentPermitOCRResponse.cpp
  src/v20181119/model/WordPolygon.cpp
  src/v20181119/model/FlightItem.cpp
  src/v20181119/model/Value.cpp
  src/v20181119/model/RecognizeDetectCardCoordsResponse.cpp
  src/v20181119/model/SealInfo.cpp
  src/v20181119/model/RecognizePhilippinesVoteIDOCRRequest.cpp
  src/v20181119/model/RecognizeKoreanDrivingLicenseOCRRequest.cpp
  src/v20181119/model/BrazilRNMInfo.cpp
  src/v20181119/model/OtherInvoiceItem.cpp
  src/v20181119/model/SmartStructuralProRequest.cpp
  src/v20181119/model/LicensePlateOCRResponse.cpp
  src/v20181119/model/RecognizeDetectCardCoordsRequest.cpp
  src/v20181119/model/VatInvoiceItemInfo.cpp
  src/v20181119/model/GeneralCard.cpp
  src/v20181119/model/MainlandPermitOCRRequest.cpp
  src/v20181119/model/RecognizeBrazilCommonOCRRequest.cpp
  src/v20181119/model/TextDetection.cpp
  src/v20181119/model/RecognizePhilippinesTinIDOCRResponse.cpp
  src/v20181119/model/DetectedWords.cpp
  src/v20181119/model/TableCellInfo.cpp
  src/v20181119/model/ShippingInvoice.cpp
  src/v20181119/model/RecognizePhilippinesVoteIDOCRResponse.cpp
  src/v20181119/model/BrazilDriverLicenseInfo.cpp
  src/v20181119/model/GeneralMachineItem.cpp
  src/v20181119/model/GeneralAccurateOCRResponse.cpp
  src/v20181119/model/HmtResidentPermitOCRRequest.cpp
  src/v20181119/model/BusInvoice.cpp
  src/v20181119/model/RecognizeGeneralInvoiceRequest.cpp
  src/v20181119/model/GeneralBasicOCRResponse.cpp
  src/v20181119/model/RecognizeThaiIDCardOCRResponse.cpp
  src/v20181119/model/OtherInvoice.cpp
  src/v20181119/model/RecognizePhilippinesDrivingLicenseOCRResponse.cpp
  src/v20181119/model/BankCardOCRRequest.cpp
  src/v20181119/model/RecognizePhilippinesSssIDOCRRequest.cpp
  src/v20181119/model/Key.cpp
  src/v20181119/model/IDCardOCRResponse.cpp
  src/v20181119/model/MLIDCardOCRRequest.cpp
  src/v20181119/model/BrazilIDCardInfo.cpp
  src/v20181119/model/HKIDCardOCRResponse.cpp
  src/v20181119/model/GroupInfo.cpp
  src/v20181119/model/QuotaInvoice.cpp
  src/v20181119/model/PermitOCRRequest.cpp
  src/v20181119/model/SingleInvoiceItem.cpp
  src/v20181119/model/VatInvoiceInfo.cpp
  src/v20181119/model/ExtractDocMultiResponse.cpp
  src/v20181119/model/RecognizePhilippinesSssIDOCRResponse.cpp
  src/v20181119/model/MachinePrintedInvoice.cpp
  src/v20181119/model/RecognizeKoreanIDCardOCRResponse.cpp
  src/v20181119/model/RecognizePhilippinesUMIDOCRResponse.cpp
  src/v20181119/model/TrainTicket.cpp
  src/v20181119/model/ApplyCardVerificationExternalRequest.cpp
  src/v20181119/model/MotorVehicleSaleInvoice.cpp
  src/v20181119/model/RecognizeKoreanIDCardOCRRequest.cpp
  src/v20181119/model/TableOCRRequest.cpp
  src/v20181119/model/PassportRecognizeInfos.cpp
  src/v20181119/model/RecognizeSingaporeIDCardOCRRequest.cpp
  src/v20181119/model/TaxiTicket.cpp
  src/v20181119/model/RecognizeBrazilRNMOCRResponse.cpp
  src/v20181119/model/RecognizeThaiIDCardOCRRequest.cpp
  src/v20181119/model/LicensePlateOCRRequest.cpp
  src/v20181119/model/GeneralBasicOCRRequest.cpp
  src/v20181119/model/RecognizeBrazilRNMOCRRequest.cpp
  src/v20181119/model/RecognizeBrazilIDCardOCRResponse.cpp
  src/v20181119/model/RecognizeBrazilRNEOCRRequest.cpp
  src/v20181119/model/VatElectronicInfo.cpp
  src/v20181119/model/IDCardOCRRequest.cpp
  src/v20181119/model/GeneralAccurateOCRRequest.cpp
  src/v20181119/model/UsedCarPurchaseInvoice.cpp
  src/v20181119/model/RecognizeMacaoIDCardOCRRequest.cpp
  src/v20181119/model/NonTaxIncomeBill.cpp
  src/v20181119/model/MLIDPassportOCRResponse.cpp
  src/v20181119/model/AirTransport.cpp
  src/v20181119/model/GetCardVerificationExternalResultRequest.cpp
  src/v20181119/model/RecognizeTableAccurateOCRRequest.cpp
  src/v20181119/model/Coord.cpp
  src/v20181119/model/SealOCRResponse.cpp
  src/v20181119/model/RecognizeBrazilRNEOCRResponse.cpp
  src/v20181119/model/RecognizeIndonesiaIDCardOCRResponse.cpp
  src/v20181119/model/TableInfo.cpp
  src/v20181119/model/VinOCRResponse.cpp
  src/v20181119/model/RecognizeKoreanDrivingLicenseOCRResponse.cpp
  src/v20181119/model/VatElectronicItemInfo.cpp
  src/v20181119/model/ConfigAdvanced.cpp
  src/v20181119/model/LineInfo.cpp
  src/v20181119/model/ItemCoord.cpp
  src/v20181119/model/LicensePlateInfo.cpp
  src/v20181119/model/VatInvoiceRoll.cpp
  src/v20181119/model/ApplyCardVerificationExternalResponse.cpp
  src/v20181119/model/Polygon.cpp
  src/v20181119/model/TextDetectionResult.cpp
  src/v20181119/model/RecognizeGeneralInvoiceResponse.cpp
  src/v20181119/model/RecognizeSingaporeIDCardOCRResponse.cpp
  src/v20181119/model/SealOCRRequest.cpp
  src/v20181119/model/MedicalInvoice.cpp
  src/v20181119/model/TextTable.cpp
  src/v20181119/model/RecognizeTableAccurateOCRResponse.cpp
  src/v20181119/model/SmartStructuralOCRV2Response.cpp
  src/v20181119/model/RecognizeMainlandIDCardOCRResponse.cpp
  src/v20181119/model/MainlandPermitOCRResponse.cpp
  src/v20181119/model/NonTaxItem.cpp
  src/v20181119/model/RecognizeMexicoVTIDRequest.cpp
  src/v20181119/model/TollInvoice.cpp
  src/v20181119/model/SmartStructuralProResponse.cpp
  src/v20181119/model/TableOCRResponse.cpp
  src/v20181119/model/DetectedWordCoordPoint.cpp
  src/v20181119/model/RecognizeBrazilDriverLicenseOCRResponse.cpp
  src/v20181119/model/BrazilCardInfo.cpp
  src/v20181119/model/RecognizeIndonesiaIDCardOCRRequest.cpp
  src/v20181119/model/CoordsItem.cpp
  src/v20181119/model/VinOCRRequest.cpp
  src/v20181119/model/BrazilRNEInfo.cpp
  src/v20181119/model/MLIDCardOCRResponse.cpp
  src/v20181119/model/RecognizePhilippinesTinIDOCRRequest.cpp
  src/v20181119/model/RecognizeThaiPinkCardRequest.cpp
  src/v20181119/model/BankCardOCRResponse.cpp
  src/v20181119/model/RecognizeThaiPinkCardResponse.cpp
  src/v20181119/model/RecognizePhilippinesUMIDOCRRequest.cpp
  src/v20181119/model/AddressInfo.cpp
  )

set(ocr_include
    include/tencentcloud/ocr
  )

add_library(ocr ${LIB_TYPE}
  ${ocr_public_header}
  ${ocr_public_header_model}
  ${ocr_src})

set_target_properties(ocr
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ocr
  )

target_include_directories(ocr
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ocr
  core)

#install(FILES ${ocr_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ocr/v20181119)
#install(FILES ${ocr_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ocr/v20181119/model)
install(DIRECTORY ${ocr_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ocr
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
