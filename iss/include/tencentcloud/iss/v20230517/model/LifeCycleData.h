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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_LIFECYCLEDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_LIFECYCLEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * Lifecycle, cloud file lifecycle settings, the time when cold and hot storage is managed for files
                */
                class LifeCycleData : public AbstractModel
                {
                public:
                    LifeCycleData();
                    ~LifeCycleData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Hot storage duration of cloud files in days. Minimum value: 1. Maximum value: 3650.
                     * @return Transition Hot storage duration of cloud files in days. Minimum value: 1. Maximum value: 3650.
                     * 
                     */
                    int64_t GetTransition() const;

                    /**
                     * 设置Hot storage duration of cloud files in days. Minimum value: 1. Maximum value: 3650.
                     * @param _transition Hot storage duration of cloud files in days. Minimum value: 1. Maximum value: 3650.
                     * 
                     */
                    void SetTransition(const int64_t& _transition);

                    /**
                     * 判断参数 Transition 是否已赋值
                     * @return Transition 是否已赋值
                     * 
                     */
                    bool TransitionHasBeenSet() const;

                    /**
                     * 获取Cold storage duration of cloud files in days. 0 means leave unset. The minimum is 60 days when set. The sum of the Expiration and Transition fields is no more than 3650 days.
                     * @return Expiration Cold storage duration of cloud files in days. 0 means leave unset. The minimum is 60 days when set. The sum of the Expiration and Transition fields is no more than 3650 days.
                     * 
                     */
                    int64_t GetExpiration() const;

                    /**
                     * 设置Cold storage duration of cloud files in days. 0 means leave unset. The minimum is 60 days when set. The sum of the Expiration and Transition fields is no more than 3650 days.
                     * @param _expiration Cold storage duration of cloud files in days. 0 means leave unset. The minimum is 60 days when set. The sum of the Expiration and Transition fields is no more than 3650 days.
                     * 
                     */
                    void SetExpiration(const int64_t& _expiration);

                    /**
                     * 判断参数 Expiration 是否已赋值
                     * @return Expiration 是否已赋值
                     * 
                     */
                    bool ExpirationHasBeenSet() const;

                private:

                    /**
                     * Hot storage duration of cloud files in days. Minimum value: 1. Maximum value: 3650.
                     */
                    int64_t m_transition;
                    bool m_transitionHasBeenSet;

                    /**
                     * Cold storage duration of cloud files in days. 0 means leave unset. The minimum is 60 days when set. The sum of the Expiration and Transition fields is no more than 3650 days.
                     */
                    int64_t m_expiration;
                    bool m_expirationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_LIFECYCLEDATA_H_
