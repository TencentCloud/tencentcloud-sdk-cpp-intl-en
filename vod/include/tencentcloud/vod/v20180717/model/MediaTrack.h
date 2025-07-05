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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIATRACK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIATRACK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaTrackItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Track information
                */
                class MediaTrack : public AbstractModel
                {
                public:
                    MediaTrack();
                    ~MediaTrack() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Track type. Valid values:
<ul>
<li>Video: video track, which is composed of the following items: <ul><li>VideoTrackItem</li><li>MediaTransitionItem</li> <li>EmptyTrackItem</li></ul> </li>
<li>Audio: audio track, which is composed of the following items: <ul><li>AudioTrackItem</li><li>MediaTransitionItem</li><li>EmptyTrackItem</li></ul></li>
<li>Sticker: sticker track, which is composed of the following items: <ul><li> StickerTrackItem</li><li>EmptyTrackItem</li></ul></li>	
</ul>
                     * @return Type Track type. Valid values:
<ul>
<li>Video: video track, which is composed of the following items: <ul><li>VideoTrackItem</li><li>MediaTransitionItem</li> <li>EmptyTrackItem</li></ul> </li>
<li>Audio: audio track, which is composed of the following items: <ul><li>AudioTrackItem</li><li>MediaTransitionItem</li><li>EmptyTrackItem</li></ul></li>
<li>Sticker: sticker track, which is composed of the following items: <ul><li> StickerTrackItem</li><li>EmptyTrackItem</li></ul></li>	
</ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Track type. Valid values:
<ul>
<li>Video: video track, which is composed of the following items: <ul><li>VideoTrackItem</li><li>MediaTransitionItem</li> <li>EmptyTrackItem</li></ul> </li>
<li>Audio: audio track, which is composed of the following items: <ul><li>AudioTrackItem</li><li>MediaTransitionItem</li><li>EmptyTrackItem</li></ul></li>
<li>Sticker: sticker track, which is composed of the following items: <ul><li> StickerTrackItem</li><li>EmptyTrackItem</li></ul></li>	
</ul>
                     * @param _type Track type. Valid values:
<ul>
<li>Video: video track, which is composed of the following items: <ul><li>VideoTrackItem</li><li>MediaTransitionItem</li> <li>EmptyTrackItem</li></ul> </li>
<li>Audio: audio track, which is composed of the following items: <ul><li>AudioTrackItem</li><li>MediaTransitionItem</li><li>EmptyTrackItem</li></ul></li>
<li>Sticker: sticker track, which is composed of the following items: <ul><li> StickerTrackItem</li><li>EmptyTrackItem</li></ul></li>	
</ul>
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
                     * 获取List of media segments on track.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TrackItems List of media segments on track.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<MediaTrackItem> GetTrackItems() const;

                    /**
                     * 设置List of media segments on track.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _trackItems List of media segments on track.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTrackItems(const std::vector<MediaTrackItem>& _trackItems);

                    /**
                     * 判断参数 TrackItems 是否已赋值
                     * @return TrackItems 是否已赋值
                     * 
                     */
                    bool TrackItemsHasBeenSet() const;

                private:

                    /**
                     * Track type. Valid values:
<ul>
<li>Video: video track, which is composed of the following items: <ul><li>VideoTrackItem</li><li>MediaTransitionItem</li> <li>EmptyTrackItem</li></ul> </li>
<li>Audio: audio track, which is composed of the following items: <ul><li>AudioTrackItem</li><li>MediaTransitionItem</li><li>EmptyTrackItem</li></ul></li>
<li>Sticker: sticker track, which is composed of the following items: <ul><li> StickerTrackItem</li><li>EmptyTrackItem</li></ul></li>	
</ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * List of media segments on track.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MediaTrackItem> m_trackItems;
                    bool m_trackItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIATRACK_H_
