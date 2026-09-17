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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TRANSCODETASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TRANSCODETASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/WatermarkInput.h>
#include <tencentcloud/vod/v20180717/model/TraceWatermarkInput.h>
#include <tencentcloud/vod/v20180717/model/CopyRightWatermarkInput.h>
#include <tencentcloud/vod/v20180717/model/BlindWatermarkInput.h>
#include <tencentcloud/vod/v20180717/model/MosaicInput.h>
#include <tencentcloud/vod/v20180717/model/HeadTailTaskInput.h>
#include <tencentcloud/vod/v20180717/model/OverrideTranscodeParameter.h>
#include <tencentcloud/vod/v20180717/model/SubtitleInfoInput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 
                */
                class TranscodeTaskInput : public AbstractModel
                {
                public:
                    TranscodeTaskInput();
                    ~TranscodeTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Definition 
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置
                     * @param _definition 
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取
                     * @return WatermarkSet 
                     * 
                     */
                    std::vector<WatermarkInput> GetWatermarkSet() const;

                    /**
                     * 设置
                     * @param _watermarkSet 
                     * 
                     */
                    void SetWatermarkSet(const std::vector<WatermarkInput>& _watermarkSet);

                    /**
                     * 判断参数 WatermarkSet 是否已赋值
                     * @return WatermarkSet 是否已赋值
                     * 
                     */
                    bool WatermarkSetHasBeenSet() const;

                    /**
                     * 获取
                     * @return TraceWatermark 
                     * 
                     */
                    TraceWatermarkInput GetTraceWatermark() const;

                    /**
                     * 设置
                     * @param _traceWatermark 
                     * 
                     */
                    void SetTraceWatermark(const TraceWatermarkInput& _traceWatermark);

                    /**
                     * 判断参数 TraceWatermark 是否已赋值
                     * @return TraceWatermark 是否已赋值
                     * 
                     */
                    bool TraceWatermarkHasBeenSet() const;

                    /**
                     * 获取
                     * @return CopyRightWatermark 
                     * 
                     */
                    CopyRightWatermarkInput GetCopyRightWatermark() const;

                    /**
                     * 设置
                     * @param _copyRightWatermark 
                     * 
                     */
                    void SetCopyRightWatermark(const CopyRightWatermarkInput& _copyRightWatermark);

                    /**
                     * 判断参数 CopyRightWatermark 是否已赋值
                     * @return CopyRightWatermark 是否已赋值
                     * 
                     */
                    bool CopyRightWatermarkHasBeenSet() const;

                    /**
                     * 获取
                     * @return BlindWatermark 
                     * 
                     */
                    BlindWatermarkInput GetBlindWatermark() const;

                    /**
                     * 设置
                     * @param _blindWatermark 
                     * 
                     */
                    void SetBlindWatermark(const BlindWatermarkInput& _blindWatermark);

                    /**
                     * 判断参数 BlindWatermark 是否已赋值
                     * @return BlindWatermark 是否已赋值
                     * 
                     */
                    bool BlindWatermarkHasBeenSet() const;

                    /**
                     * 获取
                     * @return MosaicSet 
                     * 
                     */
                    std::vector<MosaicInput> GetMosaicSet() const;

                    /**
                     * 设置
                     * @param _mosaicSet 
                     * 
                     */
                    void SetMosaicSet(const std::vector<MosaicInput>& _mosaicSet);

                    /**
                     * 判断参数 MosaicSet 是否已赋值
                     * @return MosaicSet 是否已赋值
                     * 
                     */
                    bool MosaicSetHasBeenSet() const;

                    /**
                     * 获取
                     * @return HeadTailSet 
                     * 
                     */
                    std::vector<HeadTailTaskInput> GetHeadTailSet() const;

                    /**
                     * 设置
                     * @param _headTailSet 
                     * 
                     */
                    void SetHeadTailSet(const std::vector<HeadTailTaskInput>& _headTailSet);

                    /**
                     * 判断参数 HeadTailSet 是否已赋值
                     * @return HeadTailSet 是否已赋值
                     * 
                     */
                    bool HeadTailSetHasBeenSet() const;

                    /**
                     * 获取
                     * @return StartTimeOffset 
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置
                     * @param _startTimeOffset 
                     * 
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     * 
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取
                     * @return EndTimeOffset 
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置
                     * @param _endTimeOffset 
                     * 
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     * 
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                    /**
                     * 获取
                     * @return OverrideParameter 
                     * 
                     */
                    OverrideTranscodeParameter GetOverrideParameter() const;

                    /**
                     * 设置
                     * @param _overrideParameter 
                     * 
                     */
                    void SetOverrideParameter(const OverrideTranscodeParameter& _overrideParameter);

                    /**
                     * 判断参数 OverrideParameter 是否已赋值
                     * @return OverrideParameter 是否已赋值
                     * 
                     */
                    bool OverrideParameterHasBeenSet() const;

                    /**
                     * 获取
                     * @return SubtitleInfoSet 
                     * 
                     */
                    std::vector<SubtitleInfoInput> GetSubtitleInfoSet() const;

                    /**
                     * 设置
                     * @param _subtitleInfoSet 
                     * 
                     */
                    void SetSubtitleInfoSet(const std::vector<SubtitleInfoInput>& _subtitleInfoSet);

                    /**
                     * 判断参数 SubtitleInfoSet 是否已赋值
                     * @return SubtitleInfoSet 是否已赋值
                     * 
                     */
                    bool SubtitleInfoSetHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<WatermarkInput> m_watermarkSet;
                    bool m_watermarkSetHasBeenSet;

                    /**
                     * 
                     */
                    TraceWatermarkInput m_traceWatermark;
                    bool m_traceWatermarkHasBeenSet;

                    /**
                     * 
                     */
                    CopyRightWatermarkInput m_copyRightWatermark;
                    bool m_copyRightWatermarkHasBeenSet;

                    /**
                     * 
                     */
                    BlindWatermarkInput m_blindWatermark;
                    bool m_blindWatermarkHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<MosaicInput> m_mosaicSet;
                    bool m_mosaicSetHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<HeadTailTaskInput> m_headTailSet;
                    bool m_headTailSetHasBeenSet;

                    /**
                     * 
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * 
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * 
                     */
                    OverrideTranscodeParameter m_overrideParameter;
                    bool m_overrideParameterHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<SubtitleInfoInput> m_subtitleInfoSet;
                    bool m_subtitleInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TRANSCODETASKINPUT_H_
