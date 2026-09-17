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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CONFIRMEVENTSREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CONFIRMEVENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ConfirmEvents request structure.
                */
                class ConfirmEventsRequest : public AbstractModel
                {
                public:
                    ConfirmEventsRequest();
                    ~ConfirmEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取
                     * @return EventHandles 
                     * 
                     */
                    std::vector<std::string> GetEventHandles() const;

                    /**
                     * 设置
                     * @param _eventHandles 
                     * 
                     */
                    void SetEventHandles(const std::vector<std::string>& _eventHandles);

                    /**
                     * 判断参数 EventHandles 是否已赋值
                     * @return EventHandles 是否已赋值
                     * 
                     */
                    bool EventHandlesHasBeenSet() const;

                    /**
                     * 获取
                     * @return ExtInfo 
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置
                     * @param _extInfo 
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                    /**
                     * 获取
                     * @return SubAppId 
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置
                     * @param _subAppId 
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::vector<std::string> m_eventHandles;
                    bool m_eventHandlesHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CONFIRMEVENTSREQUEST_H_
