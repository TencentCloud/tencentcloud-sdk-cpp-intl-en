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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_FORBIDSTREAMINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_FORBIDSTREAMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * List of forbidden streams
                */
                class ForbidStreamInfo : public AbstractModel
                {
                public:
                    ForbidStreamInfo();
                    ~ForbidStreamInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Stream name.
                     * @return StreamName Stream name.
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置Stream name.
                     * @param _streamName Stream name.
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取The creation time.
Note: Beijing time (UTC+8) is used.
                     * @return CreateTime The creation time.
Note: Beijing time (UTC+8) is used.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置The creation time.
Note: Beijing time (UTC+8) is used.
                     * @param _createTime The creation time.
Note: Beijing time (UTC+8) is used.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取The end time.
Note: Beijing time (UTC+8) is used.
                     * @return ExpireTime The end time.
Note: Beijing time (UTC+8) is used.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置The end time.
Note: Beijing time (UTC+8) is used.
                     * @param _expireTime The end time.
Note: Beijing time (UTC+8) is used.
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
                     * 获取The push path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AppName The push path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置The push path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _appName The push path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取The push domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DomainName The push domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置The push domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _domainName The push domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                private:

                    /**
                     * Stream name.
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * The creation time.
Note: Beijing time (UTC+8) is used.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * The end time.
Note: Beijing time (UTC+8) is used.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * The push path.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * The push domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_FORBIDSTREAMINFO_H_
