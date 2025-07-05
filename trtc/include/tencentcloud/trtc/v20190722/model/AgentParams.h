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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_AGENTPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_AGENTPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * The information of the relaying robot in the room.
                */
                class AgentParams : public AbstractModel
                {
                public:
                    AgentParams();
                    ~AgentParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The [user ID](https://intl.cloud.tencent.com/document/product/647/37714) of the relaying robot in the TRTC room, which cannot be the same as a user ID already in use. We recommend you include the room ID in this user ID.
                     * @return UserId The [user ID](https://intl.cloud.tencent.com/document/product/647/37714) of the relaying robot in the TRTC room, which cannot be the same as a user ID already in use. We recommend you include the room ID in this user ID.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置The [user ID](https://intl.cloud.tencent.com/document/product/647/37714) of the relaying robot in the TRTC room, which cannot be the same as a user ID already in use. We recommend you include the room ID in this user ID.
                     * @param _userId The [user ID](https://intl.cloud.tencent.com/document/product/647/37714) of the relaying robot in the TRTC room, which cannot be the same as a user ID already in use. We recommend you include the room ID in this user ID.
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取The signature (similar to a login password) required for the relaying robot to enter the room. For information on how to calculate the signature, see [What is UserSig?](https://intl.cloud.tencent.com/document/product/647/38104). |
                     * @return UserSig The signature (similar to a login password) required for the relaying robot to enter the room. For information on how to calculate the signature, see [What is UserSig?](https://intl.cloud.tencent.com/document/product/647/38104). |
                     * 
                     */
                    std::string GetUserSig() const;

                    /**
                     * 设置The signature (similar to a login password) required for the relaying robot to enter the room. For information on how to calculate the signature, see [What is UserSig?](https://intl.cloud.tencent.com/document/product/647/38104). |
                     * @param _userSig The signature (similar to a login password) required for the relaying robot to enter the room. For information on how to calculate the signature, see [What is UserSig?](https://intl.cloud.tencent.com/document/product/647/38104). |
                     * 
                     */
                    void SetUserSig(const std::string& _userSig);

                    /**
                     * 判断参数 UserSig 是否已赋值
                     * @return UserSig 是否已赋值
                     * 
                     */
                    bool UserSigHasBeenSet() const;

                    /**
                     * 获取The timeout period (seconds) for relaying to stop automatically after all the users whose streams are mixed leave the room. The value cannot be smaller than 5 or larger than 86400 (24 hours). Default value: 30.
                     * @return MaxIdleTime The timeout period (seconds) for relaying to stop automatically after all the users whose streams are mixed leave the room. The value cannot be smaller than 5 or larger than 86400 (24 hours). Default value: 30.
                     * 
                     */
                    uint64_t GetMaxIdleTime() const;

                    /**
                     * 设置The timeout period (seconds) for relaying to stop automatically after all the users whose streams are mixed leave the room. The value cannot be smaller than 5 or larger than 86400 (24 hours). Default value: 30.
                     * @param _maxIdleTime The timeout period (seconds) for relaying to stop automatically after all the users whose streams are mixed leave the room. The value cannot be smaller than 5 or larger than 86400 (24 hours). Default value: 30.
                     * 
                     */
                    void SetMaxIdleTime(const uint64_t& _maxIdleTime);

                    /**
                     * 判断参数 MaxIdleTime 是否已赋值
                     * @return MaxIdleTime 是否已赋值
                     * 
                     */
                    bool MaxIdleTimeHasBeenSet() const;

                private:

                    /**
                     * The [user ID](https://intl.cloud.tencent.com/document/product/647/37714) of the relaying robot in the TRTC room, which cannot be the same as a user ID already in use. We recommend you include the room ID in this user ID.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * The signature (similar to a login password) required for the relaying robot to enter the room. For information on how to calculate the signature, see [What is UserSig?](https://intl.cloud.tencent.com/document/product/647/38104). |
                     */
                    std::string m_userSig;
                    bool m_userSigHasBeenSet;

                    /**
                     * The timeout period (seconds) for relaying to stop automatically after all the users whose streams are mixed leave the room. The value cannot be smaller than 5 or larger than 86400 (24 hours). Default value: 30.
                     */
                    uint64_t m_maxIdleTime;
                    bool m_maxIdleTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_AGENTPARAMS_H_
