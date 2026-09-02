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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_LEVELOPTION_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_LEVELOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Custom alarm/Risk level
                */
                class LevelOption : public AbstractModel
                {
                public:
                    LevelOption();
                    ~LevelOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Alarm/risk type
                     * @return Type Alarm/risk type
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Alarm/risk type
                     * @param _type Alarm/risk type
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Alarm severity (1: notification, 2: low risk, 3: medium risk, 4: high risk, 5: critical)
                     * @return Level Alarm severity (1: notification, 2: low risk, 3: medium risk, 4: high risk, 5: critical)
                     * 
                     */
                    std::vector<int64_t> GetLevel() const;

                    /**
                     * 设置Alarm severity (1: notification, 2: low risk, 3: medium risk, 4: high risk, 5: critical)
                     * @param _level Alarm severity (1: notification, 2: low risk, 3: medium risk, 4: high risk, 5: critical)
                     * 
                     */
                    void SetLevel(const std::vector<int64_t>& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                private:

                    /**
                     * Alarm/risk type
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Alarm severity (1: notification, 2: low risk, 3: medium risk, 4: high risk, 5: critical)
                     */
                    std::vector<int64_t> m_level;
                    bool m_levelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_LEVELOPTION_H_
