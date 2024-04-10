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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHLOGERRORS_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHLOGERRORS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
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
                     * 获取Log topic IDNote: This field may return null, indicating that no valid values can be obtained.
                     * @return TopicId Log topic IDNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic IDNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _topicId Log topic IDNote: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Error MessageNote: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrorMsg Error MessageNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 设置Error MessageNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _errorMsg Error MessageNote: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Error CodeNote: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrorCodeStr Error CodeNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetErrorCodeStr() const;

                    /**
                     * 设置Error CodeNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _errorCodeStr Error CodeNote: This field may return null, indicating that no valid values can be obtained.
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
                     * Log topic IDNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Error MessageNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * Error CodeNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_errorCodeStr;
                    bool m_errorCodeStrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHLOGERRORS_H_
