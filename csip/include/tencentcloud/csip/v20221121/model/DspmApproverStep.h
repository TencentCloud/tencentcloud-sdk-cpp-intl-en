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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMAPPROVERSTEP_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMAPPROVERSTEP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmUinUser.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Approval procedure
                */
                class DspmApproverStep : public AbstractModel
                {
                public:
                    DspmApproverStep();
                    ~DspmApproverStep() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of approvers
                     * @return ApproverUinSet List of approvers
                     * 
                     */
                    std::vector<DspmUinUser> GetApproverUinSet() const;

                    /**
                     * 设置List of approvers
                     * @param _approverUinSet List of approvers
                     * 
                     */
                    void SetApproverUinSet(const std::vector<DspmUinUser>& _approverUinSet);

                    /**
                     * 判断参数 ApproverUinSet 是否已赋值
                     * @return ApproverUinSet 是否已赋值
                     * 
                     */
                    bool ApproverUinSetHasBeenSet() const;

                    /**
                     * 获取Approver
                     * @return ApproverUin Approver
                     * 
                     */
                    std::string GetApproverUin() const;

                    /**
                     * 设置Approver
                     * @param _approverUin Approver
                     * 
                     */
                    void SetApproverUin(const std::string& _approverUin);

                    /**
                     * 判断参数 ApproverUin 是否已赋值
                     * @return ApproverUin 是否已赋值
                     * 
                     */
                    bool ApproverUinHasBeenSet() const;

                    /**
                     * 获取Approval status. 0: Pending approval; 1: Approved; 2: Rejected
                     * @return Status Approval status. 0: Pending approval; 1: Approved; 2: Rejected
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Approval status. 0: Pending approval; 1: Approved; 2: Rejected
                     * @param _status Approval status. 0: Pending approval; 1: Approved; 2: Rejected
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
                     * 获取Approval comments
                     * @return Comment Approval comments
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Approval comments
                     * @param _comment Approval comments
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取Approval time.
                     * @return ApproveTime Approval time.
                     * 
                     */
                    std::string GetApproveTime() const;

                    /**
                     * 设置Approval time.
                     * @param _approveTime Approval time.
                     * 
                     */
                    void SetApproveTime(const std::string& _approveTime);

                    /**
                     * 判断参数 ApproveTime 是否已赋值
                     * @return ApproveTime 是否已赋值
                     * 
                     */
                    bool ApproveTimeHasBeenSet() const;

                private:

                    /**
                     * List of approvers
                     */
                    std::vector<DspmUinUser> m_approverUinSet;
                    bool m_approverUinSetHasBeenSet;

                    /**
                     * Approver
                     */
                    std::string m_approverUin;
                    bool m_approverUinHasBeenSet;

                    /**
                     * Approval status. 0: Pending approval; 1: Approved; 2: Rejected
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Approval comments
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Approval time.
                     */
                    std::string m_approveTime;
                    bool m_approveTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMAPPROVERSTEP_H_
