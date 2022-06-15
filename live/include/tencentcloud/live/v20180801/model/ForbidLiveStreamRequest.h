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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_FORBIDLIVESTREAMREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_FORBIDLIVESTREAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ForbidLiveStream request structure.
                */
                class ForbidLiveStreamRequest : public AbstractModel
                {
                public:
                    ForbidLiveStreamRequest();
                    ~ForbidLiveStreamRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Push path, which is the same as the AppName in push and playback addresses and is "live" by default.
                     * @return AppName Push path, which is the same as the AppName in push and playback addresses and is "live" by default.
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置Push path, which is the same as the AppName in push and playback addresses and is "live" by default.
                     * @param AppName Push path, which is the same as the AppName in push and playback addresses and is "live" by default.
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取Your push domain name.
                     * @return DomainName Your push domain name.
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置Your push domain name.
                     * @param DomainName Your push domain name.
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取Stream name.
                     * @return StreamName Stream name.
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置Stream name.
                     * @param StreamName Stream name.
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取The time (in UTC format) to resume the stream, such as 2018-11-29T19:00:00Z.
Notes:
1. The default stream disabling period is seven days. A stream can be disabled for up to 90 days.
2. Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     * @return ResumeTime The time (in UTC format) to resume the stream, such as 2018-11-29T19:00:00Z.
Notes:
1. The default stream disabling period is seven days. A stream can be disabled for up to 90 days.
2. Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     */
                    std::string GetResumeTime() const;

                    /**
                     * 设置The time (in UTC format) to resume the stream, such as 2018-11-29T19:00:00Z.
Notes:
1. The default stream disabling period is seven days. A stream can be disabled for up to 90 days.
2. Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     * @param ResumeTime The time (in UTC format) to resume the stream, such as 2018-11-29T19:00:00Z.
Notes:
1. The default stream disabling period is seven days. A stream can be disabled for up to 90 days.
2. Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     */
                    void SetResumeTime(const std::string& _resumeTime);

                    /**
                     * 判断参数 ResumeTime 是否已赋值
                     * @return ResumeTime 是否已赋值
                     */
                    bool ResumeTimeHasBeenSet() const;

                    /**
                     * 获取Reason for forbidding.
Note: Be sure to enter the reason for forbidding to avoid any faulty operations.
Length limit: 2,048 bytes.
                     * @return Reason Reason for forbidding.
Note: Be sure to enter the reason for forbidding to avoid any faulty operations.
Length limit: 2,048 bytes.
                     */
                    std::string GetReason() const;

                    /**
                     * 设置Reason for forbidding.
Note: Be sure to enter the reason for forbidding to avoid any faulty operations.
Length limit: 2,048 bytes.
                     * @param Reason Reason for forbidding.
Note: Be sure to enter the reason for forbidding to avoid any faulty operations.
Length limit: 2,048 bytes.
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * Push path, which is the same as the AppName in push and playback addresses and is "live" by default.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * Your push domain name.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * Stream name.
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * The time (in UTC format) to resume the stream, such as 2018-11-29T19:00:00Z.
Notes:
1. The default stream disabling period is seven days. A stream can be disabled for up to 90 days.
2. Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     */
                    std::string m_resumeTime;
                    bool m_resumeTimeHasBeenSet;

                    /**
                     * Reason for forbidding.
Note: Be sure to enter the reason for forbidding to avoid any faulty operations.
Length limit: 2,048 bytes.
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_FORBIDLIVESTREAMREQUEST_H_
