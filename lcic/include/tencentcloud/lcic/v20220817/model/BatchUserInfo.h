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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHUSERINFO_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHUSERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * The information of registered users.
                */
                class BatchUserInfo : public AbstractModel
                {
                public:
                    BatchUserInfo();
                    ~BatchUserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The SDKAppID assigned by LCIC.

                     * @return SdkAppId The SDKAppID assigned by LCIC.

                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置The SDKAppID assigned by LCIC.

                     * @param SdkAppId The SDKAppID assigned by LCIC.

                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取The user ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserId The user ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置The user ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param UserId The user ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取The user’s ID in your system. If the same request parameter is not specified, the value of this parameter will be the same as `UserId`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OriginId The user’s ID in your system. If the same request parameter is not specified, the value of this parameter will be the same as `UserId`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetOriginId() const;

                    /**
                     * 设置The user’s ID in your system. If the same request parameter is not specified, the value of this parameter will be the same as `UserId`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param OriginId The user’s ID in your system. If the same request parameter is not specified, the value of this parameter will be the same as `UserId`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOriginId(const std::string& _originId);

                    /**
                     * 判断参数 OriginId 是否已赋值
                     * @return OriginId 是否已赋值
                     */
                    bool OriginIdHasBeenSet() const;

                private:

                    /**
                     * The SDKAppID assigned by LCIC.

                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * The user ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * The user’s ID in your system. If the same request parameter is not specified, the value of this parameter will be the same as `UserId`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_originId;
                    bool m_originIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHUSERINFO_H_
