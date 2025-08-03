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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_ERRORINFO_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_ERRORINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * Custom error information object
                */
                class ErrorInfo : public AbstractModel
                {
                public:
                    ErrorInfo();
                    ~ErrorInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Error description field.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrorTip Error description field.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetErrorTip() const;

                    /**
                     * 设置Error description field.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _errorTip Error description field.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetErrorTip(const std::string& _errorTip);

                    /**
                     * 判断参数 ErrorTip 是否已赋值
                     * @return ErrorTip 是否已赋值
                     * 
                     */
                    bool ErrorTipHasBeenSet() const;

                    /**
                     * 获取Original exception message.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrorMessage Original exception message.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置Original exception message.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _errorMessage Original exception message.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取Error level field.
ERROR
WARN
INFO
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrorLevel Error level field.
ERROR
WARN
INFO
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetErrorLevel() const;

                    /**
                     * 设置Error level field.
ERROR
WARN
INFO
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _errorLevel Error level field.
ERROR
WARN
INFO
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetErrorLevel(const std::string& _errorLevel);

                    /**
                     * 判断参数 ErrorLevel 是否已赋值
                     * @return ErrorLevel 是否已赋值
                     * 
                     */
                    bool ErrorLevelHasBeenSet() const;

                    /**
                     * 获取Documentation link.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DocLink Documentation link.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDocLink() const;

                    /**
                     * 设置Documentation link.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _docLink Documentation link.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDocLink(const std::string& _docLink);

                    /**
                     * 判断参数 DocLink 是否已赋值
                     * @return DocLink 是否已赋值
                     * 
                     */
                    bool DocLinkHasBeenSet() const;

                    /**
                     * 获取Quick start guide.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FAQ Quick start guide.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFAQ() const;

                    /**
                     * 设置Quick start guide.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fAQ Quick start guide.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFAQ(const std::string& _fAQ);

                    /**
                     * 判断参数 FAQ 是否已赋值
                     * @return FAQ 是否已赋值
                     * 
                     */
                    bool FAQHasBeenSet() const;

                    /**
                     * 获取Reserved field 1.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReservedField Reserved field 1.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReservedField() const;

                    /**
                     * 设置Reserved field 1.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _reservedField Reserved field 1.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReservedField(const std::string& _reservedField);

                    /**
                     * 判断参数 ReservedField 是否已赋值
                     * @return ReservedField 是否已赋值
                     * 
                     */
                    bool ReservedFieldHasBeenSet() const;

                private:

                    /**
                     * Error description field.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_errorTip;
                    bool m_errorTipHasBeenSet;

                    /**
                     * Original exception message.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * Error level field.
ERROR
WARN
INFO
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_errorLevel;
                    bool m_errorLevelHasBeenSet;

                    /**
                     * Documentation link.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_docLink;
                    bool m_docLinkHasBeenSet;

                    /**
                     * Quick start guide.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fAQ;
                    bool m_fAQHasBeenSet;

                    /**
                     * Reserved field 1.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_reservedField;
                    bool m_reservedFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_ERRORINFO_H_
