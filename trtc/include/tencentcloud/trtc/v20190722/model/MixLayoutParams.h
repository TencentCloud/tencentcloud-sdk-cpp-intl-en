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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MIXLAYOUTPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MIXLAYOUTPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/MixLayout.h>
#include <tencentcloud/trtc/v20190722/model/WaterMark.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * The layout parameters for mixed-stream recording.
                */
                class MixLayoutParams : public AbstractModel
                {
                public:
                    MixLayoutParams();
                    ~MixLayoutParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Layout mode.
1: floating layout.
2: screen sharing layout.
3: nine-grid layout.
4: custom layout.

Floating layout: by default, the video footage of the first host who enters the room (or a specified host) fills the entire screen. other hosts' video images are arranged horizontally from the bottom-left corner in the room entry sequence, displayed as small pictures floating above the large screen. when the number of screens is less than or equal to 17, each line has 4 (4 x 4 arrangement). when the number of screens exceeds 17, the small pictures are rearranged with 5 per line (5 x 5 arrangement). a maximum of 25 screens are supported. if the user only sends audio, it still occupies a screen position.

Screen sharing layout: specifies a large screen position on the left side for one host (if not specified, the large screen position uses the background color). other hosts are arranged vertically on the right side from top to bottom. when the number of screens is less than 17, each column on the right supports up to 8 hosts, occupying a maximum of two columns. when the number of screens exceeds 17, hosts beyond the 17th are arranged horizontally starting from the bottom-left corner. a maximum of 25 screens is supported. if a host only sends audio, it still occupies a screen position.

Nine-Grid layout: automatically adjust the size of each frame based on the number of hosts. each host's frame size is the same, supporting up to 25 frames.

Custom layout: customize the layout of each host's video as needed in MixLayoutList.
                     * @return MixLayoutMode Layout mode.
1: floating layout.
2: screen sharing layout.
3: nine-grid layout.
4: custom layout.

Floating layout: by default, the video footage of the first host who enters the room (or a specified host) fills the entire screen. other hosts' video images are arranged horizontally from the bottom-left corner in the room entry sequence, displayed as small pictures floating above the large screen. when the number of screens is less than or equal to 17, each line has 4 (4 x 4 arrangement). when the number of screens exceeds 17, the small pictures are rearranged with 5 per line (5 x 5 arrangement). a maximum of 25 screens are supported. if the user only sends audio, it still occupies a screen position.

Screen sharing layout: specifies a large screen position on the left side for one host (if not specified, the large screen position uses the background color). other hosts are arranged vertically on the right side from top to bottom. when the number of screens is less than 17, each column on the right supports up to 8 hosts, occupying a maximum of two columns. when the number of screens exceeds 17, hosts beyond the 17th are arranged horizontally starting from the bottom-left corner. a maximum of 25 screens is supported. if a host only sends audio, it still occupies a screen position.

Nine-Grid layout: automatically adjust the size of each frame based on the number of hosts. each host's frame size is the same, supporting up to 25 frames.

Custom layout: customize the layout of each host's video as needed in MixLayoutList.
                     * 
                     */
                    uint64_t GetMixLayoutMode() const;

                    /**
                     * 设置Layout mode.
1: floating layout.
2: screen sharing layout.
3: nine-grid layout.
4: custom layout.

Floating layout: by default, the video footage of the first host who enters the room (or a specified host) fills the entire screen. other hosts' video images are arranged horizontally from the bottom-left corner in the room entry sequence, displayed as small pictures floating above the large screen. when the number of screens is less than or equal to 17, each line has 4 (4 x 4 arrangement). when the number of screens exceeds 17, the small pictures are rearranged with 5 per line (5 x 5 arrangement). a maximum of 25 screens are supported. if the user only sends audio, it still occupies a screen position.

Screen sharing layout: specifies a large screen position on the left side for one host (if not specified, the large screen position uses the background color). other hosts are arranged vertically on the right side from top to bottom. when the number of screens is less than 17, each column on the right supports up to 8 hosts, occupying a maximum of two columns. when the number of screens exceeds 17, hosts beyond the 17th are arranged horizontally starting from the bottom-left corner. a maximum of 25 screens is supported. if a host only sends audio, it still occupies a screen position.

Nine-Grid layout: automatically adjust the size of each frame based on the number of hosts. each host's frame size is the same, supporting up to 25 frames.

Custom layout: customize the layout of each host's video as needed in MixLayoutList.
                     * @param _mixLayoutMode Layout mode.
1: floating layout.
2: screen sharing layout.
3: nine-grid layout.
4: custom layout.

Floating layout: by default, the video footage of the first host who enters the room (or a specified host) fills the entire screen. other hosts' video images are arranged horizontally from the bottom-left corner in the room entry sequence, displayed as small pictures floating above the large screen. when the number of screens is less than or equal to 17, each line has 4 (4 x 4 arrangement). when the number of screens exceeds 17, the small pictures are rearranged with 5 per line (5 x 5 arrangement). a maximum of 25 screens are supported. if the user only sends audio, it still occupies a screen position.

Screen sharing layout: specifies a large screen position on the left side for one host (if not specified, the large screen position uses the background color). other hosts are arranged vertically on the right side from top to bottom. when the number of screens is less than 17, each column on the right supports up to 8 hosts, occupying a maximum of two columns. when the number of screens exceeds 17, hosts beyond the 17th are arranged horizontally starting from the bottom-left corner. a maximum of 25 screens is supported. if a host only sends audio, it still occupies a screen position.

Nine-Grid layout: automatically adjust the size of each frame based on the number of hosts. each host's frame size is the same, supporting up to 25 frames.

Custom layout: customize the layout of each host's video as needed in MixLayoutList.
                     * 
                     */
                    void SetMixLayoutMode(const uint64_t& _mixLayoutMode);

                    /**
                     * 判断参数 MixLayoutMode 是否已赋值
                     * @return MixLayoutMode 是否已赋值
                     * 
                     */
                    bool MixLayoutModeHasBeenSet() const;

                    /**
                     * 获取The custom layout details. This parameter is valid if `MixLayoutMode` is set to `4`. Up to 25 videos can be displayed.
                     * @return MixLayoutList The custom layout details. This parameter is valid if `MixLayoutMode` is set to `4`. Up to 25 videos can be displayed.
                     * 
                     */
                    std::vector<MixLayout> GetMixLayoutList() const;

                    /**
                     * 设置The custom layout details. This parameter is valid if `MixLayoutMode` is set to `4`. Up to 25 videos can be displayed.
                     * @param _mixLayoutList The custom layout details. This parameter is valid if `MixLayoutMode` is set to `4`. Up to 25 videos can be displayed.
                     * 
                     */
                    void SetMixLayoutList(const std::vector<MixLayout>& _mixLayoutList);

                    /**
                     * 判断参数 MixLayoutList 是否已赋值
                     * @return MixLayoutList 是否已赋值
                     * 
                     */
                    bool MixLayoutListHasBeenSet() const;

                    /**
                     * 获取The background color, which is a hexadecimal value (starting with "#", followed by the color value) converted from an 8-bit RGB value. For example, the RGB value of orange is `R:255 G:165 B:0`, and its hexadecimal value is `#FFA500`. The default color is black.
                     * @return BackGroundColor The background color, which is a hexadecimal value (starting with "#", followed by the color value) converted from an 8-bit RGB value. For example, the RGB value of orange is `R:255 G:165 B:0`, and its hexadecimal value is `#FFA500`. The default color is black.
                     * 
                     */
                    std::string GetBackGroundColor() const;

                    /**
                     * 设置The background color, which is a hexadecimal value (starting with "#", followed by the color value) converted from an 8-bit RGB value. For example, the RGB value of orange is `R:255 G:165 B:0`, and its hexadecimal value is `#FFA500`. The default color is black.
                     * @param _backGroundColor The background color, which is a hexadecimal value (starting with "#", followed by the color value) converted from an 8-bit RGB value. For example, the RGB value of orange is `R:255 G:165 B:0`, and its hexadecimal value is `#FFA500`. The default color is black.
                     * 
                     */
                    void SetBackGroundColor(const std::string& _backGroundColor);

                    /**
                     * 判断参数 BackGroundColor 是否已赋值
                     * @return BackGroundColor 是否已赋值
                     * 
                     */
                    bool BackGroundColorHasBeenSet() const;

                    /**
                     * 获取The user whose video is displayed in the big window. This parameter is valid if `MixLayoutMode` is set to `1` (floating) or `2` (screen sharing). If it is left empty, the first anchor entering the room is displayed in the big window in the floating mode and the canvas background is displayed in the screen sharing mode.
                     * @return MaxResolutionUserId The user whose video is displayed in the big window. This parameter is valid if `MixLayoutMode` is set to `1` (floating) or `2` (screen sharing). If it is left empty, the first anchor entering the room is displayed in the big window in the floating mode and the canvas background is displayed in the screen sharing mode.
                     * 
                     */
                    std::string GetMaxResolutionUserId() const;

                    /**
                     * 设置The user whose video is displayed in the big window. This parameter is valid if `MixLayoutMode` is set to `1` (floating) or `2` (screen sharing). If it is left empty, the first anchor entering the room is displayed in the big window in the floating mode and the canvas background is displayed in the screen sharing mode.
                     * @param _maxResolutionUserId The user whose video is displayed in the big window. This parameter is valid if `MixLayoutMode` is set to `1` (floating) or `2` (screen sharing). If it is left empty, the first anchor entering the room is displayed in the big window in the floating mode and the canvas background is displayed in the screen sharing mode.
                     * 
                     */
                    void SetMaxResolutionUserId(const std::string& _maxResolutionUserId);

                    /**
                     * 判断参数 MaxResolutionUserId 是否已赋值
                     * @return MaxResolutionUserId 是否已赋值
                     * 
                     */
                    bool MaxResolutionUserIdHasBeenSet() const;

                    /**
                     * 获取The stream type.
0: Primary stream (default)
1: Substream (screen sharing stream)
This parameter specifies the type of the stream displayed in the big window. If it appears in `MixLayoutList`, it indicates the type of the stream of a specified user.
                     * @return MediaId The stream type.
0: Primary stream (default)
1: Substream (screen sharing stream)
This parameter specifies the type of the stream displayed in the big window. If it appears in `MixLayoutList`, it indicates the type of the stream of a specified user.
                     * 
                     */
                    uint64_t GetMediaId() const;

                    /**
                     * 设置The stream type.
0: Primary stream (default)
1: Substream (screen sharing stream)
This parameter specifies the type of the stream displayed in the big window. If it appears in `MixLayoutList`, it indicates the type of the stream of a specified user.
                     * @param _mediaId The stream type.
0: Primary stream (default)
1: Substream (screen sharing stream)
This parameter specifies the type of the stream displayed in the big window. If it appears in `MixLayoutList`, it indicates the type of the stream of a specified user.
                     * 
                     */
                    void SetMediaId(const uint64_t& _mediaId);

                    /**
                     * 判断参数 MediaId 是否已赋值
                     * @return MediaId 是否已赋值
                     * 
                     */
                    bool MediaIdHasBeenSet() const;

                    /**
                     * 获取The image url supports only jpg, png, and jpeg. the image resolution is limited to no more than 2K, and the image size limit is no more than 5MB. note that the url must carry the format extension, and only specific strings are supported in the url, including a-z, a-z, 0-9, '-', '.', '_', '~', ':', '/', '?', '#', '[', ']', '@', '!', '&', '(', ')', '*', '+', ',', '%', and '='.
                     * @return BackgroundImageUrl The image url supports only jpg, png, and jpeg. the image resolution is limited to no more than 2K, and the image size limit is no more than 5MB. note that the url must carry the format extension, and only specific strings are supported in the url, including a-z, a-z, 0-9, '-', '.', '_', '~', ':', '/', '?', '#', '[', ']', '@', '!', '&', '(', ')', '*', '+', ',', '%', and '='.
                     * 
                     */
                    std::string GetBackgroundImageUrl() const;

                    /**
                     * 设置The image url supports only jpg, png, and jpeg. the image resolution is limited to no more than 2K, and the image size limit is no more than 5MB. note that the url must carry the format extension, and only specific strings are supported in the url, including a-z, a-z, 0-9, '-', '.', '_', '~', ':', '/', '?', '#', '[', ']', '@', '!', '&', '(', ')', '*', '+', ',', '%', and '='.
                     * @param _backgroundImageUrl The image url supports only jpg, png, and jpeg. the image resolution is limited to no more than 2K, and the image size limit is no more than 5MB. note that the url must carry the format extension, and only specific strings are supported in the url, including a-z, a-z, 0-9, '-', '.', '_', '~', ':', '/', '?', '#', '[', ']', '@', '!', '&', '(', ')', '*', '+', ',', '%', and '='.
                     * 
                     */
                    void SetBackgroundImageUrl(const std::string& _backgroundImageUrl);

                    /**
                     * 判断参数 BackgroundImageUrl 是否已赋值
                     * @return BackgroundImageUrl 是否已赋值
                     * 
                     */
                    bool BackgroundImageUrlHasBeenSet() const;

                    /**
                     * 获取Set to 1 to enable the placeholder image function, and 0 to disable it. default is 0. when enabled, the corresponding placeholder image can be displayed in the preset position if the user has no upload audio and video.
                     * @return PlaceHolderMode Set to 1 to enable the placeholder image function, and 0 to disable it. default is 0. when enabled, the corresponding placeholder image can be displayed in the preset position if the user has no upload audio and video.
                     * 
                     */
                    uint64_t GetPlaceHolderMode() const;

                    /**
                     * 设置Set to 1 to enable the placeholder image function, and 0 to disable it. default is 0. when enabled, the corresponding placeholder image can be displayed in the preset position if the user has no upload audio and video.
                     * @param _placeHolderMode Set to 1 to enable the placeholder image function, and 0 to disable it. default is 0. when enabled, the corresponding placeholder image can be displayed in the preset position if the user has no upload audio and video.
                     * 
                     */
                    void SetPlaceHolderMode(const uint64_t& _placeHolderMode);

                    /**
                     * 判断参数 PlaceHolderMode 是否已赋值
                     * @return PlaceHolderMode 是否已赋值
                     * 
                     */
                    bool PlaceHolderModeHasBeenSet() const;

                    /**
                     * 获取Handling solution when the background image aspect ratio is not the same, consistent with the RenderMode defined in MixLayoutList.
                     * @return BackgroundImageRenderMode Handling solution when the background image aspect ratio is not the same, consistent with the RenderMode defined in MixLayoutList.
                     * 
                     */
                    uint64_t GetBackgroundImageRenderMode() const;

                    /**
                     * 设置Handling solution when the background image aspect ratio is not the same, consistent with the RenderMode defined in MixLayoutList.
                     * @param _backgroundImageRenderMode Handling solution when the background image aspect ratio is not the same, consistent with the RenderMode defined in MixLayoutList.
                     * 
                     */
                    void SetBackgroundImageRenderMode(const uint64_t& _backgroundImageRenderMode);

                    /**
                     * 判断参数 BackgroundImageRenderMode 是否已赋值
                     * @return BackgroundImageRenderMode 是否已赋值
                     * 
                     */
                    bool BackgroundImageRenderModeHasBeenSet() const;

                    /**
                     * 获取Sub-Picture placeholder image url supports only jpg, png, jpeg. resolution limitation is no more than 2K. image size limit is no more than 5MB. note that the url must carry format extension and supports only specific string literals within the range of a-z a-z 0-9 '-', '.', '_', '~', ':', '/', '?', '#', '[', ']' '@', '!', '&', '(', ')', '*', '+', ',', '%', '='.
                     * @return DefaultSubBackgroundImage Sub-Picture placeholder image url supports only jpg, png, jpeg. resolution limitation is no more than 2K. image size limit is no more than 5MB. note that the url must carry format extension and supports only specific string literals within the range of a-z a-z 0-9 '-', '.', '_', '~', ':', '/', '?', '#', '[', ']' '@', '!', '&', '(', ')', '*', '+', ',', '%', '='.
                     * 
                     */
                    std::string GetDefaultSubBackgroundImage() const;

                    /**
                     * 设置Sub-Picture placeholder image url supports only jpg, png, jpeg. resolution limitation is no more than 2K. image size limit is no more than 5MB. note that the url must carry format extension and supports only specific string literals within the range of a-z a-z 0-9 '-', '.', '_', '~', ':', '/', '?', '#', '[', ']' '@', '!', '&', '(', ')', '*', '+', ',', '%', '='.
                     * @param _defaultSubBackgroundImage Sub-Picture placeholder image url supports only jpg, png, jpeg. resolution limitation is no more than 2K. image size limit is no more than 5MB. note that the url must carry format extension and supports only specific string literals within the range of a-z a-z 0-9 '-', '.', '_', '~', ':', '/', '?', '#', '[', ']' '@', '!', '&', '(', ')', '*', '+', ',', '%', '='.
                     * 
                     */
                    void SetDefaultSubBackgroundImage(const std::string& _defaultSubBackgroundImage);

                    /**
                     * 判断参数 DefaultSubBackgroundImage 是否已赋值
                     * @return DefaultSubBackgroundImage 是否已赋值
                     * 
                     */
                    bool DefaultSubBackgroundImageHasBeenSet() const;

                    /**
                     * 获取The watermark layout. Up to 25 watermarks are supported.
                     * @return WaterMarkList The watermark layout. Up to 25 watermarks are supported.
                     * 
                     */
                    std::vector<WaterMark> GetWaterMarkList() const;

                    /**
                     * 设置The watermark layout. Up to 25 watermarks are supported.
                     * @param _waterMarkList The watermark layout. Up to 25 watermarks are supported.
                     * 
                     */
                    void SetWaterMarkList(const std::vector<WaterMark>& _waterMarkList);

                    /**
                     * 判断参数 WaterMarkList 是否已赋值
                     * @return WaterMarkList 是否已赋值
                     * 
                     */
                    bool WaterMarkListHasBeenSet() const;

                    /**
                     * 获取When the aspect ratio of the background image does not match in the template layout, the handling solution is applied. the custom layout is disabled and aligns with the RenderMode defined in MixLayoutList.
                     * @return RenderMode When the aspect ratio of the background image does not match in the template layout, the handling solution is applied. the custom layout is disabled and aligns with the RenderMode defined in MixLayoutList.
                     * 
                     */
                    uint64_t GetRenderMode() const;

                    /**
                     * 设置When the aspect ratio of the background image does not match in the template layout, the handling solution is applied. the custom layout is disabled and aligns with the RenderMode defined in MixLayoutList.
                     * @param _renderMode When the aspect ratio of the background image does not match in the template layout, the handling solution is applied. the custom layout is disabled and aligns with the RenderMode defined in MixLayoutList.
                     * 
                     */
                    void SetRenderMode(const uint64_t& _renderMode);

                    /**
                     * 判断参数 RenderMode 是否已赋值
                     * @return RenderMode 是否已赋值
                     * 
                     */
                    bool RenderModeHasBeenSet() const;

                    /**
                     * 获取This parameter is valid only if the screen sharing layout is used. If you set it to `1`, the large video window will appear on the right and the small window on the left. The default value is `0`.
                     * @return MaxResolutionUserAlign This parameter is valid only if the screen sharing layout is used. If you set it to `1`, the large video window will appear on the right and the small window on the left. The default value is `0`.
                     * 
                     */
                    uint64_t GetMaxResolutionUserAlign() const;

                    /**
                     * 设置This parameter is valid only if the screen sharing layout is used. If you set it to `1`, the large video window will appear on the right and the small window on the left. The default value is `0`.
                     * @param _maxResolutionUserAlign This parameter is valid only if the screen sharing layout is used. If you set it to `1`, the large video window will appear on the right and the small window on the left. The default value is `0`.
                     * 
                     */
                    void SetMaxResolutionUserAlign(const uint64_t& _maxResolutionUserAlign);

                    /**
                     * 判断参数 MaxResolutionUserAlign 是否已赋值
                     * @return MaxResolutionUserAlign 是否已赋值
                     * 
                     */
                    bool MaxResolutionUserAlignHasBeenSet() const;

                    /**
                     * 获取Controls whether audio users inside the room occupy the stream mixing layout. this takes effect only in mixed stream recording and template layout. true: represents that audio users do not occupy placeholders. false: represents that audio users occupy placeholders (false by default).
                     * @return PureAudioDisableLayout Controls whether audio users inside the room occupy the stream mixing layout. this takes effect only in mixed stream recording and template layout. true: represents that audio users do not occupy placeholders. false: represents that audio users occupy placeholders (false by default).
                     * 
                     */
                    bool GetPureAudioDisableLayout() const;

                    /**
                     * 设置Controls whether audio users inside the room occupy the stream mixing layout. this takes effect only in mixed stream recording and template layout. true: represents that audio users do not occupy placeholders. false: represents that audio users occupy placeholders (false by default).
                     * @param _pureAudioDisableLayout Controls whether audio users inside the room occupy the stream mixing layout. this takes effect only in mixed stream recording and template layout. true: represents that audio users do not occupy placeholders. false: represents that audio users occupy placeholders (false by default).
                     * 
                     */
                    void SetPureAudioDisableLayout(const bool& _pureAudioDisableLayout);

                    /**
                     * 判断参数 PureAudioDisableLayout 是否已赋值
                     * @return PureAudioDisableLayout 是否已赋值
                     * 
                     */
                    bool PureAudioDisableLayoutHasBeenSet() const;

                private:

                    /**
                     * Layout mode.
1: floating layout.
2: screen sharing layout.
3: nine-grid layout.
4: custom layout.

Floating layout: by default, the video footage of the first host who enters the room (or a specified host) fills the entire screen. other hosts' video images are arranged horizontally from the bottom-left corner in the room entry sequence, displayed as small pictures floating above the large screen. when the number of screens is less than or equal to 17, each line has 4 (4 x 4 arrangement). when the number of screens exceeds 17, the small pictures are rearranged with 5 per line (5 x 5 arrangement). a maximum of 25 screens are supported. if the user only sends audio, it still occupies a screen position.

Screen sharing layout: specifies a large screen position on the left side for one host (if not specified, the large screen position uses the background color). other hosts are arranged vertically on the right side from top to bottom. when the number of screens is less than 17, each column on the right supports up to 8 hosts, occupying a maximum of two columns. when the number of screens exceeds 17, hosts beyond the 17th are arranged horizontally starting from the bottom-left corner. a maximum of 25 screens is supported. if a host only sends audio, it still occupies a screen position.

Nine-Grid layout: automatically adjust the size of each frame based on the number of hosts. each host's frame size is the same, supporting up to 25 frames.

Custom layout: customize the layout of each host's video as needed in MixLayoutList.
                     */
                    uint64_t m_mixLayoutMode;
                    bool m_mixLayoutModeHasBeenSet;

                    /**
                     * The custom layout details. This parameter is valid if `MixLayoutMode` is set to `4`. Up to 25 videos can be displayed.
                     */
                    std::vector<MixLayout> m_mixLayoutList;
                    bool m_mixLayoutListHasBeenSet;

                    /**
                     * The background color, which is a hexadecimal value (starting with "#", followed by the color value) converted from an 8-bit RGB value. For example, the RGB value of orange is `R:255 G:165 B:0`, and its hexadecimal value is `#FFA500`. The default color is black.
                     */
                    std::string m_backGroundColor;
                    bool m_backGroundColorHasBeenSet;

                    /**
                     * The user whose video is displayed in the big window. This parameter is valid if `MixLayoutMode` is set to `1` (floating) or `2` (screen sharing). If it is left empty, the first anchor entering the room is displayed in the big window in the floating mode and the canvas background is displayed in the screen sharing mode.
                     */
                    std::string m_maxResolutionUserId;
                    bool m_maxResolutionUserIdHasBeenSet;

                    /**
                     * The stream type.
0: Primary stream (default)
1: Substream (screen sharing stream)
This parameter specifies the type of the stream displayed in the big window. If it appears in `MixLayoutList`, it indicates the type of the stream of a specified user.
                     */
                    uint64_t m_mediaId;
                    bool m_mediaIdHasBeenSet;

                    /**
                     * The image url supports only jpg, png, and jpeg. the image resolution is limited to no more than 2K, and the image size limit is no more than 5MB. note that the url must carry the format extension, and only specific strings are supported in the url, including a-z, a-z, 0-9, '-', '.', '_', '~', ':', '/', '?', '#', '[', ']', '@', '!', '&', '(', ')', '*', '+', ',', '%', and '='.
                     */
                    std::string m_backgroundImageUrl;
                    bool m_backgroundImageUrlHasBeenSet;

                    /**
                     * Set to 1 to enable the placeholder image function, and 0 to disable it. default is 0. when enabled, the corresponding placeholder image can be displayed in the preset position if the user has no upload audio and video.
                     */
                    uint64_t m_placeHolderMode;
                    bool m_placeHolderModeHasBeenSet;

                    /**
                     * Handling solution when the background image aspect ratio is not the same, consistent with the RenderMode defined in MixLayoutList.
                     */
                    uint64_t m_backgroundImageRenderMode;
                    bool m_backgroundImageRenderModeHasBeenSet;

                    /**
                     * Sub-Picture placeholder image url supports only jpg, png, jpeg. resolution limitation is no more than 2K. image size limit is no more than 5MB. note that the url must carry format extension and supports only specific string literals within the range of a-z a-z 0-9 '-', '.', '_', '~', ':', '/', '?', '#', '[', ']' '@', '!', '&', '(', ')', '*', '+', ',', '%', '='.
                     */
                    std::string m_defaultSubBackgroundImage;
                    bool m_defaultSubBackgroundImageHasBeenSet;

                    /**
                     * The watermark layout. Up to 25 watermarks are supported.
                     */
                    std::vector<WaterMark> m_waterMarkList;
                    bool m_waterMarkListHasBeenSet;

                    /**
                     * When the aspect ratio of the background image does not match in the template layout, the handling solution is applied. the custom layout is disabled and aligns with the RenderMode defined in MixLayoutList.
                     */
                    uint64_t m_renderMode;
                    bool m_renderModeHasBeenSet;

                    /**
                     * This parameter is valid only if the screen sharing layout is used. If you set it to `1`, the large video window will appear on the right and the small window on the left. The default value is `0`.
                     */
                    uint64_t m_maxResolutionUserAlign;
                    bool m_maxResolutionUserAlignHasBeenSet;

                    /**
                     * Controls whether audio users inside the room occupy the stream mixing layout. this takes effect only in mixed stream recording and template layout. true: represents that audio users do not occupy placeholders. false: represents that audio users occupy placeholders (false by default).
                     */
                    bool m_pureAudioDisableLayout;
                    bool m_pureAudioDisableLayoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MIXLAYOUTPARAMS_H_
