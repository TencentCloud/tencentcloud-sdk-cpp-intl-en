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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYINVITATIONINFORESPONSE_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYINVITATIONINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryInvitationInfoData.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * QueryInvitationInfo response structure.
                */
                class QueryInvitationInfoResponse : public AbstractModel
                {
                public:
                    QueryInvitationInfoResponse();
                    ~QueryInvitationInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Invitation link information.
                     * @return InvitationInfo Invitation link information.
                     * 
                     */
                    std::vector<QueryInvitationInfoData> GetInvitationInfo() const;

                    /**
                     * 判断参数 InvitationInfo 是否已赋值
                     * @return InvitationInfo 是否已赋值
                     * 
                     */
                    bool InvitationInfoHasBeenSet() const;

                private:

                    /**
                     * Invitation link information.
                     */
                    std::vector<QueryInvitationInfoData> m_invitationInfo;
                    bool m_invitationInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYINVITATIONINFORESPONSE_H_
