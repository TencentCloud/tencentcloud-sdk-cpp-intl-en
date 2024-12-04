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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_SENDVERIFYCODEREQUEST_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_SENDVERIFYCODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * SendVerifyCode request structure.
                */
                class SendVerifyCodeRequest : public AbstractModel
                {
                public:
                    SendVerifyCodeRequest();
                    ~SendVerifyCodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Country code.
Parameter value is not allowed to be 7,380,86.
                     * @return CountryCode Country code.
Parameter value is not allowed to be 7,380,86.
                     * 
                     */
                    std::string GetCountryCode() const;

                    /**
                     * 设置Country code.
Parameter value is not allowed to be 7,380,86.
                     * @param _countryCode Country code.
Parameter value is not allowed to be 7,380,86.
                     * 
                     */
                    void SetCountryCode(const std::string& _countryCode);

                    /**
                     * 判断参数 CountryCode 是否已赋值
                     * @return CountryCode 是否已赋值
                     * 
                     */
                    bool CountryCodeHasBeenSet() const;

                    /**
                     * 获取Mobile number.
The caller needs to ensure the validity and correctness of the mobile number. A global mobile number within a range of 1-32 digits is allowed.No need to add CountryCode before mobile number.
                     * @return PhoneNum Mobile number.
The caller needs to ensure the validity and correctness of the mobile number. A global mobile number within a range of 1-32 digits is allowed.No need to add CountryCode before mobile number.
                     * 
                     */
                    std::string GetPhoneNum() const;

                    /**
                     * 设置Mobile number.
The caller needs to ensure the validity and correctness of the mobile number. A global mobile number within a range of 1-32 digits is allowed.No need to add CountryCode before mobile number.
                     * @param _phoneNum Mobile number.
The caller needs to ensure the validity and correctness of the mobile number. A global mobile number within a range of 1-32 digits is allowed.No need to add CountryCode before mobile number.
                     * 
                     */
                    void SetPhoneNum(const std::string& _phoneNum);

                    /**
                     * 判断参数 PhoneNum 是否已赋值
                     * @return PhoneNum 是否已赋值
                     * 
                     */
                    bool PhoneNumHasBeenSet() const;

                private:

                    /**
                     * Country code.
Parameter value is not allowed to be 7,380,86.
                     */
                    std::string m_countryCode;
                    bool m_countryCodeHasBeenSet;

                    /**
                     * Mobile number.
The caller needs to ensure the validity and correctness of the mobile number. A global mobile number within a range of 1-32 digits is allowed.No need to add CountryCode before mobile number.
                     */
                    std::string m_phoneNum;
                    bool m_phoneNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_SENDVERIFYCODEREQUEST_H_
