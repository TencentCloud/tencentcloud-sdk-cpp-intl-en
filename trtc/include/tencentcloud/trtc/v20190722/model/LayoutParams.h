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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_LAYOUTPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_LAYOUTPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/SmallVideoLayoutParams.h>
#include <tencentcloud/trtc/v20190722/model/PresetLayoutConfig.h>
#include <tencentcloud/trtc/v20190722/model/WaterMarkParams.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * MCU On-Cloud MixTranscoding layout parameters
                */
                class LayoutParams : public AbstractModel
                {
                public:
                    LayoutParams();
                    ~LayoutParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取On-cloud stream mix layout template ID. 0: floating template (default value); 1: grid template; 2: screen sharing template; 3: picture-in-picture template; 4: custom template.
                     * @return Template On-cloud stream mix layout template ID. 0: floating template (default value); 1: grid template; 2: screen sharing template; 3: picture-in-picture template; 4: custom template.
                     */
                    uint64_t GetTemplate() const;

                    /**
                     * 设置On-cloud stream mix layout template ID. 0: floating template (default value); 1: grid template; 2: screen sharing template; 3: picture-in-picture template; 4: custom template.
                     * @param Template On-cloud stream mix layout template ID. 0: floating template (default value); 1: grid template; 2: screen sharing template; 3: picture-in-picture template; 4: custom template.
                     */
                    void SetTemplate(const uint64_t& _template);

                    /**
                     * 判断参数 Template 是否已赋值
                     * @return Template 是否已赋值
                     */
                    bool TemplateHasBeenSet() const;

                    /**
                     * 获取ID of the user in the big image, which takes effect in a screen sharing, floating, or picture-in-picture template.
                     * @return MainVideoUserId ID of the user in the big image, which takes effect in a screen sharing, floating, or picture-in-picture template.
                     */
                    std::string GetMainVideoUserId() const;

                    /**
                     * 设置ID of the user in the big image, which takes effect in a screen sharing, floating, or picture-in-picture template.
                     * @param MainVideoUserId ID of the user in the big image, which takes effect in a screen sharing, floating, or picture-in-picture template.
                     */
                    void SetMainVideoUserId(const std::string& _mainVideoUserId);

                    /**
                     * 判断参数 MainVideoUserId 是否已赋值
                     * @return MainVideoUserId 是否已赋值
                     */
                    bool MainVideoUserIdHasBeenSet() const;

                    /**
                     * 获取Stream type of the big image, which takes effect in a screen sharing, floating, or picture-in-picture template. 0: camera; 1: screen sharing. If a web user's stream is displayed in the big image on the left, enter 0 for this parameter.
                     * @return MainVideoStreamType Stream type of the big image, which takes effect in a screen sharing, floating, or picture-in-picture template. 0: camera; 1: screen sharing. If a web user's stream is displayed in the big image on the left, enter 0 for this parameter.
                     */
                    uint64_t GetMainVideoStreamType() const;

                    /**
                     * 设置Stream type of the big image, which takes effect in a screen sharing, floating, or picture-in-picture template. 0: camera; 1: screen sharing. If a web user's stream is displayed in the big image on the left, enter 0 for this parameter.
                     * @param MainVideoStreamType Stream type of the big image, which takes effect in a screen sharing, floating, or picture-in-picture template. 0: camera; 1: screen sharing. If a web user's stream is displayed in the big image on the left, enter 0 for this parameter.
                     */
                    void SetMainVideoStreamType(const uint64_t& _mainVideoStreamType);

                    /**
                     * 判断参数 MainVideoStreamType 是否已赋值
                     * @return MainVideoStreamType 是否已赋值
                     */
                    bool MainVideoStreamTypeHasBeenSet() const;

                    /**
                     * 获取Layout parameter of the small image, which takes effect in a picture-in-picture template.
                     * @return SmallVideoLayoutParams Layout parameter of the small image, which takes effect in a picture-in-picture template.
                     */
                    SmallVideoLayoutParams GetSmallVideoLayoutParams() const;

                    /**
                     * 设置Layout parameter of the small image, which takes effect in a picture-in-picture template.
                     * @param SmallVideoLayoutParams Layout parameter of the small image, which takes effect in a picture-in-picture template.
                     */
                    void SetSmallVideoLayoutParams(const SmallVideoLayoutParams& _smallVideoLayoutParams);

                    /**
                     * 判断参数 SmallVideoLayoutParams 是否已赋值
                     * @return SmallVideoLayoutParams 是否已赋值
                     */
                    bool SmallVideoLayoutParamsHasBeenSet() const;

                    /**
                     * 获取You can set the layout parameter as 1 or 0 in the screen sharing template. 1: big image on the right and small images on the left, 0: big image on the left and small images on the right. The default value is 0. 
                     * @return MainVideoRightAlign You can set the layout parameter as 1 or 0 in the screen sharing template. 1: big image on the right and small images on the left, 0: big image on the left and small images on the right. The default value is 0. 
                     */
                    uint64_t GetMainVideoRightAlign() const;

                    /**
                     * 设置You can set the layout parameter as 1 or 0 in the screen sharing template. 1: big image on the right and small images on the left, 0: big image on the left and small images on the right. The default value is 0. 
                     * @param MainVideoRightAlign You can set the layout parameter as 1 or 0 in the screen sharing template. 1: big image on the right and small images on the left, 0: big image on the left and small images on the right. The default value is 0. 
                     */
                    void SetMainVideoRightAlign(const uint64_t& _mainVideoRightAlign);

                    /**
                     * 判断参数 MainVideoRightAlign 是否已赋值
                     * @return MainVideoRightAlign 是否已赋值
                     */
                    bool MainVideoRightAlignHasBeenSet() const;

                    /**
                     * 获取A user list, which takes effect for floating, grid, or screen sharing templates. When the user list has been set, the stream mix output for users in this user list will include both audio and video; the stream mix output for users not in the list will only include audio. Up to 16 users can be set.
                     * @return MixVideoUids A user list, which takes effect for floating, grid, or screen sharing templates. When the user list has been set, the stream mix output for users in this user list will include both audio and video; the stream mix output for users not in the list will only include audio. Up to 16 users can be set.
                     */
                    std::vector<std::string> GetMixVideoUids() const;

                    /**
                     * 设置A user list, which takes effect for floating, grid, or screen sharing templates. When the user list has been set, the stream mix output for users in this user list will include both audio and video; the stream mix output for users not in the list will only include audio. Up to 16 users can be set.
                     * @param MixVideoUids A user list, which takes effect for floating, grid, or screen sharing templates. When the user list has been set, the stream mix output for users in this user list will include both audio and video; the stream mix output for users not in the list will only include audio. Up to 16 users can be set.
                     */
                    void SetMixVideoUids(const std::vector<std::string>& _mixVideoUids);

                    /**
                     * 判断参数 MixVideoUids 是否已赋值
                     * @return MixVideoUids 是否已赋值
                     */
                    bool MixVideoUidsHasBeenSet() const;

                    /**
                     * 获取Valid in custom template, used to specify the video image position of a user in mixed streams.
                     * @return PresetLayoutConfig Valid in custom template, used to specify the video image position of a user in mixed streams.
                     */
                    std::vector<PresetLayoutConfig> GetPresetLayoutConfig() const;

                    /**
                     * 设置Valid in custom template, used to specify the video image position of a user in mixed streams.
                     * @param PresetLayoutConfig Valid in custom template, used to specify the video image position of a user in mixed streams.
                     */
                    void SetPresetLayoutConfig(const std::vector<PresetLayoutConfig>& _presetLayoutConfig);

                    /**
                     * 判断参数 PresetLayoutConfig 是否已赋值
                     * @return PresetLayoutConfig 是否已赋值
                     */
                    bool PresetLayoutConfigHasBeenSet() const;

                    /**
                     * 获取Valid in custom templates. 1: the placeholding feature is enabled; 0 (default): the feature is disabled. When the feature is enabled, but a user for whom a position is reserved is not sending video data, the position will show the corresponding placeholder image.
                     * @return PlaceHolderMode Valid in custom templates. 1: the placeholding feature is enabled; 0 (default): the feature is disabled. When the feature is enabled, but a user for whom a position is reserved is not sending video data, the position will show the corresponding placeholder image.
                     */
                    uint64_t GetPlaceHolderMode() const;

                    /**
                     * 设置Valid in custom templates. 1: the placeholding feature is enabled; 0 (default): the feature is disabled. When the feature is enabled, but a user for whom a position is reserved is not sending video data, the position will show the corresponding placeholder image.
                     * @param PlaceHolderMode Valid in custom templates. 1: the placeholding feature is enabled; 0 (default): the feature is disabled. When the feature is enabled, but a user for whom a position is reserved is not sending video data, the position will show the corresponding placeholder image.
                     */
                    void SetPlaceHolderMode(const uint64_t& _placeHolderMode);

                    /**
                     * 判断参数 PlaceHolderMode 是否已赋值
                     * @return PlaceHolderMode 是否已赋值
                     */
                    bool PlaceHolderModeHasBeenSet() const;

                    /**
                     * 获取Whether an audio-only stream occupies an image spot, which takes effect in a floating, grid, or screen sharing template. Valid values: 0 (default): when a floating or grid template is used, users sending audio only occupy image spots; when a screen sharing template is used, users (except the user whose screen is shared) sending audio only do not occupy image spots; 1: users sending audio only occupy image spots; 2: users sending audio only do not occupy image spots.
                     * @return PureAudioHoldPlaceMode Whether an audio-only stream occupies an image spot, which takes effect in a floating, grid, or screen sharing template. Valid values: 0 (default): when a floating or grid template is used, users sending audio only occupy image spots; when a screen sharing template is used, users (except the user whose screen is shared) sending audio only do not occupy image spots; 1: users sending audio only occupy image spots; 2: users sending audio only do not occupy image spots.
                     */
                    uint64_t GetPureAudioHoldPlaceMode() const;

                    /**
                     * 设置Whether an audio-only stream occupies an image spot, which takes effect in a floating, grid, or screen sharing template. Valid values: 0 (default): when a floating or grid template is used, users sending audio only occupy image spots; when a screen sharing template is used, users (except the user whose screen is shared) sending audio only do not occupy image spots; 1: users sending audio only occupy image spots; 2: users sending audio only do not occupy image spots.
                     * @param PureAudioHoldPlaceMode Whether an audio-only stream occupies an image spot, which takes effect in a floating, grid, or screen sharing template. Valid values: 0 (default): when a floating or grid template is used, users sending audio only occupy image spots; when a screen sharing template is used, users (except the user whose screen is shared) sending audio only do not occupy image spots; 1: users sending audio only occupy image spots; 2: users sending audio only do not occupy image spots.
                     */
                    void SetPureAudioHoldPlaceMode(const uint64_t& _pureAudioHoldPlaceMode);

                    /**
                     * 判断参数 PureAudioHoldPlaceMode 是否已赋值
                     * @return PureAudioHoldPlaceMode 是否已赋值
                     */
                    bool PureAudioHoldPlaceModeHasBeenSet() const;

                    /**
                     * 获取Watermark parameters
                     * @return WaterMarkParams Watermark parameters
                     */
                    WaterMarkParams GetWaterMarkParams() const;

                    /**
                     * 设置Watermark parameters
                     * @param WaterMarkParams Watermark parameters
                     */
                    void SetWaterMarkParams(const WaterMarkParams& _waterMarkParams);

                    /**
                     * 判断参数 WaterMarkParams 是否已赋值
                     * @return WaterMarkParams 是否已赋值
                     */
                    bool WaterMarkParamsHasBeenSet() const;

                private:

                    /**
                     * On-cloud stream mix layout template ID. 0: floating template (default value); 1: grid template; 2: screen sharing template; 3: picture-in-picture template; 4: custom template.
                     */
                    uint64_t m_template;
                    bool m_templateHasBeenSet;

                    /**
                     * ID of the user in the big image, which takes effect in a screen sharing, floating, or picture-in-picture template.
                     */
                    std::string m_mainVideoUserId;
                    bool m_mainVideoUserIdHasBeenSet;

                    /**
                     * Stream type of the big image, which takes effect in a screen sharing, floating, or picture-in-picture template. 0: camera; 1: screen sharing. If a web user's stream is displayed in the big image on the left, enter 0 for this parameter.
                     */
                    uint64_t m_mainVideoStreamType;
                    bool m_mainVideoStreamTypeHasBeenSet;

                    /**
                     * Layout parameter of the small image, which takes effect in a picture-in-picture template.
                     */
                    SmallVideoLayoutParams m_smallVideoLayoutParams;
                    bool m_smallVideoLayoutParamsHasBeenSet;

                    /**
                     * You can set the layout parameter as 1 or 0 in the screen sharing template. 1: big image on the right and small images on the left, 0: big image on the left and small images on the right. The default value is 0. 
                     */
                    uint64_t m_mainVideoRightAlign;
                    bool m_mainVideoRightAlignHasBeenSet;

                    /**
                     * A user list, which takes effect for floating, grid, or screen sharing templates. When the user list has been set, the stream mix output for users in this user list will include both audio and video; the stream mix output for users not in the list will only include audio. Up to 16 users can be set.
                     */
                    std::vector<std::string> m_mixVideoUids;
                    bool m_mixVideoUidsHasBeenSet;

                    /**
                     * Valid in custom template, used to specify the video image position of a user in mixed streams.
                     */
                    std::vector<PresetLayoutConfig> m_presetLayoutConfig;
                    bool m_presetLayoutConfigHasBeenSet;

                    /**
                     * Valid in custom templates. 1: the placeholding feature is enabled; 0 (default): the feature is disabled. When the feature is enabled, but a user for whom a position is reserved is not sending video data, the position will show the corresponding placeholder image.
                     */
                    uint64_t m_placeHolderMode;
                    bool m_placeHolderModeHasBeenSet;

                    /**
                     * Whether an audio-only stream occupies an image spot, which takes effect in a floating, grid, or screen sharing template. Valid values: 0 (default): when a floating or grid template is used, users sending audio only occupy image spots; when a screen sharing template is used, users (except the user whose screen is shared) sending audio only do not occupy image spots; 1: users sending audio only occupy image spots; 2: users sending audio only do not occupy image spots.
                     */
                    uint64_t m_pureAudioHoldPlaceMode;
                    bool m_pureAudioHoldPlaceModeHasBeenSet;

                    /**
                     * Watermark parameters
                     */
                    WaterMarkParams m_waterMarkParams;
                    bool m_waterMarkParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_LAYOUTPARAMS_H_
