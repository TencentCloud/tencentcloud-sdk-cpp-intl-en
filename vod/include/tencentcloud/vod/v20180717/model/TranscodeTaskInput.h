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
                * Input parameter type of transcoding task
                */
                class TranscodeTaskInput : public AbstractModel
                {
                public:
                    TranscodeTaskInput();
                    ~TranscodeTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Video transcoding template ID.</p>
                     * @return Definition <p>Video transcoding template ID.</p>
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置<p>Video transcoding template ID.</p>
                     * @param _definition <p>Video transcoding template ID.</p>
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
                     * 获取<p>Watermark list. Up to 10 image or text watermarks are supported.</p>
                     * @return WatermarkSet <p>Watermark list. Up to 10 image or text watermarks are supported.</p>
                     * 
                     */
                    std::vector<WatermarkInput> GetWatermarkSet() const;

                    /**
                     * 设置<p>Watermark list. Up to 10 image or text watermarks are supported.</p>
                     * @param _watermarkSet <p>Watermark list. Up to 10 image or text watermarks are supported.</p>
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
                     * 获取<p>Traceable watermark.</p>
                     * @return TraceWatermark <p>Traceable watermark.</p>
                     * 
                     */
                    TraceWatermarkInput GetTraceWatermark() const;

                    /**
                     * 设置<p>Traceable watermark.</p>
                     * @param _traceWatermark <p>Traceable watermark.</p>
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
                     * 获取<p>Copyright watermark.</p>
                     * @return CopyRightWatermark <p>Copyright watermark.</p>
                     * 
                     */
                    CopyRightWatermarkInput GetCopyRightWatermark() const;

                    /**
                     * 设置<p>Copyright watermark.</p>
                     * @param _copyRightWatermark <p>Copyright watermark.</p>
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
                     * 获取<p>Digital watermark.</p>
                     * @return BlindWatermark <p>Digital watermark.</p>
                     * 
                     */
                    BlindWatermarkInput GetBlindWatermark() const;

                    /**
                     * 设置<p>Digital watermark.</p>
                     * @param _blindWatermark <p>Digital watermark.</p>
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
                     * 获取<p>Mosaic list. Up to 10 are supported.</p>
                     * @return MosaicSet <p>Mosaic list. Up to 10 are supported.</p>
                     * 
                     */
                    std::vector<MosaicInput> GetMosaicSet() const;

                    /**
                     * 设置<p>Mosaic list. Up to 10 are supported.</p>
                     * @param _mosaicSet <p>Mosaic list. Up to 10 are supported.</p>
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
                     * 获取<p>Opening and ending list. Up to 10 opening and ending sequences are supported.</p>
                     * @return HeadTailSet <p>Opening and ending list. Up to 10 opening and ending sequences are supported.</p>
                     * 
                     */
                    std::vector<HeadTailTaskInput> GetHeadTailSet() const;

                    /**
                     * 设置<p>Opening and ending list. Up to 10 opening and ending sequences are supported.</p>
                     * @param _headTailSet <p>Opening and ending list. Up to 10 opening and ending sequences are supported.</p>
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
                     * 获取<p>Start time offset of the transcoded video, unit: second.</p><li>Leave it blank or enter 0 means the transcoded video starts from the start position of the original video.</li><li>When the value is greater than 0 (assume it is n), it means the transcoded video starts from the nth second position of the original video.</li><li>When the value is less than 0 (assume it is -n), it means the transcoded video starts from the position n seconds before the end of the original video.</li>
                     * @return StartTimeOffset <p>Start time offset of the transcoded video, unit: second.</p><li>Leave it blank or enter 0 means the transcoded video starts from the start position of the original video.</li><li>When the value is greater than 0 (assume it is n), it means the transcoded video starts from the nth second position of the original video.</li><li>When the value is less than 0 (assume it is -n), it means the transcoded video starts from the position n seconds before the end of the original video.</li>
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置<p>Start time offset of the transcoded video, unit: second.</p><li>Leave it blank or enter 0 means the transcoded video starts from the start position of the original video.</li><li>When the value is greater than 0 (assume it is n), it means the transcoded video starts from the nth second position of the original video.</li><li>When the value is less than 0 (assume it is -n), it means the transcoded video starts from the position n seconds before the end of the original video.</li>
                     * @param _startTimeOffset <p>Start time offset of the transcoded video, unit: second.</p><li>Leave it blank or enter 0 means the transcoded video starts from the start position of the original video.</li><li>When the value is greater than 0 (assume it is n), it means the transcoded video starts from the nth second position of the original video.</li><li>When the value is less than 0 (assume it is -n), it means the transcoded video starts from the position n seconds before the end of the original video.</li>
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
                     * 获取<p>Offset of the termination time of the transcoded video, unit: second.</p><li>Leave it blank or enter 0 means the transcoded video lasts until the end of the original video.</li><li>When the value is greater than 0 (assume it is n), it means the transcoded video lasts until the nth second of the original video.</li><li>When the value is less than 0 (assume it is -n), it means the transcoded video lasts until n seconds before the end of the original video.</li>
                     * @return EndTimeOffset <p>Offset of the termination time of the transcoded video, unit: second.</p><li>Leave it blank or enter 0 means the transcoded video lasts until the end of the original video.</li><li>When the value is greater than 0 (assume it is n), it means the transcoded video lasts until the nth second of the original video.</li><li>When the value is less than 0 (assume it is -n), it means the transcoded video lasts until n seconds before the end of the original video.</li>
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置<p>Offset of the termination time of the transcoded video, unit: second.</p><li>Leave it blank or enter 0 means the transcoded video lasts until the end of the original video.</li><li>When the value is greater than 0 (assume it is n), it means the transcoded video lasts until the nth second of the original video.</li><li>When the value is less than 0 (assume it is -n), it means the transcoded video lasts until n seconds before the end of the original video.</li>
                     * @param _endTimeOffset <p>Offset of the termination time of the transcoded video, unit: second.</p><li>Leave it blank or enter 0 means the transcoded video lasts until the end of the original video.</li><li>When the value is greater than 0 (assume it is n), it means the transcoded video lasts until the nth second of the original video.</li><li>When the value is less than 0 (assume it is -n), it means the transcoded video lasts until n seconds before the end of the original video.</li>
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
                     * 获取<p>Custom video transcoding parameters.</p>
                     * @return OverrideParameter <p>Custom video transcoding parameters.</p>
                     * 
                     */
                    OverrideTranscodeParameter GetOverrideParameter() const;

                    /**
                     * 设置<p>Custom video transcoding parameters.</p>
                     * @param _overrideParameter <p>Custom video transcoding parameters.</p>
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
                     * 获取<p>List of subtitle suppression information. Up to 2 are supported.</p>
                     * @return SubtitleInfoSet <p>List of subtitle suppression information. Up to 2 are supported.</p>
                     * 
                     */
                    std::vector<SubtitleInfoInput> GetSubtitleInfoSet() const;

                    /**
                     * 设置<p>List of subtitle suppression information. Up to 2 are supported.</p>
                     * @param _subtitleInfoSet <p>List of subtitle suppression information. Up to 2 are supported.</p>
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
                     * <p>Video transcoding template ID.</p>
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>Watermark list. Up to 10 image or text watermarks are supported.</p>
                     */
                    std::vector<WatermarkInput> m_watermarkSet;
                    bool m_watermarkSetHasBeenSet;

                    /**
                     * <p>Traceable watermark.</p>
                     */
                    TraceWatermarkInput m_traceWatermark;
                    bool m_traceWatermarkHasBeenSet;

                    /**
                     * <p>Copyright watermark.</p>
                     */
                    CopyRightWatermarkInput m_copyRightWatermark;
                    bool m_copyRightWatermarkHasBeenSet;

                    /**
                     * <p>Digital watermark.</p>
                     */
                    BlindWatermarkInput m_blindWatermark;
                    bool m_blindWatermarkHasBeenSet;

                    /**
                     * <p>Mosaic list. Up to 10 are supported.</p>
                     */
                    std::vector<MosaicInput> m_mosaicSet;
                    bool m_mosaicSetHasBeenSet;

                    /**
                     * <p>Opening and ending list. Up to 10 opening and ending sequences are supported.</p>
                     */
                    std::vector<HeadTailTaskInput> m_headTailSet;
                    bool m_headTailSetHasBeenSet;

                    /**
                     * <p>Start time offset of the transcoded video, unit: second.</p><li>Leave it blank or enter 0 means the transcoded video starts from the start position of the original video.</li><li>When the value is greater than 0 (assume it is n), it means the transcoded video starts from the nth second position of the original video.</li><li>When the value is less than 0 (assume it is -n), it means the transcoded video starts from the position n seconds before the end of the original video.</li>
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * <p>Offset of the termination time of the transcoded video, unit: second.</p><li>Leave it blank or enter 0 means the transcoded video lasts until the end of the original video.</li><li>When the value is greater than 0 (assume it is n), it means the transcoded video lasts until the nth second of the original video.</li><li>When the value is less than 0 (assume it is -n), it means the transcoded video lasts until n seconds before the end of the original video.</li>
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * <p>Custom video transcoding parameters.</p>
                     */
                    OverrideTranscodeParameter m_overrideParameter;
                    bool m_overrideParameterHasBeenSet;

                    /**
                     * <p>List of subtitle suppression information. Up to 2 are supported.</p>
                     */
                    std::vector<SubtitleInfoInput> m_subtitleInfoSet;
                    bool m_subtitleInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TRANSCODETASKINPUT_H_
