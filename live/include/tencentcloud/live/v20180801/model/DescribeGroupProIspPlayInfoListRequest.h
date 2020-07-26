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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEGROUPPROISPPLAYINFOLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEGROUPPROISPPLAYINFOLISTREQUEST_H_

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
                * DescribeGroupProIspPlayInfoList request structure.
                */
                class DescribeGroupProIspPlayInfoListRequest : public AbstractModel
                {
                public:
                    DescribeGroupProIspPlayInfoListRequest();
                    ~DescribeGroupProIspPlayInfoListRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取End time point in the format of `yyyy-mm-dd HH:MM:SS`
The time span is (0,3 hours]. Data for the last month can be queried.
                     * @return EndTime End time point in the format of `yyyy-mm-dd HH:MM:SS`
The time span is (0,3 hours]. Data for the last month can be queried.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time point in the format of `yyyy-mm-dd HH:MM:SS`
The time span is (0,3 hours]. Data for the last month can be queried.
                     * @param EndTime End time point in the format of `yyyy-mm-dd HH:MM:SS`
The time span is (0,3 hours]. Data for the last month can be queried.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Playback domain name. If this parameter is left empty, full data will be queried.
                     * @return PlayDomains Playback domain name. If this parameter is left empty, full data will be queried.
                     */
                    std::vector<std::string> GetPlayDomains() const;

                    /**
                     * 设置Playback domain name. If this parameter is left empty, full data will be queried.
                     * @param PlayDomains Playback domain name. If this parameter is left empty, full data will be queried.
                     */
                    void SetPlayDomains(const std::vector<std::string>& _playDomains);

                    /**
                     * 判断参数 PlayDomains 是否已赋值
                     * @return PlayDomains 是否已赋值
                     */
                    bool PlayDomainsHasBeenSet() const;

                    /**
                     * 获取District list. If this parameter is left empty, data for all districts will be returned.
                     * @return ProvinceNames District list. If this parameter is left empty, data for all districts will be returned.
                     */
                    std::vector<std::string> GetProvinceNames() const;

                    /**
                     * 设置District list. If this parameter is left empty, data for all districts will be returned.
                     * @param ProvinceNames District list. If this parameter is left empty, data for all districts will be returned.
                     */
                    void SetProvinceNames(const std::vector<std::string>& _provinceNames);

                    /**
                     * 判断参数 ProvinceNames 是否已赋值
                     * @return ProvinceNames 是否已赋值
                     */
                    bool ProvinceNamesHasBeenSet() const;

                    /**
                     * 获取ISP list. If this parameter is left empty, data of all ISPs will be returned.
                     * @return IspNames ISP list. If this parameter is left empty, data of all ISPs will be returned.
                     */
                    std::vector<std::string> GetIspNames() const;

                    /**
                     * 设置ISP list. If this parameter is left empty, data of all ISPs will be returned.
                     * @param IspNames ISP list. If this parameter is left empty, data of all ISPs will be returned.
                     */
                    void SetIspNames(const std::vector<std::string>& _ispNames);

                    /**
                     * 判断参数 IspNames 是否已赋值
                     * @return IspNames 是否已赋值
                     */
                    bool IspNamesHasBeenSet() const;

                    /**
                     * 获取Within or outside Mainland China. Valid values: Mainland (data for Mainland China), Oversea (data for regions outside Mainland China). If this parameter is left empty, data for all regions will be queried.
                     * @return MainlandOrOversea Within or outside Mainland China. Valid values: Mainland (data for Mainland China), Oversea (data for regions outside Mainland China). If this parameter is left empty, data for all regions will be queried.
                     */
                    std::string GetMainlandOrOversea() const;

                    /**
                     * 设置Within or outside Mainland China. Valid values: Mainland (data for Mainland China), Oversea (data for regions outside Mainland China). If this parameter is left empty, data for all regions will be queried.
                     * @param MainlandOrOversea Within or outside Mainland China. Valid values: Mainland (data for Mainland China), Oversea (data for regions outside Mainland China). If this parameter is left empty, data for all regions will be queried.
                     */
                    void SetMainlandOrOversea(const std::string& _mainlandOrOversea);

                    /**
                     * 判断参数 MainlandOrOversea 是否已赋值
                     * @return MainlandOrOversea 是否已赋值
                     */
                    bool MainlandOrOverseaHasBeenSet() const;

                private:

                    /**
                     * Start time point in the format of `yyyy-mm-dd HH:MM:SS`.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time point in the format of `yyyy-mm-dd HH:MM:SS`
The time span is (0,3 hours]. Data for the last month can be queried.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Playback domain name. If this parameter is left empty, full data will be queried.
                     */
                    std::vector<std::string> m_playDomains;
                    bool m_playDomainsHasBeenSet;

                    /**
                     * District list. If this parameter is left empty, data for all districts will be returned.
                     */
                    std::vector<std::string> m_provinceNames;
                    bool m_provinceNamesHasBeenSet;

                    /**
                     * ISP list. If this parameter is left empty, data of all ISPs will be returned.
                     */
                    std::vector<std::string> m_ispNames;
                    bool m_ispNamesHasBeenSet;

                    /**
                     * Within or outside Mainland China. Valid values: Mainland (data for Mainland China), Oversea (data for regions outside Mainland China). If this parameter is left empty, data for all regions will be queried.
                     */
                    std::string m_mainlandOrOversea;
                    bool m_mainlandOrOverseaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEGROUPPROISPPLAYINFOLISTREQUEST_H_
