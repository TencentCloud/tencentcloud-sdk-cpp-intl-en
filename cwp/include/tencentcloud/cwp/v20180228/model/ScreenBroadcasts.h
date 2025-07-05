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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCREENBROADCASTS_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCREENBROADCASTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Visualized security report on the large screen
                */
                class ScreenBroadcasts : public AbstractModel
                {
                public:
                    ScreenBroadcasts();
                    ~ScreenBroadcasts() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Security report article title
                     * @return Title Security report article title
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置Security report article title
                     * @param _title Security report article title
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取Severity level of security report article: 0: none; 1: critical; 2: high-risk; 3: medium-risk; 4: low-risk
                     * @return Level Severity level of security report article: 0: none; 1: critical; 2: high-risk; 3: medium-risk; 4: low-risk
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置Severity level of security report article: 0: none; 1: critical; 2: high-risk; 3: medium-risk; 4: low-risk
                     * @param _level Severity level of security report article: 0: none; 1: critical; 2: high-risk; 3: medium-risk; 4: low-risk
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Release time
                     * @return Time Release time
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置Release time
                     * @param _time Release time
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取Article ID
                     * @return Id Article ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Article ID
                     * @param _id Article ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * Security report article title
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * Severity level of security report article: 0: none; 1: critical; 2: high-risk; 3: medium-risk; 4: low-risk
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Release time
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Article ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCREENBROADCASTS_H_
