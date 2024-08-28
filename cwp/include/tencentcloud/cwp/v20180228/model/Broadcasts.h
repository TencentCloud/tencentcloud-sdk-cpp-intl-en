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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BROADCASTS_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BROADCASTS_H_

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
                * Security report list
                */
                class Broadcasts : public AbstractModel
                {
                public:
                    Broadcasts();
                    ~Broadcasts() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Article name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Title Article name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置Article name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _title Article name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Type: 0: emergency notification; 1: feature update; 2: industry honor; 3: version release
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Type: 0: emergency notification; 1: feature update; 2: industry honor; 3: version release
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Type: 0: emergency notification; 1: feature update; 2: industry honor; 3: version release
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type Type: 0: emergency notification; 1: feature update; 2: industry honor; 3: version release
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Subtitle
                     * @return Subtitle Subtitle
                     * 
                     */
                    std::string GetSubtitle() const;

                    /**
                     * 设置Subtitle
                     * @param _subtitle Subtitle
                     * 
                     */
                    void SetSubtitle(const std::string& _subtitle);

                    /**
                     * 判断参数 Subtitle 是否已赋值
                     * @return Subtitle 是否已赋值
                     * 
                     */
                    bool SubtitleHasBeenSet() const;

                    /**
                     * 获取Release time
                     * @return CreateTime Release time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Release time
                     * @param _createTime Release time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Article unique ID
                     * @return Id Article unique ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Article unique ID
                     * @param _id Article unique ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Severity level. 0: none; 1: critical; 2: high-risk; 3: medium-risk; 4: low-risk
                     * @return Level Severity level. 0: none; 1: critical; 2: high-risk; 3: medium-risk; 4: low-risk
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置Severity level. 0: none; 1: critical; 2: high-risk; 3: medium-risk; 4: low-risk
                     * @param _level Severity level. 0: none; 1: critical; 2: high-risk; 3: medium-risk; 4: low-risk
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                private:

                    /**
                     * Article name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * Type: 0: emergency notification; 1: feature update; 2: industry honor; 3: version release
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Subtitle
                     */
                    std::string m_subtitle;
                    bool m_subtitleHasBeenSet;

                    /**
                     * Release time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Article unique ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Severity level. 0: none; 1: critical; 2: high-risk; 3: medium-risk; 4: low-risk
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BROADCASTS_H_
