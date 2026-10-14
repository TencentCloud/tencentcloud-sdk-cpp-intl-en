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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_SESSIONCONFIG_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_SESSIONCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Session parameter
                */
                class SessionConfig : public AbstractModel
                {
                public:
                    SessionConfig();
                    ~SessionConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取session source. Valid values: 'HEADER', 'COOKIE', 'QUERY_STRING'
                     * @return SessionSource session source. Valid values: 'HEADER', 'COOKIE', 'QUERY_STRING'
                     * 
                     */
                    std::string GetSessionSource() const;

                    /**
                     * 设置session source. Valid values: 'HEADER', 'COOKIE', 'QUERY_STRING'
                     * @param _sessionSource session source. Valid values: 'HEADER', 'COOKIE', 'QUERY_STRING'
                     * 
                     */
                    void SetSessionSource(const std::string& _sessionSource);

                    /**
                     * 判断参数 SessionSource 是否已赋值
                     * @return SessionSource 是否已赋值
                     * 
                     */
                    bool SessionSourceHasBeenSet() const;

                    /**
                     * 获取session name. It must start with a letter. Other characters can consist of digits, letters, underscores, and hyphens. Length: 5-40 characters.
                     * @return SessionName session name. It must start with a letter. Other characters can consist of digits, letters, underscores, and hyphens. Length: 5-40 characters.
                     * 
                     */
                    std::string GetSessionName() const;

                    /**
                     * 设置session name. It must start with a letter. Other characters can consist of digits, letters, underscores, and hyphens. Length: 5-40 characters.
                     * @param _sessionName session name. It must start with a letter. Other characters can consist of digits, letters, underscores, and hyphens. Length: 5-40 characters.
                     * 
                     */
                    void SetSessionName(const std::string& _sessionName);

                    /**
                     * 判断参数 SessionName 是否已赋值
                     * @return SessionName 是否已赋值
                     * 
                     */
                    bool SessionNameHasBeenSet() const;

                    /**
                     * 获取Maximum concurrent sessions
                     * @return MaximumConcurrencySessionPerInstance Maximum concurrent sessions
                     * 
                     */
                    uint64_t GetMaximumConcurrencySessionPerInstance() const;

                    /**
                     * 设置Maximum concurrent sessions
                     * @param _maximumConcurrencySessionPerInstance Maximum concurrent sessions
                     * 
                     */
                    void SetMaximumConcurrencySessionPerInstance(const uint64_t& _maximumConcurrencySessionPerInstance);

                    /**
                     * 判断参数 MaximumConcurrencySessionPerInstance 是否已赋值
                     * @return MaximumConcurrencySessionPerInstance 是否已赋值
                     * 
                     */
                    bool MaximumConcurrencySessionPerInstanceHasBeenSet() const;

                    /**
                     * 获取Lifecycle
                     * @return MaximumTTLInSeconds Lifecycle
                     * 
                     */
                    uint64_t GetMaximumTTLInSeconds() const;

                    /**
                     * 设置Lifecycle
                     * @param _maximumTTLInSeconds Lifecycle
                     * 
                     */
                    void SetMaximumTTLInSeconds(const uint64_t& _maximumTTLInSeconds);

                    /**
                     * 判断参数 MaximumTTLInSeconds 是否已赋值
                     * @return MaximumTTLInSeconds 是否已赋值
                     * 
                     */
                    bool MaximumTTLInSecondsHasBeenSet() const;

                    /**
                     * 获取Idle duration
                     * @return MaximumIdleTimeInSeconds Idle duration
                     * 
                     */
                    uint64_t GetMaximumIdleTimeInSeconds() const;

                    /**
                     * 设置Idle duration
                     * @param _maximumIdleTimeInSeconds Idle duration
                     * 
                     */
                    void SetMaximumIdleTimeInSeconds(const uint64_t& _maximumIdleTimeInSeconds);

                    /**
                     * 判断参数 MaximumIdleTimeInSeconds 是否已赋值
                     * @return MaximumIdleTimeInSeconds 是否已赋值
                     * 
                     */
                    bool MaximumIdleTimeInSecondsHasBeenSet() const;

                    /**
                     * 获取Path information corresponding to the session
                     * @return SessionPath Path information corresponding to the session
                     * 
                     */
                    std::string GetSessionPath() const;

                    /**
                     * 设置Path information corresponding to the session
                     * @param _sessionPath Path information corresponding to the session
                     * 
                     */
                    void SetSessionPath(const std::string& _sessionPath);

                    /**
                     * 判断参数 SessionPath 是否已赋值
                     * @return SessionPath 是否已赋值
                     * 
                     */
                    bool SessionPathHasBeenSet() const;

                    /**
                     * 获取Automatically destroy FATAL and auto-pause PAUSE. This only occurs when security isolation is started.
                     * @return IdleTimeoutStrategy Automatically destroy FATAL and auto-pause PAUSE. This only occurs when security isolation is started.
                     * 
                     */
                    std::string GetIdleTimeoutStrategy() const;

                    /**
                     * 设置Automatically destroy FATAL and auto-pause PAUSE. This only occurs when security isolation is started.
                     * @param _idleTimeoutStrategy Automatically destroy FATAL and auto-pause PAUSE. This only occurs when security isolation is started.
                     * 
                     */
                    void SetIdleTimeoutStrategy(const std::string& _idleTimeoutStrategy);

                    /**
                     * 判断参数 IdleTimeoutStrategy 是否已赋值
                     * @return IdleTimeoutStrategy 是否已赋值
                     * 
                     */
                    bool IdleTimeoutStrategyHasBeenSet() const;

                private:

                    /**
                     * session source. Valid values: 'HEADER', 'COOKIE', 'QUERY_STRING'
                     */
                    std::string m_sessionSource;
                    bool m_sessionSourceHasBeenSet;

                    /**
                     * session name. It must start with a letter. Other characters can consist of digits, letters, underscores, and hyphens. Length: 5-40 characters.
                     */
                    std::string m_sessionName;
                    bool m_sessionNameHasBeenSet;

                    /**
                     * Maximum concurrent sessions
                     */
                    uint64_t m_maximumConcurrencySessionPerInstance;
                    bool m_maximumConcurrencySessionPerInstanceHasBeenSet;

                    /**
                     * Lifecycle
                     */
                    uint64_t m_maximumTTLInSeconds;
                    bool m_maximumTTLInSecondsHasBeenSet;

                    /**
                     * Idle duration
                     */
                    uint64_t m_maximumIdleTimeInSeconds;
                    bool m_maximumIdleTimeInSecondsHasBeenSet;

                    /**
                     * Path information corresponding to the session
                     */
                    std::string m_sessionPath;
                    bool m_sessionPathHasBeenSet;

                    /**
                     * Automatically destroy FATAL and auto-pause PAUSE. This only occurs when security isolation is started.
                     */
                    std::string m_idleTimeoutStrategy;
                    bool m_idleTimeoutStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_SESSIONCONFIG_H_
