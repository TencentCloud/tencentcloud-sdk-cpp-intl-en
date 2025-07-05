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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESUBSCRIBERETURNABLERESPONSE_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESUBSCRIBERETURNABLERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * DescribeSubscribeReturnable response structure.
                */
                class DescribeSubscribeReturnableResponse : public AbstractModel
                {
                public:
                    DescribeSubscribeReturnableResponse();
                    ~DescribeSubscribeReturnableResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether the instance is returnable
                     * @return IsReturnable Whether the instance is returnable
                     * 
                     */
                    bool GetIsReturnable() const;

                    /**
                     * 判断参数 IsReturnable 是否已赋值
                     * @return IsReturnable 是否已赋值
                     * 
                     */
                    bool IsReturnableHasBeenSet() const;

                    /**
                     * 获取Reason for the non-returnability
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReturnFailMessage Reason for the non-returnability
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReturnFailMessage() const;

                    /**
                     * 判断参数 ReturnFailMessage 是否已赋值
                     * @return ReturnFailMessage 是否已赋值
                     * 
                     */
                    bool ReturnFailMessageHasBeenSet() const;

                private:

                    /**
                     * Whether the instance is returnable
                     */
                    bool m_isReturnable;
                    bool m_isReturnableHasBeenSet;

                    /**
                     * Reason for the non-returnability
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_returnFailMessage;
                    bool m_returnFailMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESUBSCRIBERETURNABLERESPONSE_H_
