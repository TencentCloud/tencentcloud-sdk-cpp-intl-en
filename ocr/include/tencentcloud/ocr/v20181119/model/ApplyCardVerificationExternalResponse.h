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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_APPLYCARDVERIFICATIONEXTERNALRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_APPLYCARDVERIFICATIONEXTERNALRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * ApplyCardVerificationExternal response structure.
                */
                class ApplyCardVerificationExternalResponse : public AbstractModel
                {
                public:
                    ApplyCardVerificationExternalResponse();
                    ~ApplyCardVerificationExternalResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Process token, which is used to obtain the result.
                     * @return CardVerificationToken Process token, which is used to obtain the result.
                     * 
                     */
                    std::string GetCardVerificationToken() const;

                    /**
                     * 判断参数 CardVerificationToken 是否已赋值
                     * @return CardVerificationToken 是否已赋值
                     * 
                     */
                    bool CardVerificationTokenHasBeenSet() const;

                private:

                    /**
                     * Process token, which is used to obtain the result.
                     */
                    std::string m_cardVerificationToken;
                    bool m_cardVerificationTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_APPLYCARDVERIFICATIONEXTERNALRESPONSE_H_
