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
                     * 获取<p>The Web redirect URL after verification, including the protocol header, host name, and path, for example, https://www.tencentcloud.com/products/faceid.<br>After the verification process is completed, the BizToken of the current process is appended to the redirect URL, and the redirect is performed in the format of https://www.tencentcloud.com/products/faceid?token={BizToken}.</p>
                     * @return RedirectURL <p>The Web redirect URL after verification, including the protocol header, host name, and path, for example, https://www.tencentcloud.com/products/faceid.<br>After the verification process is completed, the BizToken of the current process is appended to the redirect URL, and the redirect is performed in the format of https://www.tencentcloud.com/products/faceid?token={BizToken}.</p>
                     * 
                     */
                    std::string GetRedirectURL() const;

                    /**
                     * 设置<p>The Web redirect URL after verification, including the protocol header, host name, and path, for example, https://www.tencentcloud.com/products/faceid.<br>After the verification process is completed, the BizToken of the current process is appended to the redirect URL, and the redirect is performed in the format of https://www.tencentcloud.com/products/faceid?token={BizToken}.</p>
                     * @param _redirectURL <p>The Web redirect URL after verification, including the protocol header, host name, and path, for example, https://www.tencentcloud.com/products/faceid.<br>After the verification process is completed, the BizToken of the current process is appended to the redirect URL, and the redirect is performed in the format of https://www.tencentcloud.com/products/faceid?token={BizToken}.</p>
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
                     * 获取<p>Base64-encoded string of the comparison photo. The Data URI scheme header needs to be removed from the encoded string, and the size cannot exceed 8 MB.</p>
                     * @return CompareImageBase64 <p>Base64-encoded string of the comparison photo. The Data URI scheme header needs to be removed from the encoded string, and the size cannot exceed 8 MB.</p>
                     * 
                     */
                    std::string GetCompareImageBase64() const;

                    /**
                     * 设置<p>Base64-encoded string of the comparison photo. The Data URI scheme header needs to be removed from the encoded string, and the size cannot exceed 8 MB.</p>
                     * @param _compareImageBase64 <p>Base64-encoded string of the comparison photo. The Data URI scheme header needs to be removed from the encoded string, and the size cannot exceed 8 MB.</p>
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
                     * 获取<p>Business passthrough parameter, with a maximum length of 1,000 characters. It is returned in the GetWebVerificationResultIntl API.</p>
                     * @return Extra <p>Business passthrough parameter, with a maximum length of 1,000 characters. It is returned in the GetWebVerificationResultIntl API.</p>
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置<p>Business passthrough parameter, with a maximum length of 1,000 characters. It is returned in the GetWebVerificationResultIntl API.</p>
                     * @param _extra <p>Business passthrough parameter, with a maximum length of 1,000 characters. It is returned in the GetWebVerificationResultIntl API.</p>
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
                     * 获取<p>Id generated in the console configuration</p>
                     * @return RuleId <p>Id generated in the console configuration</p>
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置<p>Id generated in the console configuration</p>
                     * @param _ruleId <p>Id generated in the console configuration</p>
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
                     * 获取<p>Related configurations of the custom verification page.</p>
                     * @return Config <p>Related configurations of the custom verification page.</p>
                     * 
                     */
                    WebVerificationConfigIntl GetConfig() const;

                    /**
                     * 设置<p>Related configurations of the custom verification page.</p>
                     * @param _config <p>Related configurations of the custom verification page.</p>
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
                     * <p>The Web redirect URL after verification, including the protocol header, host name, and path, for example, https://www.tencentcloud.com/products/faceid.<br>After the verification process is completed, the BizToken of the current process is appended to the redirect URL, and the redirect is performed in the format of https://www.tencentcloud.com/products/faceid?token={BizToken}.</p>
                     */
                    std::string m_redirectURL;
                    bool m_redirectURLHasBeenSet;

                    /**
                     * <p>Base64-encoded string of the comparison photo. The Data URI scheme header needs to be removed from the encoded string, and the size cannot exceed 8 MB.</p>
                     */
                    std::string m_compareImageBase64;
                    bool m_compareImageBase64HasBeenSet;

                    /**
                     * <p>Business passthrough parameter, with a maximum length of 1,000 characters. It is returned in the GetWebVerificationResultIntl API.</p>
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * <p>Id generated in the console configuration</p>
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>Related configurations of the custom verification page.</p>
                     */
                    WebVerificationConfigIntl m_config;
                    bool m_configHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYWEBVERIFICATIONBIZTOKENINTLREQUEST_H_
