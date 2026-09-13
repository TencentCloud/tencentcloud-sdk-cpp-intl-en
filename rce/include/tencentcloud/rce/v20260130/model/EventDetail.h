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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_EVENTDETAIL_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_EVENTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/LoginEvent.h>
#include <tencentcloud/rce/v20260130/model/RegisterEvent.h>
#include <tencentcloud/rce/v20260130/model/CreateOrderEvent.h>
#include <tencentcloud/rce/v20260130/model/TransactionEvent.h>
#include <tencentcloud/rce/v20260130/model/SMSEvent.h>
#include <tencentcloud/rce/v20260130/model/ChargeBackEvent.h>
#include <tencentcloud/rce/v20260130/model/LogoutEvent.h>
#include <tencentcloud/rce/v20260130/model/ModifyAccountEvent.h>
#include <tencentcloud/rce/v20260130/model/ModifyPasswordEvent.h>
#include <tencentcloud/rce/v20260130/model/SecurityVerificationEvent.h>
#include <tencentcloud/rce/v20260130/model/AddPromotionEvent.h>
#include <tencentcloud/rce/v20260130/model/RedeemEvent.h>
#include <tencentcloud/rce/v20260130/model/WithdrawEvent.h>
#include <tencentcloud/rce/v20260130/model/CustEvent.h>
#include <tencentcloud/rce/v20260130/model/ScanCodeEvent.h>
#include <tencentcloud/rce/v20260130/model/LuckyDrawEvent.h>
#include <tencentcloud/rce/v20260130/model/TaskEvent.h>
#include <tencentcloud/rce/v20260130/model/InvitationEvent.h>
#include <tencentcloud/rce/v20260130/model/ClaimRedPacketEvent.h>
#include <tencentcloud/rce/v20260130/model/BrowseEvent.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * Event details
                */
                class EventDetail : public AbstractModel
                {
                public:
                    EventDetail();
                    ~EventDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Login</p>
                     * @return Login <p>Login</p>
                     * 
                     */
                    LoginEvent GetLogin() const;

                    /**
                     * 设置<p>Login</p>
                     * @param _login <p>Login</p>
                     * 
                     */
                    void SetLogin(const LoginEvent& _login);

                    /**
                     * 判断参数 Login 是否已赋值
                     * @return Login 是否已赋值
                     * 
                     */
                    bool LoginHasBeenSet() const;

                    /**
                     * 获取<p>Registration</p>
                     * @return Register <p>Registration</p>
                     * 
                     */
                    RegisterEvent GetRegister() const;

                    /**
                     * 设置<p>Registration</p>
                     * @param _register <p>Registration</p>
                     * 
                     */
                    void SetRegister(const RegisterEvent& _register);

                    /**
                     * 判断参数 Register 是否已赋值
                     * @return Register 是否已赋值
                     * 
                     */
                    bool RegisterHasBeenSet() const;

                    /**
                     * 获取<p>Create an order</p>
                     * @return CreateOrder <p>Create an order</p>
                     * 
                     */
                    CreateOrderEvent GetCreateOrder() const;

                    /**
                     * 设置<p>Create an order</p>
                     * @param _createOrder <p>Create an order</p>
                     * 
                     */
                    void SetCreateOrder(const CreateOrderEvent& _createOrder);

                    /**
                     * 判断参数 CreateOrder 是否已赋值
                     * @return CreateOrder 是否已赋值
                     * 
                     */
                    bool CreateOrderHasBeenSet() const;

                    /**
                     * 获取<p>Transaction</p>
                     * @return Transaction <p>Transaction</p>
                     * 
                     */
                    TransactionEvent GetTransaction() const;

                    /**
                     * 设置<p>Transaction</p>
                     * @param _transaction <p>Transaction</p>
                     * 
                     */
                    void SetTransaction(const TransactionEvent& _transaction);

                    /**
                     * 判断参数 Transaction 是否已赋值
                     * @return Transaction 是否已赋值
                     * 
                     */
                    bool TransactionHasBeenSet() const;

                    /**
                     * 获取<p>SMS</p>
                     * @return Sms <p>SMS</p>
                     * 
                     */
                    SMSEvent GetSms() const;

                    /**
                     * 设置<p>SMS</p>
                     * @param _sms <p>SMS</p>
                     * 
                     */
                    void SetSms(const SMSEvent& _sms);

                    /**
                     * 判断参数 Sms 是否已赋值
                     * @return Sms 是否已赋值
                     * 
                     */
                    bool SmsHasBeenSet() const;

                    /**
                     * 获取<p>Chargeback</p>
                     * @return ChargeBack <p>Chargeback</p>
                     * 
                     */
                    ChargeBackEvent GetChargeBack() const;

                    /**
                     * 设置<p>Chargeback</p>
                     * @param _chargeBack <p>Chargeback</p>
                     * 
                     */
                    void SetChargeBack(const ChargeBackEvent& _chargeBack);

                    /**
                     * 判断参数 ChargeBack 是否已赋值
                     * @return ChargeBack 是否已赋值
                     * 
                     */
                    bool ChargeBackHasBeenSet() const;

                    /**
                     * 获取<p>Logout</p>
                     * @return Logout <p>Logout</p>
                     * 
                     */
                    LogoutEvent GetLogout() const;

                    /**
                     * 设置<p>Logout</p>
                     * @param _logout <p>Logout</p>
                     * 
                     */
                    void SetLogout(const LogoutEvent& _logout);

                    /**
                     * 判断参数 Logout 是否已赋值
                     * @return Logout 是否已赋值
                     * 
                     */
                    bool LogoutHasBeenSet() const;

                    /**
                     * 获取<p>Modify account</p>
                     * @return ModifyAccount <p>Modify account</p>
                     * 
                     */
                    ModifyAccountEvent GetModifyAccount() const;

                    /**
                     * 设置<p>Modify account</p>
                     * @param _modifyAccount <p>Modify account</p>
                     * 
                     */
                    void SetModifyAccount(const ModifyAccountEvent& _modifyAccount);

                    /**
                     * 判断参数 ModifyAccount 是否已赋值
                     * @return ModifyAccount 是否已赋值
                     * 
                     */
                    bool ModifyAccountHasBeenSet() const;

                    /**
                     * 获取<p>Modify password</p>
                     * @return ModifyPassword <p>Modify password</p>
                     * 
                     */
                    ModifyPasswordEvent GetModifyPassword() const;

                    /**
                     * 设置<p>Modify password</p>
                     * @param _modifyPassword <p>Modify password</p>
                     * 
                     */
                    void SetModifyPassword(const ModifyPasswordEvent& _modifyPassword);

                    /**
                     * 判断参数 ModifyPassword 是否已赋值
                     * @return ModifyPassword 是否已赋值
                     * 
                     */
                    bool ModifyPasswordHasBeenSet() const;

                    /**
                     * 获取<p>Security verification</p>
                     * @return SecurityVerification <p>Security verification</p>
                     * 
                     */
                    SecurityVerificationEvent GetSecurityVerification() const;

                    /**
                     * 设置<p>Security verification</p>
                     * @param _securityVerification <p>Security verification</p>
                     * 
                     */
                    void SetSecurityVerification(const SecurityVerificationEvent& _securityVerification);

                    /**
                     * 判断参数 SecurityVerification 是否已赋值
                     * @return SecurityVerification 是否已赋值
                     * 
                     */
                    bool SecurityVerificationHasBeenSet() const;

                    /**
                     * 获取<p>Participate in promotion activities</p>
                     * @return AddPromotion <p>Participate in promotion activities</p>
                     * 
                     */
                    AddPromotionEvent GetAddPromotion() const;

                    /**
                     * 设置<p>Participate in promotion activities</p>
                     * @param _addPromotion <p>Participate in promotion activities</p>
                     * 
                     */
                    void SetAddPromotion(const AddPromotionEvent& _addPromotion);

                    /**
                     * 判断参数 AddPromotion 是否已赋值
                     * @return AddPromotion 是否已赋值
                     * 
                     */
                    bool AddPromotionHasBeenSet() const;

                    /**
                     * 获取<p>Redeem a prize</p>
                     * @return Redeem <p>Redeem a prize</p>
                     * 
                     */
                    RedeemEvent GetRedeem() const;

                    /**
                     * 设置<p>Redeem a prize</p>
                     * @param _redeem <p>Redeem a prize</p>
                     * 
                     */
                    void SetRedeem(const RedeemEvent& _redeem);

                    /**
                     * 判断参数 Redeem 是否已赋值
                     * @return Redeem 是否已赋值
                     * 
                     */
                    bool RedeemHasBeenSet() const;

                    /**
                     * 获取<p>Withdrawal</p>
                     * @return Withdraw <p>Withdrawal</p>
                     * 
                     */
                    WithdrawEvent GetWithdraw() const;

                    /**
                     * 设置<p>Withdrawal</p>
                     * @param _withdraw <p>Withdrawal</p>
                     * 
                     */
                    void SetWithdraw(const WithdrawEvent& _withdraw);

                    /**
                     * 判断参数 Withdraw 是否已赋值
                     * @return Withdraw 是否已赋值
                     * 
                     */
                    bool WithdrawHasBeenSet() const;

                    /**
                     * 获取<p>Custom event</p>
                     * @return CustEvent <p>Custom event</p>
                     * 
                     */
                    CustEvent GetCustEvent() const;

                    /**
                     * 设置<p>Custom event</p>
                     * @param _custEvent <p>Custom event</p>
                     * 
                     */
                    void SetCustEvent(const CustEvent& _custEvent);

                    /**
                     * 判断参数 CustEvent 是否已赋值
                     * @return CustEvent 是否已赋值
                     * 
                     */
                    bool CustEventHasBeenSet() const;

                    /**
                     * 获取<p>Scan the QR code</p>
                     * @return ScanCode <p>Scan the QR code</p>
                     * 
                     */
                    ScanCodeEvent GetScanCode() const;

                    /**
                     * 设置<p>Scan the QR code</p>
                     * @param _scanCode <p>Scan the QR code</p>
                     * 
                     */
                    void SetScanCode(const ScanCodeEvent& _scanCode);

                    /**
                     * 判断参数 ScanCode 是否已赋值
                     * @return ScanCode 是否已赋值
                     * 
                     */
                    bool ScanCodeHasBeenSet() const;

                    /**
                     * 获取<p>Lucky draw</p>
                     * @return LuckyDraw <p>Lucky draw</p>
                     * 
                     */
                    LuckyDrawEvent GetLuckyDraw() const;

                    /**
                     * 设置<p>Lucky draw</p>
                     * @param _luckyDraw <p>Lucky draw</p>
                     * 
                     */
                    void SetLuckyDraw(const LuckyDrawEvent& _luckyDraw);

                    /**
                     * 判断参数 LuckyDraw 是否已赋值
                     * @return LuckyDraw 是否已赋值
                     * 
                     */
                    bool LuckyDrawHasBeenSet() const;

                    /**
                     * 获取<p>Perform a task</p>
                     * @return Task <p>Perform a task</p>
                     * 
                     */
                    TaskEvent GetTask() const;

                    /**
                     * 设置<p>Perform a task</p>
                     * @param _task <p>Perform a task</p>
                     * 
                     */
                    void SetTask(const TaskEvent& _task);

                    /**
                     * 判断参数 Task 是否已赋值
                     * @return Task 是否已赋值
                     * 
                     */
                    bool TaskHasBeenSet() const;

                    /**
                     * 获取<p>Invitation</p>
                     * @return Invitation <p>Invitation</p>
                     * 
                     */
                    InvitationEvent GetInvitation() const;

                    /**
                     * 设置<p>Invitation</p>
                     * @param _invitation <p>Invitation</p>
                     * 
                     */
                    void SetInvitation(const InvitationEvent& _invitation);

                    /**
                     * 判断参数 Invitation 是否已赋值
                     * @return Invitation 是否已赋值
                     * 
                     */
                    bool InvitationHasBeenSet() const;

                    /**
                     * 获取<p>Receive a red packet</p>
                     * @return ClaimRedPacket <p>Receive a red packet</p>
                     * 
                     */
                    ClaimRedPacketEvent GetClaimRedPacket() const;

                    /**
                     * 设置<p>Receive a red packet</p>
                     * @param _claimRedPacket <p>Receive a red packet</p>
                     * 
                     */
                    void SetClaimRedPacket(const ClaimRedPacketEvent& _claimRedPacket);

                    /**
                     * 判断参数 ClaimRedPacket 是否已赋值
                     * @return ClaimRedPacket 是否已赋值
                     * 
                     */
                    bool ClaimRedPacketHasBeenSet() const;

                    /**
                     * 获取<p>Browse</p>
                     * @return Browse <p>Browse</p>
                     * 
                     */
                    BrowseEvent GetBrowse() const;

                    /**
                     * 设置<p>Browse</p>
                     * @param _browse <p>Browse</p>
                     * 
                     */
                    void SetBrowse(const BrowseEvent& _browse);

                    /**
                     * 判断参数 Browse 是否已赋值
                     * @return Browse 是否已赋值
                     * 
                     */
                    bool BrowseHasBeenSet() const;

                private:

                    /**
                     * <p>Login</p>
                     */
                    LoginEvent m_login;
                    bool m_loginHasBeenSet;

                    /**
                     * <p>Registration</p>
                     */
                    RegisterEvent m_register;
                    bool m_registerHasBeenSet;

                    /**
                     * <p>Create an order</p>
                     */
                    CreateOrderEvent m_createOrder;
                    bool m_createOrderHasBeenSet;

                    /**
                     * <p>Transaction</p>
                     */
                    TransactionEvent m_transaction;
                    bool m_transactionHasBeenSet;

                    /**
                     * <p>SMS</p>
                     */
                    SMSEvent m_sms;
                    bool m_smsHasBeenSet;

                    /**
                     * <p>Chargeback</p>
                     */
                    ChargeBackEvent m_chargeBack;
                    bool m_chargeBackHasBeenSet;

                    /**
                     * <p>Logout</p>
                     */
                    LogoutEvent m_logout;
                    bool m_logoutHasBeenSet;

                    /**
                     * <p>Modify account</p>
                     */
                    ModifyAccountEvent m_modifyAccount;
                    bool m_modifyAccountHasBeenSet;

                    /**
                     * <p>Modify password</p>
                     */
                    ModifyPasswordEvent m_modifyPassword;
                    bool m_modifyPasswordHasBeenSet;

                    /**
                     * <p>Security verification</p>
                     */
                    SecurityVerificationEvent m_securityVerification;
                    bool m_securityVerificationHasBeenSet;

                    /**
                     * <p>Participate in promotion activities</p>
                     */
                    AddPromotionEvent m_addPromotion;
                    bool m_addPromotionHasBeenSet;

                    /**
                     * <p>Redeem a prize</p>
                     */
                    RedeemEvent m_redeem;
                    bool m_redeemHasBeenSet;

                    /**
                     * <p>Withdrawal</p>
                     */
                    WithdrawEvent m_withdraw;
                    bool m_withdrawHasBeenSet;

                    /**
                     * <p>Custom event</p>
                     */
                    CustEvent m_custEvent;
                    bool m_custEventHasBeenSet;

                    /**
                     * <p>Scan the QR code</p>
                     */
                    ScanCodeEvent m_scanCode;
                    bool m_scanCodeHasBeenSet;

                    /**
                     * <p>Lucky draw</p>
                     */
                    LuckyDrawEvent m_luckyDraw;
                    bool m_luckyDrawHasBeenSet;

                    /**
                     * <p>Perform a task</p>
                     */
                    TaskEvent m_task;
                    bool m_taskHasBeenSet;

                    /**
                     * <p>Invitation</p>
                     */
                    InvitationEvent m_invitation;
                    bool m_invitationHasBeenSet;

                    /**
                     * <p>Receive a red packet</p>
                     */
                    ClaimRedPacketEvent m_claimRedPacket;
                    bool m_claimRedPacketHasBeenSet;

                    /**
                     * <p>Browse</p>
                     */
                    BrowseEvent m_browse;
                    bool m_browseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_EVENTDETAIL_H_
