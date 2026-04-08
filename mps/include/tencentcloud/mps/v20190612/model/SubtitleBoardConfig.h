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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLEBOARDCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLEBOARDCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Subtitle suppression module background settings
                */
                class SubtitleBoardConfig : public AbstractModel
                {
                public:
                    SubtitleBoardConfig();
                    ~SubtitleBoardConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Subtitle suppression module background configuration switch, 0 for off, 1 for on, default 0
                     * @return SubtitleBoardConfigSwitch Subtitle suppression module background configuration switch, 0 for off, 1 for on, default 0
                     * 
                     */
                    int64_t GetSubtitleBoardConfigSwitch() const;

                    /**
                     * 设置Subtitle suppression module background configuration switch, 0 for off, 1 for on, default 0
                     * @param _subtitleBoardConfigSwitch Subtitle suppression module background configuration switch, 0 for off, 1 for on, default 0
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
                     * 获取Subtitle background base plate x-axis coordinate position; Supports pixel and percentage format:

- Pixel: Npx. Value range of N: [-4096,4096].
-Percentage: N%, N range: [-100,100]. For example, 10% means the X-coordinate of the subtitle background base plate is 10% of the source video width.

Default value: 0px.
Note: The origin of the coordinate axes is at the bottom of the central axis of the source video, and the reference position of the subtitle base plate is at the bottom of the central axis, as shown in the figure below.
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

                     * @return BoardX Subtitle background base plate x-axis coordinate position; Supports pixel and percentage format:

- Pixel: Npx. Value range of N: [-4096,4096].
-Percentage: N%, N range: [-100,100]. For example, 10% means the X-coordinate of the subtitle background base plate is 10% of the source video width.

Default value: 0px.
Note: The origin of the coordinate axes is at the bottom of the central axis of the source video, and the reference position of the subtitle base plate is at the bottom of the central axis, as shown in the figure below.
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

                     * 
                     */
                    int64_t GetBoardX() const;

                    /**
                     * 设置Subtitle background base plate x-axis coordinate position; Supports pixel and percentage format:

- Pixel: Npx. Value range of N: [-4096,4096].
-Percentage: N%, N range: [-100,100]. For example, 10% means the X-coordinate of the subtitle background base plate is 10% of the source video width.

Default value: 0px.
Note: The origin of the coordinate axes is at the bottom of the central axis of the source video, and the reference position of the subtitle base plate is at the bottom of the central axis, as shown in the figure below.
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

                     * @param _boardX Subtitle background base plate x-axis coordinate position; Supports pixel and percentage format:

- Pixel: Npx. Value range of N: [-4096,4096].
-Percentage: N%, N range: [-100,100]. For example, 10% means the X-coordinate of the subtitle background base plate is 10% of the source video width.

Default value: 0px.
Note: The origin of the coordinate axes is at the bottom of the central axis of the source video, and the reference position of the subtitle base plate is at the bottom of the central axis, as shown in the figure below.
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

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
                     * 获取BoardX unit, 0 pixel, 1 percentage, default is 0, pixel
                     * @return BoardXUnit BoardX unit, 0 pixel, 1 percentage, default is 0, pixel
                     * 
                     */
                    int64_t GetBoardXUnit() const;

                    /**
                     * 设置BoardX unit, 0 pixel, 1 percentage, default is 0, pixel
                     * @param _boardXUnit BoardX unit, 0 pixel, 1 percentage, default is 0, pixel
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
                     * 获取Subtitle background base plate y-axis coordinate position; Supports pixel and percentage format:

- Pixel: Npx. Value range of N: [0,4096].
-Percentage: N%, where N ranges from [0,100]. For example, 10% means the y-coordinate of the subtitle background base plate equals 10% of the video height.

If this parameter is not specified, the subtitle background is disabled.
Note: The origin point of the coordinate axis is located at the bottom of the central axis of the source video, and the benchmark of the subtitle background base plate is at the bottom of its central axis. See the following diagram.
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

                     * @return BoardY Subtitle background base plate y-axis coordinate position; Supports pixel and percentage format:

- Pixel: Npx. Value range of N: [0,4096].
-Percentage: N%, where N ranges from [0,100]. For example, 10% means the y-coordinate of the subtitle background base plate equals 10% of the video height.

If this parameter is not specified, the subtitle background is disabled.
Note: The origin point of the coordinate axis is located at the bottom of the central axis of the source video, and the benchmark of the subtitle background base plate is at the bottom of its central axis. See the following diagram.
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

                     * 
                     */
                    int64_t GetBoardY() const;

                    /**
                     * 设置Subtitle background base plate y-axis coordinate position; Supports pixel and percentage format:

- Pixel: Npx. Value range of N: [0,4096].
-Percentage: N%, where N ranges from [0,100]. For example, 10% means the y-coordinate of the subtitle background base plate equals 10% of the video height.

If this parameter is not specified, the subtitle background is disabled.
Note: The origin point of the coordinate axis is located at the bottom of the central axis of the source video, and the benchmark of the subtitle background base plate is at the bottom of its central axis. See the following diagram.
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

                     * @param _boardY Subtitle background base plate y-axis coordinate position; Supports pixel and percentage format:

- Pixel: Npx. Value range of N: [0,4096].
-Percentage: N%, where N ranges from [0,100]. For example, 10% means the y-coordinate of the subtitle background base plate equals 10% of the video height.

If this parameter is not specified, the subtitle background is disabled.
Note: The origin point of the coordinate axis is located at the bottom of the central axis of the source video, and the benchmark of the subtitle background base plate is at the bottom of its central axis. See the following diagram.
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

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
                     * 获取BoardY unit, 0 pixel, 1 percentage, default is 0, pixel
                     * @return BoardYUnit BoardY unit, 0 pixel, 1 percentage, default is 0, pixel
                     * 
                     */
                    int64_t GetBoardYUnit() const;

                    /**
                     * 设置BoardY unit, 0 pixel, 1 percentage, default is 0, pixel
                     * @param _boardYUnit BoardY unit, 0 pixel, 1 percentage, default is 0, pixel
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
                     * 获取Background width. The value should be a positive integer.
- Value range for pixels: [0,4096].
- Value range for percentages: [0, 100].
If the base plate is enabled and this parameter is not specified, the default width is 90% of the source video width.

                     * @return BoardWidth Background width. The value should be a positive integer.
- Value range for pixels: [0,4096].
- Value range for percentages: [0, 100].
If the base plate is enabled and this parameter is not specified, the default width is 90% of the source video width.

                     * 
                     */
                    int64_t GetBoardWidth() const;

                    /**
                     * 设置Background width. The value should be a positive integer.
- Value range for pixels: [0,4096].
- Value range for percentages: [0, 100].
If the base plate is enabled and this parameter is not specified, the default width is 90% of the source video width.

                     * @param _boardWidth Background width. The value should be a positive integer.
- Value range for pixels: [0,4096].
- Value range for percentages: [0, 100].
If the base plate is enabled and this parameter is not specified, the default width is 90% of the source video width.

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
                     * 获取Background width measurement unit. 0: pixel, 1: percentage. Default is 0 (pixel).

                     * @return BoardWidthUnit Background width measurement unit. 0: pixel, 1: percentage. Default is 0 (pixel).

                     * 
                     */
                    int64_t GetBoardWidthUnit() const;

                    /**
                     * 设置Background width measurement unit. 0: pixel, 1: percentage. Default is 0 (pixel).

                     * @param _boardWidthUnit Background width measurement unit. 0: pixel, 1: percentage. Default is 0 (pixel).

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
                     * 获取Background height. The value should be a positive integer.
- Value range for pixels: [0,4096].
- Value range for percentages: [0, 100].
If the base plate is enabled and this parameter is not specified, the default height is 15% of the source video height.

                     * @return BoardHeight Background height. The value should be a positive integer.
- Value range for pixels: [0,4096].
- Value range for percentages: [0, 100].
If the base plate is enabled and this parameter is not specified, the default height is 15% of the source video height.

                     * 
                     */
                    int64_t GetBoardHeight() const;

                    /**
                     * 设置Background height. The value should be a positive integer.
- Value range for pixels: [0,4096].
- Value range for percentages: [0, 100].
If the base plate is enabled and this parameter is not specified, the default height is 15% of the source video height.

                     * @param _boardHeight Background height. The value should be a positive integer.
- Value range for pixels: [0,4096].
- Value range for percentages: [0, 100].
If the base plate is enabled and this parameter is not specified, the default height is 15% of the source video height.

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
                     * 获取Base plate height unit, 0 pixel, 1 percentage, defaults to 0, pixel

                     * @return BoardHeightUnit Base plate height unit, 0 pixel, 1 percentage, defaults to 0, pixel

                     * 
                     */
                    int64_t GetBoardHeightUnit() const;

                    /**
                     * 设置Base plate height unit, 0 pixel, 1 percentage, defaults to 0, pixel

                     * @param _boardHeightUnit Base plate height unit, 0 pixel, 1 percentage, defaults to 0, pixel

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
                     * 获取Board color. Format: 0xRRGGBB.
Default value: 0x000000 (black).
                     * @return BoardColor Board color. Format: 0xRRGGBB.
Default value: 0x000000 (black).
                     * 
                     */
                    std::string GetBoardColor() const;

                    /**
                     * 设置Board color. Format: 0xRRGGBB.
Default value: 0x000000 (black).
                     * @param _boardColor Board color. Format: 0xRRGGBB.
Default value: 0x000000 (black).
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
                     * 获取Subtitle background transparency. Value range: [0, 1].
<li>0: completely transparent.</li>
<li>1: completely opaque.</li>
Default value: 0.8.
                     * @return BoardAlpha Subtitle background transparency. Value range: [0, 1].
<li>0: completely transparent.</li>
<li>1: completely opaque.</li>
Default value: 0.8.
                     * 
                     */
                    double GetBoardAlpha() const;

                    /**
                     * 设置Subtitle background transparency. Value range: [0, 1].
<li>0: completely transparent.</li>
<li>1: completely opaque.</li>
Default value: 0.8.
                     * @param _boardAlpha Subtitle background transparency. Value range: [0, 1].
<li>0: completely transparent.</li>
<li>1: completely opaque.</li>
Default value: 0.8.
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
                     * Subtitle suppression module background configuration switch, 0 for off, 1 for on, default 0
                     */
                    int64_t m_subtitleBoardConfigSwitch;
                    bool m_subtitleBoardConfigSwitchHasBeenSet;

                    /**
                     * Subtitle background base plate x-axis coordinate position; Supports pixel and percentage format:

- Pixel: Npx. Value range of N: [-4096,4096].
-Percentage: N%, N range: [-100,100]. For example, 10% means the X-coordinate of the subtitle background base plate is 10% of the source video width.

Default value: 0px.
Note: The origin of the coordinate axes is at the bottom of the central axis of the source video, and the reference position of the subtitle base plate is at the bottom of the central axis, as shown in the figure below.
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

                     */
                    int64_t m_boardX;
                    bool m_boardXHasBeenSet;

                    /**
                     * BoardX unit, 0 pixel, 1 percentage, default is 0, pixel
                     */
                    int64_t m_boardXUnit;
                    bool m_boardXUnitHasBeenSet;

                    /**
                     * Subtitle background base plate y-axis coordinate position; Supports pixel and percentage format:

- Pixel: Npx. Value range of N: [0,4096].
-Percentage: N%, where N ranges from [0,100]. For example, 10% means the y-coordinate of the subtitle background base plate equals 10% of the video height.

If this parameter is not specified, the subtitle background is disabled.
Note: The origin point of the coordinate axis is located at the bottom of the central axis of the source video, and the benchmark of the subtitle background base plate is at the bottom of its central axis. See the following diagram.
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

                     */
                    int64_t m_boardY;
                    bool m_boardYHasBeenSet;

                    /**
                     * BoardY unit, 0 pixel, 1 percentage, default is 0, pixel
                     */
                    int64_t m_boardYUnit;
                    bool m_boardYUnitHasBeenSet;

                    /**
                     * Background width. The value should be a positive integer.
- Value range for pixels: [0,4096].
- Value range for percentages: [0, 100].
If the base plate is enabled and this parameter is not specified, the default width is 90% of the source video width.

                     */
                    int64_t m_boardWidth;
                    bool m_boardWidthHasBeenSet;

                    /**
                     * Background width measurement unit. 0: pixel, 1: percentage. Default is 0 (pixel).

                     */
                    int64_t m_boardWidthUnit;
                    bool m_boardWidthUnitHasBeenSet;

                    /**
                     * Background height. The value should be a positive integer.
- Value range for pixels: [0,4096].
- Value range for percentages: [0, 100].
If the base plate is enabled and this parameter is not specified, the default height is 15% of the source video height.

                     */
                    int64_t m_boardHeight;
                    bool m_boardHeightHasBeenSet;

                    /**
                     * Base plate height unit, 0 pixel, 1 percentage, defaults to 0, pixel

                     */
                    int64_t m_boardHeightUnit;
                    bool m_boardHeightUnitHasBeenSet;

                    /**
                     * Board color. Format: 0xRRGGBB.
Default value: 0x000000 (black).
                     */
                    std::string m_boardColor;
                    bool m_boardColorHasBeenSet;

                    /**
                     * Subtitle background transparency. Value range: [0, 1].
<li>0: completely transparent.</li>
<li>1: completely opaque.</li>
Default value: 0.8.
                     */
                    double m_boardAlpha;
                    bool m_boardAlphaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLEBOARDCONFIG_H_
