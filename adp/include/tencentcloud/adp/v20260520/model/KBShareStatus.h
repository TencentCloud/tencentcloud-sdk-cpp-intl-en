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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_KBSHARESTATUS_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_KBSHARESTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Sub-status information of the knowledge base
                */
                class KBShareStatus : public AbstractModel
                {
                public:
                    KBShareStatus();
                    ~KBShareStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Approval Id.</p>
                     * @return ApprovalId <p>Approval Id.</p>
                     * 
                     */
                    std::string GetApprovalId() const;

                    /**
                     * 设置<p>Approval Id.</p>
                     * @param _approvalId <p>Approval Id.</p>
                     * 
                     */
                    void SetApprovalId(const std::string& _approvalId);

                    /**
                     * 判断参数 ApprovalId 是否已赋值
                     * @return ApprovalId 是否已赋值
                     * 
                     */
                    bool ApprovalIdHasBeenSet() const;

                    /**
                     * 获取<p>Approval/shared state: 1=PENDING Pending Approval, 2=REJECTED rejected, 3=APPROVED approved, 4=CANCELLED canceled</p>
                     * @return SubStatusList <p>Approval/shared state: 1=PENDING Pending Approval, 2=REJECTED rejected, 3=APPROVED approved, 4=CANCELLED canceled</p>
                     * 
                     */
                    std::vector<int64_t> GetSubStatusList() const;

                    /**
                     * 设置<p>Approval/shared state: 1=PENDING Pending Approval, 2=REJECTED rejected, 3=APPROVED approved, 4=CANCELLED canceled</p>
                     * @param _subStatusList <p>Approval/shared state: 1=PENDING Pending Approval, 2=REJECTED rejected, 3=APPROVED approved, 4=CANCELLED canceled</p>
                     * 
                     */
                    void SetSubStatusList(const std::vector<int64_t>& _subStatusList);

                    /**
                     * 判断参数 SubStatusList 是否已赋值
                     * @return SubStatusList 是否已赋值
                     * 
                     */
                    bool SubStatusListHasBeenSet() const;

                private:

                    /**
                     * <p>Approval Id.</p>
                     */
                    std::string m_approvalId;
                    bool m_approvalIdHasBeenSet;

                    /**
                     * <p>Approval/shared state: 1=PENDING Pending Approval, 2=REJECTED rejected, 3=APPROVED approved, 4=CANCELLED canceled</p>
                     */
                    std::vector<int64_t> m_subStatusList;
                    bool m_subStatusListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_KBSHARESTATUS_H_
