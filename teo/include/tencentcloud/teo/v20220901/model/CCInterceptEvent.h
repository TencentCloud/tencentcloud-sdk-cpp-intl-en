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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CCINTERCEPTEVENT_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CCINTERCEPTEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CC block event
                */
                class CCInterceptEvent : public AbstractModel
                {
                public:
                    CCInterceptEvent();
                    ~CCInterceptEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The client IP.
                     * @return ClientIp The client IP.
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置The client IP.
                     * @param ClientIp The client IP.
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取The requests per minute that are blocked.
                     * @return InterceptNum The requests per minute that are blocked.
                     */
                    int64_t GetInterceptNum() const;

                    /**
                     * 设置The requests per minute that are blocked.
                     * @param InterceptNum The requests per minute that are blocked.
                     */
                    void SetInterceptNum(const int64_t& _interceptNum);

                    /**
                     * 判断参数 InterceptNum 是否已赋值
                     * @return InterceptNum 是否已赋值
                     */
                    bool InterceptNumHasBeenSet() const;

                    /**
                     * 获取Block time in seconds.
                     * @return InterceptTime Block time in seconds.
                     */
                    int64_t GetInterceptTime() const;

                    /**
                     * 设置Block time in seconds.
                     * @param InterceptTime Block time in seconds.
                     */
                    void SetInterceptTime(const int64_t& _interceptTime);

                    /**
                     * 判断参数 InterceptTime 是否已赋值
                     * @return InterceptTime 是否已赋值
                     */
                    bool InterceptTimeHasBeenSet() const;

                private:

                    /**
                     * The client IP.
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * The requests per minute that are blocked.
                     */
                    int64_t m_interceptNum;
                    bool m_interceptNumHasBeenSet;

                    /**
                     * Block time in seconds.
                     */
                    int64_t m_interceptTime;
                    bool m_interceptTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CCINTERCEPTEVENT_H_
