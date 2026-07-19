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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_APPLYPAYMENTOPENDETAILRES_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_APPLYPAYMENTOPENDETAILRES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Queries mini program payment approval status.
                */
                class ApplyPaymentOpenDetailRes : public AbstractModel
                {
                public:
                    ApplyPaymentOpenDetailRes();
                    ~ApplyPaymentOpenDetailRes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Approval status. Valid values: 0: In progress; 10: Approved; 20: Rejected.</p>
                     * @return ApprovalStatus <p>Approval status. Valid values: 0: In progress; 10: Approved; 20: Rejected.</p>
                     * 
                     */
                    int64_t GetApprovalStatus() const;

                    /**
                     * 设置<p>Approval status. Valid values: 0: In progress; 10: Approved; 20: Rejected.</p>
                     * @param _approvalStatus <p>Approval status. Valid values: 0: In progress; 10: Approved; 20: Rejected.</p>
                     * 
                     */
                    void SetApprovalStatus(const int64_t& _approvalStatus);

                    /**
                     * 判断参数 ApprovalStatus 是否已赋值
                     * @return ApprovalStatus 是否已赋值
                     * 
                     */
                    bool ApprovalStatusHasBeenSet() const;

                    /**
                     * 获取<p>Application time.</p><p>Unit: Milliseconds.</p>
                     * @return ApplyTime <p>Application time.</p><p>Unit: Milliseconds.</p>
                     * 
                     */
                    int64_t GetApplyTime() const;

                    /**
                     * 设置<p>Application time.</p><p>Unit: Milliseconds.</p>
                     * @param _applyTime <p>Application time.</p><p>Unit: Milliseconds.</p>
                     * 
                     */
                    void SetApplyTime(const int64_t& _applyTime);

                    /**
                     * 判断参数 ApplyTime 是否已赋值
                     * @return ApplyTime 是否已赋值
                     * 
                     */
                    bool ApplyTimeHasBeenSet() const;

                    /**
                     * 获取<p>Approval time.</p><p>Unit: milliseconds.</p>
                     * @return ApprovalTime <p>Approval time.</p><p>Unit: milliseconds.</p>
                     * 
                     */
                    int64_t GetApprovalTime() const;

                    /**
                     * 设置<p>Approval time.</p><p>Unit: milliseconds.</p>
                     * @param _approvalTime <p>Approval time.</p><p>Unit: milliseconds.</p>
                     * 
                     */
                    void SetApprovalTime(const int64_t& _approvalTime);

                    /**
                     * 判断参数 ApprovalTime 是否已赋值
                     * @return ApprovalTime 是否已赋值
                     * 
                     */
                    bool ApprovalTimeHasBeenSet() const;

                    /**
                     * 获取<p>Approval note.</p>
                     * @return ApprovalNote <p>Approval note.</p>
                     * 
                     */
                    std::string GetApprovalNote() const;

                    /**
                     * 设置<p>Approval note.</p>
                     * @param _approvalNote <p>Approval note.</p>
                     * 
                     */
                    void SetApprovalNote(const std::string& _approvalNote);

                    /**
                     * 判断参数 ApprovalNote 是否已赋值
                     * @return ApprovalNote 是否已赋值
                     * 
                     */
                    bool ApprovalNoteHasBeenSet() const;

                    /**
                     * 获取<p>Specifies whether to display the approval records. Valid values: 0: No; 1: Yes.</p>
                     * @return ApprovalShow <p>Specifies whether to display the approval records. Valid values: 0: No; 1: Yes.</p>
                     * 
                     */
                    int64_t GetApprovalShow() const;

                    /**
                     * 设置<p>Specifies whether to display the approval records. Valid values: 0: No; 1: Yes.</p>
                     * @param _approvalShow <p>Specifies whether to display the approval records. Valid values: 0: No; 1: Yes.</p>
                     * 
                     */
                    void SetApprovalShow(const int64_t& _approvalShow);

                    /**
                     * 判断参数 ApprovalShow 是否已赋值
                     * @return ApprovalShow 是否已赋值
                     * 
                     */
                    bool ApprovalShowHasBeenSet() const;

                    /**
                     * 获取<p>Specifies whether the activation of mini program payment can be requested again. Valid values: 0: No; 1: Yes.</p>
                     * @return ApplyShow <p>Specifies whether the activation of mini program payment can be requested again. Valid values: 0: No; 1: Yes.</p>
                     * 
                     */
                    int64_t GetApplyShow() const;

                    /**
                     * 设置<p>Specifies whether the activation of mini program payment can be requested again. Valid values: 0: No; 1: Yes.</p>
                     * @param _applyShow <p>Specifies whether the activation of mini program payment can be requested again. Valid values: 0: No; 1: Yes.</p>
                     * 
                     */
                    void SetApplyShow(const int64_t& _applyShow);

                    /**
                     * 判断参数 ApplyShow 是否已赋值
                     * @return ApplyShow 是否已赋值
                     * 
                     */
                    bool ApplyShowHasBeenSet() const;

                private:

                    /**
                     * <p>Approval status. Valid values: 0: In progress; 10: Approved; 20: Rejected.</p>
                     */
                    int64_t m_approvalStatus;
                    bool m_approvalStatusHasBeenSet;

                    /**
                     * <p>Application time.</p><p>Unit: Milliseconds.</p>
                     */
                    int64_t m_applyTime;
                    bool m_applyTimeHasBeenSet;

                    /**
                     * <p>Approval time.</p><p>Unit: milliseconds.</p>
                     */
                    int64_t m_approvalTime;
                    bool m_approvalTimeHasBeenSet;

                    /**
                     * <p>Approval note.</p>
                     */
                    std::string m_approvalNote;
                    bool m_approvalNoteHasBeenSet;

                    /**
                     * <p>Specifies whether to display the approval records. Valid values: 0: No; 1: Yes.</p>
                     */
                    int64_t m_approvalShow;
                    bool m_approvalShowHasBeenSet;

                    /**
                     * <p>Specifies whether the activation of mini program payment can be requested again. Valid values: 0: No; 1: Yes.</p>
                     */
                    int64_t m_applyShow;
                    bool m_applyShowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_APPLYPAYMENTOPENDETAILRES_H_
