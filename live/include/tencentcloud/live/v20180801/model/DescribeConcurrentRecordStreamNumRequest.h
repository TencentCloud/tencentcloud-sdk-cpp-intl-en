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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBECONCURRENTRECORDSTREAMNUMREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBECONCURRENTRECORDSTREAMNUMREQUEST_H_

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
                * DescribeConcurrentRecordStreamNum request structure.
                */
                class DescribeConcurrentRecordStreamNumRequest : public AbstractModel
                {
                public:
                    DescribeConcurrentRecordStreamNumRequest();
                    ~DescribeConcurrentRecordStreamNumRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Live streaming type. SlowLive: LCB.
NormalLive: LVB.
                     * @return LiveType Live streaming type. SlowLive: LCB.
NormalLive: LVB.
                     */
                    std::string GetLiveType() const;

                    /**
                     * 设置Live streaming type. SlowLive: LCB.
NormalLive: LVB.
                     * @param LiveType Live streaming type. SlowLive: LCB.
NormalLive: LVB.
                     */
                    void SetLiveType(const std::string& _liveType);

                    /**
                     * 判断参数 LiveType 是否已赋值
                     * @return LiveType 是否已赋值
                     */
                    bool LiveTypeHasBeenSet() const;

                    /**
                     * 获取Start time in the format of `yyyy-mm-dd HH:MM:SS`.
Data for the last 180 days can be queried.
                     * @return StartTime Start time in the format of `yyyy-mm-dd HH:MM:SS`.
Data for the last 180 days can be queried.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time in the format of `yyyy-mm-dd HH:MM:SS`.
Data for the last 180 days can be queried.
                     * @param StartTime Start time in the format of `yyyy-mm-dd HH:MM:SS`.
Data for the last 180 days can be queried.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time in the format of `yyyy-mm-dd HH:MM:SS`.
The maximum time span supported is 31 days.
                     * @return EndTime End time in the format of `yyyy-mm-dd HH:MM:SS`.
The maximum time span supported is 31 days.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time in the format of `yyyy-mm-dd HH:MM:SS`.
The maximum time span supported is 31 days.
                     * @param EndTime End time in the format of `yyyy-mm-dd HH:MM:SS`.
The maximum time span supported is 31 days.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Valid values: Mainland (data for Mainland China), Oversea (data for regions outside Mainland China). If this parameter is left empty, data for all regions will be queried.
                     * @return MainlandOrOversea Valid values: Mainland (data for Mainland China), Oversea (data for regions outside Mainland China). If this parameter is left empty, data for all regions will be queried.
                     */
                    std::string GetMainlandOrOversea() const;

                    /**
                     * 设置Valid values: Mainland (data for Mainland China), Oversea (data for regions outside Mainland China). If this parameter is left empty, data for all regions will be queried.
                     * @param MainlandOrOversea Valid values: Mainland (data for Mainland China), Oversea (data for regions outside Mainland China). If this parameter is left empty, data for all regions will be queried.
                     */
                    void SetMainlandOrOversea(const std::string& _mainlandOrOversea);

                    /**
                     * 判断参数 MainlandOrOversea 是否已赋值
                     * @return MainlandOrOversea 是否已赋值
                     */
                    bool MainlandOrOverseaHasBeenSet() const;

                    /**
                     * 获取Playback domain name list. If this parameter is left empty, full data will be queried.
                     * @return PushDomains Playback domain name list. If this parameter is left empty, full data will be queried.
                     */
                    std::vector<std::string> GetPushDomains() const;

                    /**
                     * 设置Playback domain name list. If this parameter is left empty, full data will be queried.
                     * @param PushDomains Playback domain name list. If this parameter is left empty, full data will be queried.
                     */
                    void SetPushDomains(const std::vector<std::string>& _pushDomains);

                    /**
                     * 判断参数 PushDomains 是否已赋值
                     * @return PushDomains 是否已赋值
                     */
                    bool PushDomainsHasBeenSet() const;

                private:

                    /**
                     * Live streaming type. SlowLive: LCB.
NormalLive: LVB.
                     */
                    std::string m_liveType;
                    bool m_liveTypeHasBeenSet;

                    /**
                     * Start time in the format of `yyyy-mm-dd HH:MM:SS`.
Data for the last 180 days can be queried.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time in the format of `yyyy-mm-dd HH:MM:SS`.
The maximum time span supported is 31 days.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Valid values: Mainland (data for Mainland China), Oversea (data for regions outside Mainland China). If this parameter is left empty, data for all regions will be queried.
                     */
                    std::string m_mainlandOrOversea;
                    bool m_mainlandOrOverseaHasBeenSet;

                    /**
                     * Playback domain name list. If this parameter is left empty, full data will be queried.
                     */
                    std::vector<std::string> m_pushDomains;
                    bool m_pushDomainsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBECONCURRENTRECORDSTREAMNUMREQUEST_H_
