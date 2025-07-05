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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTTASKOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTTASKOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/QualityInspectResultItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Media quality inspection task generates.
                */
                class QualityInspectTaskOutput : public AbstractModel
                {
                public:
                    QualityInspectTaskOutput();
                    ~QualityInspectTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether the media files have no audio track, range: <li>0: No, that is, there is an audio track;</li> <li>1: Yes, that is, there is no audio track.</li>
                     * @return NoAudio Whether the media files have no audio track, range: <li>0: No, that is, there is an audio track;</li> <li>1: Yes, that is, there is no audio track.</li>
                     * 
                     */
                    int64_t GetNoAudio() const;

                    /**
                     * 设置Whether the media files have no audio track, range: <li>0: No, that is, there is an audio track;</li> <li>1: Yes, that is, there is no audio track.</li>
                     * @param _noAudio Whether the media files have no audio track, range: <li>0: No, that is, there is an audio track;</li> <li>1: Yes, that is, there is no audio track.</li>
                     * 
                     */
                    void SetNoAudio(const int64_t& _noAudio);

                    /**
                     * 判断参数 NoAudio 是否已赋值
                     * @return NoAudio 是否已赋值
                     * 
                     */
                    bool NoAudioHasBeenSet() const;

                    /**
                     * 获取Whether the media files have no video track, range: <li>0: No, that is, there is a video track;</li> <li>1: Yes, that is, there is no video track.</li>
                     * @return NoVideo Whether the media files have no video track, range: <li>0: No, that is, there is a video track;</li> <li>1: Yes, that is, there is no video track.</li>
                     * 
                     */
                    int64_t GetNoVideo() const;

                    /**
                     * 设置Whether the media files have no video track, range: <li>0: No, that is, there is a video track;</li> <li>1: Yes, that is, there is no video track.</li>
                     * @param _noVideo Whether the media files have no video track, range: <li>0: No, that is, there is a video track;</li> <li>1: Yes, that is, there is no video track.</li>
                     * 
                     */
                    void SetNoVideo(const int64_t& _noVideo);

                    /**
                     * 判断参数 NoVideo 是否已赋值
                     * @return NoVideo 是否已赋值
                     * 
                     */
                    bool NoVideoHasBeenSet() const;

                    /**
                     * 获取Quality score, value range: [0, 100].
                     * @return QualityEvaluationScore Quality score, value range: [0, 100].
                     * 
                     */
                    uint64_t GetQualityEvaluationScore() const;

                    /**
                     * 设置Quality score, value range: [0, 100].
                     * @param _qualityEvaluationScore Quality score, value range: [0, 100].
                     * 
                     */
                    void SetQualityEvaluationScore(const uint64_t& _qualityEvaluationScore);

                    /**
                     * 判断参数 QualityEvaluationScore 是否已赋值
                     * @return QualityEvaluationScore 是否已赋值
                     * 
                     */
                    bool QualityEvaluationScoreHasBeenSet() const;

                    /**
                     * 获取Abnormal items list detected of media quality inspection task
                     * @return QualityInspectResultSet Abnormal items list detected of media quality inspection task
                     * 
                     */
                    std::vector<QualityInspectResultItem> GetQualityInspectResultSet() const;

                    /**
                     * 设置Abnormal items list detected of media quality inspection task
                     * @param _qualityInspectResultSet Abnormal items list detected of media quality inspection task
                     * 
                     */
                    void SetQualityInspectResultSet(const std::vector<QualityInspectResultItem>& _qualityInspectResultSet);

                    /**
                     * 判断参数 QualityInspectResultSet 是否已赋值
                     * @return QualityInspectResultSet 是否已赋值
                     * 
                     */
                    bool QualityInspectResultSetHasBeenSet() const;

                private:

                    /**
                     * Whether the media files have no audio track, range: <li>0: No, that is, there is an audio track;</li> <li>1: Yes, that is, there is no audio track.</li>
                     */
                    int64_t m_noAudio;
                    bool m_noAudioHasBeenSet;

                    /**
                     * Whether the media files have no video track, range: <li>0: No, that is, there is a video track;</li> <li>1: Yes, that is, there is no video track.</li>
                     */
                    int64_t m_noVideo;
                    bool m_noVideoHasBeenSet;

                    /**
                     * Quality score, value range: [0, 100].
                     */
                    uint64_t m_qualityEvaluationScore;
                    bool m_qualityEvaluationScoreHasBeenSet;

                    /**
                     * Abnormal items list detected of media quality inspection task
                     */
                    std::vector<QualityInspectResultItem> m_qualityInspectResultSet;
                    bool m_qualityInspectResultSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTTASKOUTPUT_H_
