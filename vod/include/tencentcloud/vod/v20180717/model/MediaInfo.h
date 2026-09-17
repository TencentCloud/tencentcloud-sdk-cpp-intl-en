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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaBasicInfo.h>
#include <tencentcloud/vod/v20180717/model/MediaMetaData.h>
#include <tencentcloud/vod/v20180717/model/MediaTranscodeInfo.h>
#include <tencentcloud/vod/v20180717/model/MediaAnimatedGraphicsInfo.h>
#include <tencentcloud/vod/v20180717/model/MediaSampleSnapshotInfo.h>
#include <tencentcloud/vod/v20180717/model/MediaImageSpriteInfo.h>
#include <tencentcloud/vod/v20180717/model/MediaSnapshotByTimeOffsetInfo.h>
#include <tencentcloud/vod/v20180717/model/MediaKeyFrameDescInfo.h>
#include <tencentcloud/vod/v20180717/model/MediaAdaptiveDynamicStreamingInfo.h>
#include <tencentcloud/vod/v20180717/model/MediaMiniProgramReviewInfo.h>
#include <tencentcloud/vod/v20180717/model/MediaSubtitleInfo.h>
#include <tencentcloud/vod/v20180717/model/FileReviewInfo.h>
#include <tencentcloud/vod/v20180717/model/MPSAiMediaInfo.h>
#include <tencentcloud/vod/v20180717/model/ImageUnderstandingInfo.h>
#include <tencentcloud/vod/v20180717/model/KnowledgeBasesInfo.h>
#include <tencentcloud/vod/v20180717/model/FaceRecognitionInfo.h>


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
                class MediaInfo : public AbstractModel
                {
                public:
                    MediaInfo();
                    ~MediaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return BasicInfo 
                     * 
                     */
                    MediaBasicInfo GetBasicInfo() const;

                    /**
                     * 设置
                     * @param _basicInfo 
                     * 
                     */
                    void SetBasicInfo(const MediaBasicInfo& _basicInfo);

                    /**
                     * 判断参数 BasicInfo 是否已赋值
                     * @return BasicInfo 是否已赋值
                     * 
                     */
                    bool BasicInfoHasBeenSet() const;

                    /**
                     * 获取
                     * @return MetaData 
                     * 
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 设置
                     * @param _metaData 
                     * 
                     */
                    void SetMetaData(const MediaMetaData& _metaData);

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     * 
                     */
                    bool MetaDataHasBeenSet() const;

                    /**
                     * 获取
                     * @return TranscodeInfo 
                     * 
                     */
                    MediaTranscodeInfo GetTranscodeInfo() const;

                    /**
                     * 设置
                     * @param _transcodeInfo 
                     * 
                     */
                    void SetTranscodeInfo(const MediaTranscodeInfo& _transcodeInfo);

                    /**
                     * 判断参数 TranscodeInfo 是否已赋值
                     * @return TranscodeInfo 是否已赋值
                     * 
                     */
                    bool TranscodeInfoHasBeenSet() const;

                    /**
                     * 获取
                     * @return AnimatedGraphicsInfo 
                     * 
                     */
                    MediaAnimatedGraphicsInfo GetAnimatedGraphicsInfo() const;

                    /**
                     * 设置
                     * @param _animatedGraphicsInfo 
                     * 
                     */
                    void SetAnimatedGraphicsInfo(const MediaAnimatedGraphicsInfo& _animatedGraphicsInfo);

                    /**
                     * 判断参数 AnimatedGraphicsInfo 是否已赋值
                     * @return AnimatedGraphicsInfo 是否已赋值
                     * 
                     */
                    bool AnimatedGraphicsInfoHasBeenSet() const;

                    /**
                     * 获取
                     * @return SampleSnapshotInfo 
                     * 
                     */
                    MediaSampleSnapshotInfo GetSampleSnapshotInfo() const;

                    /**
                     * 设置
                     * @param _sampleSnapshotInfo 
                     * 
                     */
                    void SetSampleSnapshotInfo(const MediaSampleSnapshotInfo& _sampleSnapshotInfo);

                    /**
                     * 判断参数 SampleSnapshotInfo 是否已赋值
                     * @return SampleSnapshotInfo 是否已赋值
                     * 
                     */
                    bool SampleSnapshotInfoHasBeenSet() const;

                    /**
                     * 获取
                     * @return ImageSpriteInfo 
                     * 
                     */
                    MediaImageSpriteInfo GetImageSpriteInfo() const;

                    /**
                     * 设置
                     * @param _imageSpriteInfo 
                     * 
                     */
                    void SetImageSpriteInfo(const MediaImageSpriteInfo& _imageSpriteInfo);

                    /**
                     * 判断参数 ImageSpriteInfo 是否已赋值
                     * @return ImageSpriteInfo 是否已赋值
                     * 
                     */
                    bool ImageSpriteInfoHasBeenSet() const;

                    /**
                     * 获取
                     * @return SnapshotByTimeOffsetInfo 
                     * 
                     */
                    MediaSnapshotByTimeOffsetInfo GetSnapshotByTimeOffsetInfo() const;

                    /**
                     * 设置
                     * @param _snapshotByTimeOffsetInfo 
                     * 
                     */
                    void SetSnapshotByTimeOffsetInfo(const MediaSnapshotByTimeOffsetInfo& _snapshotByTimeOffsetInfo);

                    /**
                     * 判断参数 SnapshotByTimeOffsetInfo 是否已赋值
                     * @return SnapshotByTimeOffsetInfo 是否已赋值
                     * 
                     */
                    bool SnapshotByTimeOffsetInfoHasBeenSet() const;

                    /**
                     * 获取
                     * @return KeyFrameDescInfo 
                     * 
                     */
                    MediaKeyFrameDescInfo GetKeyFrameDescInfo() const;

                    /**
                     * 设置
                     * @param _keyFrameDescInfo 
                     * 
                     */
                    void SetKeyFrameDescInfo(const MediaKeyFrameDescInfo& _keyFrameDescInfo);

                    /**
                     * 判断参数 KeyFrameDescInfo 是否已赋值
                     * @return KeyFrameDescInfo 是否已赋值
                     * 
                     */
                    bool KeyFrameDescInfoHasBeenSet() const;

                    /**
                     * 获取
                     * @return AdaptiveDynamicStreamingInfo 
                     * 
                     */
                    MediaAdaptiveDynamicStreamingInfo GetAdaptiveDynamicStreamingInfo() const;

                    /**
                     * 设置
                     * @param _adaptiveDynamicStreamingInfo 
                     * 
                     */
                    void SetAdaptiveDynamicStreamingInfo(const MediaAdaptiveDynamicStreamingInfo& _adaptiveDynamicStreamingInfo);

                    /**
                     * 判断参数 AdaptiveDynamicStreamingInfo 是否已赋值
                     * @return AdaptiveDynamicStreamingInfo 是否已赋值
                     * 
                     */
                    bool AdaptiveDynamicStreamingInfoHasBeenSet() const;

                    /**
                     * 获取
                     * @return MiniProgramReviewInfo 
                     * 
                     */
                    MediaMiniProgramReviewInfo GetMiniProgramReviewInfo() const;

                    /**
                     * 设置
                     * @param _miniProgramReviewInfo 
                     * 
                     */
                    void SetMiniProgramReviewInfo(const MediaMiniProgramReviewInfo& _miniProgramReviewInfo);

                    /**
                     * 判断参数 MiniProgramReviewInfo 是否已赋值
                     * @return MiniProgramReviewInfo 是否已赋值
                     * 
                     */
                    bool MiniProgramReviewInfoHasBeenSet() const;

                    /**
                     * 获取
                     * @return SubtitleInfo 
                     * 
                     */
                    MediaSubtitleInfo GetSubtitleInfo() const;

                    /**
                     * 设置
                     * @param _subtitleInfo 
                     * 
                     */
                    void SetSubtitleInfo(const MediaSubtitleInfo& _subtitleInfo);

                    /**
                     * 判断参数 SubtitleInfo 是否已赋值
                     * @return SubtitleInfo 是否已赋值
                     * 
                     */
                    bool SubtitleInfoHasBeenSet() const;

                    /**
                     * 获取
                     * @return FileId 
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置
                     * @param _fileId 
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return ReviewInfo 
                     * 
                     */
                    FileReviewInfo GetReviewInfo() const;

                    /**
                     * 设置
                     * @param _reviewInfo 
                     * 
                     */
                    void SetReviewInfo(const FileReviewInfo& _reviewInfo);

                    /**
                     * 判断参数 ReviewInfo 是否已赋值
                     * @return ReviewInfo 是否已赋值
                     * 
                     */
                    bool ReviewInfoHasBeenSet() const;

                    /**
                     * 获取
                     * @return MPSAiMediaInfo 
                     * 
                     */
                    MPSAiMediaInfo GetMPSAiMediaInfo() const;

                    /**
                     * 设置
                     * @param _mPSAiMediaInfo 
                     * 
                     */
                    void SetMPSAiMediaInfo(const MPSAiMediaInfo& _mPSAiMediaInfo);

                    /**
                     * 判断参数 MPSAiMediaInfo 是否已赋值
                     * @return MPSAiMediaInfo 是否已赋值
                     * 
                     */
                    bool MPSAiMediaInfoHasBeenSet() const;

                    /**
                     * 获取
                     * @return ImageUnderstandingInfo 
                     * 
                     */
                    ImageUnderstandingInfo GetImageUnderstandingInfo() const;

                    /**
                     * 设置
                     * @param _imageUnderstandingInfo 
                     * 
                     */
                    void SetImageUnderstandingInfo(const ImageUnderstandingInfo& _imageUnderstandingInfo);

                    /**
                     * 判断参数 ImageUnderstandingInfo 是否已赋值
                     * @return ImageUnderstandingInfo 是否已赋值
                     * 
                     */
                    bool ImageUnderstandingInfoHasBeenSet() const;

                    /**
                     * 获取
                     * @return KnowledgeBasesInfo 
                     * 
                     */
                    KnowledgeBasesInfo GetKnowledgeBasesInfo() const;

                    /**
                     * 设置
                     * @param _knowledgeBasesInfo 
                     * 
                     */
                    void SetKnowledgeBasesInfo(const KnowledgeBasesInfo& _knowledgeBasesInfo);

                    /**
                     * 判断参数 KnowledgeBasesInfo 是否已赋值
                     * @return KnowledgeBasesInfo 是否已赋值
                     * 
                     */
                    bool KnowledgeBasesInfoHasBeenSet() const;

                    /**
                     * 获取
                     * @return FaceRecognitionInfo 
                     * 
                     */
                    FaceRecognitionInfo GetFaceRecognitionInfo() const;

                    /**
                     * 设置
                     * @param _faceRecognitionInfo 
                     * 
                     */
                    void SetFaceRecognitionInfo(const FaceRecognitionInfo& _faceRecognitionInfo);

                    /**
                     * 判断参数 FaceRecognitionInfo 是否已赋值
                     * @return FaceRecognitionInfo 是否已赋值
                     * 
                     */
                    bool FaceRecognitionInfoHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    MediaBasicInfo m_basicInfo;
                    bool m_basicInfoHasBeenSet;

                    /**
                     * 
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                    /**
                     * 
                     */
                    MediaTranscodeInfo m_transcodeInfo;
                    bool m_transcodeInfoHasBeenSet;

                    /**
                     * 
                     */
                    MediaAnimatedGraphicsInfo m_animatedGraphicsInfo;
                    bool m_animatedGraphicsInfoHasBeenSet;

                    /**
                     * 
                     */
                    MediaSampleSnapshotInfo m_sampleSnapshotInfo;
                    bool m_sampleSnapshotInfoHasBeenSet;

                    /**
                     * 
                     */
                    MediaImageSpriteInfo m_imageSpriteInfo;
                    bool m_imageSpriteInfoHasBeenSet;

                    /**
                     * 
                     */
                    MediaSnapshotByTimeOffsetInfo m_snapshotByTimeOffsetInfo;
                    bool m_snapshotByTimeOffsetInfoHasBeenSet;

                    /**
                     * 
                     */
                    MediaKeyFrameDescInfo m_keyFrameDescInfo;
                    bool m_keyFrameDescInfoHasBeenSet;

                    /**
                     * 
                     */
                    MediaAdaptiveDynamicStreamingInfo m_adaptiveDynamicStreamingInfo;
                    bool m_adaptiveDynamicStreamingInfoHasBeenSet;

                    /**
                     * 
                     */
                    MediaMiniProgramReviewInfo m_miniProgramReviewInfo;
                    bool m_miniProgramReviewInfoHasBeenSet;

                    /**
                     * 
                     */
                    MediaSubtitleInfo m_subtitleInfo;
                    bool m_subtitleInfoHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 
                     */
                    FileReviewInfo m_reviewInfo;
                    bool m_reviewInfoHasBeenSet;

                    /**
                     * 
                     */
                    MPSAiMediaInfo m_mPSAiMediaInfo;
                    bool m_mPSAiMediaInfoHasBeenSet;

                    /**
                     * 
                     */
                    ImageUnderstandingInfo m_imageUnderstandingInfo;
                    bool m_imageUnderstandingInfoHasBeenSet;

                    /**
                     * 
                     */
                    KnowledgeBasesInfo m_knowledgeBasesInfo;
                    bool m_knowledgeBasesInfoHasBeenSet;

                    /**
                     * 
                     */
                    FaceRecognitionInfo m_faceRecognitionInfo;
                    bool m_faceRecognitionInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAINFO_H_
