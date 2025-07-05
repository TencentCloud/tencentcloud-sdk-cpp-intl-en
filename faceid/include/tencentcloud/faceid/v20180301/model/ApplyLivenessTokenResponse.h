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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYLIVENESSTOKENRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYLIVENESSTOKENRESPONSE_H_

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
                * ApplyLivenessToken response structure.
                */
                class ApplyLivenessTokenResponse : public AbstractModel
                {
                public:
                    ApplyLivenessTokenResponse();
                    ~ApplyLivenessTokenResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The token used to identify an SDK-based verification process. It is valid for 10 minutes and can be used to get the verification result after the process is completed.
                     * @return SdkToken The token used to identify an SDK-based verification process. It is valid for 10 minutes and can be used to get the verification result after the process is completed.
                     * 
                     */
                    std::string GetSdkToken() const;

                    /**
                     * 判断参数 SdkToken 是否已赋值
                     * @return SdkToken 是否已赋值
                     * 
                     */
                    bool SdkTokenHasBeenSet() const;

                private:

                    /**
                     * The token used to identify an SDK-based verification process. It is valid for 10 minutes and can be used to get the verification result after the process is completed.
                     */
                    std::string m_sdkToken;
                    bool m_sdkTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYLIVENESSTOKENRESPONSE_H_
