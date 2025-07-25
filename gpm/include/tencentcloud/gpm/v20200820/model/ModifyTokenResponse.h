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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_MODIFYTOKENRESPONSE_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_MODIFYTOKENRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gpm
    {
        namespace V20200820
        {
            namespace Model
            {
                /**
                * ModifyToken response structure.
                */
                class ModifyTokenResponse : public AbstractModel
                {
                public:
                    ModifyTokenResponse();
                    ~ModifyTokenResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Token that has been set successfully.
                     * @return MatchToken Token that has been set successfully.
                     * 
                     */
                    std::string GetMatchToken() const;

                    /**
                     * 判断参数 MatchToken 是否已赋值
                     * @return MatchToken 是否已赋值
                     * 
                     */
                    bool MatchTokenHasBeenSet() const;

                    /**
                     * 获取The time period during which GPM will continuously push the original token in seconds to the user when the token is replaced.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return CompatibleSpan The time period during which GPM will continuously push the original token in seconds to the user when the token is replaced.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    uint64_t GetCompatibleSpan() const;

                    /**
                     * 判断参数 CompatibleSpan 是否已赋值
                     * @return CompatibleSpan 是否已赋值
                     * 
                     */
                    bool CompatibleSpanHasBeenSet() const;

                private:

                    /**
                     * Token that has been set successfully.
                     */
                    std::string m_matchToken;
                    bool m_matchTokenHasBeenSet;

                    /**
                     * The time period during which GPM will continuously push the original token in seconds to the user when the token is replaced.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    uint64_t m_compatibleSpan;
                    bool m_compatibleSpanHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_MODIFYTOKENRESPONSE_H_
