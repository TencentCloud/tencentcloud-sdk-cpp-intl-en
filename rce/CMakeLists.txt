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

set(rce_public_header
  include/tencentcloud/rce/v20260130/RceClient.h
  include/tencentcloud/rce/v20201103/RceClient.h
  )

set(rce_public_header_model
  include/tencentcloud/rce/v20260130/model/TaskEvent.h
  include/tencentcloud/rce/v20260130/model/DigitalOrder.h
  include/tencentcloud/rce/v20260130/model/Billing.h
  include/tencentcloud/rce/v20260130/model/Decision.h
  include/tencentcloud/rce/v20260130/model/Person.h
  include/tencentcloud/rce/v20260130/model/Environment.h
  include/tencentcloud/rce/v20260130/model/Wallet.h
  include/tencentcloud/rce/v20260130/model/Score.h
  include/tencentcloud/rce/v20260130/model/ClaimRedPacketEvent.h
  include/tencentcloud/rce/v20260130/model/PromotionCode.h
  include/tencentcloud/rce/v20260130/model/ChargeBackEvent.h
  include/tencentcloud/rce/v20260130/model/ReportEventRequest.h
  include/tencentcloud/rce/v20260130/model/WithdrawEvent.h
  include/tencentcloud/rce/v20260130/model/Merchant.h
  include/tencentcloud/rce/v20260130/model/Delivery.h
  include/tencentcloud/rce/v20260130/model/Cust.h
  include/tencentcloud/rce/v20260130/model/AssessEnvironmentRiskRsp.h
  include/tencentcloud/rce/v20260130/model/AssessEnvironmentRiskResponse.h
  include/tencentcloud/rce/v20260130/model/PaymentMethod.h
  include/tencentcloud/rce/v20260130/model/LuckyDrawEvent.h
  include/tencentcloud/rce/v20260130/model/AssessDeviceRiskPremiumProRequest.h
  include/tencentcloud/rce/v20260130/model/Order.h
  include/tencentcloud/rce/v20260130/model/AssessDeviceRiskProResponse.h
  include/tencentcloud/rce/v20260130/model/User.h
  include/tencentcloud/rce/v20260130/model/Address.h
  include/tencentcloud/rce/v20260130/model/Device.h
  include/tencentcloud/rce/v20260130/model/CreateOrderEvent.h
  include/tencentcloud/rce/v20260130/model/Card.h
  include/tencentcloud/rce/v20260130/model/Result.h
  include/tencentcloud/rce/v20260130/model/ReportEventResponse.h
  include/tencentcloud/rce/v20260130/model/RiskLabel.h
  include/tencentcloud/rce/v20260130/model/CustEvent.h
  include/tencentcloud/rce/v20260130/model/IPLocation.h
  include/tencentcloud/rce/v20260130/model/DataScore.h
  include/tencentcloud/rce/v20260130/model/BrowseEvent.h
  include/tencentcloud/rce/v20260130/model/AssessDeviceRiskPremiumProResponse.h
  include/tencentcloud/rce/v20260130/model/AssessDeviceRiskProRequest.h
  include/tencentcloud/rce/v20260130/model/CreditPoint.h
  include/tencentcloud/rce/v20260130/model/Item.h
  include/tencentcloud/rce/v20260130/model/Amount.h
  include/tencentcloud/rce/v20260130/model/SMSEvent.h
  include/tencentcloud/rce/v20260130/model/AssessRiskResponse.h
  include/tencentcloud/rce/v20260130/model/AssessEnvironmentRiskRequest.h
  include/tencentcloud/rce/v20260130/model/AddPromotionEvent.h
  include/tencentcloud/rce/v20260130/model/Promotion.h
  include/tencentcloud/rce/v20260130/model/ModifyAccountEvent.h
  include/tencentcloud/rce/v20260130/model/Inviter.h
  include/tencentcloud/rce/v20260130/model/LogoutEvent.h
  include/tencentcloud/rce/v20260130/model/Browser.h
  include/tencentcloud/rce/v20260130/model/PaymentResult.h
  include/tencentcloud/rce/v20260130/model/TransactionEvent.h
  include/tencentcloud/rce/v20260130/model/AssessRiskRsp.h
  include/tencentcloud/rce/v20260130/model/ModifyPasswordEvent.h
  include/tencentcloud/rce/v20260130/model/AssessDeviceRiskRsp.h
  include/tencentcloud/rce/v20260130/model/Coupon.h
  include/tencentcloud/rce/v20260130/model/RegisterEvent.h
  include/tencentcloud/rce/v20260130/model/App.h
  include/tencentcloud/rce/v20260130/model/LoginEvent.h
  include/tencentcloud/rce/v20260130/model/EventDetail.h
  include/tencentcloud/rce/v20260130/model/IPNetwork.h
  include/tencentcloud/rce/v20260130/model/SecurityVerificationEvent.h
  include/tencentcloud/rce/v20260130/model/AssessDeviceRiskPremiumRsp.h
  include/tencentcloud/rce/v20260130/model/RedeemEvent.h
  include/tencentcloud/rce/v20260130/model/InvitationEvent.h
  include/tencentcloud/rce/v20260130/model/AssessRiskRequest.h
  include/tencentcloud/rce/v20260130/model/ScanCodeEvent.h
  include/tencentcloud/rce/v20201103/model/DescribeRiskAssessmentRequest.h
  include/tencentcloud/rce/v20201103/model/OutputRiskAssessmentExtraInfoPair.h
  include/tencentcloud/rce/v20201103/model/OutputRiskAssessment.h
  include/tencentcloud/rce/v20201103/model/InputBizCryptoData.h
  include/tencentcloud/rce/v20201103/model/OutputRiskAssessmentInfo.h
  include/tencentcloud/rce/v20201103/model/DescribeRiskAssessmentResponse.h
  )

