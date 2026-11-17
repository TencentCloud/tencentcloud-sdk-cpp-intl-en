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
                     * 获取Currently effective number of threads for full export. You can adjust this field value when the task is configured. Note: If it is not set or set to 0, the current value is kept. The maximum value is 16.
                     * @return CurrentDumpThread Currently effective number of threads for full export. You can adjust this field value when the task is configured. Note: If it is not set or set to 0, the current value is kept. The maximum value is 16.
                     * 
                     */
                    int64_t GetCurrentDumpThread() const;

                    /**
                     * 设置Currently effective number of threads for full export. You can adjust this field value when the task is configured. Note: If it is not set or set to 0, the current value is kept. The maximum value is 16.
                     * @param _currentDumpThread Currently effective number of threads for full export. You can adjust this field value when the task is configured. Note: If it is not set or set to 0, the current value is kept. The maximum value is 16.
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
                     * 获取The default number of threads for full export. This field is only meaningful in the output parameters.
                     * @return DefaultDumpThread The default number of threads for full export. This field is only meaningful in the output parameters.
                     * 
                     */
                    int64_t GetDefaultDumpThread() const;

                    /**
                     * 设置The default number of threads for full export. This field is only meaningful in the output parameters.
                     * @param _defaultDumpThread The default number of threads for full export. This field is only meaningful in the output parameters.
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
                     * 获取The currently effective Rps for full export. You can adjust this field value when configuring the task. Note: If not set or set to 0, it indicates to keep the current value. The maximum value is 50000000.
                     * @return CurrentDumpRps The currently effective Rps for full export. You can adjust this field value when configuring the task. Note: If not set or set to 0, it indicates to keep the current value. The maximum value is 50000000.
                     * 
                     */
                    int64_t GetCurrentDumpRps() const;

                    /**
                     * 设置The currently effective Rps for full export. You can adjust this field value when configuring the task. Note: If not set or set to 0, it indicates to keep the current value. The maximum value is 50000000.
                     * @param _currentDumpRps The currently effective Rps for full export. You can adjust this field value when configuring the task. Note: If not set or set to 0, it indicates to keep the current value. The maximum value is 50000000.
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
                     * 获取The default Rps for full export. This field is only meaningful in the output parameters.
                     * @return DefaultDumpRps The default Rps for full export. This field is only meaningful in the output parameters.
                     * 
                     */
                    int64_t GetDefaultDumpRps() const;

                    /**
                     * 设置The default Rps for full export. This field is only meaningful in the output parameters.
                     * @param _defaultDumpRps The default Rps for full export. This field is only meaningful in the output parameters.
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
                     * 获取Currently effective number of threads for full import. You can adjust this field value when the task is configured. Note: If it is not set or set to 0, the current value is kept. The maximum value is 16.
                     * @return CurrentLoadThread Currently effective number of threads for full import. You can adjust this field value when the task is configured. Note: If it is not set or set to 0, the current value is kept. The maximum value is 16.
                     * 
                     */
                    int64_t GetCurrentLoadThread() const;

                    /**
                     * 设置Currently effective number of threads for full import. You can adjust this field value when the task is configured. Note: If it is not set or set to 0, the current value is kept. The maximum value is 16.
                     * @param _currentLoadThread Currently effective number of threads for full import. You can adjust this field value when the task is configured. Note: If it is not set or set to 0, the current value is kept. The maximum value is 16.
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
                     * 获取The default number of threads for full import. This field is only meaningful in the output parameters.
                     * @return DefaultLoadThread The default number of threads for full import. This field is only meaningful in the output parameters.
                     * 
                     */
                    int64_t GetDefaultLoadThread() const;

                    /**
                     * 设置The default number of threads for full import. This field is only meaningful in the output parameters.
                     * @param _defaultLoadThread The default number of threads for full import. This field is only meaningful in the output parameters.
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
                     * 获取The currently effective Rps for full import. You can adjust this field value when configuring the task. Note: If not set or set to 0, it indicates to keep the current value. The maximum value is 50000000.	
                     * @return CurrentLoadRps The currently effective Rps for full import. You can adjust this field value when configuring the task. Note: If not set or set to 0, it indicates to keep the current value. The maximum value is 50000000.	
                     * 
                     */
                    int64_t GetCurrentLoadRps() const;

                    /**
                     * 设置The currently effective Rps for full import. You can adjust this field value when configuring the task. Note: If not set or set to 0, it indicates to keep the current value. The maximum value is 50000000.	
                     * @param _currentLoadRps The currently effective Rps for full import. You can adjust this field value when configuring the task. Note: If not set or set to 0, it indicates to keep the current value. The maximum value is 50000000.	
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
                     * 获取Default full import Rps. This field is only meaningful in the output parameter.	
                     * @return DefaultLoadRps Default full import Rps. This field is only meaningful in the output parameter.	
                     * 
                     */
                    int64_t GetDefaultLoadRps() const;

                    /**
                     * 设置Default full import Rps. This field is only meaningful in the output parameter.	
                     * @param _defaultLoadRps Default full import Rps. This field is only meaningful in the output parameter.	
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
                     * 获取The currently effective number of threads for incremental import. You can adjust this field value when configuring the task. Note: If not set or set to 0, it indicates to keep the current value. The maximum value is 128.
                     * @return CurrentSinkerThread The currently effective number of threads for incremental import. You can adjust this field value when configuring the task. Note: If not set or set to 0, it indicates to keep the current value. The maximum value is 128.
                     * 
                     */
                    int64_t GetCurrentSinkerThread() const;

                    /**
                     * 设置The currently effective number of threads for incremental import. You can adjust this field value when configuring the task. Note: If not set or set to 0, it indicates to keep the current value. The maximum value is 128.
                     * @param _currentSinkerThread The currently effective number of threads for incremental import. You can adjust this field value when configuring the task. Note: If not set or set to 0, it indicates to keep the current value. The maximum value is 128.
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
                     * 获取The default number of threads for incremental import. This field is only meaningful in the output parameters.
                     * @return DefaultSinkerThread The default number of threads for incremental import. This field is only meaningful in the output parameters.
                     * 
                     */
                    int64_t GetDefaultSinkerThread() const;

                    /**
                     * 设置The default number of threads for incremental import. This field is only meaningful in the output parameters.
                     * @param _defaultSinkerThread The default number of threads for incremental import. This field is only meaningful in the output parameters.
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
                     * 获取enum: "no"/"yes". no indicates that the user has not set a speed limit, while yes indicates that a speed limit has been set. This field is only meaningful in the output parameters.
                     * @return HasUserSetRateLimit enum: "no"/"yes". no indicates that the user has not set a speed limit, while yes indicates that a speed limit has been set. This field is only meaningful in the output parameters.
                     * 
                     */
                    std::string GetHasUserSetRateLimit() const;

                    /**
                     * 设置enum: "no"/"yes". no indicates that the user has not set a speed limit, while yes indicates that a speed limit has been set. This field is only meaningful in the output parameters.
                     * @param _hasUserSetRateLimit enum: "no"/"yes". no indicates that the user has not set a speed limit, while yes indicates that a speed limit has been set. This field is only meaningful in the output parameters.
                     * 
                     */
                    void SetHasUserSetRateLimit(const std::string& _hasUserSetRateLimit);

                    /**
                     * 判断参数 HasUserSetRateLimit 是否已赋值
                     * @return HasUserSetRateLimit 是否已赋值
                     * 
                     */
                    bool HasUserSetRateLimitHasBeenSet() const;

                    /**
                     * 获取Default full export BPS, currently supported only for MongoDB links.
                     * @return DefaultDumpBps Default full export BPS, currently supported only for MongoDB links.
                     * 
                     */
                    int64_t GetDefaultDumpBps() const;

                    /**
                     * 设置Default full export BPS, currently supported only for MongoDB links.
                     * @param _defaultDumpBps Default full export BPS, currently supported only for MongoDB links.
                     * 
                     */
                    void SetDefaultDumpBps(const int64_t& _defaultDumpBps);

                    /**
                     * 判断参数 DefaultDumpBps 是否已赋值
                     * @return DefaultDumpBps 是否已赋值
                     * 
                     */
                    bool DefaultDumpBpsHasBeenSet() const;

                    /**
                     * 获取Incremental import RPS, currently supported only for MongoDB links.
                     * @return CurrentSinkerRps Incremental import RPS, currently supported only for MongoDB links.
                     * 
                     */
                    int64_t GetCurrentSinkerRps() const;

                    /**
                     * 设置Incremental import RPS, currently supported only for MongoDB links.
                     * @param _currentSinkerRps Incremental import RPS, currently supported only for MongoDB links.
                     * 
                     */
                    void SetCurrentSinkerRps(const int64_t& _currentSinkerRps);

                    /**
                     * 判断参数 CurrentSinkerRps 是否已赋值
                     * @return CurrentSinkerRps 是否已赋值
                     * 
                     */
                    bool CurrentSinkerRpsHasBeenSet() const;

                    /**
                     * 获取Default incremental import RPS, currently supported only for MongoDB links.
                     * @return DefaultSinkerRps Default incremental import RPS, currently supported only for MongoDB links.
                     * 
                     */
                    int64_t GetDefaultSinkerRps() const;

                    /**
                     * 设置Default incremental import RPS, currently supported only for MongoDB links.
                     * @param _defaultSinkerRps Default incremental import RPS, currently supported only for MongoDB links.
                     * 
                     */
                    void SetDefaultSinkerRps(const int64_t& _defaultSinkerRps);

                    /**
                     * 判断参数 DefaultSinkerRps 是否已赋值
                     * @return DefaultSinkerRps 是否已赋值
                     * 
                     */
                    bool DefaultSinkerRpsHasBeenSet() const;

                    /**
                     * 获取Current import BPS. Currently, it is only used for Redis.
                     * @return CurrentLoadBps Current import BPS. Currently, it is only used for Redis.
                     * 
                     */
                    int64_t GetCurrentLoadBps() const;

                    /**
                     * 设置Current import BPS. Currently, it is only used for Redis.
                     * @param _currentLoadBps Current import BPS. Currently, it is only used for Redis.
                     * 
                     */
                    void SetCurrentLoadBps(const int64_t& _currentLoadBps);

                    /**
                     * 判断参数 CurrentLoadBps 是否已赋值
                     * @return CurrentLoadBps 是否已赋值
                     * 
                     */
                    bool CurrentLoadBpsHasBeenSet() const;

                    /**
                     * 获取Number of shards in the target database. Currently, only used for Redis.
                     * @return CurrentDstShardCount Number of shards in the target database. Currently, only used for Redis.
                     * 
                     */
                    int64_t GetCurrentDstShardCount() const;

                    /**
                     * 设置Number of shards in the target database. Currently, only used for Redis.
                     * @param _currentDstShardCount Number of shards in the target database. Currently, only used for Redis.
                     * 
                     */
                    void SetCurrentDstShardCount(const int64_t& _currentDstShardCount);

                    /**
                     * 判断参数 CurrentDstShardCount 是否已赋值
                     * @return CurrentDstShardCount 是否已赋值
                     * 
                     */
                    bool CurrentDstShardCountHasBeenSet() const;

                    /**
                     * 获取Full export BPS, currently supported only for MongoDB links.
                     * @return CurrentDumpBps Full export BPS, currently supported only for MongoDB links.
                     * 
                     */
                    int64_t GetCurrentDumpBps() const;

                    /**
                     * 设置Full export BPS, currently supported only for MongoDB links.
                     * @param _currentDumpBps Full export BPS, currently supported only for MongoDB links.
                     * 
                     */
                    void SetCurrentDumpBps(const int64_t& _currentDumpBps);

                    /**
                     * 判断参数 CurrentDumpBps 是否已赋值
                     * @return CurrentDumpBps 是否已赋值
                     * 
                     */
                    bool CurrentDumpBpsHasBeenSet() const;

                    /**
                     * 获取Incremental import BPS, currently supported only for MongoDB links.
                     * @return CurrentSinkerBps Incremental import BPS, currently supported only for MongoDB links.
                     * 
                     */
                    int64_t GetCurrentSinkerBps() const;

                    /**
                     * 设置Incremental import BPS, currently supported only for MongoDB links.
                     * @param _currentSinkerBps Incremental import BPS, currently supported only for MongoDB links.
                     * 
                     */
                    void SetCurrentSinkerBps(const int64_t& _currentSinkerBps);

                    /**
                     * 判断参数 CurrentSinkerBps 是否已赋值
                     * @return CurrentSinkerBps 是否已赋值
                     * 
                     */
                    bool CurrentSinkerBpsHasBeenSet() const;

                    /**
                     * 获取Default incremental import BPS, currently supported only for MongoDB links.
                     * @return DefaultSinkerBps Default incremental import BPS, currently supported only for MongoDB links.
                     * 
                     */
                    int64_t GetDefaultSinkerBps() const;

                    /**
                     * 设置Default incremental import BPS, currently supported only for MongoDB links.
                     * @param _defaultSinkerBps Default incremental import BPS, currently supported only for MongoDB links.
                     * 
                     */
                    void SetDefaultSinkerBps(const int64_t& _defaultSinkerBps);

                    /**
                     * 判断参数 DefaultSinkerBps 是否已赋值
                     * @return DefaultSinkerBps 是否已赋值
                     * 
                     */
                    bool DefaultSinkerBpsHasBeenSet() const;

                private:

                    /**
                     * Currently effective number of threads for full export. You can adjust this field value when the task is configured. Note: If it is not set or set to 0, the current value is kept. The maximum value is 16.
                     */
                    int64_t m_currentDumpThread;
                    bool m_currentDumpThreadHasBeenSet;

                    /**
                     * The default number of threads for full export. This field is only meaningful in the output parameters.
                     */
                    int64_t m_defaultDumpThread;
                    bool m_defaultDumpThreadHasBeenSet;

                    /**
                     * The currently effective Rps for full export. You can adjust this field value when configuring the task. Note: If not set or set to 0, it indicates to keep the current value. The maximum value is 50000000.
                     */
                    int64_t m_currentDumpRps;
                    bool m_currentDumpRpsHasBeenSet;

                    /**
                     * The default Rps for full export. This field is only meaningful in the output parameters.
                     */
                    int64_t m_defaultDumpRps;
                    bool m_defaultDumpRpsHasBeenSet;

                    /**
                     * Currently effective number of threads for full import. You can adjust this field value when the task is configured. Note: If it is not set or set to 0, the current value is kept. The maximum value is 16.
                     */
                    int64_t m_currentLoadThread;
                    bool m_currentLoadThreadHasBeenSet;

                    /**
                     * The default number of threads for full import. This field is only meaningful in the output parameters.
                     */
                    int64_t m_defaultLoadThread;
                    bool m_defaultLoadThreadHasBeenSet;

                    /**
                     * The currently effective Rps for full import. You can adjust this field value when configuring the task. Note: If not set or set to 0, it indicates to keep the current value. The maximum value is 50000000.	
                     */
                    int64_t m_currentLoadRps;
                    bool m_currentLoadRpsHasBeenSet;

                    /**
                     * Default full import Rps. This field is only meaningful in the output parameter.	
                     */
                    int64_t m_defaultLoadRps;
                    bool m_defaultLoadRpsHasBeenSet;

                    /**
                     * The currently effective number of threads for incremental import. You can adjust this field value when configuring the task. Note: If not set or set to 0, it indicates to keep the current value. The maximum value is 128.
                     */
                    int64_t m_currentSinkerThread;
                    bool m_currentSinkerThreadHasBeenSet;

                    /**
                     * The default number of threads for incremental import. This field is only meaningful in the output parameters.
                     */
                    int64_t m_defaultSinkerThread;
                    bool m_defaultSinkerThreadHasBeenSet;

                    /**
                     * enum: "no"/"yes". no indicates that the user has not set a speed limit, while yes indicates that a speed limit has been set. This field is only meaningful in the output parameters.
                     */
                    std::string m_hasUserSetRateLimit;
                    bool m_hasUserSetRateLimitHasBeenSet;

                    /**
                     * Default full export BPS, currently supported only for MongoDB links.
                     */
                    int64_t m_defaultDumpBps;
                    bool m_defaultDumpBpsHasBeenSet;

                    /**
                     * Incremental import RPS, currently supported only for MongoDB links.
                     */
                    int64_t m_currentSinkerRps;
                    bool m_currentSinkerRpsHasBeenSet;

                    /**
                     * Default incremental import RPS, currently supported only for MongoDB links.
                     */
                    int64_t m_defaultSinkerRps;
                    bool m_defaultSinkerRpsHasBeenSet;

                    /**
                     * Current import BPS. Currently, it is only used for Redis.
                     */
                    int64_t m_currentLoadBps;
                    bool m_currentLoadBpsHasBeenSet;

                    /**
                     * Number of shards in the target database. Currently, only used for Redis.
                     */
                    int64_t m_currentDstShardCount;
                    bool m_currentDstShardCountHasBeenSet;

                    /**
                     * Full export BPS, currently supported only for MongoDB links.
                     */
                    int64_t m_currentDumpBps;
                    bool m_currentDumpBpsHasBeenSet;

                    /**
                     * Incremental import BPS, currently supported only for MongoDB links.
                     */
                    int64_t m_currentSinkerBps;
                    bool m_currentSinkerBpsHasBeenSet;

                    /**
                     * Default incremental import BPS, currently supported only for MongoDB links.
                     */
                    int64_t m_defaultSinkerBps;
                    bool m_defaultSinkerBpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_RATELIMITOPTION_H_
