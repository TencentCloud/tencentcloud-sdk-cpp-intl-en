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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_PREVIEWLOGSTATISTIC_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_PREVIEWLOGSTATISTIC_H_

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
                * Preview data details
                */
                class PreviewLogStatistic : public AbstractModel
                {
                public:
                    PreviewLogStatistic();
                    ~PreviewLogStatistic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Log content
                     * @return LogContent Log content
                     * 
                     */
                    std::string GetLogContent() const;

                    /**
                     * 设置Log content
                     * @param _logContent Log content
                     * 
                     */
                    void SetLogContent(const std::string& _logContent);

                    /**
                     * 判断参数 LogContent 是否已赋值
                     * @return LogContent 是否已赋值
                     * 
                     */
                    bool LogContentHasBeenSet() const;

                    /**
                     * 获取Line number
                     * @return LineNum Line number
                     * 
                     */
                    int64_t GetLineNum() const;

                    /**
                     * 设置Line number
                     * @param _lineNum Line number
                     * 
                     */
                    void SetLineNum(const int64_t& _lineNum);

                    /**
                     * 判断参数 LineNum 是否已赋值
                     * @return LineNum 是否已赋值
                     * 
                     */
                    bool LineNumHasBeenSet() const;

                    /**
                     * 获取Target log topic
                     * @return DstTopicId Target log topic
                     * 
                     */
                    std::string GetDstTopicId() const;

                    /**
                     * 设置Target log topic
                     * @param _dstTopicId Target log topic
                     * 
                     */
                    void SetDstTopicId(const std::string& _dstTopicId);

                    /**
                     * 判断参数 DstTopicId 是否已赋值
                     * @return DstTopicId 是否已赋值
                     * 
                     */
                    bool DstTopicIdHasBeenSet() const;

                    /**
                     * 获取Error code. An empty string "" indicates no error.
                     * @return FailReason Error code. An empty string "" indicates no error.
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置Error code. An empty string "" indicates no error.
                     * @param _failReason Error code. An empty string "" indicates no error.
                     * 
                     */
                    void SetFailReason(const std::string& _failReason);

                    /**
                     * 判断参数 FailReason 是否已赋值
                     * @return FailReason 是否已赋值
                     * 
                     */
                    bool FailReasonHasBeenSet() const;

                    /**
                     * 获取Log timestamp
                     * @return Time Log timestamp
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置Log timestamp
                     * @param _time Log timestamp
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取Target topic name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DstTopicName Target topic name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDstTopicName() const;

                    /**
                     * 设置Target topic name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dstTopicName Target topic name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDstTopicName(const std::string& _dstTopicName);

                    /**
                     * 判断参数 DstTopicName 是否已赋值
                     * @return DstTopicName 是否已赋值
                     * 
                     */
                    bool DstTopicNameHasBeenSet() const;

                private:

                    /**
                     * Log content
                     */
                    std::string m_logContent;
                    bool m_logContentHasBeenSet;

                    /**
                     * Line number
                     */
                    int64_t m_lineNum;
                    bool m_lineNumHasBeenSet;

                    /**
                     * Target log topic
                     */
                    std::string m_dstTopicId;
                    bool m_dstTopicIdHasBeenSet;

                    /**
                     * Error code. An empty string "" indicates no error.
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                    /**
                     * Log timestamp
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Target topic name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dstTopicName;
                    bool m_dstTopicNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_PREVIEWLOGSTATISTIC_H_
