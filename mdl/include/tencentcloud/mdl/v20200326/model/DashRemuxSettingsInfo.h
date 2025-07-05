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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_DASHREMUXSETTINGSINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_DASHREMUXSETTINGSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * DASH configuration information.
                */
                class DashRemuxSettingsInfo : public AbstractModel
                {
                public:
                    DashRemuxSettingsInfo();
                    ~DashRemuxSettingsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Segment duration in ms. Value range: [1000,30000]. Default value: 4000. The value can only be a multiple of 1,000.
                     * @return SegmentDuration Segment duration in ms. Value range: [1000,30000]. Default value: 4000. The value can only be a multiple of 1,000.
                     * 
                     */
                    uint64_t GetSegmentDuration() const;

                    /**
                     * 设置Segment duration in ms. Value range: [1000,30000]. Default value: 4000. The value can only be a multiple of 1,000.
                     * @param _segmentDuration Segment duration in ms. Value range: [1000,30000]. Default value: 4000. The value can only be a multiple of 1,000.
                     * 
                     */
                    void SetSegmentDuration(const uint64_t& _segmentDuration);

                    /**
                     * 判断参数 SegmentDuration 是否已赋值
                     * @return SegmentDuration 是否已赋值
                     * 
                     */
                    bool SegmentDurationHasBeenSet() const;

                    /**
                     * 获取Number of segments. Value range: [1,30]. Default value: 5.
                     * @return SegmentNumber Number of segments. Value range: [1,30]. Default value: 5.
                     * 
                     */
                    uint64_t GetSegmentNumber() const;

                    /**
                     * 设置Number of segments. Value range: [1,30]. Default value: 5.
                     * @param _segmentNumber Number of segments. Value range: [1,30]. Default value: 5.
                     * 
                     */
                    void SetSegmentNumber(const uint64_t& _segmentNumber);

                    /**
                     * 判断参数 SegmentNumber 是否已赋值
                     * @return SegmentNumber 是否已赋值
                     * 
                     */
                    bool SegmentNumberHasBeenSet() const;

                    /**
                     * 获取Whether to enable multi-period. Valid values: CLOSE/OPEN. Default value: CLOSE.
                     * @return PeriodTriggers Whether to enable multi-period. Valid values: CLOSE/OPEN. Default value: CLOSE.
                     * 
                     */
                    std::string GetPeriodTriggers() const;

                    /**
                     * 设置Whether to enable multi-period. Valid values: CLOSE/OPEN. Default value: CLOSE.
                     * @param _periodTriggers Whether to enable multi-period. Valid values: CLOSE/OPEN. Default value: CLOSE.
                     * 
                     */
                    void SetPeriodTriggers(const std::string& _periodTriggers);

                    /**
                     * 判断参数 PeriodTriggers 是否已赋值
                     * @return PeriodTriggers 是否已赋值
                     * 
                     */
                    bool PeriodTriggersHasBeenSet() const;

                    /**
                     * 获取The HLS package type when the H.265 codec is used. Valid values: `hvc1`, `hev1` (default).
                     * @return H265PackageType The HLS package type when the H.265 codec is used. Valid values: `hvc1`, `hev1` (default).
                     * 
                     */
                    std::string GetH265PackageType() const;

                    /**
                     * 设置The HLS package type when the H.265 codec is used. Valid values: `hvc1`, `hev1` (default).
                     * @param _h265PackageType The HLS package type when the H.265 codec is used. Valid values: `hvc1`, `hev1` (default).
                     * 
                     */
                    void SetH265PackageType(const std::string& _h265PackageType);

                    /**
                     * 判断参数 H265PackageType 是否已赋值
                     * @return H265PackageType 是否已赋值
                     * 
                     */
                    bool H265PackageTypeHasBeenSet() const;

                private:

                    /**
                     * Segment duration in ms. Value range: [1000,30000]. Default value: 4000. The value can only be a multiple of 1,000.
                     */
                    uint64_t m_segmentDuration;
                    bool m_segmentDurationHasBeenSet;

                    /**
                     * Number of segments. Value range: [1,30]. Default value: 5.
                     */
                    uint64_t m_segmentNumber;
                    bool m_segmentNumberHasBeenSet;

                    /**
                     * Whether to enable multi-period. Valid values: CLOSE/OPEN. Default value: CLOSE.
                     */
                    std::string m_periodTriggers;
                    bool m_periodTriggersHasBeenSet;

                    /**
                     * The HLS package type when the H.265 codec is used. Valid values: `hvc1`, `hev1` (default).
                     */
                    std::string m_h265PackageType;
                    bool m_h265PackageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_DASHREMUXSETTINGSINFO_H_
