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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGERISKINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGERISKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Image risk details
                */
                class ImageRiskInfo : public AbstractModel
                {
                public:
                    ImageRiskInfo();
                    ~ImageRiskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Behavior
                     * @return Behavior Behavior
                     */
                    uint64_t GetBehavior() const;

                    /**
                     * 设置Behavior
                     * @param Behavior Behavior
                     */
                    void SetBehavior(const uint64_t& _behavior);

                    /**
                     * 判断参数 Behavior 是否已赋值
                     * @return Behavior 是否已赋值
                     */
                    bool BehaviorHasBeenSet() const;

                    /**
                     * 获取Type
                     * @return Type Type
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Type
                     * @param Type Type
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Level
                     * @return Level Level
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置Level
                     * @param Level Level
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Details
                     * @return Desc Details
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Details
                     * @param Desc Details
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取Solution
                     * @return InstructionContent Solution
                     */
                    std::string GetInstructionContent() const;

                    /**
                     * 设置Solution
                     * @param InstructionContent Solution
                     */
                    void SetInstructionContent(const std::string& _instructionContent);

                    /**
                     * 判断参数 InstructionContent 是否已赋值
                     * @return InstructionContent 是否已赋值
                     */
                    bool InstructionContentHasBeenSet() const;

                private:

                    /**
                     * Behavior
                     */
                    uint64_t m_behavior;
                    bool m_behaviorHasBeenSet;

                    /**
                     * Type
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Level
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Details
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * Solution
                     */
                    std::string m_instructionContent;
                    bool m_instructionContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGERISKINFO_H_
