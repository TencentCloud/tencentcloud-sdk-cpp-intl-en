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
                     * 获取Event handler, i.e., the EventSet.EventHandle field in the output parameter of the [event notification pull](https://www.tencentcloud.com/document/product/266/33433?from_cn_redirect=1) API.
Array length limit: 16.
                     * @return EventHandles Event handler, i.e., the EventSet.EventHandle field in the output parameter of the [event notification pull](https://www.tencentcloud.com/document/product/266/33433?from_cn_redirect=1) API.
Array length limit: 16.
                     * 
                     */
                    std::vector<std::string> GetEventHandles() const;

                    /**
                     * 设置Event handler, i.e., the EventSet.EventHandle field in the output parameter of the [event notification pull](https://www.tencentcloud.com/document/product/266/33433?from_cn_redirect=1) API.
Array length limit: 16.
                     * @param _eventHandles Event handler, i.e., the EventSet.EventHandle field in the output parameter of the [event notification pull](https://www.tencentcloud.com/document/product/266/33433?from_cn_redirect=1) API.
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
                     * 获取Reserved field, used when special purpose.
                     * @return ExtInfo Reserved field, used when special purpose.
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置Reserved field, used when special purpose.
                     * @param _extInfo Reserved field, used when special purpose.
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
                     * 获取<b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * @return SubAppId <b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * @param _subAppId <b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
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
                     * Event handler, i.e., the EventSet.EventHandle field in the output parameter of the [event notification pull](https://www.tencentcloud.com/document/product/266/33433?from_cn_redirect=1) API.
Array length limit: 16.
                     */
                    std::vector<std::string> m_eventHandles;
                    bool m_eventHandlesHasBeenSet;

                    /**
                     * Reserved field, used when special purpose.
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                    /**
                     * <b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CONFIRMEVENTSREQUEST_H_
