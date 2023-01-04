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
                     * 获取The stream name.
                     * @return StreamName The stream name.
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置The stream name.
                     * @param StreamName The stream name.
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取The start time (UTC+8) in the format of “yyyy-mm-dd HH:MM:SS”.
                     * @return StartTime The start time (UTC+8) in the format of “yyyy-mm-dd HH:MM:SS”.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置The start time (UTC+8) in the format of “yyyy-mm-dd HH:MM:SS”.
                     * @param StartTime The start time (UTC+8) in the format of “yyyy-mm-dd HH:MM:SS”.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取The end time (UTC+8) in the format of “yyyy-mm-dd HH:MM:SS”. You can query data from the past seven days for a period of preferably not longer than three hours.
                     * @return EndTime The end time (UTC+8) in the format of “yyyy-mm-dd HH:MM:SS”. You can query data from the past seven days for a period of preferably not longer than three hours.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置The end time (UTC+8) in the format of “yyyy-mm-dd HH:MM:SS”. You can query data from the past seven days for a period of preferably not longer than three hours.
                     * @param EndTime The end time (UTC+8) in the format of “yyyy-mm-dd HH:MM:SS”. You can query data from the past seven days for a period of preferably not longer than three hours.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取The push domain.
                     * @return PushDomain The push domain.
                     */
                    std::string GetPushDomain() const;

                    /**
                     * 设置The push domain.
                     * @param PushDomain The push domain.
                     */
                    void SetPushDomain(const std::string& _pushDomain);

                    /**
                     * 判断参数 PushDomain 是否已赋值
                     * @return PushDomain 是否已赋值
                     */
                    bool PushDomainHasBeenSet() const;

                    /**
                     * 获取The push path, which should be the same as `AppName` in the push and playback URL. The default value is `live`.
                     * @return AppName The push path, which should be the same as `AppName` in the push and playback URL. The default value is `live`.
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置The push path, which should be the same as `AppName` in the push and playback URL. The default value is `live`.
                     * @param AppName The push path, which should be the same as `AppName` in the push and playback URL. The default value is `live`.
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     */
                    bool AppNameHasBeenSet() const;

                private:

                    /**
                     * The stream name.
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * The start time (UTC+8) in the format of “yyyy-mm-dd HH:MM:SS”.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The end time (UTC+8) in the format of “yyyy-mm-dd HH:MM:SS”. You can query data from the past seven days for a period of preferably not longer than three hours.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * The push domain.
                     */
                    std::string m_pushDomain;
                    bool m_pushDomainHasBeenSet;

                    /**
                     * The push path, which should be the same as `AppName` in the push and playback URL. The default value is `live`.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESTREAMPUSHINFOLISTREQUEST_H_
