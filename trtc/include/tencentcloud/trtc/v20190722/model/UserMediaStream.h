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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_USERMEDIASTREAM_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_USERMEDIASTREAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/MixUserInfo.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * The stream information.
                */
                class UserMediaStream : public AbstractModel
                {
                public:
                    UserMediaStream();
                    ~UserMediaStream() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The user information.
                     * @return UserInfo The user information.
                     * 
                     */
                    MixUserInfo GetUserInfo() const;

                    /**
                     * 设置The user information.
                     * @param _userInfo The user information.
                     * 
                     */
                    void SetUserInfo(const MixUserInfo& _userInfo);

                    /**
                     * 判断参数 UserInfo 是否已赋值
                     * @return UserInfo 是否已赋值
                     * 
                     */
                    bool UserInfoHasBeenSet() const;

                    /**
                     * 获取The stream type. 0: Camera; 1: Screen sharing. If you do not pass this parameter, 0 will be used.
                     * @return StreamType The stream type. 0: Camera; 1: Screen sharing. If you do not pass this parameter, 0 will be used.
                     * 
                     */
                    uint64_t GetStreamType() const;

                    /**
                     * 设置The stream type. 0: Camera; 1: Screen sharing. If you do not pass this parameter, 0 will be used.
                     * @param _streamType The stream type. 0: Camera; 1: Screen sharing. If you do not pass this parameter, 0 will be used.
                     * 
                     */
                    void SetStreamType(const uint64_t& _streamType);

                    /**
                     * 判断参数 StreamType 是否已赋值
                     * @return StreamType 是否已赋值
                     * 
                     */
                    bool StreamTypeHasBeenSet() const;

                private:

                    /**
                     * The user information.
                     */
                    MixUserInfo m_userInfo;
                    bool m_userInfoHasBeenSet;

                    /**
                     * The stream type. 0: Camera; 1: Screen sharing. If you do not pass this parameter, 0 will be used.
                     */
                    uint64_t m_streamType;
                    bool m_streamTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_USERMEDIASTREAM_H_
