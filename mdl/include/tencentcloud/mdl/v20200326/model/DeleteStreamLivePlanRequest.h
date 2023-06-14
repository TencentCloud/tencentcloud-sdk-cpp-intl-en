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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_DELETESTREAMLIVEPLANREQUEST_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_DELETESTREAMLIVEPLANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * DeleteStreamLivePlan request structure.
                */
                class DeleteStreamLivePlanRequest : public AbstractModel
                {
                public:
                    DeleteStreamLivePlanRequest();
                    ~DeleteStreamLivePlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the channel whose event is to be deleted
                     * @return ChannelId ID of the channel whose event is to be deleted
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置ID of the channel whose event is to be deleted
                     * @param _channelId ID of the channel whose event is to be deleted
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取Name of the event to delete
                     * @return EventName Name of the event to delete
                     * 
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置Name of the event to delete
                     * @param _eventName Name of the event to delete
                     * 
                     */
                    void SetEventName(const std::string& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     * 
                     */
                    bool EventNameHasBeenSet() const;

                private:

                    /**
                     * ID of the channel whose event is to be deleted
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * Name of the event to delete
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_DELETESTREAMLIVEPLANREQUEST_H_
