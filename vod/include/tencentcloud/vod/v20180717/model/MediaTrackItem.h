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
                * Segment information of the media track.
                */
                class MediaTrackItem : public AbstractModel
                {
                public:
                    MediaTrackItem();
                    ~MediaTrackItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Fragment type. Valid values:
<li>Video: video clip.</li>
<li>Audio: audio clip.</li>
<li>Sticker: texture segment.</li>
<li>Transition: transition.</li>
<li>Empty: empty segment.</li>
                     * @return Type Fragment type. Valid values:
<li>Video: video clip.</li>
<li>Audio: audio clip.</li>
<li>Sticker: texture segment.</li>
<li>Transition: transition.</li>
<li>Empty: empty segment.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Fragment type. Valid values:
<li>Video: video clip.</li>
<li>Audio: audio clip.</li>
<li>Sticker: texture segment.</li>
<li>Transition: transition.</li>
<li>Empty: empty segment.</li>
                     * @param _type Fragment type. Valid values:
<li>Video: video clip.</li>
<li>Audio: audio clip.</li>
<li>Sticker: texture segment.</li>
<li>Transition: transition.</li>
<li>Empty: empty segment.</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Video clip. Valid when Type is Video.
                     * @return VideoItem Video clip. Valid when Type is Video.
                     * 
                     */
                    VideoTrackItem GetVideoItem() const;

                    /**
                     * 设置Video clip. Valid when Type is Video.
                     * @param _videoItem Video clip. Valid when Type is Video.
                     * 
                     */
                    void SetVideoItem(const VideoTrackItem& _videoItem);

                    /**
                     * 判断参数 VideoItem 是否已赋值
                     * @return VideoItem 是否已赋值
                     * 
                     */
                    bool VideoItemHasBeenSet() const;

                    /**
                     * 获取Audio clip. Valid when Type = Audio.
                     * @return AudioItem Audio clip. Valid when Type = Audio.
                     * 
                     */
                    AudioTrackItem GetAudioItem() const;

                    /**
                     * 设置Audio clip. Valid when Type = Audio.
                     * @param _audioItem Audio clip. Valid when Type = Audio.
                     * 
                     */
                    void SetAudioItem(const AudioTrackItem& _audioItem);

                    /**
                     * 判断参数 AudioItem 是否已赋值
                     * @return AudioItem 是否已赋值
                     * 
                     */
                    bool AudioItemHasBeenSet() const;

                    /**
                     * 获取Texture segment. Valid when Type is Sticker.
                     * @return StickerItem Texture segment. Valid when Type is Sticker.
                     * 
                     */
                    StickerTrackItem GetStickerItem() const;

                    /**
                     * 设置Texture segment. Valid when Type is Sticker.
                     * @param _stickerItem Texture segment. Valid when Type is Sticker.
                     * 
                     */
                    void SetStickerItem(const StickerTrackItem& _stickerItem);

                    /**
                     * 判断参数 StickerItem 是否已赋值
                     * @return StickerItem 是否已赋值
                     * 
                     */
                    bool StickerItemHasBeenSet() const;

                    /**
                     * 获取Transition. Valid when Type is Transition.
                     * @return TransitionItem Transition. Valid when Type is Transition.
                     * 
                     */
                    MediaTransitionItem GetTransitionItem() const;

                    /**
                     * 设置Transition. Valid when Type is Transition.
                     * @param _transitionItem Transition. Valid when Type is Transition.
                     * 
                     */
                    void SetTransitionItem(const MediaTransitionItem& _transitionItem);

                    /**
                     * 判断参数 TransitionItem 是否已赋值
                     * @return TransitionItem 是否已赋值
                     * 
                     */
                    bool TransitionItemHasBeenSet() const;

                    /**
                     * 获取Empty segment. Valid when Type is Empty. Empty segments are used as placeholders on the timeline.<li>If a period of silence is required between two audio clips, you can use EmptyTrackItem as a placeholder.</li>
<li>Use EmptyTrackItem as a placeholder to locate an item.</li>
                     * @return EmptyItem Empty segment. Valid when Type is Empty. Empty segments are used as placeholders on the timeline.<li>If a period of silence is required between two audio clips, you can use EmptyTrackItem as a placeholder.</li>
<li>Use EmptyTrackItem as a placeholder to locate an item.</li>
                     * 
                     */
                    EmptyTrackItem GetEmptyItem() const;

                    /**
                     * 设置Empty segment. Valid when Type is Empty. Empty segments are used as placeholders on the timeline.<li>If a period of silence is required between two audio clips, you can use EmptyTrackItem as a placeholder.</li>
<li>Use EmptyTrackItem as a placeholder to locate an item.</li>
                     * @param _emptyItem Empty segment. Valid when Type is Empty. Empty segments are used as placeholders on the timeline.<li>If a period of silence is required between two audio clips, you can use EmptyTrackItem as a placeholder.</li>
<li>Use EmptyTrackItem as a placeholder to locate an item.</li>
                     * 
                     */
                    void SetEmptyItem(const EmptyTrackItem& _emptyItem);

                    /**
                     * 判断参数 EmptyItem 是否已赋值
                     * @return EmptyItem 是否已赋值
                     * 
                     */
                    bool EmptyItemHasBeenSet() const;

                private:

                    /**
                     * Fragment type. Valid values:
<li>Video: video clip.</li>
<li>Audio: audio clip.</li>
<li>Sticker: texture segment.</li>
<li>Transition: transition.</li>
<li>Empty: empty segment.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Video clip. Valid when Type is Video.
                     */
                    VideoTrackItem m_videoItem;
                    bool m_videoItemHasBeenSet;

                    /**
                     * Audio clip. Valid when Type = Audio.
                     */
                    AudioTrackItem m_audioItem;
                    bool m_audioItemHasBeenSet;

                    /**
                     * Texture segment. Valid when Type is Sticker.
                     */
                    StickerTrackItem m_stickerItem;
                    bool m_stickerItemHasBeenSet;

                    /**
                     * Transition. Valid when Type is Transition.
                     */
                    MediaTransitionItem m_transitionItem;
                    bool m_transitionItemHasBeenSet;

                    /**
                     * Empty segment. Valid when Type is Empty. Empty segments are used as placeholders on the timeline.<li>If a period of silence is required between two audio clips, you can use EmptyTrackItem as a placeholder.</li>
<li>Use EmptyTrackItem as a placeholder to locate an item.</li>
                     */
                    EmptyTrackItem m_emptyItem;
                    bool m_emptyItemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIATRACKITEM_H_
