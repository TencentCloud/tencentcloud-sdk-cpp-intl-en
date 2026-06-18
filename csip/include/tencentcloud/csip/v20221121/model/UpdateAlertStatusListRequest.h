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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_UPDATEALERTSTATUSLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_UPDATEALERTSTATUSLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/NewAlertKey.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * UpdateAlertStatusList request structure.
                */
                class UpdateAlertStatusListRequest : public AbstractModel
                {
                public:
                    UpdateAlertStatusListRequest();
                    ~UpdateAlertStatusListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Alarm ID list
                     * @return ID Alarm ID list
                     * 
                     */
                    std::vector<NewAlertKey> GetID() const;

                    /**
                     * 设置Alarm ID list
                     * @param _iD Alarm ID list
                     * 
                     */
                    void SetID(const std::vector<NewAlertKey>& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Operation type. 
1: Revoke disposal 
2: Marked with processed 
3: Marked as ignored 
4: Cancel tag disposal
5: Unmark ignore
                     * @return OperateType Operation type. 
1: Revoke disposal 
2: Marked with processed 
3: Marked as ignored 
4: Cancel tag disposal
5: Unmark ignore
                     * 
                     */
                    int64_t GetOperateType() const;

                    /**
                     * 设置Operation type. 
1: Revoke disposal 
2: Marked with processed 
3: Marked as ignored 
4: Cancel tag disposal
5: Unmark ignore
                     * @param _operateType Operation type. 
1: Revoke disposal 
2: Marked with processed 
3: Marked as ignored 
4: Cancel tag disposal
5: Unmark ignore
                     * 
                     */
                    void SetOperateType(const int64_t& _operateType);

                    /**
                     * 判断参数 OperateType 是否已赋值
                     * @return OperateType 是否已赋值
                     * 
                     */
                    bool OperateTypeHasBeenSet() const;

                    /**
                     * 获取Group Account Member ID
                     * @return MemberId Group Account Member ID
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置Group Account Member ID
                     * @param _memberId Group Account Member ID
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取Member ID of the Called Group Account
                     * @return OperatedMemberId Member ID of the Called Group Account
                     * 
                     */
                    std::vector<std::string> GetOperatedMemberId() const;

                    /**
                     * 设置Member ID of the Called Group Account
                     * @param _operatedMemberId Member ID of the Called Group Account
                     * 
                     */
                    void SetOperatedMemberId(const std::vector<std::string>& _operatedMemberId);

                    /**
                     * 判断参数 OperatedMemberId 是否已赋值
                     * @return OperatedMemberId 是否已赋值
                     * 
                     */
                    bool OperatedMemberIdHasBeenSet() const;

                private:

                    /**
                     * Alarm ID list
                     */
                    std::vector<NewAlertKey> m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Operation type. 
1: Revoke disposal 
2: Marked with processed 
3: Marked as ignored 
4: Cancel tag disposal
5: Unmark ignore
                     */
                    int64_t m_operateType;
                    bool m_operateTypeHasBeenSet;

                    /**
                     * Group Account Member ID
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * Member ID of the Called Group Account
                     */
                    std::vector<std::string> m_operatedMemberId;
                    bool m_operatedMemberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_UPDATEALERTSTATUSLISTREQUEST_H_
