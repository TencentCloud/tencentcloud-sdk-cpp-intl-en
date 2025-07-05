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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_TRANSFERTOMANUALREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_TRANSFERTOMANUALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * TransferToManual request structure.
                */
                class TransferToManualRequest : public AbstractModel
                {
                public:
                    TransferToManualRequest();
                    ~TransferToManualRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取App ID (required), which can be viewed at https://console.cloud.tencent.com/ccc.
                     * @return SdkAppId App ID (required), which can be viewed at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置App ID (required), which can be viewed at https://console.cloud.tencent.com/ccc.
                     * @param _sdkAppId App ID (required), which can be viewed at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Session ID.
                     * @return SessionId Session ID.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置Session ID.
                     * @param _sessionId Session ID.
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取Skill group Id.
                     * @return SkillGroupId Skill group Id.
                     * 
                     */
                    uint64_t GetSkillGroupId() const;

                    /**
                     * 设置Skill group Id.
                     * @param _skillGroupId Skill group Id.
                     * 
                     */
                    void SetSkillGroupId(const uint64_t& _skillGroupId);

                    /**
                     * 判断参数 SkillGroupId 是否已赋值
                     * @return SkillGroupId 是否已赋值
                     * 
                     */
                    bool SkillGroupIdHasBeenSet() const;

                private:

                    /**
                     * App ID (required), which can be viewed at https://console.cloud.tencent.com/ccc.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Session ID.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Skill group Id.
                     */
                    uint64_t m_skillGroupId;
                    bool m_skillGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_TRANSFERTOMANUALREQUEST_H_
