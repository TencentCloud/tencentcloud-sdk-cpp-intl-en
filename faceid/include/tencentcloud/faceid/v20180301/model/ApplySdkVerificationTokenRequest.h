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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYSDKVERIFICATIONTOKENREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYSDKVERIFICATIONTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * ApplySdkVerificationToken request structure.
                */
                class ApplySdkVerificationTokenRequest : public AbstractModel
                {
                public:
                    ApplySdkVerificationTokenRequest();
                    ~ApplySdkVerificationTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether ID card authentication is required. If not, only document OCR will be performed. Currently, authentication is available only when the value of `IdCardType` is `HK`.
                     * @return NeedVerifyIdCard Whether ID card authentication is required. If not, only document OCR will be performed. Currently, authentication is available only when the value of `IdCardType` is `HK`.
                     */
                    bool GetNeedVerifyIdCard() const;

                    /**
                     * 设置Whether ID card authentication is required. If not, only document OCR will be performed. Currently, authentication is available only when the value of `IdCardType` is `HK`.
                     * @param NeedVerifyIdCard Whether ID card authentication is required. If not, only document OCR will be performed. Currently, authentication is available only when the value of `IdCardType` is `HK`.
                     */
                    void SetNeedVerifyIdCard(const bool& _needVerifyIdCard);

                    /**
                     * 判断参数 NeedVerifyIdCard 是否已赋值
                     * @return NeedVerifyIdCard 是否已赋值
                     */
                    bool NeedVerifyIdCardHasBeenSet() const;

                    /**
                     * 获取Card type. Valid values: `HK` (Hong Kong ID cards) (default), `ML` (Malaysian ID cards), `PhilippinesVoteID` (Philippine voters ID cards), and `PhilippinesDrivingLicense` (Philippine driving licenses).
                     * @return IdCardType Card type. Valid values: `HK` (Hong Kong ID cards) (default), `ML` (Malaysian ID cards), `PhilippinesVoteID` (Philippine voters ID cards), and `PhilippinesDrivingLicense` (Philippine driving licenses).
                     */
                    std::string GetIdCardType() const;

                    /**
                     * 设置Card type. Valid values: `HK` (Hong Kong ID cards) (default), `ML` (Malaysian ID cards), `PhilippinesVoteID` (Philippine voters ID cards), and `PhilippinesDrivingLicense` (Philippine driving licenses).
                     * @param IdCardType Card type. Valid values: `HK` (Hong Kong ID cards) (default), `ML` (Malaysian ID cards), `PhilippinesVoteID` (Philippine voters ID cards), and `PhilippinesDrivingLicense` (Philippine driving licenses).
                     */
                    void SetIdCardType(const std::string& _idCardType);

                    /**
                     * 判断参数 IdCardType 是否已赋值
                     * @return IdCardType 是否已赋值
                     */
                    bool IdCardTypeHasBeenSet() const;

                    /**
                     * 获取Disable the modification of the OCR result by the user. Default value: `false` (modification allowed).
                     * @return DisableChangeOcrResult Disable the modification of the OCR result by the user. Default value: `false` (modification allowed).
                     */
                    bool GetDisableChangeOcrResult() const;

                    /**
                     * 设置Disable the modification of the OCR result by the user. Default value: `false` (modification allowed).
                     * @param DisableChangeOcrResult Disable the modification of the OCR result by the user. Default value: `false` (modification allowed).
                     */
                    void SetDisableChangeOcrResult(const bool& _disableChangeOcrResult);

                    /**
                     * 判断参数 DisableChangeOcrResult 是否已赋值
                     * @return DisableChangeOcrResult 是否已赋值
                     */
                    bool DisableChangeOcrResultHasBeenSet() const;

                    /**
                     * 获取Disable the OCR warnings. Default value: `false` (not disable), where OCR warnings are enabled and the OCR result will not be returned based on the warnings. If the value of `NeedVerifyIdCard` is `true`, the value of this field will also be `true`.
                     * @return DisableCheckOcrWarnings Disable the OCR warnings. Default value: `false` (not disable), where OCR warnings are enabled and the OCR result will not be returned based on the warnings. If the value of `NeedVerifyIdCard` is `true`, the value of this field will also be `true`.
                     */
                    bool GetDisableCheckOcrWarnings() const;

                    /**
                     * 设置Disable the OCR warnings. Default value: `false` (not disable), where OCR warnings are enabled and the OCR result will not be returned based on the warnings. If the value of `NeedVerifyIdCard` is `true`, the value of this field will also be `true`.
                     * @param DisableCheckOcrWarnings Disable the OCR warnings. Default value: `false` (not disable), where OCR warnings are enabled and the OCR result will not be returned based on the warnings. If the value of `NeedVerifyIdCard` is `true`, the value of this field will also be `true`.
                     */
                    void SetDisableCheckOcrWarnings(const bool& _disableCheckOcrWarnings);

                    /**
                     * 判断参数 DisableCheckOcrWarnings 是否已赋值
                     * @return DisableCheckOcrWarnings 是否已赋值
                     */
                    bool DisableCheckOcrWarningsHasBeenSet() const;

                    /**
                     * 获取A passthrough field, which is returned together with the verification result and can contain up to 1,024 bits.
                     * @return Extra A passthrough field, which is returned together with the verification result and can contain up to 1,024 bits.
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置A passthrough field, which is returned together with the verification result and can contain up to 1,024 bits.
                     * @param Extra A passthrough field, which is returned together with the verification result and can contain up to 1,024 bits.
                     */
                    void SetExtra(const std::string& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     */
                    bool ExtraHasBeenSet() const;

                private:

                    /**
                     * Whether ID card authentication is required. If not, only document OCR will be performed. Currently, authentication is available only when the value of `IdCardType` is `HK`.
                     */
                    bool m_needVerifyIdCard;
                    bool m_needVerifyIdCardHasBeenSet;

                    /**
                     * Card type. Valid values: `HK` (Hong Kong ID cards) (default), `ML` (Malaysian ID cards), `PhilippinesVoteID` (Philippine voters ID cards), and `PhilippinesDrivingLicense` (Philippine driving licenses).
                     */
                    std::string m_idCardType;
                    bool m_idCardTypeHasBeenSet;

                    /**
                     * Disable the modification of the OCR result by the user. Default value: `false` (modification allowed).
                     */
                    bool m_disableChangeOcrResult;
                    bool m_disableChangeOcrResultHasBeenSet;

                    /**
                     * Disable the OCR warnings. Default value: `false` (not disable), where OCR warnings are enabled and the OCR result will not be returned based on the warnings. If the value of `NeedVerifyIdCard` is `true`, the value of this field will also be `true`.
                     */
                    bool m_disableCheckOcrWarnings;
                    bool m_disableCheckOcrWarningsHasBeenSet;

                    /**
                     * A passthrough field, which is returned together with the verification result and can contain up to 1,024 bits.
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYSDKVERIFICATIONTOKENREQUEST_H_
