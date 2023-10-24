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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_STARTPUBLISHSTREAMWITHURLREQUEST_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_STARTPUBLISHSTREAMWITHURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            namespace Model
            {
                /**
                * StartPublishStreamWithURL request structure.
                */
                class StartPublishStreamWithURLRequest : public AbstractModel
                {
                public:
                    StartPublishStreamWithURLRequest();
                    ~StartPublishStreamWithURLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique user ID, which is customized by you and is not understood by CAR.
                     * @return UserId Unique user ID, which is customized by you and is not understood by CAR.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置Unique user ID, which is customized by you and is not understood by CAR.
                     * @param _userId Unique user ID, which is customized by you and is not understood by CAR.
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
                     * 获取Push address. Only RTMP is supported for push currently.
                     * @return PublishStreamURL Push address. Only RTMP is supported for push currently.
                     * 
                     */
                    std::string GetPublishStreamURL() const;

                    /**
                     * 设置Push address. Only RTMP is supported for push currently.
                     * @param _publishStreamURL Push address. Only RTMP is supported for push currently.
                     * 
                     */
                    void SetPublishStreamURL(const std::string& _publishStreamURL);

                    /**
                     * 判断参数 PublishStreamURL 是否已赋值
                     * @return PublishStreamURL 是否已赋值
                     * 
                     */
                    bool PublishStreamURLHasBeenSet() const;

                private:

                    /**
                     * Unique user ID, which is customized by you and is not understood by CAR.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Push address. Only RTMP is supported for push currently.
                     */
                    std::string m_publishStreamURL;
                    bool m_publishStreamURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_STARTPUBLISHSTREAMWITHURLREQUEST_H_
