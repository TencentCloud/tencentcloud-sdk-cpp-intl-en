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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIATRACKITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIATRACKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/VideoTrackItem.h>
#include <tencentcloud/vod/v20180717/model/AudioTrackItem.h>
#include <tencentcloud/vod/v20180717/model/StickerTrackItem.h>
#include <tencentcloud/vod/v20180717/model/MediaTransitionItem.h>
#include <tencentcloud/vod/v20180717/model/EmptyTrackItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Segment information of media track
                */
                class MediaTrackItem : public AbstractModel
                {
                public:
                    MediaTrackItem();
                    ~MediaTrackItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Segment type. Valid values:
<li>Video: video segment.</li>
<li>Audio: audio segment.</li>
<li>Sticker: sticker segment.</li>
<li>Transition: transition.</li>
<li>Empty: empty segment.</li>
                     * @return Type Segment type. Valid values:
<li>Video: video segment.</li>
<li>Audio: audio segment.</li>
<li>Sticker: sticker segment.</li>
<li>Transition: transition.</li>
<li>Empty: empty segment.</li>
                     */
                    std::string GetType() const;

                    /**
                     * 设置Segment type. Valid values:
<li>Video: video segment.</li>
<li>Audio: audio segment.</li>
<li>Sticker: sticker segment.</li>
<li>Transition: transition.</li>
<li>Empty: empty segment.</li>
                     * @param Type Segment type. Valid values:
<li>Video: video segment.</li>
<li>Audio: audio segment.</li>
<li>Sticker: sticker segment.</li>
<li>Transition: transition.</li>
<li>Empty: empty segment.</li>
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Video segment, which is valid if `Type` is `Video`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return VideoItem Video segment, which is valid if `Type` is `Video`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    VideoTrackItem GetVideoItem() const;

                    /**
                     * 设置Video segment, which is valid if `Type` is `Video`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param VideoItem Video segment, which is valid if `Type` is `Video`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetVideoItem(const VideoTrackItem& _videoItem);

                    /**
                     * 判断参数 VideoItem 是否已赋值
                     * @return VideoItem 是否已赋值
                     */
                    bool VideoItemHasBeenSet() const;

                    /**
                     * 获取Audio segment, which is valid if `Type` is `Audio`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AudioItem Audio segment, which is valid if `Type` is `Audio`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    AudioTrackItem GetAudioItem() const;

                    /**
                     * 设置Audio segment, which is valid if `Type` is `Audio`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AudioItem Audio segment, which is valid if `Type` is `Audio`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAudioItem(const AudioTrackItem& _audioItem);

                    /**
                     * 判断参数 AudioItem 是否已赋值
                     * @return AudioItem 是否已赋值
                     */
                    bool AudioItemHasBeenSet() const;

                    /**
                     * 获取Sticker segment, which is valid if `Type` is `Sticker`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return StickerItem Sticker segment, which is valid if `Type` is `Sticker`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    StickerTrackItem GetStickerItem() const;

                    /**
                     * 设置Sticker segment, which is valid if `Type` is `Sticker`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param StickerItem Sticker segment, which is valid if `Type` is `Sticker`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetStickerItem(const StickerTrackItem& _stickerItem);

                    /**
                     * 判断参数 StickerItem 是否已赋值
                     * @return StickerItem 是否已赋值
                     */
                    bool StickerItemHasBeenSet() const;

                    /**
                     * 获取Transition, which is valid if `Type` is `Transition`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TransitionItem Transition, which is valid if `Type` is `Transition`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaTransitionItem GetTransitionItem() const;

                    /**
                     * 设置Transition, which is valid if `Type` is `Transition`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TransitionItem Transition, which is valid if `Type` is `Transition`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTransitionItem(const MediaTransitionItem& _transitionItem);

                    /**
                     * 判断参数 TransitionItem 是否已赋值
                     * @return TransitionItem 是否已赋值
                     */
                    bool TransitionItemHasBeenSet() const;

                    /**
                     * 获取Empty segment, which is valid if `Type` is `Empty`. It is used as placeholder on time axis. <li>If you want a period of silence between two audio segments, you can use `EmptyTrackItem` to hold the place.</li>
<li>Use `EmptyTrackItem` as a placeholder to locate an item.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return EmptyItem Empty segment, which is valid if `Type` is `Empty`. It is used as placeholder on time axis. <li>If you want a period of silence between two audio segments, you can use `EmptyTrackItem` to hold the place.</li>
<li>Use `EmptyTrackItem` as a placeholder to locate an item.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    EmptyTrackItem GetEmptyItem() const;

                    /**
                     * 设置Empty segment, which is valid if `Type` is `Empty`. It is used as placeholder on time axis. <li>If you want a period of silence between two audio segments, you can use `EmptyTrackItem` to hold the place.</li>
<li>Use `EmptyTrackItem` as a placeholder to locate an item.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param EmptyItem Empty segment, which is valid if `Type` is `Empty`. It is used as placeholder on time axis. <li>If you want a period of silence between two audio segments, you can use `EmptyTrackItem` to hold the place.</li>
<li>Use `EmptyTrackItem` as a placeholder to locate an item.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEmptyItem(const EmptyTrackItem& _emptyItem);

                    /**
                     * 判断参数 EmptyItem 是否已赋值
                     * @return EmptyItem 是否已赋值
                     */
                    bool EmptyItemHasBeenSet() const;

                private:

                    /**
                     * Segment type. Valid values:
<li>Video: video segment.</li>
<li>Audio: audio segment.</li>
<li>Sticker: sticker segment.</li>
<li>Transition: transition.</li>
<li>Empty: empty segment.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Video segment, which is valid if `Type` is `Video`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    VideoTrackItem m_videoItem;
                    bool m_videoItemHasBeenSet;

                    /**
                     * Audio segment, which is valid if `Type` is `Audio`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    AudioTrackItem m_audioItem;
                    bool m_audioItemHasBeenSet;

                    /**
                     * Sticker segment, which is valid if `Type` is `Sticker`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    StickerTrackItem m_stickerItem;
                    bool m_stickerItemHasBeenSet;

                    /**
                     * Transition, which is valid if `Type` is `Transition`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaTransitionItem m_transitionItem;
                    bool m_transitionItemHasBeenSet;

                    /**
                     * Empty segment, which is valid if `Type` is `Empty`. It is used as placeholder on time axis. <li>If you want a period of silence between two audio segments, you can use `EmptyTrackItem` to hold the place.</li>
<li>Use `EmptyTrackItem` as a placeholder to locate an item.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    EmptyTrackItem m_emptyItem;
                    bool m_emptyItemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIATRACKITEM_H_
