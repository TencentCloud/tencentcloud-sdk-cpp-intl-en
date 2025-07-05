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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_FAILMESSAGE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_FAILMESSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Error Handling Result Information
                */
                class FailMessage : public AbstractModel
                {
                public:
                    FailMessage();
                    ~FailMessage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique Data Identifier
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Key Unique Data Identifier
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Unique Data Identifier
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _key Unique Data Identifier
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Failure Reason
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ErrorMessage Failure Reason
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置Failure Reason
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _errorMessage Failure Reason
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                private:

                    /**
                     * Unique Data Identifier
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Failure Reason
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_FAILMESSAGE_H_
