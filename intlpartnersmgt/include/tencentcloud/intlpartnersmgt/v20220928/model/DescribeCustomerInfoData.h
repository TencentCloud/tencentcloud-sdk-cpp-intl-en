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
                     * 获取Customer UIN Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CustomerUin Customer UIN Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCustomerUin() const;

                    /**
                     * 设置Customer UIN Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _customerUin Customer UIN Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Email Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Email Email Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置Email Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _email Email Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Mobile number Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Phone Mobile number Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置Mobile number Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _phone Mobile number Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Remarks Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Mark Remarks Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMark() const;

                    /**
                     * 设置Remarks Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mark Remarks Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Displayed name Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Displayed name Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Displayed name Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Displayed name Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Binding time Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BindTime Binding time Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBindTime() const;

                    /**
                     * 设置Binding time Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bindTime Binding time Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Account status Valid values: `0` (Not frozen),  `1` (Frozen).  Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AccountStatus Account status Valid values: `0` (Not frozen),  `1` (Frozen).  Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAccountStatus() const;

                    /**
                     * 设置Account status Valid values: `0` (Not frozen),  `1` (Frozen).  Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _accountStatus Account status Valid values: `0` (Not frozen),  `1` (Frozen).  Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Identity verification status Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AuthStatus Identity verification status Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAuthStatus() const;

                    /**
                     * 设置Identity verification status Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _authStatus Identity verification status Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAuthStatus(const std::string& _authStatus);

                    /**
                     * 判断参数 AuthStatus 是否已赋值
                     * @return AuthStatus 是否已赋值
                     * 
                     */
                    bool AuthStatusHasBeenSet() const;

                private:

                    /**
                     * Customer UIN Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_customerUin;
                    bool m_customerUinHasBeenSet;

                    /**
                     * Email Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * Mobile number Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * Remarks Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mark;
                    bool m_markHasBeenSet;

                    /**
                     * Displayed name Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Binding time Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_bindTime;
                    bool m_bindTimeHasBeenSet;

                    /**
                     * Account status Valid values: `0` (Not frozen),  `1` (Frozen).  Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_accountStatus;
                    bool m_accountStatusHasBeenSet;

                    /**
                     * Identity verification status Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_authStatus;
                    bool m_authStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMERINFODATA_H_
