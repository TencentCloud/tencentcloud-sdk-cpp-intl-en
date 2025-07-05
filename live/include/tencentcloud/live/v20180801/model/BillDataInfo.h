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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_BILLDATAINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_BILLDATAINFO_H_

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
                * Bandwidth and traffic information.
                */
                class BillDataInfo : public AbstractModel
                {
                public:
                    BillDataInfo();
                    ~BillDataInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Time point in the format of `yyyy-mm-dd HH:MM:SS`.
                     * @return Time Time point in the format of `yyyy-mm-dd HH:MM:SS`.
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置Time point in the format of `yyyy-mm-dd HH:MM:SS`.
                     * @param _time Time point in the format of `yyyy-mm-dd HH:MM:SS`.
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取Bandwidth in Mbps.
                     * @return Bandwidth Bandwidth in Mbps.
                     * 
                     */
                    double GetBandwidth() const;

                    /**
                     * 设置Bandwidth in Mbps.
                     * @param _bandwidth Bandwidth in Mbps.
                     * 
                     */
                    void SetBandwidth(const double& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取Traffic in MB.
                     * @return Flux Traffic in MB.
                     * 
                     */
                    double GetFlux() const;

                    /**
                     * 设置Traffic in MB.
                     * @param _flux Traffic in MB.
                     * 
                     */
                    void SetFlux(const double& _flux);

                    /**
                     * 判断参数 Flux 是否已赋值
                     * @return Flux 是否已赋值
                     * 
                     */
                    bool FluxHasBeenSet() const;

                    /**
                     * 获取Time point of peak value in the format of `yyyy-mm-dd HH:MM:SS`. As raw data is at a 5-minute granularity, if data at a 1-hour or 1-day granularity is queried, the time point of peak bandwidth value at the corresponding granularity will be returned.
                     * @return PeakTime Time point of peak value in the format of `yyyy-mm-dd HH:MM:SS`. As raw data is at a 5-minute granularity, if data at a 1-hour or 1-day granularity is queried, the time point of peak bandwidth value at the corresponding granularity will be returned.
                     * 
                     */
                    std::string GetPeakTime() const;

                    /**
                     * 设置Time point of peak value in the format of `yyyy-mm-dd HH:MM:SS`. As raw data is at a 5-minute granularity, if data at a 1-hour or 1-day granularity is queried, the time point of peak bandwidth value at the corresponding granularity will be returned.
                     * @param _peakTime Time point of peak value in the format of `yyyy-mm-dd HH:MM:SS`. As raw data is at a 5-minute granularity, if data at a 1-hour or 1-day granularity is queried, the time point of peak bandwidth value at the corresponding granularity will be returned.
                     * 
                     */
                    void SetPeakTime(const std::string& _peakTime);

                    /**
                     * 判断参数 PeakTime 是否已赋值
                     * @return PeakTime 是否已赋值
                     * 
                     */
                    bool PeakTimeHasBeenSet() const;

                private:

                    /**
                     * Time point in the format of `yyyy-mm-dd HH:MM:SS`.
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Bandwidth in Mbps.
                     */
                    double m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * Traffic in MB.
                     */
                    double m_flux;
                    bool m_fluxHasBeenSet;

                    /**
                     * Time point of peak value in the format of `yyyy-mm-dd HH:MM:SS`. As raw data is at a 5-minute granularity, if data at a 1-hour or 1-day granularity is queried, the time point of peak bandwidth value at the corresponding granularity will be returned.
                     */
                    std::string m_peakTime;
                    bool m_peakTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_BILLDATAINFO_H_
