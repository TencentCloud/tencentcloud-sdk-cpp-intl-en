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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_RESPONSECODE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_RESPONSECODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * Return code of the response body
                */
                class ResponseCode : public AbstractModel
                {
                public:
                    ResponseCode();
                    ~ResponseCode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取If successful, return a success; if failed, return Cloud API Defined Error Codes
                     * @return Code If successful, return a success; if failed, return Cloud API Defined Error Codes
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置If successful, return a success; if failed, return Cloud API Defined Error Codes
                     * @param _code If successful, return a success; if failed, return Cloud API Defined Error Codes
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
                     * 获取If successful, return a success; if failed, return the secondary error code of WAF Definition
                     * @return Message If successful, return a success; if failed, return the secondary error code of WAF Definition
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置If successful, return a success; if failed, return the secondary error code of WAF Definition
                     * @param _message If successful, return a success; if failed, return the secondary error code of WAF Definition
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
                     * If successful, return a success; if failed, return Cloud API Defined Error Codes
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * If successful, return a success; if failed, return the secondary error code of WAF Definition
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_RESPONSECODE_H_
