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
                * VOD file information
                */
                class MediaInfo : public AbstractModel
                {
                public:
                    MediaInfo();
                    ~MediaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Basic information. Include video name, category, playback address, cover image.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BasicInfo <p>Basic information. Include video name, category, playback address, cover image.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MediaBasicInfo GetBasicInfo() const;

                    /**
                     * 设置<p>Basic information. Include video name, category, playback address, cover image.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _basicInfo <p>Basic information. Include video name, category, playback address, cover image.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Meta information, including size, duration, video stream information, and audio stream information.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MetaData <p>Meta information, including size, duration, video stream information, and audio stream information.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 设置<p>Meta information, including size, duration, video stream information, and audio stream information.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _metaData <p>Meta information, including size, duration, video stream information, and audio stream information.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Transcoding result information, including domain names or IP addresses, specifications, bitrates, and resolutions of various types of videos generated by video transcoding.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TranscodeInfo <p>Transcoding result information, including domain names or IP addresses, specifications, bitrates, and resolutions of various types of videos generated by video transcoding.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MediaTranscodeInfo GetTranscodeInfo() const;

                    /**
                     * 设置<p>Transcoding result information, including domain names or IP addresses, specifications, bitrates, and resolutions of various types of videos generated by video transcoding.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _transcodeInfo <p>Transcoding result information, including domain names or IP addresses, specifications, bitrates, and resolutions of various types of videos generated by video transcoding.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>AnimatedGraphicsInfo. Information related to the animated graphics (such as gif) after video-to-gif conversion.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AnimatedGraphicsInfo <p>AnimatedGraphicsInfo. Information related to the animated graphics (such as gif) after video-to-gif conversion.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MediaAnimatedGraphicsInfo GetAnimatedGraphicsInfo() const;

                    /**
                     * 设置<p>AnimatedGraphicsInfo. Information related to the animated graphics (such as gif) after video-to-gif conversion.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _animatedGraphicsInfo <p>AnimatedGraphicsInfo. Information related to the animated graphics (such as gif) after video-to-gif conversion.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Sampling screenshot information. Screenshot information related to the video after sampling screenshot taking.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SampleSnapshotInfo <p>Sampling screenshot information. Screenshot information related to the video after sampling screenshot taking.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MediaSampleSnapshotInfo GetSampleSnapshotInfo() const;

                    /**
                     * 设置<p>Sampling screenshot information. Screenshot information related to the video after sampling screenshot taking.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sampleSnapshotInfo <p>Sampling screenshot information. Screenshot information related to the video after sampling screenshot taking.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Sprite image information. Relevant information of the sprite after capturing CSS sprites from the video.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImageSpriteInfo <p>Sprite image information. Relevant information of the sprite after capturing CSS sprites from the video.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MediaImageSpriteInfo GetImageSpriteInfo() const;

                    /**
                     * 设置<p>Sprite image information. Relevant information of the sprite after capturing CSS sprites from the video.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _imageSpriteInfo <p>Sprite image information. Relevant information of the sprite after capturing CSS sprites from the video.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Screenshot information at the specified time point. Information of each screenshot after capturing the video at the specified time point.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SnapshotByTimeOffsetInfo <p>Screenshot information at the specified time point. Information of each screenshot after capturing the video at the specified time point.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MediaSnapshotByTimeOffsetInfo GetSnapshotByTimeOffsetInfo() const;

                    /**
                     * 设置<p>Screenshot information at the specified time point. Information of each screenshot after capturing the video at the specified time point.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _snapshotByTimeOffsetInfo <p>Screenshot information at the specified time point. Information of each screenshot after capturing the video at the specified time point.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Video timestamp information. Each dotting information set for the video.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return KeyFrameDescInfo <p>Video timestamp information. Each dotting information set for the video.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MediaKeyFrameDescInfo GetKeyFrameDescInfo() const;

                    /**
                     * 设置<p>Video timestamp information. Each dotting information set for the video.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _keyFrameDescInfo <p>Video timestamp information. Each dotting information set for the video.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Adaptive Bitrate Streaming information. Includes specification, encryption type, packaging format and information related to.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AdaptiveDynamicStreamingInfo <p>Adaptive Bitrate Streaming information. Includes specification, encryption type, packaging format and information related to.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MediaAdaptiveDynamicStreamingInfo GetAdaptiveDynamicStreamingInfo() const;

                    /**
                     * 设置<p>Adaptive Bitrate Streaming information. Includes specification, encryption type, packaging format and information related to.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _adaptiveDynamicStreamingInfo <p>Adaptive Bitrate Streaming information. Includes specification, encryption type, packaging format and information related to.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>miniProgramReviewInfo</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MiniProgramReviewInfo <p>miniProgramReviewInfo</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MediaMiniProgramReviewInfo GetMiniProgramReviewInfo() const;

                    /**
                     * 设置<p>miniProgramReviewInfo</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _miniProgramReviewInfo <p>miniProgramReviewInfo</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Subtitle information.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubtitleInfo <p>Subtitle information.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MediaSubtitleInfo GetSubtitleInfo() const;

                    /**
                     * 设置<p>Subtitle information.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subtitleInfo <p>Subtitle information.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Media file unique identifier ID.</p>
                     * @return FileId <p>Media file unique identifier ID.</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>Media file unique identifier ID.</p>
                     * @param _fileId <p>Media file unique identifier ID.</p>
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
                     * 获取<p>Verification information.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReviewInfo <p>Verification information.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    FileReviewInfo GetReviewInfo() const;

                    /**
                     * 设置<p>Verification information.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _reviewInfo <p>Verification information.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>MPS intelligent media asset information</p>
                     * @return MPSAiMediaInfo <p>MPS intelligent media asset information</p>
                     * 
                     */
                    MPSAiMediaInfo GetMPSAiMediaInfo() const;

                    /**
                     * 设置<p>MPS intelligent media asset information</p>
                     * @param _mPSAiMediaInfo <p>MPS intelligent media asset information</p>
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
                     * 获取<p>Image understanding information.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImageUnderstandingInfo <p>Image understanding information.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ImageUnderstandingInfo GetImageUnderstandingInfo() const;

                    /**
                     * 设置<p>Image understanding information.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _imageUnderstandingInfo <p>Image understanding information.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Intelligent library information.</p>
                     * @return KnowledgeBasesInfo <p>Intelligent library information.</p>
                     * 
                     */
                    KnowledgeBasesInfo GetKnowledgeBasesInfo() const;

                    /**
                     * 设置<p>Intelligent library information.</p>
                     * @param _knowledgeBasesInfo <p>Intelligent library information.</p>
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
                     * 获取<p>Facial recognition information.</p>
                     * @return FaceRecognitionInfo <p>Facial recognition information.</p>
                     * 
                     */
                    FaceRecognitionInfo GetFaceRecognitionInfo() const;

                    /**
                     * 设置<p>Facial recognition information.</p>
                     * @param _faceRecognitionInfo <p>Facial recognition information.</p>
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
                     * <p>Basic information. Include video name, category, playback address, cover image.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MediaBasicInfo m_basicInfo;
                    bool m_basicInfoHasBeenSet;

                    /**
                     * <p>Meta information, including size, duration, video stream information, and audio stream information.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                    /**
                     * <p>Transcoding result information, including domain names or IP addresses, specifications, bitrates, and resolutions of various types of videos generated by video transcoding.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MediaTranscodeInfo m_transcodeInfo;
                    bool m_transcodeInfoHasBeenSet;

                    /**
                     * <p>AnimatedGraphicsInfo. Information related to the animated graphics (such as gif) after video-to-gif conversion.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MediaAnimatedGraphicsInfo m_animatedGraphicsInfo;
                    bool m_animatedGraphicsInfoHasBeenSet;

                    /**
                     * <p>Sampling screenshot information. Screenshot information related to the video after sampling screenshot taking.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MediaSampleSnapshotInfo m_sampleSnapshotInfo;
                    bool m_sampleSnapshotInfoHasBeenSet;

                    /**
                     * <p>Sprite image information. Relevant information of the sprite after capturing CSS sprites from the video.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MediaImageSpriteInfo m_imageSpriteInfo;
                    bool m_imageSpriteInfoHasBeenSet;

                    /**
                     * <p>Screenshot information at the specified time point. Information of each screenshot after capturing the video at the specified time point.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MediaSnapshotByTimeOffsetInfo m_snapshotByTimeOffsetInfo;
                    bool m_snapshotByTimeOffsetInfoHasBeenSet;

                    /**
                     * <p>Video timestamp information. Each dotting information set for the video.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MediaKeyFrameDescInfo m_keyFrameDescInfo;
                    bool m_keyFrameDescInfoHasBeenSet;

                    /**
                     * <p>Adaptive Bitrate Streaming information. Includes specification, encryption type, packaging format and information related to.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MediaAdaptiveDynamicStreamingInfo m_adaptiveDynamicStreamingInfo;
                    bool m_adaptiveDynamicStreamingInfoHasBeenSet;

                    /**
                     * <p>miniProgramReviewInfo</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MediaMiniProgramReviewInfo m_miniProgramReviewInfo;
                    bool m_miniProgramReviewInfoHasBeenSet;

                    /**
                     * <p>Subtitle information.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MediaSubtitleInfo m_subtitleInfo;
                    bool m_subtitleInfoHasBeenSet;

                    /**
                     * <p>Media file unique identifier ID.</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>Verification information.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    FileReviewInfo m_reviewInfo;
                    bool m_reviewInfoHasBeenSet;

                    /**
                     * <p>MPS intelligent media asset information</p>
                     */
                    MPSAiMediaInfo m_mPSAiMediaInfo;
                    bool m_mPSAiMediaInfoHasBeenSet;

                    /**
                     * <p>Image understanding information.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ImageUnderstandingInfo m_imageUnderstandingInfo;
                    bool m_imageUnderstandingInfoHasBeenSet;

                    /**
                     * <p>Intelligent library information.</p>
                     */
                    KnowledgeBasesInfo m_knowledgeBasesInfo;
                    bool m_knowledgeBasesInfoHasBeenSet;

                    /**
                     * <p>Facial recognition information.</p>
                     */
                    FaceRecognitionInfo m_faceRecognitionInfo;
                    bool m_faceRecognitionInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAINFO_H_
