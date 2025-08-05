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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_IPEXPIREINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_IPEXPIREINFO_H_

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
                * Stores the scheduled expiration time and corresponding IP.
                */
                class IPExpireInfo : public AbstractModel
                {
                public:
                    IPExpireInfo();
                    ~IPExpireInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Scheduled expiration time, following the ISO 8601 standard date and time format, such as "2022-01-01T00:00:00+08:00".
                     * @return ExpireTime Scheduled expiration time, following the ISO 8601 standard date and time format, such as "2022-01-01T00:00:00+08:00".
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Scheduled expiration time, following the ISO 8601 standard date and time format, such as "2022-01-01T00:00:00+08:00".
                     * @param _expireTime Scheduled expiration time, following the ISO 8601 standard date and time format, such as "2022-01-01T00:00:00+08:00".
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取IP list. supports ip and ip range.
                     * @return IPList IP list. supports ip and ip range.
                     * 
                     */
                    std::vector<std::string> GetIPList() const;

                    /**
                     * 设置IP list. supports ip and ip range.
                     * @param _iPList IP list. supports ip and ip range.
                     * 
                     */
                    void SetIPList(const std::vector<std::string>& _iPList);

                    /**
                     * 判断参数 IPList 是否已赋值
                     * @return IPList 是否已赋值
                     * 
                     */
                    bool IPListHasBeenSet() const;

                private:

                    /**
                     * Scheduled expiration time, following the ISO 8601 standard date and time format, such as "2022-01-01T00:00:00+08:00".
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * IP list. supports ip and ip range.
                     */
                    std::vector<std::string> m_iPList;
                    bool m_iPListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_IPEXPIREINFO_H_
