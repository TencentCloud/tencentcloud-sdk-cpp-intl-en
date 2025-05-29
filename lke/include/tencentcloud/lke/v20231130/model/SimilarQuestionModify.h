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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_SIMILARQUESTIONMODIFY_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_SIMILARQUESTIONMODIFY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/SimilarQuestion.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Similar question modification (update) information.
                */
                class SimilarQuestionModify : public AbstractModel
                {
                public:
                    SimilarQuestionModify();
                    ~SimilarQuestionModify() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of similar questions (content) to be added.
                     * @return AddQuestions List of similar questions (content) to be added.
                     * 
                     */
                    std::vector<std::string> GetAddQuestions() const;

                    /**
                     * 设置List of similar questions (content) to be added.
                     * @param _addQuestions List of similar questions (content) to be added.
                     * 
                     */
                    void SetAddQuestions(const std::vector<std::string>& _addQuestions);

                    /**
                     * 判断参数 AddQuestions 是否已赋值
                     * @return AddQuestions 是否已赋值
                     * 
                     */
                    bool AddQuestionsHasBeenSet() const;

                    /**
                     * 获取List of similar questions to be updated.
                     * @return UpdateQuestions List of similar questions to be updated.
                     * 
                     */
                    std::vector<SimilarQuestion> GetUpdateQuestions() const;

                    /**
                     * 设置List of similar questions to be updated.
                     * @param _updateQuestions List of similar questions to be updated.
                     * 
                     */
                    void SetUpdateQuestions(const std::vector<SimilarQuestion>& _updateQuestions);

                    /**
                     * 判断参数 UpdateQuestions 是否已赋值
                     * @return UpdateQuestions 是否已赋值
                     * 
                     */
                    bool UpdateQuestionsHasBeenSet() const;

                    /**
                     * 获取List of similar questions to be deleted.
                     * @return DeleteQuestions List of similar questions to be deleted.
                     * 
                     */
                    std::vector<SimilarQuestion> GetDeleteQuestions() const;

                    /**
                     * 设置List of similar questions to be deleted.
                     * @param _deleteQuestions List of similar questions to be deleted.
                     * 
                     */
                    void SetDeleteQuestions(const std::vector<SimilarQuestion>& _deleteQuestions);

                    /**
                     * 判断参数 DeleteQuestions 是否已赋值
                     * @return DeleteQuestions 是否已赋值
                     * 
                     */
                    bool DeleteQuestionsHasBeenSet() const;

                private:

                    /**
                     * List of similar questions (content) to be added.
                     */
                    std::vector<std::string> m_addQuestions;
                    bool m_addQuestionsHasBeenSet;

                    /**
                     * List of similar questions to be updated.
                     */
                    std::vector<SimilarQuestion> m_updateQuestions;
                    bool m_updateQuestionsHasBeenSet;

                    /**
                     * List of similar questions to be deleted.
                     */
                    std::vector<SimilarQuestion> m_deleteQuestions;
                    bool m_deleteQuestionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_SIMILARQUESTIONMODIFY_H_