set(rce_src
  src/v20260130/RceClient.cpp
  src/v20201103/RceClient.cpp
  src/v20260130/model/TaskEvent.cpp
  src/v20260130/model/DigitalOrder.cpp
  src/v20260130/model/Billing.cpp
  src/v20260130/model/Decision.cpp
  src/v20260130/model/Person.cpp
  src/v20260130/model/Environment.cpp
  src/v20260130/model/Wallet.cpp
  src/v20260130/model/Score.cpp
  src/v20260130/model/ClaimRedPacketEvent.cpp
  src/v20260130/model/PromotionCode.cpp
  src/v20260130/model/ChargeBackEvent.cpp
  src/v20260130/model/ReportEventRequest.cpp
  src/v20260130/model/WithdrawEvent.cpp
  src/v20260130/model/Merchant.cpp
  src/v20260130/model/Delivery.cpp
  src/v20260130/model/Cust.cpp
  src/v20260130/model/AssessEnvironmentRiskRsp.cpp
  src/v20260130/model/AssessEnvironmentRiskResponse.cpp
  src/v20260130/model/PaymentMethod.cpp
  src/v20260130/model/LuckyDrawEvent.cpp
  src/v20260130/model/AssessDeviceRiskPremiumProRequest.cpp
  src/v20260130/model/Order.cpp
  src/v20260130/model/AssessDeviceRiskProResponse.cpp
  src/v20260130/model/User.cpp
  src/v20260130/model/Address.cpp
  src/v20260130/model/Device.cpp
  src/v20260130/model/CreateOrderEvent.cpp
  src/v20260130/model/Card.cpp
  src/v20260130/model/Result.cpp
  src/v20260130/model/ReportEventResponse.cpp
  src/v20260130/model/RiskLabel.cpp
  src/v20260130/model/CustEvent.cpp
  src/v20260130/model/IPLocation.cpp
  src/v20260130/model/DataScore.cpp
  src/v20260130/model/BrowseEvent.cpp
  src/v20260130/model/AssessDeviceRiskPremiumProResponse.cpp
  src/v20260130/model/AssessDeviceRiskProRequest.cpp
  src/v20260130/model/CreditPoint.cpp
  src/v20260130/model/Item.cpp
  src/v20260130/model/Amount.cpp
  src/v20260130/model/SMSEvent.cpp
  src/v20260130/model/AssessRiskResponse.cpp
  src/v20260130/model/AssessEnvironmentRiskRequest.cpp
  src/v20260130/model/AddPromotionEvent.cpp
  src/v20260130/model/Promotion.cpp
  src/v20260130/model/ModifyAccountEvent.cpp
  src/v20260130/model/Inviter.cpp
  src/v20260130/model/LogoutEvent.cpp
  src/v20260130/model/Browser.cpp
  src/v20260130/model/PaymentResult.cpp
  src/v20260130/model/TransactionEvent.cpp
  src/v20260130/model/AssessRiskRsp.cpp
  src/v20260130/model/ModifyPasswordEvent.cpp
  src/v20260130/model/AssessDeviceRiskRsp.cpp
  src/v20260130/model/Coupon.cpp
  src/v20260130/model/RegisterEvent.cpp
  src/v20260130/model/App.cpp
  src/v20260130/model/LoginEvent.cpp
  src/v20260130/model/EventDetail.cpp
  src/v20260130/model/IPNetwork.cpp
  src/v20260130/model/SecurityVerificationEvent.cpp
  src/v20260130/model/AssessDeviceRiskPremiumRsp.cpp
  src/v20260130/model/RedeemEvent.cpp
  src/v20260130/model/InvitationEvent.cpp
  src/v20260130/model/AssessRiskRequest.cpp
  src/v20260130/model/ScanCodeEvent.cpp
  src/v20201103/model/DescribeRiskAssessmentRequest.cpp
  src/v20201103/model/OutputRiskAssessmentExtraInfoPair.cpp
  src/v20201103/model/OutputRiskAssessment.cpp
  src/v20201103/model/InputBizCryptoData.cpp
  src/v20201103/model/OutputRiskAssessmentInfo.cpp
  src/v20201103/model/DescribeRiskAssessmentResponse.cpp
  )

set(rce_include
    include/tencentcloud/rce
  )

add_library(rce ${LIB_TYPE}
  ${rce_public_header}
  ${rce_public_header_model}
  ${rce_src})

set_target_properties(rce
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}rce
  )

target_include_directories(rce
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(rce
  core)

#install(FILES ${rce_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/rce/v20201103)
#install(FILES ${rce_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/rce/v20201103/model)
install(DIRECTORY ${rce_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS rce
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
