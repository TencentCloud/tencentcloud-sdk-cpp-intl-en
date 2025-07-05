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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEOFFLINETASKTOKENRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEOFFLINETASKTOKENRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeOfflineTaskToken response structure.
                */
                class DescribeOfflineTaskTokenResponse : public AbstractModel
                {
                public:
                    DescribeOfflineTaskTokenResponse();
                    ~DescribeOfflineTaskTokenResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Long Connection Temporary Token
                     * @return Token Long Connection Temporary Token
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取Long Connection Temporary Token. Same meaning as Token, prioritize Data, if Data is null, then use Token.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Data Long Connection Temporary Token. Same meaning as Token, prioritize Data, if Data is null, then use Token.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * Long Connection Temporary Token
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * Long Connection Temporary Token. Same meaning as Token, prioritize Data, if Data is null, then use Token.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEOFFLINETASKTOKENRESPONSE_H_
