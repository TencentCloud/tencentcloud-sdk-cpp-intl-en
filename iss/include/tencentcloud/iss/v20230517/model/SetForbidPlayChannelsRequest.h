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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_SETFORBIDPLAYCHANNELSREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_SETFORBIDPLAYCHANNELSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/SetForbidplayChannelParam.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * SetForbidPlayChannels request structure.
                */
                class SetForbidPlayChannelsRequest : public AbstractModel
                {
                public:
                    SetForbidPlayChannelsRequest();
                    ~SetForbidPlayChannelsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Channel parameters to be disabled. Up to 200 channels can be set at a time.
                     * @return Channels Channel parameters to be disabled. Up to 200 channels can be set at a time.
                     * 
                     */
                    std::vector<SetForbidplayChannelParam> GetChannels() const;

                    /**
                     * 设置Channel parameters to be disabled. Up to 200 channels can be set at a time.
                     * @param _channels Channel parameters to be disabled. Up to 200 channels can be set at a time.
                     * 
                     */
                    void SetChannels(const std::vector<SetForbidplayChannelParam>& _channels);

                    /**
                     * 判断参数 Channels 是否已赋值
                     * @return Channels 是否已赋值
                     * 
                     */
                    bool ChannelsHasBeenSet() const;

                    /**
                     * 获取User uin, which can be the uin of a sub-user or a root user
                     * @return UserId User uin, which can be the uin of a sub-user or a root user
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置User uin, which can be the uin of a sub-user or a root user
                     * @param _userId User uin, which can be the uin of a sub-user or a root user
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
                     * Channel parameters to be disabled. Up to 200 channels can be set at a time.
                     */
                    std::vector<SetForbidplayChannelParam> m_channels;
                    bool m_channelsHasBeenSet;

                    /**
                     * User uin, which can be the uin of a sub-user or a root user
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_SETFORBIDPLAYCHANNELSREQUEST_H_
