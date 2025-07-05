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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_REPORTCONVERSIONSTATUS_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_REPORTCONVERSIONSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20210111
        {
            namespace Model
            {
                /**
                * Response for conversion rate reporting
                */
                class ReportConversionStatus : public AbstractModel
                {
                public:
                    ReportConversionStatus();
                    ~ReportConversionStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Error code. `ok` is returned if the conversion rate is successfully reported.
                     * @return Code Error code. `ok` is returned if the conversion rate is successfully reported.
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置Error code. `ok` is returned if the conversion rate is successfully reported.
                     * @param _code Error code. `ok` is returned if the conversion rate is successfully reported.
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
                     * 获取Error code description.
                     * @return Message Error code description.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Error code description.
                     * @param _message Error code description.
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
                     * Error code. `ok` is returned if the conversion rate is successfully reported.
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * Error code description.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_REPORTCONVERSIONSTATUS_H_
