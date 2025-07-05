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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICRETENTIONTIMECONFIGRSP_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICRETENTIONTIMECONFIGRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Information returned for topic message retention time configuration
                */
                class TopicRetentionTimeConfigRsp : public AbstractModel
                {
                public:
                    TopicRetentionTimeConfigRsp();
                    ~TopicRetentionTimeConfigRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Expected value, i.e., the topic message retention time (min) configured
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return Expect Expected value, i.e., the topic message retention time (min) configured
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetExpect() const;

                    /**
                     * 设置Expected value, i.e., the topic message retention time (min) configured
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param _expect Expected value, i.e., the topic message retention time (min) configured
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExpect(const int64_t& _expect);

                    /**
                     * 判断参数 Expect 是否已赋值
                     * @return Expect 是否已赋值
                     * 
                     */
                    bool ExpectHasBeenSet() const;

                    /**
                     * 获取Current value (min), i.e., the retention time currently in effect, which may be dynamically adjusted
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return Current Current value (min), i.e., the retention time currently in effect, which may be dynamically adjusted
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCurrent() const;

                    /**
                     * 设置Current value (min), i.e., the retention time currently in effect, which may be dynamically adjusted
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param _current Current value (min), i.e., the retention time currently in effect, which may be dynamically adjusted
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCurrent(const int64_t& _current);

                    /**
                     * 判断参数 Current 是否已赋值
                     * @return Current 是否已赋值
                     * 
                     */
                    bool CurrentHasBeenSet() const;

                    /**
                     * 获取Last modified time
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return ModTimeStamp Last modified time
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetModTimeStamp() const;

                    /**
                     * 设置Last modified time
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param _modTimeStamp Last modified time
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetModTimeStamp(const int64_t& _modTimeStamp);

                    /**
                     * 判断参数 ModTimeStamp 是否已赋值
                     * @return ModTimeStamp 是否已赋值
                     * 
                     */
                    bool ModTimeStampHasBeenSet() const;

                private:

                    /**
                     * Expected value, i.e., the topic message retention time (min) configured
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    int64_t m_expect;
                    bool m_expectHasBeenSet;

                    /**
                     * Current value (min), i.e., the retention time currently in effect, which may be dynamically adjusted
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    int64_t m_current;
                    bool m_currentHasBeenSet;

                    /**
                     * Last modified time
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    int64_t m_modTimeStamp;
                    bool m_modTimeStampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICRETENTIONTIMECONFIGRSP_H_
