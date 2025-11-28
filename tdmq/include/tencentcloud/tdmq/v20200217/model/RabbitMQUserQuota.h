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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQUSERQUOTA_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQUSERQUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * RabbitMQ instance user quota information.
                */
                class RabbitMQUserQuota : public AbstractModel
                {
                public:
                    RabbitMQUserQuota();
                    ~RabbitMQUserQuota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Maximum creation number of users.
                     * @return MaxUser Maximum creation number of users.
                     * 
                     */
                    int64_t GetMaxUser() const;

                    /**
                     * 设置Maximum creation number of users.
                     * @param _maxUser Maximum creation number of users.
                     * 
                     */
                    void SetMaxUser(const int64_t& _maxUser);

                    /**
                     * 判断参数 MaxUser 是否已赋值
                     * @return MaxUser 是否已赋值
                     * 
                     */
                    bool MaxUserHasBeenSet() const;

                    /**
                     * 获取Indicates the number of users in use.
                     * @return UsedUser Indicates the number of users in use.
                     * 
                     */
                    int64_t GetUsedUser() const;

                    /**
                     * 设置Indicates the number of users in use.
                     * @param _usedUser Indicates the number of users in use.
                     * 
                     */
                    void SetUsedUser(const int64_t& _usedUser);

                    /**
                     * 判断参数 UsedUser 是否已赋值
                     * @return UsedUser 是否已赋值
                     * 
                     */
                    bool UsedUserHasBeenSet() const;

                private:

                    /**
                     * Maximum creation number of users.
                     */
                    int64_t m_maxUser;
                    bool m_maxUserHasBeenSet;

                    /**
                     * Indicates the number of users in use.
                     */
                    int64_t m_usedUser;
                    bool m_usedUserHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQUSERQUOTA_H_
