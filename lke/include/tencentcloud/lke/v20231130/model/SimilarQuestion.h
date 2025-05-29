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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_SIMILARQUESTION_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_SIMILARQUESTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Similar question information.
                */
                class SimilarQuestion : public AbstractModel
                {
                public:
                    SimilarQuestion();
                    ~SimilarQuestion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Similar question ID.
                     * @return SimBizId Similar question ID.
                     * 
                     */
                    std::string GetSimBizId() const;

                    /**
                     * 设置Similar question ID.
                     * @param _simBizId Similar question ID.
                     * 
                     */
                    void SetSimBizId(const std::string& _simBizId);

                    /**
                     * 判断参数 SimBizId 是否已赋值
                     * @return SimBizId 是否已赋值
                     * 
                     */
                    bool SimBizIdHasBeenSet() const;

                    /**
                     * 获取Similar question content.
                     * @return Question Similar question content.
                     * 
                     */
                    std::string GetQuestion() const;

                    /**
                     * 设置Similar question content.
                     * @param _question Similar question content.
                     * 
                     */
                    void SetQuestion(const std::string& _question);

                    /**
                     * 判断参数 Question 是否已赋值
                     * @return Question 是否已赋值
                     * 
                     */
                    bool QuestionHasBeenSet() const;

                    /**
                     * 获取Similar question review status, 1: audit failure.
                     * @return AuditStatus Similar question review status, 1: audit failure.
                     * 
                     */
                    uint64_t GetAuditStatus() const;

                    /**
                     * 设置Similar question review status, 1: audit failure.
                     * @param _auditStatus Similar question review status, 1: audit failure.
                     * 
                     */
                    void SetAuditStatus(const uint64_t& _auditStatus);

                    /**
                     * 判断参数 AuditStatus 是否已赋值
                     * @return AuditStatus 是否已赋值
                     * 
                     */
                    bool AuditStatusHasBeenSet() const;

                private:

                    /**
                     * Similar question ID.
                     */
                    std::string m_simBizId;
                    bool m_simBizIdHasBeenSet;

                    /**
                     * Similar question content.
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * Similar question review status, 1: audit failure.
                     */
                    uint64_t m_auditStatus;
                    bool m_auditStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_SIMILARQUESTION_H_
