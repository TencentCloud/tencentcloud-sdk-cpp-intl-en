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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_ERRORINFOITEM_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_ERRORINFOITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Task error information
                */
                class ErrorInfoItem : public AbstractModel
                {
                public:
                    ErrorInfoItem();
                    ~ErrorInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Error code
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Code Error code
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCode() const;

                    /**
                     * 设置Error code
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Code Error code
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取Solution
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Solution Solution
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSolution() const;

                    /**
                     * 设置Solution
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Solution Solution
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSolution(const std::string& _solution);

                    /**
                     * 判断参数 Solution 是否已赋值
                     * @return Solution 是否已赋值
                     */
                    bool SolutionHasBeenSet() const;

                    /**
                     * 获取Error log
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrorLog Error log
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetErrorLog() const;

                    /**
                     * 设置Error log
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ErrorLog Error log
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetErrorLog(const std::string& _errorLog);

                    /**
                     * 判断参数 ErrorLog 是否已赋值
                     * @return ErrorLog 是否已赋值
                     */
                    bool ErrorLogHasBeenSet() const;

                    /**
                     * 获取Help document
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HelpDoc Help document
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetHelpDoc() const;

                    /**
                     * 设置Help document
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param HelpDoc Help document
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHelpDoc(const std::string& _helpDoc);

                    /**
                     * 判断参数 HelpDoc 是否已赋值
                     * @return HelpDoc 是否已赋值
                     */
                    bool HelpDocHasBeenSet() const;

                private:

                    /**
                     * Error code
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * Solution
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * Error log
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_errorLog;
                    bool m_errorLogHasBeenSet;

                    /**
                     * Help document
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_helpDoc;
                    bool m_helpDocHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_ERRORINFOITEM_H_
