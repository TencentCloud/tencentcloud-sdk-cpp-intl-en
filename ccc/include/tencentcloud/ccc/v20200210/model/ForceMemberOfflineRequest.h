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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_FORCEMEMBEROFFLINEREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_FORCEMEMBEROFFLINEREQUEST_H_

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
                * ForceMemberOffline request structure.
                */
                class ForceMemberOfflineRequest : public AbstractModel
                {
                public:
                    ForceMemberOfflineRequest();
                    ~ForceMemberOfflineRequest() = default;
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
                     * 获取Customer service ID.
                     * @return UserId Customer service ID.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置Customer service ID.
                     * @param _userId Customer service ID.
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * App ID (required), which can be viewed at https://console.cloud.tencent.com/ccc.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Customer service ID.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_FORCEMEMBEROFFLINEREQUEST_H_
