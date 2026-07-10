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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_QUERYASYNCBINDVPCSTATUSRESPONSE_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_QUERYASYNCBINDVPCSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * QueryAsyncBindVpcStatus response structure.
                */
                class QueryAsyncBindVpcStatusResponse : public AbstractModel
                {
                public:
                    QueryAsyncBindVpcStatusResponse();
                    ~QueryAsyncBindVpcStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取processing: Processing is ongoing. success: Execution succeeded.
failed: Execution failed.
                     * @return Status processing: Processing is ongoing. success: Execution succeeded.
failed: Execution failed.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Error message

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrorMsg Error message

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                private:

                    /**
                     * processing: Processing is ongoing. success: Execution succeeded.
failed: Execution failed.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error message

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_QUERYASYNCBINDVPCSTATUSRESPONSE_H_
