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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESTREAMPUSHINFOLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESTREAMPUSHINFOLISTREQUEST_H_

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
                * DescribeStreamPushInfoList request structure.
                */
                class DescribeStreamPushInfoListRequest : public AbstractModel
                {
                public:
                    DescribeStreamPushInfoListRequest();
                    ~DescribeStreamPushInfoListRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Start time point in the format of `yyyy-mm-dd HH:MM:SS`.
                     * @return StartTime Start time point in the format of `yyyy-mm-dd HH:MM:SS`.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time point in the format of `yyyy-mm-dd HH:MM:SS`.
                     * @param StartTime Start time point in the format of `yyyy-mm-dd HH:MM:SS`.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time in the format of yyyy-mm-dd HH:MM:SS. You can query data in the past 7 days. You’re advised to set the query period to up to 3 hours.
                     * @return EndTime End time in the format of yyyy-mm-dd HH:MM:SS. You can query data in the past 7 days. You’re advised to set the query period to up to 3 hours.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time in the format of yyyy-mm-dd HH:MM:SS. You can query data in the past 7 days. You’re advised to set the query period to up to 3 hours.
                     * @param EndTime End time in the format of yyyy-mm-dd HH:MM:SS. You can query data in the past 7 days. You’re advised to set the query period to up to 3 hours.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Push domain name.
                     * @return PushDomain Push domain name.
                     */
                    std::string GetPushDomain() const;

                    /**
                     * 设置Push domain name.
                     * @param PushDomain Push domain name.
                     */
                    void SetPushDomain(const std::string& _pushDomain);

                    /**
                     * 判断参数 PushDomain 是否已赋值
                     * @return PushDomain 是否已赋值
                     */
                    bool PushDomainHasBeenSet() const;

                    /**
                     * 获取Push path, which is the same as the `AppName` in push and playback addresses and is `live` by default.
                     * @return AppName Push path, which is the same as the `AppName` in push and playback addresses and is `live` by default.
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置Push path, which is the same as the `AppName` in push and playback addresses and is `live` by default.
                     * @param AppName Push path, which is the same as the `AppName` in push and playback addresses and is `live` by default.
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     */
                    bool AppNameHasBeenSet() const;

                private:

                    /**
                     * Stream name.
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * Start time point in the format of `yyyy-mm-dd HH:MM:SS`.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time in the format of yyyy-mm-dd HH:MM:SS. You can query data in the past 7 days. You’re advised to set the query period to up to 3 hours.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Push domain name.
                     */
                    std::string m_pushDomain;
                    bool m_pushDomainHasBeenSet;

                    /**
                     * Push path, which is the same as the `AppName` in push and playback addresses and is `live` by default.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESTREAMPUSHINFOLISTREQUEST_H_
