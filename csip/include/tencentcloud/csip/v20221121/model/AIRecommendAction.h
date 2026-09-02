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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_AIRECOMMENDACTION_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_AIRECOMMENDACTION_H_

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
                * Recommended operation items for AI QA in AI assistant.
                */
                class AIRecommendAction : public AbstractModel
                {
                public:
                    AIRecommendAction();
                    ~AIRecommendAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Recommended operation type</p>
                     * @return Action <p>Recommended operation type</p>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置<p>Recommended operation type</p>
                     * @param _action <p>Recommended operation type</p>
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取<p>Recommended operations</p>
                     * @return Question <p>Recommended operations</p>
                     * 
                     */
                    std::string GetQuestion() const;

                    /**
                     * 设置<p>Recommended operations</p>
                     * @param _question <p>Recommended operations</p>
                     * 
                     */
                    void SetQuestion(const std::string& _question);

                    /**
                     * 判断参数 Question 是否已赋值
                     * @return Question 是否已赋值
                     * 
                     */
                    bool QuestionHasBeenSet() const;

                private:

                    /**
                     * <p>Recommended operation type</p>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>Recommended operations</p>
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_AIRECOMMENDACTION_H_
