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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSSUBTITLEBOARDCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSSUBTITLEBOARDCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Subtitle suppression module background settings for MPS
                */
                class MPSSubtitleBoardConfig : public AbstractModel
                {
                public:
                    MPSSubtitleBoardConfig();
                    ~MPSSubtitleBoardConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Subtitle suppression module background configuration switch, 0 for off, 1 for on, default 0</p>
                     * @return SubtitleBoardConfigSwitch <p>Subtitle suppression module background configuration switch, 0 for off, 1 for on, default 0</p>
                     * 
                     */
                    int64_t GetSubtitleBoardConfigSwitch() const;

                    /**
                     * 设置<p>Subtitle suppression module background configuration switch, 0 for off, 1 for on, default 0</p>
                     * @param _subtitleBoardConfigSwitch <p>Subtitle suppression module background configuration switch, 0 for off, 1 for on, default 0</p>
                     * 
                     */
                    void SetSubtitleBoardConfigSwitch(const int64_t& _subtitleBoardConfigSwitch);

                    /**
                     * 判断参数 SubtitleBoardConfigSwitch 是否已赋值
                     * @return SubtitleBoardConfigSwitch 是否已赋值
                     * 
                     */
                    bool SubtitleBoardConfigSwitchHasBeenSet() const;

                    /**
                     * 获取<p>The X-coordinate position of the subtitle background base plate. Supports pixel and percentage formats: - Pixel: Npx, where N ranges from [-4096, 4096]. - Percentage: N%, where N ranges from [-100, 100]; for example, 10% means the X-coordinate of the subtitle background base plate equals 10% of the source video width. Default value: 0px. Note: The origin of the coordinate axes is located at the bottom of the central axis of the source video, and the reference point of the subtitle base plate is at the bottom of its central axis. See the following diagram: <img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></p>
                     * @return BoardX <p>The X-coordinate position of the subtitle background base plate. Supports pixel and percentage formats: - Pixel: Npx, where N ranges from [-4096, 4096]. - Percentage: N%, where N ranges from [-100, 100]; for example, 10% means the X-coordinate of the subtitle background base plate equals 10% of the source video width. Default value: 0px. Note: The origin of the coordinate axes is located at the bottom of the central axis of the source video, and the reference point of the subtitle base plate is at the bottom of its central axis. See the following diagram: <img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></p>
                     * 
                     */
                    int64_t GetBoardX() const;

                    /**
                     * 设置<p>The X-coordinate position of the subtitle background base plate. Supports pixel and percentage formats: - Pixel: Npx, where N ranges from [-4096, 4096]. - Percentage: N%, where N ranges from [-100, 100]; for example, 10% means the X-coordinate of the subtitle background base plate equals 10% of the source video width. Default value: 0px. Note: The origin of the coordinate axes is located at the bottom of the central axis of the source video, and the reference point of the subtitle base plate is at the bottom of its central axis. See the following diagram: <img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></p>
                     * @param _boardX <p>The X-coordinate position of the subtitle background base plate. Supports pixel and percentage formats: - Pixel: Npx, where N ranges from [-4096, 4096]. - Percentage: N%, where N ranges from [-100, 100]; for example, 10% means the X-coordinate of the subtitle background base plate equals 10% of the source video width. Default value: 0px. Note: The origin of the coordinate axes is located at the bottom of the central axis of the source video, and the reference point of the subtitle base plate is at the bottom of its central axis. See the following diagram: <img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></p>
                     * 
                     */
                    void SetBoardX(const int64_t& _boardX);

                    /**
                     * 判断参数 BoardX 是否已赋值
                     * @return BoardX 是否已赋值
                     * 
                     */
                    bool BoardXHasBeenSet() const;

                    /**
                     * 获取<p>BoardX unit, 0 pixel, 1 percentage, default is 0, pixel</p>
                     * @return BoardXUnit <p>BoardX unit, 0 pixel, 1 percentage, default is 0, pixel</p>
                     * 
                     */
                    int64_t GetBoardXUnit() const;

                    /**
                     * 设置<p>BoardX unit, 0 pixel, 1 percentage, default is 0, pixel</p>
                     * @param _boardXUnit <p>BoardX unit, 0 pixel, 1 percentage, default is 0, pixel</p>
                     * 
                     */
                    void SetBoardXUnit(const int64_t& _boardXUnit);

                    /**
                     * 判断参数 BoardXUnit 是否已赋值
                     * @return BoardXUnit 是否已赋值
                     * 
                     */
                    bool BoardXUnitHasBeenSet() const;

                    /**
                     * 获取<p>Y-coordinate position of the subtitle background base plate. Supports pixel and percentage formats: - Pixel: Npx, where N ranges from [0,4096]. - Percentage: N%, where N ranges from [0,100]. For example, 10% means the subtitle background base plate Y-coordinate = 10% * source video height. If not specified, the subtitle background base plate is disabled. Note: The coordinate axis origin is located at the bottom of the central axis of the source video, and the reference point of the subtitle background base plate is at the bottom of its central axis. Refer to the figure below: <img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></p>
                     * @return BoardY <p>Y-coordinate position of the subtitle background base plate. Supports pixel and percentage formats: - Pixel: Npx, where N ranges from [0,4096]. - Percentage: N%, where N ranges from [0,100]. For example, 10% means the subtitle background base plate Y-coordinate = 10% * source video height. If not specified, the subtitle background base plate is disabled. Note: The coordinate axis origin is located at the bottom of the central axis of the source video, and the reference point of the subtitle background base plate is at the bottom of its central axis. Refer to the figure below: <img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></p>
                     * 
                     */
                    int64_t GetBoardY() const;

                    /**
                     * 设置<p>Y-coordinate position of the subtitle background base plate. Supports pixel and percentage formats: - Pixel: Npx, where N ranges from [0,4096]. - Percentage: N%, where N ranges from [0,100]. For example, 10% means the subtitle background base plate Y-coordinate = 10% * source video height. If not specified, the subtitle background base plate is disabled. Note: The coordinate axis origin is located at the bottom of the central axis of the source video, and the reference point of the subtitle background base plate is at the bottom of its central axis. Refer to the figure below: <img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></p>
                     * @param _boardY <p>Y-coordinate position of the subtitle background base plate. Supports pixel and percentage formats: - Pixel: Npx, where N ranges from [0,4096]. - Percentage: N%, where N ranges from [0,100]. For example, 10% means the subtitle background base plate Y-coordinate = 10% * source video height. If not specified, the subtitle background base plate is disabled. Note: The coordinate axis origin is located at the bottom of the central axis of the source video, and the reference point of the subtitle background base plate is at the bottom of its central axis. Refer to the figure below: <img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></p>
                     * 
                     */
                    void SetBoardY(const int64_t& _boardY);

                    /**
                     * 判断参数 BoardY 是否已赋值
                     * @return BoardY 是否已赋值
                     * 
                     */
                    bool BoardYHasBeenSet() const;

                    /**
                     * 获取<p>BoardY measurement unit, 0 pixel, 1 percentage, defaults to 0, pixel</p>
                     * @return BoardYUnit <p>BoardY measurement unit, 0 pixel, 1 percentage, defaults to 0, pixel</p>
                     * 
                     */
                    int64_t GetBoardYUnit() const;

                    /**
                     * 设置<p>BoardY measurement unit, 0 pixel, 1 percentage, defaults to 0, pixel</p>
                     * @param _boardYUnit <p>BoardY measurement unit, 0 pixel, 1 percentage, defaults to 0, pixel</p>
                     * 
                     */
                    void SetBoardYUnit(const int64_t& _boardYUnit);

                    /**
                     * 判断参数 BoardYUnit 是否已赋值
                     * @return BoardYUnit 是否已赋值
                     * 
                     */
                    bool BoardYUnitHasBeenSet() const;

                    /**
                     * 获取<p>Width of the base plate, a positive integer. - When representing pixels, value ranges from 0 to 4096. - When representing a percentage, value ranges from 0 to 100. If background is enabled and this parameter is not specified, the default width is 90% of the source video width.</p>
                     * @return BoardWidth <p>Width of the base plate, a positive integer. - When representing pixels, value ranges from 0 to 4096. - When representing a percentage, value ranges from 0 to 100. If background is enabled and this parameter is not specified, the default width is 90% of the source video width.</p>
                     * 
                     */
                    int64_t GetBoardWidth() const;

                    /**
                     * 设置<p>Width of the base plate, a positive integer. - When representing pixels, value ranges from 0 to 4096. - When representing a percentage, value ranges from 0 to 100. If background is enabled and this parameter is not specified, the default width is 90% of the source video width.</p>
                     * @param _boardWidth <p>Width of the base plate, a positive integer. - When representing pixels, value ranges from 0 to 4096. - When representing a percentage, value ranges from 0 to 100. If background is enabled and this parameter is not specified, the default width is 90% of the source video width.</p>
                     * 
                     */
                    void SetBoardWidth(const int64_t& _boardWidth);

                    /**
                     * 判断参数 BoardWidth 是否已赋值
                     * @return BoardWidth 是否已赋值
                     * 
                     */
                    bool BoardWidthHasBeenSet() const;

                    /**
                     * 获取<p>Background width measurement unit. 0: pixel, 1: percentage. Default is 0 (pixel).</p>
                     * @return BoardWidthUnit <p>Background width measurement unit. 0: pixel, 1: percentage. Default is 0 (pixel).</p>
                     * 
                     */
                    int64_t GetBoardWidthUnit() const;

                    /**
                     * 设置<p>Background width measurement unit. 0: pixel, 1: percentage. Default is 0 (pixel).</p>
                     * @param _boardWidthUnit <p>Background width measurement unit. 0: pixel, 1: percentage. Default is 0 (pixel).</p>
                     * 
                     */
                    void SetBoardWidthUnit(const int64_t& _boardWidthUnit);

                    /**
                     * 判断参数 BoardWidthUnit 是否已赋值
                     * @return BoardWidthUnit 是否已赋值
                     * 
                     */
                    bool BoardWidthUnitHasBeenSet() const;

                    /**
                     * 获取<p>Height of the base plate, a positive integer. - When representing pixels, the value ranges from 0 to 4096. - When representing a percentage, the value ranges from 0 to 100. If base plate is enabled and this parameter is not specified, the default height is 15% of the source video height.</p>
                     * @return BoardHeight <p>Height of the base plate, a positive integer. - When representing pixels, the value ranges from 0 to 4096. - When representing a percentage, the value ranges from 0 to 100. If base plate is enabled and this parameter is not specified, the default height is 15% of the source video height.</p>
                     * 
                     */
                    int64_t GetBoardHeight() const;

                    /**
                     * 设置<p>Height of the base plate, a positive integer. - When representing pixels, the value ranges from 0 to 4096. - When representing a percentage, the value ranges from 0 to 100. If base plate is enabled and this parameter is not specified, the default height is 15% of the source video height.</p>
                     * @param _boardHeight <p>Height of the base plate, a positive integer. - When representing pixels, the value ranges from 0 to 4096. - When representing a percentage, the value ranges from 0 to 100. If base plate is enabled and this parameter is not specified, the default height is 15% of the source video height.</p>
                     * 
                     */
                    void SetBoardHeight(const int64_t& _boardHeight);

                    /**
                     * 判断参数 BoardHeight 是否已赋值
                     * @return BoardHeight 是否已赋值
                     * 
                     */
                    bool BoardHeightHasBeenSet() const;

                    /**
                     * 获取<p>Base plate height unit, 0 pixel, 1 percentage, defaults to 0, pixel</p>
                     * @return BoardHeightUnit <p>Base plate height unit, 0 pixel, 1 percentage, defaults to 0, pixel</p>
                     * 
                     */
                    int64_t GetBoardHeightUnit() const;

                    /**
                     * 设置<p>Base plate height unit, 0 pixel, 1 percentage, defaults to 0, pixel</p>
                     * @param _boardHeightUnit <p>Base plate height unit, 0 pixel, 1 percentage, defaults to 0, pixel</p>
                     * 
                     */
                    void SetBoardHeightUnit(const int64_t& _boardHeightUnit);

                    /**
                     * 判断参数 BoardHeightUnit 是否已赋值
                     * @return BoardHeightUnit 是否已赋值
                     * 
                     */
                    bool BoardHeightUnitHasBeenSet() const;

                    /**
                     * 获取<p>Base plate color. Format: 0xRRGGBB. Default value: 0x000000 (black).</p>
                     * @return BoardColor <p>Base plate color. Format: 0xRRGGBB. Default value: 0x000000 (black).</p>
                     * 
                     */
                    std::string GetBoardColor() const;

                    /**
                     * 设置<p>Base plate color. Format: 0xRRGGBB. Default value: 0x000000 (black).</p>
                     * @param _boardColor <p>Base plate color. Format: 0xRRGGBB. Default value: 0x000000 (black).</p>
                     * 
                     */
                    void SetBoardColor(const std::string& _boardColor);

                    /**
                     * 判断参数 BoardColor 是否已赋值
                     * @return BoardColor 是否已赋值
                     * 
                     */
                    bool BoardColorHasBeenSet() const;

                    /**
                     * 获取<p>Subtitle background transparency. Value range: [0, 1] <li>0: completely transparent</li> <li>1: completely opaque</li> Default value: 0.8.</p>
                     * @return BoardAlpha <p>Subtitle background transparency. Value range: [0, 1] <li>0: completely transparent</li> <li>1: completely opaque</li> Default value: 0.8.</p>
                     * 
                     */
                    double GetBoardAlpha() const;

                    /**
                     * 设置<p>Subtitle background transparency. Value range: [0, 1] <li>0: completely transparent</li> <li>1: completely opaque</li> Default value: 0.8.</p>
                     * @param _boardAlpha <p>Subtitle background transparency. Value range: [0, 1] <li>0: completely transparent</li> <li>1: completely opaque</li> Default value: 0.8.</p>
                     * 
                     */
                    void SetBoardAlpha(const double& _boardAlpha);

                    /**
                     * 判断参数 BoardAlpha 是否已赋值
                     * @return BoardAlpha 是否已赋值
                     * 
                     */
                    bool BoardAlphaHasBeenSet() const;

                private:

                    /**
                     * <p>Subtitle suppression module background configuration switch, 0 for off, 1 for on, default 0</p>
                     */
                    int64_t m_subtitleBoardConfigSwitch;
                    bool m_subtitleBoardConfigSwitchHasBeenSet;

                    /**
                     * <p>The X-coordinate position of the subtitle background base plate. Supports pixel and percentage formats: - Pixel: Npx, where N ranges from [-4096, 4096]. - Percentage: N%, where N ranges from [-100, 100]; for example, 10% means the X-coordinate of the subtitle background base plate equals 10% of the source video width. Default value: 0px. Note: The origin of the coordinate axes is located at the bottom of the central axis of the source video, and the reference point of the subtitle base plate is at the bottom of its central axis. See the following diagram: <img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></p>
                     */
                    int64_t m_boardX;
                    bool m_boardXHasBeenSet;

                    /**
                     * <p>BoardX unit, 0 pixel, 1 percentage, default is 0, pixel</p>
                     */
                    int64_t m_boardXUnit;
                    bool m_boardXUnitHasBeenSet;

                    /**
                     * <p>Y-coordinate position of the subtitle background base plate. Supports pixel and percentage formats: - Pixel: Npx, where N ranges from [0,4096]. - Percentage: N%, where N ranges from [0,100]. For example, 10% means the subtitle background base plate Y-coordinate = 10% * source video height. If not specified, the subtitle background base plate is disabled. Note: The coordinate axis origin is located at the bottom of the central axis of the source video, and the reference point of the subtitle background base plate is at the bottom of its central axis. Refer to the figure below: <img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></p>
                     */
                    int64_t m_boardY;
                    bool m_boardYHasBeenSet;

                    /**
                     * <p>BoardY measurement unit, 0 pixel, 1 percentage, defaults to 0, pixel</p>
                     */
                    int64_t m_boardYUnit;
                    bool m_boardYUnitHasBeenSet;

                    /**
                     * <p>Width of the base plate, a positive integer. - When representing pixels, value ranges from 0 to 4096. - When representing a percentage, value ranges from 0 to 100. If background is enabled and this parameter is not specified, the default width is 90% of the source video width.</p>
                     */
                    int64_t m_boardWidth;
                    bool m_boardWidthHasBeenSet;

                    /**
                     * <p>Background width measurement unit. 0: pixel, 1: percentage. Default is 0 (pixel).</p>
                     */
                    int64_t m_boardWidthUnit;
                    bool m_boardWidthUnitHasBeenSet;

                    /**
                     * <p>Height of the base plate, a positive integer. - When representing pixels, the value ranges from 0 to 4096. - When representing a percentage, the value ranges from 0 to 100. If base plate is enabled and this parameter is not specified, the default height is 15% of the source video height.</p>
                     */
                    int64_t m_boardHeight;
                    bool m_boardHeightHasBeenSet;

                    /**
                     * <p>Base plate height unit, 0 pixel, 1 percentage, defaults to 0, pixel</p>
                     */
                    int64_t m_boardHeightUnit;
                    bool m_boardHeightUnitHasBeenSet;

                    /**
                     * <p>Base plate color. Format: 0xRRGGBB. Default value: 0x000000 (black).</p>
                     */
                    std::string m_boardColor;
                    bool m_boardColorHasBeenSet;

                    /**
                     * <p>Subtitle background transparency. Value range: [0, 1] <li>0: completely transparent</li> <li>1: completely opaque</li> Default value: 0.8.</p>
                     */
                    double m_boardAlpha;
                    bool m_boardAlphaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSSUBTITLEBOARDCONFIG_H_
