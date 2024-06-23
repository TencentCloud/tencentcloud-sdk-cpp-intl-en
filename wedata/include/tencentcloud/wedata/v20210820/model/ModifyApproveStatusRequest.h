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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYAPPROVESTATUSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYAPPROVESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * ModifyApproveStatus request structure.
                */
                class ModifyApproveStatusRequest : public AbstractModel
                {
                public:
                    ModifyApproveStatusRequest();
                    ~ModifyApproveStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Approval Form IDs
                     * @return ApproveIds Approval Form IDs
                     * 
                     */
                    std::vector<std::string> GetApproveIds() const;

                    /**
                     * 设置Approval Form IDs
                     * @param _approveIds Approval Form IDs
                     * 
                     */
                    void SetApproveIds(const std::vector<std::string>& _approveIds);

                    /**
                     * 判断参数 ApproveIds 是否已赋值
                     * @return ApproveIds 是否已赋值
                     * 
                     */
                    bool ApproveIdsHasBeenSet() const;

                    /**
                     * 获取Approval Remarks
                     * @return Remark Approval Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Approval Remarks
                     * @param _remark Approval Remarks
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Status
                     * @return Status Status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status
                     * @param _status Status
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Approval Form IDs
                     */
                    std::vector<std::string> m_approveIds;
                    bool m_approveIdsHasBeenSet;

                    /**
                     * Approval Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYAPPROVESTATUSREQUEST_H_
