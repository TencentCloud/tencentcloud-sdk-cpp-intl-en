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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_APPLICATIONDATASTATISTICS_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_APPLICATIONDATASTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/StatisticsItem.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * Application statistics
                */
                class ApplicationDataStatistics : public AbstractModel
                {
                public:
                    ApplicationDataStatistics();
                    ~ApplicationDataStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Application ID
                     * @return BizId Application ID
                     */
                    uint64_t GetBizId() const;

                    /**
                     * 设置Application ID
                     * @param BizId Application ID
                     */
                    void SetBizId(const uint64_t& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取DAU data
                     * @return DauDataNum DAU data
                     */
                    uint64_t GetDauDataNum() const;

                    /**
                     * 设置DAU data
                     * @param DauDataNum DAU data
                     */
                    void SetDauDataNum(const uint64_t& _dauDataNum);

                    /**
                     * 判断参数 DauDataNum 是否已赋值
                     * @return DauDataNum 是否已赋值
                     */
                    bool DauDataNumHasBeenSet() const;

                    /**
                     * 获取DAU in Chinese mainland
                     * @return DauDataMainland DAU in Chinese mainland
                     */
                    std::vector<StatisticsItem> GetDauDataMainland() const;

                    /**
                     * 设置DAU in Chinese mainland
                     * @param DauDataMainland DAU in Chinese mainland
                     */
                    void SetDauDataMainland(const std::vector<StatisticsItem>& _dauDataMainland);

                    /**
                     * 判断参数 DauDataMainland 是否已赋值
                     * @return DauDataMainland 是否已赋值
                     */
                    bool DauDataMainlandHasBeenSet() const;

                    /**
                     * 获取DAU outside Chinese mainland
                     * @return DauDataOversea DAU outside Chinese mainland
                     */
                    std::vector<StatisticsItem> GetDauDataOversea() const;

                    /**
                     * 设置DAU outside Chinese mainland
                     * @param DauDataOversea DAU outside Chinese mainland
                     */
                    void SetDauDataOversea(const std::vector<StatisticsItem>& _dauDataOversea);

                    /**
                     * 判断参数 DauDataOversea 是否已赋值
                     * @return DauDataOversea 是否已赋值
                     */
                    bool DauDataOverseaHasBeenSet() const;

                    /**
                     * 获取Total DAU
                     * @return DauDataSum Total DAU
                     */
                    std::vector<StatisticsItem> GetDauDataSum() const;

                    /**
                     * 设置Total DAU
                     * @param DauDataSum Total DAU
                     */
                    void SetDauDataSum(const std::vector<StatisticsItem>& _dauDataSum);

                    /**
                     * 判断参数 DauDataSum 是否已赋值
                     * @return DauDataSum 是否已赋值
                     */
                    bool DauDataSumHasBeenSet() const;

                    /**
                     * 获取Number of voice chat metrics
                     * @return DurationDataNum Number of voice chat metrics
                     */
                    uint64_t GetDurationDataNum() const;

                    /**
                     * 设置Number of voice chat metrics
                     * @param DurationDataNum Number of voice chat metrics
                     */
                    void SetDurationDataNum(const uint64_t& _durationDataNum);

                    /**
                     * 判断参数 DurationDataNum 是否已赋值
                     * @return DurationDataNum 是否已赋值
                     */
                    bool DurationDataNumHasBeenSet() const;

                    /**
                     * 获取Duration of voice chat in Chinese mainland in minutes
                     * @return DurationDataMainland Duration of voice chat in Chinese mainland in minutes
                     */
                    std::vector<StatisticsItem> GetDurationDataMainland() const;

                    /**
                     * 设置Duration of voice chat in Chinese mainland in minutes
                     * @param DurationDataMainland Duration of voice chat in Chinese mainland in minutes
                     */
                    void SetDurationDataMainland(const std::vector<StatisticsItem>& _durationDataMainland);

                    /**
                     * 判断参数 DurationDataMainland 是否已赋值
                     * @return DurationDataMainland 是否已赋值
                     */
                    bool DurationDataMainlandHasBeenSet() const;

                    /**
                     * 获取Duration of voice chat outside Chinese mainland in minutes
                     * @return DurationDataOversea Duration of voice chat outside Chinese mainland in minutes
                     */
                    std::vector<StatisticsItem> GetDurationDataOversea() const;

                    /**
                     * 设置Duration of voice chat outside Chinese mainland in minutes
                     * @param DurationDataOversea Duration of voice chat outside Chinese mainland in minutes
                     */
                    void SetDurationDataOversea(const std::vector<StatisticsItem>& _durationDataOversea);

                    /**
                     * 判断参数 DurationDataOversea 是否已赋值
                     * @return DurationDataOversea 是否已赋值
                     */
                    bool DurationDataOverseaHasBeenSet() const;

                    /**
                     * 获取Total duration of voice chat in minutes
                     * @return DurationDataSum Total duration of voice chat in minutes
                     */
                    std::vector<StatisticsItem> GetDurationDataSum() const;

                    /**
                     * 设置Total duration of voice chat in minutes
                     * @param DurationDataSum Total duration of voice chat in minutes
                     */
                    void SetDurationDataSum(const std::vector<StatisticsItem>& _durationDataSum);

                    /**
                     * 判断参数 DurationDataSum 是否已赋值
                     * @return DurationDataSum 是否已赋值
                     */
                    bool DurationDataSumHasBeenSet() const;

                    /**
                     * 获取PCU data
                     * @return PcuDataNum PCU data
                     */
                    uint64_t GetPcuDataNum() const;

                    /**
                     * 设置PCU data
                     * @param PcuDataNum PCU data
                     */
                    void SetPcuDataNum(const uint64_t& _pcuDataNum);

                    /**
                     * 判断参数 PcuDataNum 是否已赋值
                     * @return PcuDataNum 是否已赋值
                     */
                    bool PcuDataNumHasBeenSet() const;

                    /**
                     * 获取PCU in Chinese mainland
                     * @return PcuDataMainland PCU in Chinese mainland
                     */
                    std::vector<StatisticsItem> GetPcuDataMainland() const;

                    /**
                     * 设置PCU in Chinese mainland
                     * @param PcuDataMainland PCU in Chinese mainland
                     */
                    void SetPcuDataMainland(const std::vector<StatisticsItem>& _pcuDataMainland);

                    /**
                     * 判断参数 PcuDataMainland 是否已赋值
                     * @return PcuDataMainland 是否已赋值
                     */
                    bool PcuDataMainlandHasBeenSet() const;

                    /**
                     * 获取PCU outside Chinese mainland
                     * @return PcuDataOversea PCU outside Chinese mainland
                     */
                    std::vector<StatisticsItem> GetPcuDataOversea() const;

                    /**
                     * 设置PCU outside Chinese mainland
                     * @param PcuDataOversea PCU outside Chinese mainland
                     */
                    void SetPcuDataOversea(const std::vector<StatisticsItem>& _pcuDataOversea);

                    /**
                     * 判断参数 PcuDataOversea 是否已赋值
                     * @return PcuDataOversea 是否已赋值
                     */
                    bool PcuDataOverseaHasBeenSet() const;

                    /**
                     * 获取Total PCU
                     * @return PcuDataSum Total PCU
                     */
                    std::vector<StatisticsItem> GetPcuDataSum() const;

                    /**
                     * 设置Total PCU
                     * @param PcuDataSum Total PCU
                     */
                    void SetPcuDataSum(const std::vector<StatisticsItem>& _pcuDataSum);

                    /**
                     * 判断参数 PcuDataSum 是否已赋值
                     * @return PcuDataSum 是否已赋值
                     */
                    bool PcuDataSumHasBeenSet() const;

                private:

                    /**
                     * Application ID
                     */
                    uint64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * DAU data
                     */
                    uint64_t m_dauDataNum;
                    bool m_dauDataNumHasBeenSet;

                    /**
                     * DAU in Chinese mainland
                     */
                    std::vector<StatisticsItem> m_dauDataMainland;
                    bool m_dauDataMainlandHasBeenSet;

                    /**
                     * DAU outside Chinese mainland
                     */
                    std::vector<StatisticsItem> m_dauDataOversea;
                    bool m_dauDataOverseaHasBeenSet;

                    /**
                     * Total DAU
                     */
                    std::vector<StatisticsItem> m_dauDataSum;
                    bool m_dauDataSumHasBeenSet;

                    /**
                     * Number of voice chat metrics
                     */
                    uint64_t m_durationDataNum;
                    bool m_durationDataNumHasBeenSet;

                    /**
                     * Duration of voice chat in Chinese mainland in minutes
                     */
                    std::vector<StatisticsItem> m_durationDataMainland;
                    bool m_durationDataMainlandHasBeenSet;

                    /**
                     * Duration of voice chat outside Chinese mainland in minutes
                     */
                    std::vector<StatisticsItem> m_durationDataOversea;
                    bool m_durationDataOverseaHasBeenSet;

                    /**
                     * Total duration of voice chat in minutes
                     */
                    std::vector<StatisticsItem> m_durationDataSum;
                    bool m_durationDataSumHasBeenSet;

                    /**
                     * PCU data
                     */
                    uint64_t m_pcuDataNum;
                    bool m_pcuDataNumHasBeenSet;

                    /**
                     * PCU in Chinese mainland
                     */
                    std::vector<StatisticsItem> m_pcuDataMainland;
                    bool m_pcuDataMainlandHasBeenSet;

                    /**
                     * PCU outside Chinese mainland
                     */
                    std::vector<StatisticsItem> m_pcuDataOversea;
                    bool m_pcuDataOverseaHasBeenSet;

                    /**
                     * Total PCU
                     */
                    std::vector<StatisticsItem> m_pcuDataSum;
                    bool m_pcuDataSumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_APPLICATIONDATASTATISTICS_H_
