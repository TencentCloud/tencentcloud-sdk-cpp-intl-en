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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_REGISTERUSERREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_REGISTERUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * RegisterUser request structure.
                */
                class RegisterUserRequest : public AbstractModel
                {
                public:
                    RegisterUserRequest();
                    ~RegisterUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取LCIC SdkAppId	
                     * @return SdkAppId LCIC SdkAppId	
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置LCIC SdkAppId	
                     * @param _sdkAppId LCIC SdkAppId	
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
                     * 获取Username	
                     * @return Name Username	
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Username	
                     * @param _name Username	
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
                     * 获取User's ID in the customer system, which should be unique under the same application	
                     * @return OriginId User's ID in the customer system, which should be unique under the same application	
                     * 
                     */
                    std::string GetOriginId() const;

                    /**
                     * 设置User's ID in the customer system, which should be unique under the same application	
                     * @param _originId User's ID in the customer system, which should be unique under the same application	
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
                     * 获取User's profile photo	
                     * @return Avatar User's profile photo	
                     * 
                     */
                    std::string GetAvatar() const;

                    /**
                     * 设置User's profile photo	
                     * @param _avatar User's profile photo	
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
                     * LCIC SdkAppId	
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Username	
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * User's ID in the customer system, which should be unique under the same application	
                     */
                    std::string m_originId;
                    bool m_originIdHasBeenSet;

                    /**
                     * User's profile photo	
                     */
                    std::string m_avatar;
                    bool m_avatarHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_REGISTERUSERREQUEST_H_
