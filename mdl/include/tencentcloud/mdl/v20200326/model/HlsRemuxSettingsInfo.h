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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_HLSREMUXSETTINGSINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_HLSREMUXSETTINGSINFO_H_

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
                * HLS protocol configuration.
                */
                class HlsRemuxSettingsInfo : public AbstractModel
                {
                public:
                    HlsRemuxSettingsInfo();
                    ~HlsRemuxSettingsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Segment duration in ms. Value range: [1000,30000]. Default value: 4000. The value can only be a multiple of 1,000.
                     * @return SegmentDuration Segment duration in ms. Value range: [1000,30000]. Default value: 4000. The value can only be a multiple of 1,000.
                     */
                    uint64_t GetSegmentDuration() const;

                    /**
                     * 设置Segment duration in ms. Value range: [1000,30000]. Default value: 4000. The value can only be a multiple of 1,000.
                     * @param SegmentDuration Segment duration in ms. Value range: [1000,30000]. Default value: 4000. The value can only be a multiple of 1,000.
                     */
                    void SetSegmentDuration(const uint64_t& _segmentDuration);

                    /**
                     * 判断参数 SegmentDuration 是否已赋值
                     * @return SegmentDuration 是否已赋值
                     */
                    bool SegmentDurationHasBeenSet() const;

                    /**
                     * 获取Number of segments. Value range: [1,30]. Default value: 5.
                     * @return SegmentNumber Number of segments. Value range: [1,30]. Default value: 5.
                     */
                    uint64_t GetSegmentNumber() const;

                    /**
                     * 设置Number of segments. Value range: [1,30]. Default value: 5.
                     * @param SegmentNumber Number of segments. Value range: [1,30]. Default value: 5.
                     */
                    void SetSegmentNumber(const uint64_t& _segmentNumber);

                    /**
                     * 判断参数 SegmentNumber 是否已赋值
                     * @return SegmentNumber 是否已赋值
                     */
                    bool SegmentNumberHasBeenSet() const;

                    /**
                     * 获取Whether to enable PDT insertion. Valid values: CLOSE/OPEN. Default value: CLOSE.
                     * @return PdtInsertion Whether to enable PDT insertion. Valid values: CLOSE/OPEN. Default value: CLOSE.
                     */
                    std::string GetPdtInsertion() const;

                    /**
                     * 设置Whether to enable PDT insertion. Valid values: CLOSE/OPEN. Default value: CLOSE.
                     * @param PdtInsertion Whether to enable PDT insertion. Valid values: CLOSE/OPEN. Default value: CLOSE.
                     */
                    void SetPdtInsertion(const std::string& _pdtInsertion);

                    /**
                     * 判断参数 PdtInsertion 是否已赋值
                     * @return PdtInsertion 是否已赋值
                     */
                    bool PdtInsertionHasBeenSet() const;

                    /**
                     * 获取PDT duration in seconds. Value range: (0,3000]. Default value: 600.
                     * @return PdtDuration PDT duration in seconds. Value range: (0,3000]. Default value: 600.
                     */
                    uint64_t GetPdtDuration() const;

                    /**
                     * 设置PDT duration in seconds. Value range: (0,3000]. Default value: 600.
                     * @param PdtDuration PDT duration in seconds. Value range: (0,3000]. Default value: 600.
                     */
                    void SetPdtDuration(const uint64_t& _pdtDuration);

                    /**
                     * 判断参数 PdtDuration 是否已赋值
                     * @return PdtDuration 是否已赋值
                     */
                    bool PdtDurationHasBeenSet() const;

                    /**
                     * 获取Audio/Video packaging scheme. Valid values: `SEPARATE`, `MERGE`
                     * @return Scheme Audio/Video packaging scheme. Valid values: `SEPARATE`, `MERGE`
                     */
                    std::string GetScheme() const;

                    /**
                     * 设置Audio/Video packaging scheme. Valid values: `SEPARATE`, `MERGE`
                     * @param Scheme Audio/Video packaging scheme. Valid values: `SEPARATE`, `MERGE`
                     */
                    void SetScheme(const std::string& _scheme);

                    /**
                     * 判断参数 Scheme 是否已赋值
                     * @return Scheme 是否已赋值
                     */
                    bool SchemeHasBeenSet() const;

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
                     * Whether to enable PDT insertion. Valid values: CLOSE/OPEN. Default value: CLOSE.
                     */
                    std::string m_pdtInsertion;
                    bool m_pdtInsertionHasBeenSet;

                    /**
                     * PDT duration in seconds. Value range: (0,3000]. Default value: 600.
                     */
                    uint64_t m_pdtDuration;
                    bool m_pdtDurationHasBeenSet;

                    /**
                     * Audio/Video packaging scheme. Valid values: `SEPARATE`, `MERGE`
                     */
                    std::string m_scheme;
                    bool m_schemeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_HLSREMUXSETTINGSINFO_H_
