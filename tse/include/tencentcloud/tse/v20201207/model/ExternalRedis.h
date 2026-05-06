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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_EXTERNALREDIS_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_EXTERNALREDIS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Cloud-native gateway traffic throttling plugin external redis configuration
                */
                class ExternalRedis : public AbstractModel
                {
                public:
                    ExternalRedis();
                    ~ExternalRedis() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取redis ip
                     * @return RedisHost redis ip
                     * 
                     */
                    std::string GetRedisHost() const;

                    /**
                     * 设置redis ip
                     * @param _redisHost redis ip
                     * 
                     */
                    void SetRedisHost(const std::string& _redisHost);

                    /**
                     * 判断参数 RedisHost 是否已赋值
                     * @return RedisHost 是否已赋值
                     * 
                     */
                    bool RedisHostHasBeenSet() const;

                    /**
                     * 获取redis password
                     * @return RedisPassword redis password
                     * 
                     */
                    std::string GetRedisPassword() const;

                    /**
                     * 设置redis password
                     * @param _redisPassword redis password
                     * 
                     */
                    void SetRedisPassword(const std::string& _redisPassword);

                    /**
                     * 判断参数 RedisPassword 是否已赋值
                     * @return RedisPassword 是否已赋值
                     * 
                     */
                    bool RedisPasswordHasBeenSet() const;

                    /**
                     * 获取redis port
                     * @return RedisPort redis port
                     * 
                     */
                    int64_t GetRedisPort() const;

                    /**
                     * 设置redis port
                     * @param _redisPort redis port
                     * 
                     */
                    void SetRedisPort(const int64_t& _redisPort);

                    /**
                     * 判断参数 RedisPort 是否已赋值
                     * @return RedisPort 是否已赋值
                     * 
                     */
                    bool RedisPortHasBeenSet() const;

                    /**
                     * 获取Timeout interval. Unit: ms
                     * @return RedisTimeout Timeout interval. Unit: ms
                     * 
                     */
                    int64_t GetRedisTimeout() const;

                    /**
                     * 设置Timeout interval. Unit: ms
                     * @param _redisTimeout Timeout interval. Unit: ms
                     * 
                     */
                    void SetRedisTimeout(const int64_t& _redisTimeout);

                    /**
                     * 判断参数 RedisTimeout 是否已赋值
                     * @return RedisTimeout 是否已赋值
                     * 
                     */
                    bool RedisTimeoutHasBeenSet() const;

                private:

                    /**
                     * redis ip
                     */
                    std::string m_redisHost;
                    bool m_redisHostHasBeenSet;

                    /**
                     * redis password
                     */
                    std::string m_redisPassword;
                    bool m_redisPasswordHasBeenSet;

                    /**
                     * redis port
                     */
                    int64_t m_redisPort;
                    bool m_redisPortHasBeenSet;

                    /**
                     * Timeout interval. Unit: ms
                     */
                    int64_t m_redisTimeout;
                    bool m_redisTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_EXTERNALREDIS_H_
