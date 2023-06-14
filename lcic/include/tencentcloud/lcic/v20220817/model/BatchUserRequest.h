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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHUSERREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHUSERREQUEST_H_

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
                * The information of the users to register.
Used by actions: BatchRegister.
                */
                class BatchUserRequest : public AbstractModel
                {
                public:
                    BatchUserRequest();
                    ~BatchUserRequest() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The SDKAppID assigned by LCIC.  Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SdkAppId The SDKAppID assigned by LCIC.  Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置The SDKAppID assigned by LCIC.  Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sdkAppId The SDKAppID assigned by LCIC.  Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The username.  Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name The username.  Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置The username.  Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name The username.  Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取The user’s ID in your system, which must be unique across the same application.  Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OriginId The user’s ID in your system, which must be unique across the same application.  Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOriginId() const;

                    /**
                     * 设置The user’s ID in your system, which must be unique across the same application.  Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _originId The user’s ID in your system, which must be unique across the same application.  Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOriginId(const std::string& _originId);

                    /**
                     * 判断参数 OriginId 是否已赋值
                     * @return OriginId 是否已赋值
                     * 
                     */
                    bool OriginIdHasBeenSet() const;

                    /**
                     * 获取The user’s profile photo.  Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Avatar The user’s profile photo.  Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAvatar() const;

                    /**
                     * 设置The user’s profile photo.  Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _avatar The user’s profile photo.  Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAvatar(const std::string& _avatar);

                    /**
                     * 判断参数 Avatar 是否已赋值
                     * @return Avatar 是否已赋值
                     * 
                     */
                    bool AvatarHasBeenSet() const;

                private:

                    /**
                     * The SDKAppID assigned by LCIC.  Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * The username.  Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The user’s ID in your system, which must be unique across the same application.  Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_originId;
                    bool m_originIdHasBeenSet;

                    /**
                     * The user’s profile photo.  Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_avatar;
                    bool m_avatarHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHUSERREQUEST_H_
