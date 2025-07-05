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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDRESULTINTLREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDRESULTINTLREQUEST_H_

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
                * GetFaceIdResultIntl request structure.
                */
                class GetFaceIdResultIntlRequest : public AbstractModel
                {
                public:
                    GetFaceIdResultIntlRequest();
                    ~GetFaceIdResultIntlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The ID of the SDK-based selfie verification process, which is generated when the `GetFaceIdTokenIntl` API is called.	
                     * @return SdkToken The ID of the SDK-based selfie verification process, which is generated when the `GetFaceIdTokenIntl` API is called.	
                     * 
                     */
                    std::string GetSdkToken() const;

                    /**
                     * 设置The ID of the SDK-based selfie verification process, which is generated when the `GetFaceIdTokenIntl` API is called.	
                     * @param _sdkToken The ID of the SDK-based selfie verification process, which is generated when the `GetFaceIdTokenIntl` API is called.	
                     * 
                     */
                    void SetSdkToken(const std::string& _sdkToken);

                    /**
                     * 判断参数 SdkToken 是否已赋值
                     * @return SdkToken 是否已赋值
                     * 
                     */
                    bool SdkTokenHasBeenSet() const;

                private:

                    /**
                     * The ID of the SDK-based selfie verification process, which is generated when the `GetFaceIdTokenIntl` API is called.	
                     */
                    std::string m_sdkToken;
                    bool m_sdkTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDRESULTINTLREQUEST_H_
