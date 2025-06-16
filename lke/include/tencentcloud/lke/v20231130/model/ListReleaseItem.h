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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_LISTRELEASEITEM_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_LISTRELEASEITEM_H_

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
                * Details of release list.
                */
                class ListReleaseItem : public AbstractModel
                {
                public:
                    ListReleaseItem();
                    ~ListReleaseItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Version ID.
                     * @return ReleaseBizId Version ID.
                     * 
                     */
                    std::string GetReleaseBizId() const;

                    /**
                     * 设置Version ID.
                     * @param _releaseBizId Version ID.
                     * 
                     */
                    void SetReleaseBizId(const std::string& _releaseBizId);

                    /**
                     * 判断参数 ReleaseBizId 是否已赋值
                     * @return ReleaseBizId 是否已赋值
                     * 
                     */
                    bool ReleaseBizIdHasBeenSet() const;

                    /**
                     * 获取Releaser.
                     * @return Operator Releaser.
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Releaser.
                     * @param _operator Releaser.
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取Release description.
                     * @return Desc Release description.
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Release description.
                     * @param _desc Release description.
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

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
                     * 获取Release status.
                     * @return Status Release status.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Release status.
                     * @param _status Release status.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Release status description.
                     * @return StatusDesc Release status description.
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置Release status description.
                     * @param _statusDesc Release status description.
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
                     * 获取Reason for failure.
                     * @return Reason Reason for failure.
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置Reason for failure.
                     * @param _reason Reason for failure.
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取Number of successful releases.
                     * @return SuccessCount Number of successful releases.
                     * 
                     */
                    int64_t GetSuccessCount() const;

                    /**
                     * 设置Number of successful releases.
                     * @param _successCount Number of successful releases.
                     * 
                     */
                    void SetSuccessCount(const int64_t& _successCount);

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取Number of failed releases.
                     * @return FailCount Number of failed releases.
                     * 
                     */
                    int64_t GetFailCount() const;

                    /**
                     * 设置Number of failed releases.
                     * @param _failCount Number of failed releases.
                     * 
                     */
                    void SetFailCount(const int64_t& _failCount);

                    /**
                     * 判断参数 FailCount 是否已赋值
                     * @return FailCount 是否已赋值
                     * 
                     */
                    bool FailCountHasBeenSet() const;

                private:

                    /**
                     * Version ID.
                     */
                    std::string m_releaseBizId;
                    bool m_releaseBizIdHasBeenSet;

                    /**
                     * Releaser.
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Release description.
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * Update time.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Release status.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Release status description.
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * Reason for failure.
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * Number of successful releases.
                     */
                    int64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * Number of failed releases.
                     */
                    int64_t m_failCount;
                    bool m_failCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_LISTRELEASEITEM_H_
