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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_BATCHDOMAINOPERATEERRORS_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_BATCHDOMAINOPERATEERRORS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * Error information for domains that a batch domain operation API fails to operate.
                */
                class BatchDomainOperateErrors : public AbstractModel
                {
                public:
                    BatchDomainOperateErrors();
                    ~BatchDomainOperateErrors() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The domain that the API failed to operate.
                     * @return DomainName The domain that the API failed to operate.
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置The domain that the API failed to operate.
                     * @param _domainName The domain that the API failed to operate.
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取The API 3.0 error code.
                     * @return Code The API 3.0 error code.
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置The API 3.0 error code.
                     * @param _code The API 3.0 error code.
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取The API 3.0 error message.
                     * @return Message The API 3.0 error message.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置The API 3.0 error message.
                     * @param _message The API 3.0 error message.
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * The domain that the API failed to operate.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * The API 3.0 error code.
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * The API 3.0 error message.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_BATCHDOMAINOPERATEERRORS_H_
