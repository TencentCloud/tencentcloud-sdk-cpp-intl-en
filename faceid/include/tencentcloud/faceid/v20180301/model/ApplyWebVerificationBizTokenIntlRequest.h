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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYWEBVERIFICATIONBIZTOKENINTLREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYWEBVERIFICATIONBIZTOKENINTLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/WebVerificationConfigIntl.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * ApplyWebVerificationBizTokenIntl request structure.
                */
                class ApplyWebVerificationBizTokenIntlRequest : public AbstractModel
                {
                public:
                    ApplyWebVerificationBizTokenIntlRequest();
                    ~ApplyWebVerificationBizTokenIntlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The web callback URL to redirect to after the verification is completed, including the protocol, hostname, and path. 
After the verification process is completed, the BizToken of this process will be spliced to the callback URL in the format of https://www.tencentcloud.com/products/faceid?token={BizToken} before redirect.
Example: https://www.tencentcloud.com/products/faceid.
                     * @return RedirectURL The web callback URL to redirect to after the verification is completed, including the protocol, hostname, and path. 
After the verification process is completed, the BizToken of this process will be spliced to the callback URL in the format of https://www.tencentcloud.com/products/faceid?token={BizToken} before redirect.
Example: https://www.tencentcloud.com/products/faceid.
                     * 
                     */
                    std::string GetRedirectURL() const;

                    /**
                     * 设置The web callback URL to redirect to after the verification is completed, including the protocol, hostname, and path. 
After the verification process is completed, the BizToken of this process will be spliced to the callback URL in the format of https://www.tencentcloud.com/products/faceid?token={BizToken} before redirect.
Example: https://www.tencentcloud.com/products/faceid.
                     * @param _redirectURL The web callback URL to redirect to after the verification is completed, including the protocol, hostname, and path. 
After the verification process is completed, the BizToken of this process will be spliced to the callback URL in the format of https://www.tencentcloud.com/products/faceid?token={BizToken} before redirect.
Example: https://www.tencentcloud.com/products/faceid.
                     * 
                     */
                    void SetRedirectURL(const std::string& _redirectURL);

                    /**
                     * 判断参数 RedirectURL 是否已赋值
                     * @return RedirectURL 是否已赋值
                     * 
                     */
                    bool RedirectURLHasBeenSet() const;

                    /**
                     * 获取The Base64-encoded string (max 8 MB in size) of the photo to be compared.The Data URI scheme header needs to be removed from the encoded string
Example: xhBQAAACBjSFJNAAB6****AAAASUVORK5CYII=
                     * @return CompareImageBase64 The Base64-encoded string (max 8 MB in size) of the photo to be compared.The Data URI scheme header needs to be removed from the encoded string
Example: xhBQAAACBjSFJNAAB6****AAAASUVORK5CYII=
                     * 
                     */
                    std::string GetCompareImageBase64() const;

                    /**
                     * 设置The Base64-encoded string (max 8 MB in size) of the photo to be compared.The Data URI scheme header needs to be removed from the encoded string
Example: xhBQAAACBjSFJNAAB6****AAAASUVORK5CYII=
                     * @param _compareImageBase64 The Base64-encoded string (max 8 MB in size) of the photo to be compared.The Data URI scheme header needs to be removed from the encoded string
Example: xhBQAAACBjSFJNAAB6****AAAASUVORK5CYII=
                     * 
                     */
                    void SetCompareImageBase64(const std::string& _compareImageBase64);

                    /**
                     * 判断参数 CompareImageBase64 是否已赋值
                     * @return CompareImageBase64 是否已赋值
                     * 
                     */
                    bool CompareImageBase64HasBeenSet() const;

                    /**
                     * 获取The passthrough parameter of the business, max 1,000 characters, which will be returned in GetWebVerificationResultIntl.
                     * @return Extra The passthrough parameter of the business, max 1,000 characters, which will be returned in GetWebVerificationResultIntl.
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置The passthrough parameter of the business, max 1,000 characters, which will be returned in GetWebVerificationResultIntl.
                     * @param _extra The passthrough parameter of the business, max 1,000 characters, which will be returned in GetWebVerificationResultIntl.
                     * 
                     */
                    void SetExtra(const std::string& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                    /**
                     * 获取The business process ID generated by the console.
                     * @return RuleId The business process ID generated by the console.
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置The business process ID generated by the console.
                     * @param _ruleId The business process ID generated by the console.
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取The parameter control the page configuration.
Example: {"AutoSkip": true,"CheckMode": 1,"IdCardType": "HKIDCard"}
                     * @return Config The parameter control the page configuration.
Example: {"AutoSkip": true,"CheckMode": 1,"IdCardType": "HKIDCard"}
                     * 
                     */
                    WebVerificationConfigIntl GetConfig() const;

                    /**
                     * 设置The parameter control the page configuration.
Example: {"AutoSkip": true,"CheckMode": 1,"IdCardType": "HKIDCard"}
                     * @param _config The parameter control the page configuration.
Example: {"AutoSkip": true,"CheckMode": 1,"IdCardType": "HKIDCard"}
                     * 
                     */
                    void SetConfig(const WebVerificationConfigIntl& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                private:

                    /**
                     * The web callback URL to redirect to after the verification is completed, including the protocol, hostname, and path. 
After the verification process is completed, the BizToken of this process will be spliced to the callback URL in the format of https://www.tencentcloud.com/products/faceid?token={BizToken} before redirect.
Example: https://www.tencentcloud.com/products/faceid.
                     */
                    std::string m_redirectURL;
                    bool m_redirectURLHasBeenSet;

                    /**
                     * The Base64-encoded string (max 8 MB in size) of the photo to be compared.The Data URI scheme header needs to be removed from the encoded string
Example: xhBQAAACBjSFJNAAB6****AAAASUVORK5CYII=
                     */
                    std::string m_compareImageBase64;
                    bool m_compareImageBase64HasBeenSet;

                    /**
                     * The passthrough parameter of the business, max 1,000 characters, which will be returned in GetWebVerificationResultIntl.
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * The business process ID generated by the console.
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * The parameter control the page configuration.
Example: {"AutoSkip": true,"CheckMode": 1,"IdCardType": "HKIDCard"}
                     */
                    WebVerificationConfigIntl m_config;
                    bool m_configHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYWEBVERIFICATIONBIZTOKENINTLREQUEST_H_
