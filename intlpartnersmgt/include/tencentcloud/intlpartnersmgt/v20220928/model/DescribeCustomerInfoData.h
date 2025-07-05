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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMERINFODATA_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMERINFODATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * Customer information
                */
                class DescribeCustomerInfoData : public AbstractModel
                {
                public:
                    DescribeCustomerInfoData();
                    ~DescribeCustomerInfoData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Sub-Account uin.
                     * @return CustomerUin Sub-Account uin.
                     * 
                     */
                    std::string GetCustomerUin() const;

                    /**
                     * 设置Sub-Account uin.
                     * @param _customerUin Sub-Account uin.
                     * 
                     */
                    void SetCustomerUin(const std::string& _customerUin);

                    /**
                     * 判断参数 CustomerUin 是否已赋值
                     * @return CustomerUin 是否已赋值
                     * 
                     */
                    bool CustomerUinHasBeenSet() const;

                    /**
                     * 获取Contact email.
                     * @return Email Contact email.
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置Contact email.
                     * @param _email Contact email.
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取Contact phone number.
                     * @return Phone Contact phone number.
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置Contact phone number.
                     * @param _phone Contact phone number.
                     * 
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取Remarks.
                     * @return Mark Remarks.
                     * 
                     */
                    std::string GetMark() const;

                    /**
                     * 设置Remarks.
                     * @param _mark Remarks.
                     * 
                     */
                    void SetMark(const std::string& _mark);

                    /**
                     * 判断参数 Mark 是否已赋值
                     * @return Mark 是否已赋值
                     * 
                     */
                    bool MarkHasBeenSet() const;

                    /**
                     * 获取Display name.
                     * @return Name Display name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Display name.
                     * @param _name Display name.
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
                     * 获取Binding time.
                     * @return BindTime Binding time.
                     * 
                     */
                    std::string GetBindTime() const;

                    /**
                     * 设置Binding time.
                     * @param _bindTime Binding time.
                     * 
                     */
                    void SetBindTime(const std::string& _bindTime);

                    /**
                     * 判断参数 BindTime 是否已赋值
                     * @return BindTime 是否已赋值
                     * 
                     */
                    bool BindTimeHasBeenSet() const;

                    /**
                     * 获取Account status.
0: normal.
1: forcibly mandatory (this function is not supported yet).
2: mandatory arrears. 
                     * @return AccountStatus Account status.
0: normal.
1: forcibly mandatory (this function is not supported yet).
2: mandatory arrears. 
                     * 
                     */
                    std::string GetAccountStatus() const;

                    /**
                     * 设置Account status.
0: normal.
1: forcibly mandatory (this function is not supported yet).
2: mandatory arrears. 
                     * @param _accountStatus Account status.
0: normal.
1: forcibly mandatory (this function is not supported yet).
2: mandatory arrears. 
                     * 
                     */
                    void SetAccountStatus(const std::string& _accountStatus);

                    /**
                     * 判断参数 AccountStatus 是否已赋值
                     * @return AccountStatus 是否已赋值
                     * 
                     */
                    bool AccountStatusHasBeenSet() const;

                    /**
                     * 获取Specifies the identity verification status.
-999: account information not found.
-1: file not uploaded.
0: pending review.
Under review.
Error in review: 2.
3: pass review.
                     * @return AuthStatus Specifies the identity verification status.
-999: account information not found.
-1: file not uploaded.
0: pending review.
Under review.
Error in review: 2.
3: pass review.
                     * 
                     */
                    std::string GetAuthStatus() const;

                    /**
                     * 设置Specifies the identity verification status.
-999: account information not found.
-1: file not uploaded.
0: pending review.
Under review.
Error in review: 2.
3: pass review.
                     * @param _authStatus Specifies the identity verification status.
-999: account information not found.
-1: file not uploaded.
0: pending review.
Under review.
Error in review: 2.
3: pass review.
                     * 
                     */
                    void SetAuthStatus(const std::string& _authStatus);

                    /**
                     * 判断参数 AuthStatus 是否已赋值
                     * @return AuthStatus 是否已赋值
                     * 
                     */
                    bool AuthStatusHasBeenSet() const;

                    /**
                     * 获取Real-Name type.
-1: default value. no such information. 
0: personal type. 
1: enterprise type.
                     * @return AuthType Real-Name type.
-1: default value. no such information. 
0: personal type. 
1: enterprise type.
                     * 
                     */
                    int64_t GetAuthType() const;

                    /**
                     * 设置Real-Name type.
-1: default value. no such information. 
0: personal type. 
1: enterprise type.
                     * @param _authType Real-Name type.
-1: default value. no such information. 
0: personal type. 
1: enterprise type.
                     * 
                     */
                    void SetAuthType(const int64_t& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取Specifies the registration time of the cid.
                     * @return CidRegisterTime Specifies the registration time of the cid.
                     * 
                     */
                    std::string GetCidRegisterTime() const;

                    /**
                     * 设置Specifies the registration time of the cid.
                     * @param _cidRegisterTime Specifies the registration time of the cid.
                     * 
                     */
                    void SetCidRegisterTime(const std::string& _cidRegisterTime);

                    /**
                     * 判断参数 CidRegisterTime 是否已赋值
                     * @return CidRegisterTime 是否已赋值
                     * 
                     */
                    bool CidRegisterTimeHasBeenSet() const;

                    /**
                     * 获取Specifies the registration time of the uin.
                     * @return UinRegisterTime Specifies the registration time of the uin.
                     * 
                     */
                    std::string GetUinRegisterTime() const;

                    /**
                     * 设置Specifies the registration time of the uin.
                     * @param _uinRegisterTime Specifies the registration time of the uin.
                     * 
                     */
                    void SetUinRegisterTime(const std::string& _uinRegisterTime);

                    /**
                     * 判断参数 UinRegisterTime 是否已赋值
                     * @return UinRegisterTime 是否已赋值
                     * 
                     */
                    bool UinRegisterTimeHasBeenSet() const;

                    /**
                     * 获取Time when real-name authentication passed.
                     * @return AuthPassTime Time when real-name authentication passed.
                     * 
                     */
                    std::string GetAuthPassTime() const;

                    /**
                     * 设置Time when real-name authentication passed.
                     * @param _authPassTime Time when real-name authentication passed.
                     * 
                     */
                    void SetAuthPassTime(const std::string& _authPassTime);

                    /**
                     * 判断参数 AuthPassTime 是否已赋值
                     * @return AuthPassTime 是否已赋值
                     * 
                     */
                    bool AuthPassTimeHasBeenSet() const;

                    /**
                     * 获取Whether there is consumption.
0: no consumption; 1: consumption.
                     * @return HasExpense Whether there is consumption.
0: no consumption; 1: consumption.
                     * 
                     */
                    int64_t GetHasExpense() const;

                    /**
                     * 设置Whether there is consumption.
0: no consumption; 1: consumption.
                     * @param _hasExpense Whether there is consumption.
0: no consumption; 1: consumption.
                     * 
                     */
                    void SetHasExpense(const int64_t& _hasExpense);

                    /**
                     * 判断参数 HasExpense 是否已赋值
                     * @return HasExpense 是否已赋值
                     * 
                     */
                    bool HasExpenseHasBeenSet() const;

                private:

                    /**
                     * Sub-Account uin.
                     */
                    std::string m_customerUin;
                    bool m_customerUinHasBeenSet;

                    /**
                     * Contact email.
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * Contact phone number.
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * Remarks.
                     */
                    std::string m_mark;
                    bool m_markHasBeenSet;

                    /**
                     * Display name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Binding time.
                     */
                    std::string m_bindTime;
                    bool m_bindTimeHasBeenSet;

                    /**
                     * Account status.
0: normal.
1: forcibly mandatory (this function is not supported yet).
2: mandatory arrears. 
                     */
                    std::string m_accountStatus;
                    bool m_accountStatusHasBeenSet;

                    /**
                     * Specifies the identity verification status.
-999: account information not found.
-1: file not uploaded.
0: pending review.
Under review.
Error in review: 2.
3: pass review.
                     */
                    std::string m_authStatus;
                    bool m_authStatusHasBeenSet;

                    /**
                     * Real-Name type.
-1: default value. no such information. 
0: personal type. 
1: enterprise type.
                     */
                    int64_t m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * Specifies the registration time of the cid.
                     */
                    std::string m_cidRegisterTime;
                    bool m_cidRegisterTimeHasBeenSet;

                    /**
                     * Specifies the registration time of the uin.
                     */
                    std::string m_uinRegisterTime;
                    bool m_uinRegisterTimeHasBeenSet;

                    /**
                     * Time when real-name authentication passed.
                     */
                    std::string m_authPassTime;
                    bool m_authPassTimeHasBeenSet;

                    /**
                     * Whether there is consumption.
0: no consumption; 1: consumption.
                     */
                    int64_t m_hasExpense;
                    bool m_hasExpenseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMERINFODATA_H_
