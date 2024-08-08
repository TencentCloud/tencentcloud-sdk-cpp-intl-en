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

#ifndef TENCENTCLOUD_ADVISOR_V20200721_MODEL_CONDITIONS_H_
#define TENCENTCLOUD_ADVISOR_V20200721_MODEL_CONDITIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Advisor
    {
        namespace V20200721
        {
            namespace Model
            {
                /**
                * Warning conditions of the assessment item
                */
                class Conditions : public AbstractModel
                {
                public:
                    Conditions();
                    ~Conditions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Warning condition ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConditionId Warning condition ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetConditionId() const;

                    /**
                     * 设置Warning condition ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _conditionId Warning condition ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConditionId(const uint64_t& _conditionId);

                    /**
                     * 判断参数 ConditionId 是否已赋值
                     * @return ConditionId 是否已赋值
                     * 
                     */
                    bool ConditionIdHasBeenSet() const;

                    /**
                     * 获取Warning level. 2: medium risk; 3: high risk.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Level Warning level. 2: medium risk; 3: high risk.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置Warning level. 2: medium risk; 3: high risk.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _level Warning level. 2: medium risk; 3: high risk.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Warning level description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LevelDesc Warning level description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLevelDesc() const;

                    /**
                     * 设置Warning level description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _levelDesc Warning level description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLevelDesc(const std::string& _levelDesc);

                    /**
                     * 判断参数 LevelDesc 是否已赋值
                     * @return LevelDesc 是否已赋值
                     * 
                     */
                    bool LevelDescHasBeenSet() const;

                    /**
                     * 获取Warning condition description
                     * @return Desc Warning condition description
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Warning condition description
                     * @param _desc Warning condition description
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                private:

                    /**
                     * Warning condition ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_conditionId;
                    bool m_conditionIdHasBeenSet;

                    /**
                     * Warning level. 2: medium risk; 3: high risk.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Warning level description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_levelDesc;
                    bool m_levelDescHasBeenSet;

                    /**
                     * Warning condition description
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADVISOR_V20200721_MODEL_CONDITIONS_H_
