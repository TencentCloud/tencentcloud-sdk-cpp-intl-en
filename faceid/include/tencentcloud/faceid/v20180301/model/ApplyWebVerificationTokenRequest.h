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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYWEBVERIFICATIONTOKENREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYWEBVERIFICATIONTOKENREQUEST_H_

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
                * ApplyWebVerificationToken request structure.
                */
                class ApplyWebVerificationTokenRequest : public AbstractModel
                {
                public:
                    ApplyWebVerificationTokenRequest();
                    ~ApplyWebVerificationTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The web redirect URL after the verification is completed.
                     * @return RedirectUrl The web redirect URL after the verification is completed.
                     * 
                     */
                    std::string GetRedirectUrl() const;

                    /**
                     * 设置The web redirect URL after the verification is completed.
                     * @param _redirectUrl The web redirect URL after the verification is completed.
                     * 
                     */
                    void SetRedirectUrl(const std::string& _redirectUrl);

                    /**
                     * 判断参数 RedirectUrl 是否已赋值
                     * @return RedirectUrl 是否已赋值
                     * 
                     */
                    bool RedirectUrlHasBeenSet() const;

                    /**
                     * 获取The COS URL of the image for face comparison, which can be obtained with one of the following methods:
1. Call the `CreateUploadUrl` API to generate a URL and call it again after the image is successfully uploaded.
2. Use an existing COS URL. For a private bucket, grant the download permission with a pre-signed URL. The corresponding COS bucket must be in the same region as the input parameter `Region`.
                     * @return CompareImageUrl The COS URL of the image for face comparison, which can be obtained with one of the following methods:
1. Call the `CreateUploadUrl` API to generate a URL and call it again after the image is successfully uploaded.
2. Use an existing COS URL. For a private bucket, grant the download permission with a pre-signed URL. The corresponding COS bucket must be in the same region as the input parameter `Region`.
                     * 
                     */
                    std::string GetCompareImageUrl() const;

                    /**
                     * 设置The COS URL of the image for face comparison, which can be obtained with one of the following methods:
1. Call the `CreateUploadUrl` API to generate a URL and call it again after the image is successfully uploaded.
2. Use an existing COS URL. For a private bucket, grant the download permission with a pre-signed URL. The corresponding COS bucket must be in the same region as the input parameter `Region`.
                     * @param _compareImageUrl The COS URL of the image for face comparison, which can be obtained with one of the following methods:
1. Call the `CreateUploadUrl` API to generate a URL and call it again after the image is successfully uploaded.
2. Use an existing COS URL. For a private bucket, grant the download permission with a pre-signed URL. The corresponding COS bucket must be in the same region as the input parameter `Region`.
                     * 
                     */
                    void SetCompareImageUrl(const std::string& _compareImageUrl);

                    /**
                     * 判断参数 CompareImageUrl 是否已赋值
                     * @return CompareImageUrl 是否已赋值
                     * 
                     */
                    bool CompareImageUrlHasBeenSet() const;

                    /**
                     * 获取The MD5 hash values of the image for face comparison (CompareImageUrl).
                     * @return CompareImageMd5 The MD5 hash values of the image for face comparison (CompareImageUrl).
                     * 
                     */
                    std::string GetCompareImageMd5() const;

                    /**
                     * 设置The MD5 hash values of the image for face comparison (CompareImageUrl).
                     * @param _compareImageMd5 The MD5 hash values of the image for face comparison (CompareImageUrl).
                     * 
                     */
                    void SetCompareImageMd5(const std::string& _compareImageMd5);

                    /**
                     * 判断参数 CompareImageMd5 是否已赋值
                     * @return CompareImageMd5 是否已赋值
                     * 
                     */
                    bool CompareImageMd5HasBeenSet() const;

                private:

                    /**
                     * The web redirect URL after the verification is completed.
                     */
                    std::string m_redirectUrl;
                    bool m_redirectUrlHasBeenSet;

                    /**
                     * The COS URL of the image for face comparison, which can be obtained with one of the following methods:
1. Call the `CreateUploadUrl` API to generate a URL and call it again after the image is successfully uploaded.
2. Use an existing COS URL. For a private bucket, grant the download permission with a pre-signed URL. The corresponding COS bucket must be in the same region as the input parameter `Region`.
                     */
                    std::string m_compareImageUrl;
                    bool m_compareImageUrlHasBeenSet;

                    /**
                     * The MD5 hash values of the image for face comparison (CompareImageUrl).
                     */
                    std::string m_compareImageMd5;
                    bool m_compareImageMd5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYWEBVERIFICATIONTOKENREQUEST_H_
