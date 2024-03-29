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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_STOPPUBLISHSTREAMREQUEST_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_STOPPUBLISHSTREAMREQUEST_H_

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
                * StopPublishStream request structure.
                */
                class StopPublishStreamRequest : public AbstractModel
                {
                public:
                    StopPublishStreamRequest();
                    ~StopPublishStreamRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique user ID, which is customized by you and is not understood by CAR. It can also be randomly generated using the timestamp and should be kept unchanged during user reconnection.
                     * @return UserId Unique user ID, which is customized by you and is not understood by CAR. It can also be randomly generated using the timestamp and should be kept unchanged during user reconnection.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置Unique user ID, which is customized by you and is not understood by CAR. It can also be randomly generated using the timestamp and should be kept unchanged during user reconnection.
                     * @param _userId Unique user ID, which is customized by you and is not understood by CAR. It can also be randomly generated using the timestamp and should be kept unchanged during user reconnection.
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
                     * Unique user ID, which is customized by you and is not understood by CAR. It can also be randomly generated using the timestamp and should be kept unchanged during user reconnection.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_STOPPUBLISHSTREAMREQUEST_H_
