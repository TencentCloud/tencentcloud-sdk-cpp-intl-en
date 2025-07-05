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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_CCINTERCEPTEVENT_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_CCINTERCEPTEVENT_H_

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
        namespace V20220106
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
                     * 获取Client IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClientIp Client IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置Client IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clientIp Client IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     * 
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取Number of blocks per minute
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InterceptNum Number of blocks per minute
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetInterceptNum() const;

                    /**
                     * 设置Number of blocks per minute
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _interceptNum Number of blocks per minute
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInterceptNum(const int64_t& _interceptNum);

                    /**
                     * 判断参数 InterceptNum 是否已赋值
                     * @return InterceptNum 是否已赋值
                     * 
                     */
                    bool InterceptNumHasBeenSet() const;

                    /**
                     * 获取Block time in rate-limiting policy per minute in seconds
                     * @return InterceptTime Block time in rate-limiting policy per minute in seconds
                     * 
                     */
                    int64_t GetInterceptTime() const;

                    /**
                     * 设置Block time in rate-limiting policy per minute in seconds
                     * @param _interceptTime Block time in rate-limiting policy per minute in seconds
                     * 
                     */
                    void SetInterceptTime(const int64_t& _interceptTime);

                    /**
                     * 判断参数 InterceptTime 是否已赋值
                     * @return InterceptTime 是否已赋值
                     * 
                     */
                    bool InterceptTimeHasBeenSet() const;

                private:

                    /**
                     * Client IP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * Number of blocks per minute
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_interceptNum;
                    bool m_interceptNumHasBeenSet;

                    /**
                     * Block time in rate-limiting policy per minute in seconds
                     */
                    int64_t m_interceptTime;
                    bool m_interceptTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_CCINTERCEPTEVENT_H_
