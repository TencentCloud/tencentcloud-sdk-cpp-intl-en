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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCMCUTRANSCODETIMEREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCMCUTRANSCODETIMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeTrtcMcuTranscodeTime request structure.
                */
                class DescribeTrtcMcuTranscodeTimeRequest : public AbstractModel
                {
                public:
                    DescribeTrtcMcuTranscodeTimeRequest();
                    ~DescribeTrtcMcuTranscodeTimeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Query start date in the format of YYYY-MM-DD
                     * @return StartTime Query start date in the format of YYYY-MM-DD
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Query start date in the format of YYYY-MM-DD
                     * @param StartTime Query start date in the format of YYYY-MM-DD
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Query end date in the format of YYYY-MM-DD
The period queried in a request cannot be longer than 31 days.
                     * @return EndTime Query end date in the format of YYYY-MM-DD
The period queried in a request cannot be longer than 31 days.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Query end date in the format of YYYY-MM-DD
The period queried in a request cannot be longer than 31 days.
                     * @param EndTime Query end date in the format of YYYY-MM-DD
The period queried in a request cannot be longer than 31 days.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Application ID, which is optional. If it is specified, duration statistics for the specified application are returned; otherwise, the total durations of all applications are returned.
                     * @return SdkAppId Application ID, which is optional. If it is specified, duration statistics for the specified application are returned; otherwise, the total durations of all applications are returned.
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置Application ID, which is optional. If it is specified, duration statistics for the specified application are returned; otherwise, the total durations of all applications are returned.
                     * @param SdkAppId Application ID, which is optional. If it is specified, duration statistics for the specified application are returned; otherwise, the total durations of all applications are returned.
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                private:

                    /**
                     * Query start date in the format of YYYY-MM-DD
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Query end date in the format of YYYY-MM-DD
The period queried in a request cannot be longer than 31 days.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Application ID, which is optional. If it is specified, duration statistics for the specified application are returned; otherwise, the total durations of all applications are returned.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCMCUTRANSCODETIMEREQUEST_H_
