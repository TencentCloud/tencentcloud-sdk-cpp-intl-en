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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTTIMESPOTCHECK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTTIMESPOTCHECK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Audio and video quality detection time spot check policy.
                */
                class QualityInspectTimeSpotCheck : public AbstractModel
                {
                public:
                    QualityInspectTimeSpotCheck();
                    ~QualityInspectTimeSpotCheck() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Duration of each loop detection.</p><p>Value range: [10, 86400]</p><p>Unit: seconds.</p>
                     * @return CheckDuration <p>Duration of each loop detection.</p><p>Value range: [10, 86400]</p><p>Unit: seconds.</p>
                     * 
                     */
                    int64_t GetCheckDuration() const;

                    /**
                     * 设置<p>Duration of each loop detection.</p><p>Value range: [10, 86400]</p><p>Unit: seconds.</p>
                     * @param _checkDuration <p>Duration of each loop detection.</p><p>Value range: [10, 86400]</p><p>Unit: seconds.</p>
                     * 
                     */
                    void SetCheckDuration(const int64_t& _checkDuration);

                    /**
                     * 判断参数 CheckDuration 是否已赋值
                     * @return CheckDuration 是否已赋值
                     * 
                     */
                    bool CheckDurationHasBeenSet() const;

                    /**
                     * 获取<p>Detection interval, in seconds. It indicates the duration after a detection is completed and before the next detection is conducted.</p><p>Value range: [10, 3600]</p><p>Unit: seconds.</p>
                     * @return CheckInterval <p>Detection interval, in seconds. It indicates the duration after a detection is completed and before the next detection is conducted.</p><p>Value range: [10, 3600]</p><p>Unit: seconds.</p>
                     * 
                     */
                    int64_t GetCheckInterval() const;

                    /**
                     * 设置<p>Detection interval, in seconds. It indicates the duration after a detection is completed and before the next detection is conducted.</p><p>Value range: [10, 3600]</p><p>Unit: seconds.</p>
                     * @param _checkInterval <p>Detection interval, in seconds. It indicates the duration after a detection is completed and before the next detection is conducted.</p><p>Value range: [10, 3600]</p><p>Unit: seconds.</p>
                     * 
                     */
                    void SetCheckInterval(const int64_t& _checkInterval);

                    /**
                     * 判断参数 CheckInterval 是否已赋值
                     * @return CheckInterval 是否已赋值
                     * 
                     */
                    bool CheckIntervalHasBeenSet() const;

                    /**
                     * 获取<p>Skipped opening duration.</p><p>Value range: [1, 1800]</p><p>Unit: seconds.</p>
                     * @return SkipDuration <p>Skipped opening duration.</p><p>Value range: [1, 1800]</p><p>Unit: seconds.</p>
                     * 
                     */
                    int64_t GetSkipDuration() const;

                    /**
                     * 设置<p>Skipped opening duration.</p><p>Value range: [1, 1800]</p><p>Unit: seconds.</p>
                     * @param _skipDuration <p>Skipped opening duration.</p><p>Value range: [1, 1800]</p><p>Unit: seconds.</p>
                     * 
                     */
                    void SetSkipDuration(const int64_t& _skipDuration);

                    /**
                     * 判断参数 SkipDuration 是否已赋值
                     * @return SkipDuration 是否已赋值
                     * 
                     */
                    bool SkipDurationHasBeenSet() const;

                    /**
                     * 获取<p>Number of loops.</p><p>Value range: [0, 1000]</p>
                     * @return CirclesNumber <p>Number of loops.</p><p>Value range: [0, 1000]</p>
                     * 
                     */
                    int64_t GetCirclesNumber() const;

                    /**
                     * 设置<p>Number of loops.</p><p>Value range: [0, 1000]</p>
                     * @param _circlesNumber <p>Number of loops.</p><p>Value range: [0, 1000]</p>
                     * 
                     */
                    void SetCirclesNumber(const int64_t& _circlesNumber);

                    /**
                     * 判断参数 CirclesNumber 是否已赋值
                     * @return CirclesNumber 是否已赋值
                     * 
                     */
                    bool CirclesNumberHasBeenSet() const;

                private:

                    /**
                     * <p>Duration of each loop detection.</p><p>Value range: [10, 86400]</p><p>Unit: seconds.</p>
                     */
                    int64_t m_checkDuration;
                    bool m_checkDurationHasBeenSet;

                    /**
                     * <p>Detection interval, in seconds. It indicates the duration after a detection is completed and before the next detection is conducted.</p><p>Value range: [10, 3600]</p><p>Unit: seconds.</p>
                     */
                    int64_t m_checkInterval;
                    bool m_checkIntervalHasBeenSet;

                    /**
                     * <p>Skipped opening duration.</p><p>Value range: [1, 1800]</p><p>Unit: seconds.</p>
                     */
                    int64_t m_skipDuration;
                    bool m_skipDurationHasBeenSet;

                    /**
                     * <p>Number of loops.</p><p>Value range: [0, 1000]</p>
                     */
                    int64_t m_circlesNumber;
                    bool m_circlesNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTTIMESPOTCHECK_H_
