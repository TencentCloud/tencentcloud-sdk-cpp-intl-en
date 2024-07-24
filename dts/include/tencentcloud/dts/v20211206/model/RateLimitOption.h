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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_RATELIMITOPTION_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_RATELIMITOPTION_H_

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
                * Speed limit details of migration and sync tasks
                */
                class RateLimitOption : public AbstractModel
                {
                public:
                    RateLimitOption();
                    ~RateLimitOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The number of full export threads currently in effect. The value of this field can be adjusted when configuring the task. Note: If it is not set or set to 0, it means the current value is maintained. The maximum value is 16.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CurrentDumpThread The number of full export threads currently in effect. The value of this field can be adjusted when configuring the task. Note: If it is not set or set to 0, it means the current value is maintained. The maximum value is 16.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCurrentDumpThread() const;

                    /**
                     * 设置The number of full export threads currently in effect. The value of this field can be adjusted when configuring the task. Note: If it is not set or set to 0, it means the current value is maintained. The maximum value is 16.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _currentDumpThread The number of full export threads currently in effect. The value of this field can be adjusted when configuring the task. Note: If it is not set or set to 0, it means the current value is maintained. The maximum value is 16.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCurrentDumpThread(const int64_t& _currentDumpThread);

                    /**
                     * 判断参数 CurrentDumpThread 是否已赋值
                     * @return CurrentDumpThread 是否已赋值
                     * 
                     */
                    bool CurrentDumpThreadHasBeenSet() const;

                    /**
                     * 获取The default number of full export threads. This field is only meaningful in the output parameter.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DefaultDumpThread The default number of full export threads. This field is only meaningful in the output parameter.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDefaultDumpThread() const;

                    /**
                     * 设置The default number of full export threads. This field is only meaningful in the output parameter.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _defaultDumpThread The default number of full export threads. This field is only meaningful in the output parameter.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDefaultDumpThread(const int64_t& _defaultDumpThread);

                    /**
                     * 判断参数 DefaultDumpThread 是否已赋值
                     * @return DefaultDumpThread 是否已赋值
                     * 
                     */
                    bool DefaultDumpThreadHasBeenSet() const;

                    /**
                     * 获取The full export Rps currently in effect. The value of this field can be adjusted when configuring the task. Note: If it is not set or set to 0, it means the current value is maintained. The maximum value is 50,000,000.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CurrentDumpRps The full export Rps currently in effect. The value of this field can be adjusted when configuring the task. Note: If it is not set or set to 0, it means the current value is maintained. The maximum value is 50,000,000.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCurrentDumpRps() const;

                    /**
                     * 设置The full export Rps currently in effect. The value of this field can be adjusted when configuring the task. Note: If it is not set or set to 0, it means the current value is maintained. The maximum value is 50,000,000.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _currentDumpRps The full export Rps currently in effect. The value of this field can be adjusted when configuring the task. Note: If it is not set or set to 0, it means the current value is maintained. The maximum value is 50,000,000.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCurrentDumpRps(const int64_t& _currentDumpRps);

                    /**
                     * 判断参数 CurrentDumpRps 是否已赋值
                     * @return CurrentDumpRps 是否已赋值
                     * 
                     */
                    bool CurrentDumpRpsHasBeenSet() const;

                    /**
                     * 获取The default full export Rps. This field is only meaningful in the output parameter.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DefaultDumpRps The default full export Rps. This field is only meaningful in the output parameter.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDefaultDumpRps() const;

                    /**
                     * 设置The default full export Rps. This field is only meaningful in the output parameter.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _defaultDumpRps The default full export Rps. This field is only meaningful in the output parameter.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDefaultDumpRps(const int64_t& _defaultDumpRps);

                    /**
                     * 判断参数 DefaultDumpRps 是否已赋值
                     * @return DefaultDumpRps 是否已赋值
                     * 
                     */
                    bool DefaultDumpRpsHasBeenSet() const;

                    /**
                     * 获取The number of full import threads currently in effect. The value of this field can be adjusted when configuring the task. Note: If it is not set or set to 0, it means the current value is maintained. The maximum value is 16.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CurrentLoadThread The number of full import threads currently in effect. The value of this field can be adjusted when configuring the task. Note: If it is not set or set to 0, it means the current value is maintained. The maximum value is 16.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCurrentLoadThread() const;

                    /**
                     * 设置The number of full import threads currently in effect. The value of this field can be adjusted when configuring the task. Note: If it is not set or set to 0, it means the current value is maintained. The maximum value is 16.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _currentLoadThread The number of full import threads currently in effect. The value of this field can be adjusted when configuring the task. Note: If it is not set or set to 0, it means the current value is maintained. The maximum value is 16.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCurrentLoadThread(const int64_t& _currentLoadThread);

                    /**
                     * 判断参数 CurrentLoadThread 是否已赋值
                     * @return CurrentLoadThread 是否已赋值
                     * 
                     */
                    bool CurrentLoadThreadHasBeenSet() const;

                    /**
                     * 获取The default number of full import threads. This field is only meaningful in the output parameter.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DefaultLoadThread The default number of full import threads. This field is only meaningful in the output parameter.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDefaultLoadThread() const;

                    /**
                     * 设置The default number of full import threads. This field is only meaningful in the output parameter.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _defaultLoadThread The default number of full import threads. This field is only meaningful in the output parameter.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDefaultLoadThread(const int64_t& _defaultLoadThread);

                    /**
                     * 判断参数 DefaultLoadThread 是否已赋值
                     * @return DefaultLoadThread 是否已赋值
                     * 
                     */
                    bool DefaultLoadThreadHasBeenSet() const;

                    /**
                     * 获取The full import Rps currently in effect. The value of this field can be adjusted when configuring the task. Note: If it is not set or set to 0, it means the current value is maintained. The maximum value is 50,000,000.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CurrentLoadRps The full import Rps currently in effect. The value of this field can be adjusted when configuring the task. Note: If it is not set or set to 0, it means the current value is maintained. The maximum value is 50,000,000.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCurrentLoadRps() const;

                    /**
                     * 设置The full import Rps currently in effect. The value of this field can be adjusted when configuring the task. Note: If it is not set or set to 0, it means the current value is maintained. The maximum value is 50,000,000.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _currentLoadRps The full import Rps currently in effect. The value of this field can be adjusted when configuring the task. Note: If it is not set or set to 0, it means the current value is maintained. The maximum value is 50,000,000.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCurrentLoadRps(const int64_t& _currentLoadRps);

                    /**
                     * 判断参数 CurrentLoadRps 是否已赋值
                     * @return CurrentLoadRps 是否已赋值
                     * 
                     */
                    bool CurrentLoadRpsHasBeenSet() const;

                    /**
                     * 获取The default full import Rps. This field is only meaningful in the output parameter.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DefaultLoadRps The default full import Rps. This field is only meaningful in the output parameter.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDefaultLoadRps() const;

                    /**
                     * 设置The default full import Rps. This field is only meaningful in the output parameter.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _defaultLoadRps The default full import Rps. This field is only meaningful in the output parameter.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDefaultLoadRps(const int64_t& _defaultLoadRps);

                    /**
                     * 判断参数 DefaultLoadRps 是否已赋值
                     * @return DefaultLoadRps 是否已赋值
                     * 
                     */
                    bool DefaultLoadRpsHasBeenSet() const;

                    /**
                     * 获取The number of incremental import threads currently in effect. The value of this field can be adjusted when configuring the task. Note: If it is not set or set to 0, it means the current value is maintained. The maximum value is 128.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CurrentSinkerThread The number of incremental import threads currently in effect. The value of this field can be adjusted when configuring the task. Note: If it is not set or set to 0, it means the current value is maintained. The maximum value is 128.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCurrentSinkerThread() const;

                    /**
                     * 设置The number of incremental import threads currently in effect. The value of this field can be adjusted when configuring the task. Note: If it is not set or set to 0, it means the current value is maintained. The maximum value is 128.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _currentSinkerThread The number of incremental import threads currently in effect. The value of this field can be adjusted when configuring the task. Note: If it is not set or set to 0, it means the current value is maintained. The maximum value is 128.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCurrentSinkerThread(const int64_t& _currentSinkerThread);

                    /**
                     * 判断参数 CurrentSinkerThread 是否已赋值
                     * @return CurrentSinkerThread 是否已赋值
                     * 
                     */
                    bool CurrentSinkerThreadHasBeenSet() const;

                    /**
                     * 获取The default number of incremental import threads. This field is only meaningful in the output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DefaultSinkerThread The default number of incremental import threads. This field is only meaningful in the output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDefaultSinkerThread() const;

                    /**
                     * 设置The default number of incremental import threads. This field is only meaningful in the output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _defaultSinkerThread The default number of incremental import threads. This field is only meaningful in the output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDefaultSinkerThread(const int64_t& _defaultSinkerThread);

                    /**
                     * 判断参数 DefaultSinkerThread 是否已赋值
                     * @return DefaultSinkerThread 是否已赋值
                     * 
                     */
                    bool DefaultSinkerThreadHasBeenSet() const;

                    /**
                     * 获取enum:"no"/"yes", no: the user has not set a speed limit; yes: a speed limit has been set. This field is only meaningful in the output parameter.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HasUserSetRateLimit enum:"no"/"yes", no: the user has not set a speed limit; yes: a speed limit has been set. This field is only meaningful in the output parameter.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHasUserSetRateLimit() const;

                    /**
                     * 设置enum:"no"/"yes", no: the user has not set a speed limit; yes: a speed limit has been set. This field is only meaningful in the output parameter.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hasUserSetRateLimit enum:"no"/"yes", no: the user has not set a speed limit; yes: a speed limit has been set. This field is only meaningful in the output parameter.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHasUserSetRateLimit(const std::string& _hasUserSetRateLimit);

                    /**
                     * 判断参数 HasUserSetRateLimit 是否已赋值
                     * @return HasUserSetRateLimit 是否已赋值
                     * 
                     */
                    bool HasUserSetRateLimitHasBeenSet() const;

                private:

                    /**
                     * The number of full export threads currently in effect. The value of this field can be adjusted when configuring the task. Note: If it is not set or set to 0, it means the current value is maintained. The maximum value is 16.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_currentDumpThread;
                    bool m_currentDumpThreadHasBeenSet;

                    /**
                     * The default number of full export threads. This field is only meaningful in the output parameter.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_defaultDumpThread;
                    bool m_defaultDumpThreadHasBeenSet;

                    /**
                     * The full export Rps currently in effect. The value of this field can be adjusted when configuring the task. Note: If it is not set or set to 0, it means the current value is maintained. The maximum value is 50,000,000.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_currentDumpRps;
                    bool m_currentDumpRpsHasBeenSet;

                    /**
                     * The default full export Rps. This field is only meaningful in the output parameter.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_defaultDumpRps;
                    bool m_defaultDumpRpsHasBeenSet;

                    /**
                     * The number of full import threads currently in effect. The value of this field can be adjusted when configuring the task. Note: If it is not set or set to 0, it means the current value is maintained. The maximum value is 16.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_currentLoadThread;
                    bool m_currentLoadThreadHasBeenSet;

                    /**
                     * The default number of full import threads. This field is only meaningful in the output parameter.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_defaultLoadThread;
                    bool m_defaultLoadThreadHasBeenSet;

                    /**
                     * The full import Rps currently in effect. The value of this field can be adjusted when configuring the task. Note: If it is not set or set to 0, it means the current value is maintained. The maximum value is 50,000,000.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_currentLoadRps;
                    bool m_currentLoadRpsHasBeenSet;

                    /**
                     * The default full import Rps. This field is only meaningful in the output parameter.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_defaultLoadRps;
                    bool m_defaultLoadRpsHasBeenSet;

                    /**
                     * The number of incremental import threads currently in effect. The value of this field can be adjusted when configuring the task. Note: If it is not set or set to 0, it means the current value is maintained. The maximum value is 128.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_currentSinkerThread;
                    bool m_currentSinkerThreadHasBeenSet;

                    /**
                     * The default number of incremental import threads. This field is only meaningful in the output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_defaultSinkerThread;
                    bool m_defaultSinkerThreadHasBeenSet;

                    /**
                     * enum:"no"/"yes", no: the user has not set a speed limit; yes: a speed limit has been set. This field is only meaningful in the output parameter.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hasUserSetRateLimit;
                    bool m_hasUserSetRateLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_RATELIMITOPTION_H_
