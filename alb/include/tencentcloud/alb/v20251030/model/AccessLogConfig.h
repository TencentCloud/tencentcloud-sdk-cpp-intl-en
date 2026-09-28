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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_ACCESSLOGCONFIG_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_ACCESSLOGCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * Access log configuration.
                */
                class AccessLogConfig : public AbstractModel
                {
                public:
                    AccessLogConfig();
                    ~AccessLogConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Log set ID of Cloud Log Service (CLS) for CLB
                     * @return LogSetId Log set ID of Cloud Log Service (CLS) for CLB
                     * 
                     */
                    std::string GetLogSetId() const;

                    /**
                     * 设置Log set ID of Cloud Log Service (CLS) for CLB
                     * @param _logSetId Log set ID of Cloud Log Service (CLS) for CLB
                     * 
                     */
                    void SetLogSetId(const std::string& _logSetId);

                    /**
                     * 判断参数 LogSetId 是否已赋值
                     * @return LogSetId 是否已赋值
                     * 
                     */
                    bool LogSetIdHasBeenSet() const;

                    /**
                     * 获取Log topic ID of Cloud Log Service (CLS) for CLB
                     * @return LogTopicId Log topic ID of Cloud Log Service (CLS) for CLB
                     * 
                     */
                    std::string GetLogTopicId() const;

                    /**
                     * 设置Log topic ID of Cloud Log Service (CLS) for CLB
                     * @param _logTopicId Log topic ID of Cloud Log Service (CLS) for CLB
                     * 
                     */
                    void SetLogTopicId(const std::string& _logTopicId);

                    /**
                     * 判断参数 LogTopicId 是否已赋值
                     * @return LogTopicId 是否已赋值
                     * 
                     */
                    bool LogTopicIdHasBeenSet() const;

                private:

                    /**
                     * Log set ID of Cloud Log Service (CLS) for CLB
                     */
                    std::string m_logSetId;
                    bool m_logSetIdHasBeenSet;

                    /**
                     * Log topic ID of Cloud Log Service (CLS) for CLB
                     */
                    std::string m_logTopicId;
                    bool m_logTopicIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_ACCESSLOGCONFIG_H_
