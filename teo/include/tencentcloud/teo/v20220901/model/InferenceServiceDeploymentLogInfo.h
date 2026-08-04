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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESERVICEDEPLOYMENTLOGINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESERVICEDEPLOYMENTLOGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Reasoning service deployment log information.
                */
                class InferenceServiceDeploymentLogInfo : public AbstractModel
                {
                public:
                    InferenceServiceDeploymentLogInfo();
                    ~InferenceServiceDeploymentLogInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Message content of log messages.
                     * @return LogMessage Message content of log messages.
                     * 
                     */
                    std::string GetLogMessage() const;

                    /**
                     * 设置Message content of log messages.
                     * @param _logMessage Message content of log messages.
                     * 
                     */
                    void SetLogMessage(const std::string& _logMessage);

                    /**
                     * 判断参数 LogMessage 是否已赋值
                     * @return LogMessage 是否已赋值
                     * 
                     */
                    bool LogMessageHasBeenSet() const;

                    /**
                     * 获取Log generation time.
                     * @return Timestamp Log generation time.
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置Log generation time.
                     * @param _timestamp Log generation time.
                     * 
                     */
                    void SetTimestamp(const std::string& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                private:

                    /**
                     * Message content of log messages.
                     */
                    std::string m_logMessage;
                    bool m_logMessageHasBeenSet;

                    /**
                     * Log generation time.
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESERVICEDEPLOYMENTLOGINFO_H_
