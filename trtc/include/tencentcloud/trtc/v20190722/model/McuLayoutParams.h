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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MCULAYOUTPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MCULAYOUTPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/McuLayout.h>
#include <tencentcloud/trtc/v20190722/model/MaxVideoUser.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * The layout parameters.
                */
                class McuLayoutParams : public AbstractModel
                {
                public:
                    McuLayoutParams();
                    ~McuLayoutParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The layout mode. Valid values: 1 (floating), 2 (screen sharing), 3 (grid), 4 (custom). Floating, screen sharing, and grid are dynamic layouts. Custom layouts are static layouts.
                     * @return MixLayoutMode The layout mode. Valid values: 1 (floating), 2 (screen sharing), 3 (grid), 4 (custom). Floating, screen sharing, and grid are dynamic layouts. Custom layouts are static layouts.
                     */
                    uint64_t GetMixLayoutMode() const;

                    /**
                     * 设置The layout mode. Valid values: 1 (floating), 2 (screen sharing), 3 (grid), 4 (custom). Floating, screen sharing, and grid are dynamic layouts. Custom layouts are static layouts.
                     * @param MixLayoutMode The layout mode. Valid values: 1 (floating), 2 (screen sharing), 3 (grid), 4 (custom). Floating, screen sharing, and grid are dynamic layouts. Custom layouts are static layouts.
                     */
                    void SetMixLayoutMode(const uint64_t& _mixLayoutMode);

                    /**
                     * 判断参数 MixLayoutMode 是否已赋值
                     * @return MixLayoutMode 是否已赋值
                     */
                    bool MixLayoutModeHasBeenSet() const;

                    /**
                     * 获取Whether to display users who publish only audio. 0: No; 1: Yes. This parameter is valid only if a dynamic layout is used. If you do not pass this parameter, 0 will be used.
                     * @return PureAudioHoldPlaceMode Whether to display users who publish only audio. 0: No; 1: Yes. This parameter is valid only if a dynamic layout is used. If you do not pass this parameter, 0 will be used.
                     */
                    uint64_t GetPureAudioHoldPlaceMode() const;

                    /**
                     * 设置Whether to display users who publish only audio. 0: No; 1: Yes. This parameter is valid only if a dynamic layout is used. If you do not pass this parameter, 0 will be used.
                     * @param PureAudioHoldPlaceMode Whether to display users who publish only audio. 0: No; 1: Yes. This parameter is valid only if a dynamic layout is used. If you do not pass this parameter, 0 will be used.
                     */
                    void SetPureAudioHoldPlaceMode(const uint64_t& _pureAudioHoldPlaceMode);

                    /**
                     * 判断参数 PureAudioHoldPlaceMode 是否已赋值
                     * @return PureAudioHoldPlaceMode 是否已赋值
                     */
                    bool PureAudioHoldPlaceModeHasBeenSet() const;

                    /**
                     * 获取The details of a custom layout.
                     * @return MixLayoutList The details of a custom layout.
                     */
                    std::vector<McuLayout> GetMixLayoutList() const;

                    /**
                     * 设置The details of a custom layout.
                     * @param MixLayoutList The details of a custom layout.
                     */
                    void SetMixLayoutList(const std::vector<McuLayout>& _mixLayoutList);

                    /**
                     * 判断参数 MixLayoutList 是否已赋值
                     * @return MixLayoutList 是否已赋值
                     */
                    bool MixLayoutListHasBeenSet() const;

                    /**
                     * 获取The information of the large video in screen sharing or floating layout mode.
                     * @return MaxVideoUser The information of the large video in screen sharing or floating layout mode.
                     */
                    MaxVideoUser GetMaxVideoUser() const;

                    /**
                     * 设置The information of the large video in screen sharing or floating layout mode.
                     * @param MaxVideoUser The information of the large video in screen sharing or floating layout mode.
                     */
                    void SetMaxVideoUser(const MaxVideoUser& _maxVideoUser);

                    /**
                     * 判断参数 MaxVideoUser 是否已赋值
                     * @return MaxVideoUser 是否已赋值
                     */
                    bool MaxVideoUserHasBeenSet() const;

                    /**
                     * 获取The image fill mode. This parameter is valid if the layout mode is screen sharing, floating, or grid. `0`: The image will be cropped. `1`: The image will be scaled. `2`: The image will be scaled and there may be black bars.
                     * @return RenderMode The image fill mode. This parameter is valid if the layout mode is screen sharing, floating, or grid. `0`: The image will be cropped. `1`: The image will be scaled. `2`: The image will be scaled and there may be black bars.
                     */
                    uint64_t GetRenderMode() const;

                    /**
                     * 设置The image fill mode. This parameter is valid if the layout mode is screen sharing, floating, or grid. `0`: The image will be cropped. `1`: The image will be scaled. `2`: The image will be scaled and there may be black bars.
                     * @param RenderMode The image fill mode. This parameter is valid if the layout mode is screen sharing, floating, or grid. `0`: The image will be cropped. `1`: The image will be scaled. `2`: The image will be scaled and there may be black bars.
                     */
                    void SetRenderMode(const uint64_t& _renderMode);

                    /**
                     * 判断参数 RenderMode 是否已赋值
                     * @return RenderMode 是否已赋值
                     */
                    bool RenderModeHasBeenSet() const;

                private:

                    /**
                     * The layout mode. Valid values: 1 (floating), 2 (screen sharing), 3 (grid), 4 (custom). Floating, screen sharing, and grid are dynamic layouts. Custom layouts are static layouts.
                     */
                    uint64_t m_mixLayoutMode;
                    bool m_mixLayoutModeHasBeenSet;

                    /**
                     * Whether to display users who publish only audio. 0: No; 1: Yes. This parameter is valid only if a dynamic layout is used. If you do not pass this parameter, 0 will be used.
                     */
                    uint64_t m_pureAudioHoldPlaceMode;
                    bool m_pureAudioHoldPlaceModeHasBeenSet;

                    /**
                     * The details of a custom layout.
                     */
                    std::vector<McuLayout> m_mixLayoutList;
                    bool m_mixLayoutListHasBeenSet;

                    /**
                     * The information of the large video in screen sharing or floating layout mode.
                     */
                    MaxVideoUser m_maxVideoUser;
                    bool m_maxVideoUserHasBeenSet;

                    /**
                     * The image fill mode. This parameter is valid if the layout mode is screen sharing, floating, or grid. `0`: The image will be cropped. `1`: The image will be scaled. `2`: The image will be scaled and there may be black bars.
                     */
                    uint64_t m_renderMode;
                    bool m_renderModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MCULAYOUTPARAMS_H_
