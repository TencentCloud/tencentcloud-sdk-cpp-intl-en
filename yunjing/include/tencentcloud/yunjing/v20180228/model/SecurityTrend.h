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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_SECURITYTREND_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_SECURITYTREND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Security trend statistics.
                */
                class SecurityTrend : public AbstractModel
                {
                public:
                    SecurityTrend();
                    ~SecurityTrend() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event time.
                     * @return Date Event time.
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置Event time.
                     * @param _date Event time.
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取Number of events.
                     * @return EventNum Number of events.
                     * 
                     */
                    uint64_t GetEventNum() const;

                    /**
                     * 设置Number of events.
                     * @param _eventNum Number of events.
                     * 
                     */
                    void SetEventNum(const uint64_t& _eventNum);

                    /**
                     * 判断参数 EventNum 是否已赋值
                     * @return EventNum 是否已赋值
                     * 
                     */
                    bool EventNumHasBeenSet() const;

                private:

                    /**
                     * Event time.
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * Number of events.
                     */
                    uint64_t m_eventNum;
                    bool m_eventNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_SECURITYTREND_H_
