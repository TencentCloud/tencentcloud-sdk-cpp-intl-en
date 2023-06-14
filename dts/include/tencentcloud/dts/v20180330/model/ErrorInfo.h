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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_ERRORINFO_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_ERRORINFO_H_

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
        namespace V20180330
        {
            namespace Model
            {
                /**
                * Message and prompt for migration task error
                */
                class ErrorInfo : public AbstractModel
                {
                public:
                    ErrorInfo();
                    ~ErrorInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specific error log, including error code and error message
                     * @return ErrorLog Specific error log, including error code and error message
                     * 
                     */
                    std::string GetErrorLog() const;

                    /**
                     * 设置Specific error log, including error code and error message
                     * @param _errorLog Specific error log, including error code and error message
                     * 
                     */
                    void SetErrorLog(const std::string& _errorLog);

                    /**
                     * 判断参数 ErrorLog 是否已赋值
                     * @return ErrorLog 是否已赋值
                     * 
                     */
                    bool ErrorLogHasBeenSet() const;

                    /**
                     * 获取Help document URL corresponding to error
                     * @return HelpDoc Help document URL corresponding to error
                     * 
                     */
                    std::string GetHelpDoc() const;

                    /**
                     * 设置Help document URL corresponding to error
                     * @param _helpDoc Help document URL corresponding to error
                     * 
                     */
                    void SetHelpDoc(const std::string& _helpDoc);

                    /**
                     * 判断参数 HelpDoc 是否已赋值
                     * @return HelpDoc 是否已赋值
                     * 
                     */
                    bool HelpDocHasBeenSet() const;

                private:

                    /**
                     * Specific error log, including error code and error message
                     */
                    std::string m_errorLog;
                    bool m_errorLogHasBeenSet;

                    /**
                     * Help document URL corresponding to error
                     */
                    std::string m_helpDoc;
                    bool m_helpDocHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_ERRORINFO_H_
