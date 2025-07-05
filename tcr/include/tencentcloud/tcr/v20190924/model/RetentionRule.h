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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_RETENTIONRULE_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_RETENTIONRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * Tag retention rule
                */
                class RetentionRule : public AbstractModel
                {
                public:
                    RetentionRule();
                    ~RetentionRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Supported policy. Valid values: latestPushedK: Retain the latest specified number of pushed tags; nDaysSinceLastPush: Retain the tags pushed in the past specified number of days.
                     * @return Key Supported policy. Valid values: latestPushedK: Retain the latest specified number of pushed tags; nDaysSinceLastPush: Retain the tags pushed in the past specified number of days.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Supported policy. Valid values: latestPushedK: Retain the latest specified number of pushed tags; nDaysSinceLastPush: Retain the tags pushed in the past specified number of days.
                     * @param _key Supported policy. Valid values: latestPushedK: Retain the latest specified number of pushed tags; nDaysSinceLastPush: Retain the tags pushed in the past specified number of days.
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Rule value
                     * @return Value Rule value
                     * 
                     */
                    int64_t GetValue() const;

                    /**
                     * 设置Rule value
                     * @param _value Rule value
                     * 
                     */
                    void SetValue(const int64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Supported policy. Valid values: latestPushedK: Retain the latest specified number of pushed tags; nDaysSinceLastPush: Retain the tags pushed in the past specified number of days.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Rule value
                     */
                    int64_t m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_RETENTIONRULE_H_
