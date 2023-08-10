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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYWEBVERIFICATIONBIZTOKENINTLREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYWEBVERIFICATIONBIZTOKENINTLREQUEST_H_

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
                * ApplyWebVerificationBizTokenIntl request structure.
                */
                class ApplyWebVerificationBizTokenIntlRequest : public AbstractModel
                {
                public:
                    ApplyWebVerificationBizTokenIntlRequest();
                    ~ApplyWebVerificationBizTokenIntlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The Base64-encoded string (max 8 MB in size) of the photo to be compared.
                     * @return CompareImageBase64 The Base64-encoded string (max 8 MB in size) of the photo to be compared.
                     * 
                     */
                    std::string GetCompareImageBase64() const;

                    /**
                     * 设置The Base64-encoded string (max 8 MB in size) of the photo to be compared.
                     * @param _compareImageBase64 The Base64-encoded string (max 8 MB in size) of the photo to be compared.
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
                     * 获取The web callback URL to redirect to after the verification is completed, including the protocol, hostname, and path. Example: `https://www.tencentcloud.com/products/faceid`.
After the verification process is completed, the `BizToken` of this process will be spliced to the callback URL in the format of `https://www.tencentcloud.com/products/faceid?token={BizToken}` before redirect.
                     * @return RedirectURL The web callback URL to redirect to after the verification is completed, including the protocol, hostname, and path. Example: `https://www.tencentcloud.com/products/faceid`.
After the verification process is completed, the `BizToken` of this process will be spliced to the callback URL in the format of `https://www.tencentcloud.com/products/faceid?token={BizToken}` before redirect.
                     * 
                     */
                    std::string GetRedirectURL() const;

                    /**
                     * 设置The web callback URL to redirect to after the verification is completed, including the protocol, hostname, and path. Example: `https://www.tencentcloud.com/products/faceid`.
After the verification process is completed, the `BizToken` of this process will be spliced to the callback URL in the format of `https://www.tencentcloud.com/products/faceid?token={BizToken}` before redirect.
                     * @param _redirectURL The web callback URL to redirect to after the verification is completed, including the protocol, hostname, and path. Example: `https://www.tencentcloud.com/products/faceid`.
After the verification process is completed, the `BizToken` of this process will be spliced to the callback URL in the format of `https://www.tencentcloud.com/products/faceid?token={BizToken}` before redirect.
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
                     * 获取The passthrough parameter of the business, max 1,000 characters, which will be returned in `GetWebVerificationResultIntl`.
                     * @return Extra The passthrough parameter of the business, max 1,000 characters, which will be returned in `GetWebVerificationResultIntl`.
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置The passthrough parameter of the business, max 1,000 characters, which will be returned in `GetWebVerificationResultIntl`.
                     * @param _extra The passthrough parameter of the business, max 1,000 characters, which will be returned in `GetWebVerificationResultIntl`.
                     * 
                     */
                    void SetExtra(const std::string& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                private:

                    /**
                     * The Base64-encoded string (max 8 MB in size) of the photo to be compared.
                     */
                    std::string m_compareImageBase64;
                    bool m_compareImageBase64HasBeenSet;

                    /**
                     * The web callback URL to redirect to after the verification is completed, including the protocol, hostname, and path. Example: `https://www.tencentcloud.com/products/faceid`.
After the verification process is completed, the `BizToken` of this process will be spliced to the callback URL in the format of `https://www.tencentcloud.com/products/faceid?token={BizToken}` before redirect.
                     */
                    std::string m_redirectURL;
                    bool m_redirectURLHasBeenSet;

                    /**
                     * The passthrough parameter of the business, max 1,000 characters, which will be returned in `GetWebVerificationResultIntl`.
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYWEBVERIFICATIONBIZTOKENINTLREQUEST_H_
