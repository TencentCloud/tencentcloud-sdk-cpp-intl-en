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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_LISTCLSLOGTOPICSREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_LISTCLSLOGTOPICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * ListClsLogTopics request structure.
                */
                class ListClsLogTopicsRequest : public AbstractModel
                {
                public:
                    ListClsLogTopicsRequest();
                    ~ListClsLogTopicsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Connection channel. Default value: cdn
                     * @return Channel Connection channel. Default value: cdn
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置Connection channel. Default value: cdn
                     * @param Channel Connection channel. Default value: cdn
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     */
                    bool ChannelHasBeenSet() const;

                private:

                    /**
                     * Connection channel. Default value: cdn
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_LISTCLSLOGTOPICSREQUEST_H_
