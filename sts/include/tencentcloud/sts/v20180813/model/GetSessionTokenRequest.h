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

#ifndef TENCENTCLOUD_STS_V20180813_MODEL_GETSESSIONTOKENREQUEST_H_
#define TENCENTCLOUD_STS_V20180813_MODEL_GETSESSIONTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sts
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * GetSessionToken request structure.
                */
                class GetSessionTokenRequest : public AbstractModel
                {
                public:
                    GetSessionTokenRequest();
                    ~GetSessionTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取MFA serial number, the identifier of the MFA device associated with the CAM user making the call. Format: qcs::CAM:uin/${ownerUin}::MFA/${mfaType}. mfaType supports softToken.
                     * @return SerialNumber MFA serial number, the identifier of the MFA device associated with the CAM user making the call. Format: qcs::CAM:uin/${ownerUin}::MFA/${mfaType}. mfaType supports softToken.
                     * 
                     */
                    std::string GetSerialNumber() const;

                    /**
                     * 设置MFA serial number, the identifier of the MFA device associated with the CAM user making the call. Format: qcs::CAM:uin/${ownerUin}::MFA/${mfaType}. mfaType supports softToken.
                     * @param _serialNumber MFA serial number, the identifier of the MFA device associated with the CAM user making the call. Format: qcs::CAM:uin/${ownerUin}::MFA/${mfaType}. mfaType supports softToken.
                     * 
                     */
                    void SetSerialNumber(const std::string& _serialNumber);

                    /**
                     * 判断参数 SerialNumber 是否已赋值
                     * @return SerialNumber 是否已赋值
                     * 
                     */
                    bool SerialNumberHasBeenSet() const;

                    /**
                     * 获取mfa identity verification code.
                     * @return TokenCode mfa identity verification code.
                     * 
                     */
                    std::string GetTokenCode() const;

                    /**
                     * 设置mfa identity verification code.
                     * @param _tokenCode mfa identity verification code.
                     * 
                     */
                    void SetTokenCode(const std::string& _tokenCode);

                    /**
                     * 判断参数 TokenCode 是否已赋值
                     * @return TokenCode 是否已赋值
                     * 
                     */
                    bool TokenCodeHasBeenSet() const;

                    /**
                     * 获取Validity period of the specified temporary certificate. Unit: second. Default value: 1800 seconds. The root account can set a validity period of up to 7200 seconds, and a sub-account can set a validity period of up to 129600 seconds.
                     * @return DurationSeconds Validity period of the specified temporary certificate. Unit: second. Default value: 1800 seconds. The root account can set a validity period of up to 7200 seconds, and a sub-account can set a validity period of up to 129600 seconds.
                     * 
                     */
                    int64_t GetDurationSeconds() const;

                    /**
                     * 设置Validity period of the specified temporary certificate. Unit: second. Default value: 1800 seconds. The root account can set a validity period of up to 7200 seconds, and a sub-account can set a validity period of up to 129600 seconds.
                     * @param _durationSeconds Validity period of the specified temporary certificate. Unit: second. Default value: 1800 seconds. The root account can set a validity period of up to 7200 seconds, and a sub-account can set a validity period of up to 129600 seconds.
                     * 
                     */
                    void SetDurationSeconds(const int64_t& _durationSeconds);

                    /**
                     * 判断参数 DurationSeconds 是否已赋值
                     * @return DurationSeconds 是否已赋值
                     * 
                     */
                    bool DurationSecondsHasBeenSet() const;

                private:

                    /**
                     * MFA serial number, the identifier of the MFA device associated with the CAM user making the call. Format: qcs::CAM:uin/${ownerUin}::MFA/${mfaType}. mfaType supports softToken.
                     */
                    std::string m_serialNumber;
                    bool m_serialNumberHasBeenSet;

                    /**
                     * mfa identity verification code.
                     */
                    std::string m_tokenCode;
                    bool m_tokenCodeHasBeenSet;

                    /**
                     * Validity period of the specified temporary certificate. Unit: second. Default value: 1800 seconds. The root account can set a validity period of up to 7200 seconds, and a sub-account can set a validity period of up to 129600 seconds.
                     */
                    int64_t m_durationSeconds;
                    bool m_durationSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_STS_V20180813_MODEL_GETSESSIONTOKENREQUEST_H_
