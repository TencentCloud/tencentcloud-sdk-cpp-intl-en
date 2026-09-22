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
                     * 获取Event handler, which is the EventSet.EventHandle field in the output parameter of the [event notification pull](https://www.tencentcloud.com/document/product/266/33433?from_cn_redirect=1) API.
Array length limit: 16.
                     * @return EventHandles Event handler, which is the EventSet.EventHandle field in the output parameter of the [event notification pull](https://www.tencentcloud.com/document/product/266/33433?from_cn_redirect=1) API.
Array length limit: 16.
                     * 
                     */
                    std::vector<std::string> GetEventHandles() const;

                    /**
                     * 设置Event handler, which is the EventSet.EventHandle field in the output parameter of the [event notification pull](https://www.tencentcloud.com/document/product/266/33433?from_cn_redirect=1) API.
Array length limit: 16.
                     * @param _eventHandles Event handler, which is the EventSet.EventHandle field in the output parameter of the [event notification pull](https://www.tencentcloud.com/document/product/266/33433?from_cn_redirect=1) API.
Array length limit: 16.
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
                     * 获取Reserved field, used for special purposes.
                     * @return ExtInfo Reserved field, used for special purposes.
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置Reserved field, used for special purposes.
                     * @param _extInfo Reserved field, used for special purposes.
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
                     * 获取<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD on or after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications (whether the default application or a newly created application).</b>
                     * @return SubAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD on or after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications (whether the default application or a newly created application).</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD on or after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications (whether the default application or a newly created application).</b>
                     * @param _subAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD on or after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications (whether the default application or a newly created application).</b>
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
                     * Event handler, which is the EventSet.EventHandle field in the output parameter of the [event notification pull](https://www.tencentcloud.com/document/product/266/33433?from_cn_redirect=1) API.
Array length limit: 16.
                     */
                    std::vector<std::string> m_eventHandles;
                    bool m_eventHandlesHasBeenSet;

                    /**
                     * Reserved field, used for special purposes.
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                    /**
                     * <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD on or after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications (whether the default application or a newly created application).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CONFIRMEVENTSREQUEST_H_
