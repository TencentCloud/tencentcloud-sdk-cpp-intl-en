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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VERIFYDSPMASSETLOGINCODERESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VERIFYDSPMASSETLOGINCODERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * VerifyDspmAssetLoginCode response structure.
                */
                class VerifyDspmAssetLoginCodeResponse : public AbstractModel
                {
                public:
                    VerifyDspmAssetLoginCodeResponse();
                    ~VerifyDspmAssetLoginCodeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Account
                     * @return Account Account
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取Password information.
                     * @return Password Password information.
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取Validity start time
                     * @return ValidateStart Validity start time
                     * 
                     */
                    std::string GetValidateStart() const;

                    /**
                     * 判断参数 ValidateStart 是否已赋值
                     * @return ValidateStart 是否已赋值
                     * 
                     */
                    bool ValidateStartHasBeenSet() const;

                    /**
                     * 获取Validity end time
                     * @return ValidateEnd Validity end time
                     * 
                     */
                    std::string GetValidateEnd() const;

                    /**
                     * 判断参数 ValidateEnd 是否已赋值
                     * @return ValidateEnd 是否已赋值
                     * 
                     */
                    bool ValidateEndHasBeenSet() const;

                private:

                    /**
                     * Account
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * Password information.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Validity start time
                     */
                    std::string m_validateStart;
                    bool m_validateStartHasBeenSet;

                    /**
                     * Validity end time
                     */
                    std::string m_validateEnd;
                    bool m_validateEndHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VERIFYDSPMASSETLOGINCODERESPONSE_H_
