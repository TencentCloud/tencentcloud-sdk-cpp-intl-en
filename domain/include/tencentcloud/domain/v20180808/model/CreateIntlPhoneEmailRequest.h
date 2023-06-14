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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_CREATEINTLPHONEEMAILREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_CREATEINTLPHONEEMAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * CreateIntlPhoneEmail request structure.
                */
                class CreateIntlPhoneEmailRequest : public AbstractModel
                {
                public:
                    CreateIntlPhoneEmailRequest();
                    ~CreateIntlPhoneEmailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The type. Valid values: `1` (mobile number), `2` (email address).
                     * @return Type The type. Valid values: `1` (mobile number), `2` (email address).
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置The type. Valid values: `1` (mobile number), `2` (email address).
                     * @param _type The type. Valid values: `1` (mobile number), `2` (email address).
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取The mobile number or email address.
                     * @return Code The mobile number or email address.
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置The mobile number or email address.
                     * @param _code The mobile number or email address.
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
                     * 获取The verification code.
                     * @return VerifyCode The verification code.
                     * 
                     */
                    std::string GetVerifyCode() const;

                    /**
                     * 设置The verification code.
                     * @param _verifyCode The verification code.
                     * 
                     */
                    void SetVerifyCode(const std::string& _verifyCode);

                    /**
                     * 判断参数 VerifyCode 是否已赋值
                     * @return VerifyCode 是否已赋值
                     * 
                     */
                    bool VerifyCodeHasBeenSet() const;

                private:

                    /**
                     * The type. Valid values: `1` (mobile number), `2` (email address).
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The mobile number or email address.
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * The verification code.
                     */
                    std::string m_verifyCode;
                    bool m_verifyCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_CREATEINTLPHONEEMAILREQUEST_H_
