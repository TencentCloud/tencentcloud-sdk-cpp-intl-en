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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSIDENTIFYRULEDETAIL_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSIDENTIFYRULEDETAIL_H_

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
                * cos data item details
                */
                class CosIdentifyRuleDetail : public AbstractModel
                {
                public:
                    CosIdentifyRuleDetail();
                    ~CosIdentifyRuleDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data item id
                     * @return RuleId Data item id
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置Data item id
                     * @param _ruleId Data item id
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Data item name
                     * @return RuleName Data item name
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Data item name
                     * @param _ruleName Data item name
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取Sensitivity level id
                     * @return LevelId Sensitivity level id
                     * 
                     */
                    uint64_t GetLevelId() const;

                    /**
                     * 设置Sensitivity level id
                     * @param _levelId Sensitivity level id
                     * 
                     */
                    void SetLevelId(const uint64_t& _levelId);

                    /**
                     * 判断参数 LevelId 是否已赋值
                     * @return LevelId 是否已赋值
                     * 
                     */
                    bool LevelIdHasBeenSet() const;

                    /**
                     * 获取Sensitivity level name
                     * @return LevelName Sensitivity level name
                     * 
                     */
                    std::string GetLevelName() const;

                    /**
                     * 设置Sensitivity level name
                     * @param _levelName Sensitivity level name
                     * 
                     */
                    void SetLevelName(const std::string& _levelName);

                    /**
                     * 判断参数 LevelName 是否已赋值
                     * @return LevelName 是否已赋值
                     * 
                     */
                    bool LevelNameHasBeenSet() const;

                    /**
                     * 获取Sensitivity
                     * @return LevelScore Sensitivity
                     * 
                     */
                    uint64_t GetLevelScore() const;

                    /**
                     * 设置Sensitivity
                     * @param _levelScore Sensitivity
                     * 
                     */
                    void SetLevelScore(const uint64_t& _levelScore);

                    /**
                     * 判断参数 LevelScore 是否已赋值
                     * @return LevelScore 是否已赋值
                     * 
                     */
                    bool LevelScoreHasBeenSet() const;

                private:

                    /**
                     * Data item id
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Data item name
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Sensitivity level id
                     */
                    uint64_t m_levelId;
                    bool m_levelIdHasBeenSet;

                    /**
                     * Sensitivity level name
                     */
                    std::string m_levelName;
                    bool m_levelNameHasBeenSet;

                    /**
                     * Sensitivity
                     */
                    uint64_t m_levelScore;
                    bool m_levelScoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSIDENTIFYRULEDETAIL_H_
