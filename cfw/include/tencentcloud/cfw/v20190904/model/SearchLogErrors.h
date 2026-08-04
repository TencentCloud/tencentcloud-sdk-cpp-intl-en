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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_SEARCHLOGERRORS_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_SEARCHLOGERRORS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * Error information for multi-log topic search
                */
                class SearchLogErrors : public AbstractModel
                {
                public:
                    SearchLogErrors();
                    ~SearchLogErrors() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Log topic ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TopicId Log topic ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _topicId Log topic ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrorMsg Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 设置Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _errorMsg Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetErrorMsg(const std::string& _errorMsg);

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                    /**
                     * 获取Error code.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrorCodeStr Error code.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetErrorCodeStr() const;

                    /**
                     * 设置Error code.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _errorCodeStr Error code.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetErrorCodeStr(const std::string& _errorCodeStr);

                    /**
                     * 判断参数 ErrorCodeStr 是否已赋值
                     * @return ErrorCodeStr 是否已赋值
                     * 
                     */
                    bool ErrorCodeStrHasBeenSet() const;

                private:

                    /**
                     * Log topic ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * Error code.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_errorCodeStr;
                    bool m_errorCodeStrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_SEARCHLOGERRORS_H_
