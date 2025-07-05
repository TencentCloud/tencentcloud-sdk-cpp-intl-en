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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_REJECTEDQUESTION_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_REJECTEDQUESTION_H_

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
                * Release rejected questions.
                */
                class RejectedQuestion : public AbstractModel
                {
                public:
                    RejectedQuestion();
                    ~RejectedQuestion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Reject question ID.
                     * @return RejectedBizId Reject question ID.
                     * 
                     */
                    std::string GetRejectedBizId() const;

                    /**
                     * 设置Reject question ID.
                     * @param _rejectedBizId Reject question ID.
                     * 
                     */
                    void SetRejectedBizId(const std::string& _rejectedBizId);

                    /**
                     * 判断参数 RejectedBizId 是否已赋值
                     * @return RejectedBizId 是否已赋值
                     * 
                     */
                    bool RejectedBizIdHasBeenSet() const;

                    /**
                     * 获取The question that has been rejected.
                     * @return Question The question that has been rejected.
                     * 
                     */
                    std::string GetQuestion() const;

                    /**
                     * 设置The question that has been rejected.
                     * @param _question The question that has been rejected.
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
                     * 获取Status.
                     * @return Status Status.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Status.
                     * @param _status Status.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Status description.
                     * @return StatusDesc Status description.
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置Status description.
                     * @param _statusDesc Status description.
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取Update time.
                     * @return UpdateTime Update time.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time.
                     * @param _updateTime Update time.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Whether editing is allowed.
                     * @return IsAllowEdit Whether editing is allowed.
                     * 
                     */
                    bool GetIsAllowEdit() const;

                    /**
                     * 设置Whether editing is allowed.
                     * @param _isAllowEdit Whether editing is allowed.
                     * 
                     */
                    void SetIsAllowEdit(const bool& _isAllowEdit);

                    /**
                     * 判断参数 IsAllowEdit 是否已赋值
                     * @return IsAllowEdit 是否已赋值
                     * 
                     */
                    bool IsAllowEditHasBeenSet() const;

                    /**
                     * 获取Whether deletion is allowed.
                     * @return IsAllowDelete Whether deletion is allowed.
                     * 
                     */
                    bool GetIsAllowDelete() const;

                    /**
                     * 设置Whether deletion is allowed.
                     * @param _isAllowDelete Whether deletion is allowed.
                     * 
                     */
                    void SetIsAllowDelete(const bool& _isAllowDelete);

                    /**
                     * 判断参数 IsAllowDelete 是否已赋值
                     * @return IsAllowDelete 是否已赋值
                     * 
                     */
                    bool IsAllowDeleteHasBeenSet() const;

                private:

                    /**
                     * Reject question ID.
                     */
                    std::string m_rejectedBizId;
                    bool m_rejectedBizIdHasBeenSet;

                    /**
                     * The question that has been rejected.
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * Status.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Status description.
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * Update time.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Whether editing is allowed.
                     */
                    bool m_isAllowEdit;
                    bool m_isAllowEditHasBeenSet;

                    /**
                     * Whether deletion is allowed.
                     */
                    bool m_isAllowDelete;
                    bool m_isAllowDeleteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_REJECTEDQUESTION_H_
