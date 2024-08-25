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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_CREATEMNPAPPROVALREQUEST_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_CREATEMNPAPPROVALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcmpp
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * CreateMNPApproval request structure.
                */
                class CreateMNPApprovalRequest : public AbstractModel
                {
                public:
                    CreateMNPApprovalRequest();
                    ~CreateMNPApprovalRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Mini program version ID
                     * @return MNPVersionId Mini program version ID
                     * 
                     */
                    int64_t GetMNPVersionId() const;

                    /**
                     * 设置Mini program version ID
                     * @param _mNPVersionId Mini program version ID
                     * 
                     */
                    void SetMNPVersionId(const int64_t& _mNPVersionId);

                    /**
                     * 判断参数 MNPVersionId 是否已赋值
                     * @return MNPVersionId 是否已赋值
                     * 
                     */
                    bool MNPVersionIdHasBeenSet() const;

                    /**
                     * 获取submit: Submit an approval request; cancel: Cancel the approval request
                     * @return ApplyAction submit: Submit an approval request; cancel: Cancel the approval request
                     * 
                     */
                    std::string GetApplyAction() const;

                    /**
                     * 设置submit: Submit an approval request; cancel: Cancel the approval request
                     * @param _applyAction submit: Submit an approval request; cancel: Cancel the approval request
                     * 
                     */
                    void SetApplyAction(const std::string& _applyAction);

                    /**
                     * 判断参数 ApplyAction 是否已赋值
                     * @return ApplyAction 是否已赋值
                     * 
                     */
                    bool ApplyActionHasBeenSet() const;

                    /**
                     * 获取Platform ID
                     * @return PlatformId Platform ID
                     * 
                     */
                    std::string GetPlatformId() const;

                    /**
                     * 设置Platform ID
                     * @param _platformId Platform ID
                     * 
                     */
                    void SetPlatformId(const std::string& _platformId);

                    /**
                     * 判断参数 PlatformId 是否已赋值
                     * @return PlatformId 是否已赋值
                     * 
                     */
                    bool PlatformIdHasBeenSet() const;

                private:

                    /**
                     * Mini program version ID
                     */
                    int64_t m_mNPVersionId;
                    bool m_mNPVersionIdHasBeenSet;

                    /**
                     * submit: Submit an approval request; cancel: Cancel the approval request
                     */
                    std::string m_applyAction;
                    bool m_applyActionHasBeenSet;

                    /**
                     * Platform ID
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_CREATEMNPAPPROVALREQUEST_H_
