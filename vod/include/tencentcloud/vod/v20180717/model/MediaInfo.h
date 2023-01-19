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
                     * 获取Basic information, such as video name, category, playback address, and cover image.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return BasicInfo Basic information, such as video name, category, playback address, and cover image.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaBasicInfo GetBasicInfo() const;

                    /**
                     * 设置Basic information, such as video name, category, playback address, and cover image.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param BasicInfo Basic information, such as video name, category, playback address, and cover image.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetBasicInfo(const MediaBasicInfo& _basicInfo);

                    /**
                     * 判断参数 BasicInfo 是否已赋值
                     * @return BasicInfo 是否已赋值
                     */
                    bool BasicInfoHasBeenSet() const;

                    /**
                     * 获取Metadata, such as size, duration, video stream information, and audio stream information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MetaData Metadata, such as size, duration, video stream information, and audio stream information.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 设置Metadata, such as size, duration, video stream information, and audio stream information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MetaData Metadata, such as size, duration, video stream information, and audio stream information.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMetaData(const MediaMetaData& _metaData);

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     */
                    bool MetaDataHasBeenSet() const;

                    /**
                     * 获取Result information of transcoding, such as address, specification, bitrate, and resolution of the videos in various bitrates generated by transcoding a video.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TranscodeInfo Result information of transcoding, such as address, specification, bitrate, and resolution of the videos in various bitrates generated by transcoding a video.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaTranscodeInfo GetTranscodeInfo() const;

                    /**
                     * 设置Result information of transcoding, such as address, specification, bitrate, and resolution of the videos in various bitrates generated by transcoding a video.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TranscodeInfo Result information of transcoding, such as address, specification, bitrate, and resolution of the videos in various bitrates generated by transcoding a video.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTranscodeInfo(const MediaTranscodeInfo& _transcodeInfo);

                    /**
                     * 判断参数 TranscodeInfo 是否已赋值
                     * @return TranscodeInfo 是否已赋值
                     */
                    bool TranscodeInfoHasBeenSet() const;

                    /**
                     * 获取Result information of animated image generating, i.e., relevant information of an animated image (such as .gif) generated from a video.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AnimatedGraphicsInfo Result information of animated image generating, i.e., relevant information of an animated image (such as .gif) generated from a video.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaAnimatedGraphicsInfo GetAnimatedGraphicsInfo() const;

                    /**
                     * 设置Result information of animated image generating, i.e., relevant information of an animated image (such as .gif) generated from a video.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AnimatedGraphicsInfo Result information of animated image generating, i.e., relevant information of an animated image (such as .gif) generated from a video.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAnimatedGraphicsInfo(const MediaAnimatedGraphicsInfo& _animatedGraphicsInfo);

                    /**
                     * 判断参数 AnimatedGraphicsInfo 是否已赋值
                     * @return AnimatedGraphicsInfo 是否已赋值
                     */
                    bool AnimatedGraphicsInfoHasBeenSet() const;

                    /**
                     * 获取Sampled screenshot information, i.e., relevant information of a sampled screenshot generated from a video.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SampleSnapshotInfo Sampled screenshot information, i.e., relevant information of a sampled screenshot generated from a video.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaSampleSnapshotInfo GetSampleSnapshotInfo() const;

                    /**
                     * 设置Sampled screenshot information, i.e., relevant information of a sampled screenshot generated from a video.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param SampleSnapshotInfo Sampled screenshot information, i.e., relevant information of a sampled screenshot generated from a video.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSampleSnapshotInfo(const MediaSampleSnapshotInfo& _sampleSnapshotInfo);

                    /**
                     * 判断参数 SampleSnapshotInfo 是否已赋值
                     * @return SampleSnapshotInfo 是否已赋值
                     */
                    bool SampleSnapshotInfoHasBeenSet() const;

                    /**
                     * 获取Image sprite information, i.e., relevant information of image sprite generated from video.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ImageSpriteInfo Image sprite information, i.e., relevant information of image sprite generated from video.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaImageSpriteInfo GetImageSpriteInfo() const;

                    /**
                     * 设置Image sprite information, i.e., relevant information of image sprite generated from video.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ImageSpriteInfo Image sprite information, i.e., relevant information of image sprite generated from video.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetImageSpriteInfo(const MediaImageSpriteInfo& _imageSpriteInfo);

                    /**
                     * 判断参数 ImageSpriteInfo 是否已赋值
                     * @return ImageSpriteInfo 是否已赋值
                     */
                    bool ImageSpriteInfoHasBeenSet() const;

                    /**
                     * 获取Time point screenshot information, i.e., information of each time point screenshot generated from a video.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SnapshotByTimeOffsetInfo Time point screenshot information, i.e., information of each time point screenshot generated from a video.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaSnapshotByTimeOffsetInfo GetSnapshotByTimeOffsetInfo() const;

                    /**
                     * 设置Time point screenshot information, i.e., information of each time point screenshot generated from a video.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param SnapshotByTimeOffsetInfo Time point screenshot information, i.e., information of each time point screenshot generated from a video.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSnapshotByTimeOffsetInfo(const MediaSnapshotByTimeOffsetInfo& _snapshotByTimeOffsetInfo);

                    /**
                     * 判断参数 SnapshotByTimeOffsetInfo 是否已赋值
                     * @return SnapshotByTimeOffsetInfo 是否已赋值
                     */
                    bool SnapshotByTimeOffsetInfoHasBeenSet() const;

                    /**
                     * 获取Timestamp information, i.e., information of each timestamp set for a video.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return KeyFrameDescInfo Timestamp information, i.e., information of each timestamp set for a video.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaKeyFrameDescInfo GetKeyFrameDescInfo() const;

                    /**
                     * 设置Timestamp information, i.e., information of each timestamp set for a video.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param KeyFrameDescInfo Timestamp information, i.e., information of each timestamp set for a video.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetKeyFrameDescInfo(const MediaKeyFrameDescInfo& _keyFrameDescInfo);

                    /**
                     * 判断参数 KeyFrameDescInfo 是否已赋值
                     * @return KeyFrameDescInfo 是否已赋值
                     */
                    bool KeyFrameDescInfoHasBeenSet() const;

                    /**
                     * 获取Adaptive bitrate streaming information, such as specification, encryption type, and container format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AdaptiveDynamicStreamingInfo Adaptive bitrate streaming information, such as specification, encryption type, and container format.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaAdaptiveDynamicStreamingInfo GetAdaptiveDynamicStreamingInfo() const;

                    /**
                     * 设置Adaptive bitrate streaming information, such as specification, encryption type, and container format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AdaptiveDynamicStreamingInfo Adaptive bitrate streaming information, such as specification, encryption type, and container format.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAdaptiveDynamicStreamingInfo(const MediaAdaptiveDynamicStreamingInfo& _adaptiveDynamicStreamingInfo);

                    /**
                     * 判断参数 AdaptiveDynamicStreamingInfo 是否已赋值
                     * @return AdaptiveDynamicStreamingInfo 是否已赋值
                     */
                    bool AdaptiveDynamicStreamingInfoHasBeenSet() const;

                    /**
                     * 获取WeChat Mini Program audit information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MiniProgramReviewInfo WeChat Mini Program audit information.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaMiniProgramReviewInfo GetMiniProgramReviewInfo() const;

                    /**
                     * 设置WeChat Mini Program audit information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MiniProgramReviewInfo WeChat Mini Program audit information.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMiniProgramReviewInfo(const MediaMiniProgramReviewInfo& _miniProgramReviewInfo);

                    /**
                     * 判断参数 MiniProgramReviewInfo 是否已赋值
                     * @return MiniProgramReviewInfo 是否已赋值
                     */
                    bool MiniProgramReviewInfoHasBeenSet() const;

                    /**
                     * 获取Subtitle information
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return SubtitleInfo Subtitle information
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    MediaSubtitleInfo GetSubtitleInfo() const;

                    /**
                     * 设置Subtitle information
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param SubtitleInfo Subtitle information
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    void SetSubtitleInfo(const MediaSubtitleInfo& _subtitleInfo);

                    /**
                     * 判断参数 SubtitleInfo 是否已赋值
                     * @return SubtitleInfo 是否已赋值
                     */
                    bool SubtitleInfoHasBeenSet() const;

                    /**
                     * 获取Unique ID of media file.
                     * @return FileId Unique ID of media file.
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Unique ID of media file.
                     * @param FileId Unique ID of media file.
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取Moderation details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReviewInfo Moderation details.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    FileReviewInfo GetReviewInfo() const;

                    /**
                     * 设置Moderation details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ReviewInfo Moderation details.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetReviewInfo(const FileReviewInfo& _reviewInfo);

                    /**
                     * 判断参数 ReviewInfo 是否已赋值
                     * @return ReviewInfo 是否已赋值
                     */
                    bool ReviewInfoHasBeenSet() const;

                private:

                    /**
                     * Basic information, such as video name, category, playback address, and cover image.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaBasicInfo m_basicInfo;
                    bool m_basicInfoHasBeenSet;

                    /**
                     * Metadata, such as size, duration, video stream information, and audio stream information.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                    /**
                     * Result information of transcoding, such as address, specification, bitrate, and resolution of the videos in various bitrates generated by transcoding a video.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaTranscodeInfo m_transcodeInfo;
                    bool m_transcodeInfoHasBeenSet;

                    /**
                     * Result information of animated image generating, i.e., relevant information of an animated image (such as .gif) generated from a video.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaAnimatedGraphicsInfo m_animatedGraphicsInfo;
                    bool m_animatedGraphicsInfoHasBeenSet;

                    /**
                     * Sampled screenshot information, i.e., relevant information of a sampled screenshot generated from a video.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaSampleSnapshotInfo m_sampleSnapshotInfo;
                    bool m_sampleSnapshotInfoHasBeenSet;

                    /**
                     * Image sprite information, i.e., relevant information of image sprite generated from video.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaImageSpriteInfo m_imageSpriteInfo;
                    bool m_imageSpriteInfoHasBeenSet;

                    /**
                     * Time point screenshot information, i.e., information of each time point screenshot generated from a video.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaSnapshotByTimeOffsetInfo m_snapshotByTimeOffsetInfo;
                    bool m_snapshotByTimeOffsetInfoHasBeenSet;

                    /**
                     * Timestamp information, i.e., information of each timestamp set for a video.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaKeyFrameDescInfo m_keyFrameDescInfo;
                    bool m_keyFrameDescInfoHasBeenSet;

                    /**
                     * Adaptive bitrate streaming information, such as specification, encryption type, and container format.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaAdaptiveDynamicStreamingInfo m_adaptiveDynamicStreamingInfo;
                    bool m_adaptiveDynamicStreamingInfoHasBeenSet;

                    /**
                     * WeChat Mini Program audit information.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaMiniProgramReviewInfo m_miniProgramReviewInfo;
                    bool m_miniProgramReviewInfoHasBeenSet;

                    /**
                     * Subtitle information
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    MediaSubtitleInfo m_subtitleInfo;
                    bool m_subtitleInfoHasBeenSet;

                    /**
                     * Unique ID of media file.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Moderation details.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    FileReviewInfo m_reviewInfo;
                    bool m_reviewInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAINFO_H_
