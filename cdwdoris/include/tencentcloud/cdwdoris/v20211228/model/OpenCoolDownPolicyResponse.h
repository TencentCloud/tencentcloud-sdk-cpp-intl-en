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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_OPENCOOLDOWNPOLICYRESPONSE_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_OPENCOOLDOWNPOLICYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * OpenCoolDownPolicy response structure.
                */
                class OpenCoolDownPolicyResponse : public AbstractModel
                {
                public:
                    OpenCoolDownPolicyResponse();
                    ~OpenCoolDownPolicyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Error message
                     * @return ErrorMsg Error message
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                    /**
                     * 获取Returned information
                     * @return QueryDocument Returned information
                     * 
                     */
                    std::string GetQueryDocument() const;

                    /**
                     * 判断参数 QueryDocument 是否已赋值
                     * @return QueryDocument 是否已赋值
                     * 
                     */
                    bool QueryDocumentHasBeenSet() const;

                private:

                    /**
                     * Error message
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * Returned information
                     */
                    std::string m_queryDocument;
                    bool m_queryDocumentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_OPENCOOLDOWNPOLICYRESPONSE_H_
