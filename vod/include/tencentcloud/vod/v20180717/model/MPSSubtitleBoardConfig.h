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
                * 
                */
                class MPSSubtitleBoardConfig : public AbstractModel
                {
                public:
                    MPSSubtitleBoardConfig();
                    ~MPSSubtitleBoardConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return SubtitleBoardConfigSwitch 
                     * 
                     */
                    int64_t GetSubtitleBoardConfigSwitch() const;

                    /**
                     * 设置
                     * @param _subtitleBoardConfigSwitch 
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
                     * 获取
                     * @return BoardX 
                     * 
                     */
                    int64_t GetBoardX() const;

                    /**
                     * 设置
                     * @param _boardX 
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
                     * 获取
                     * @return BoardXUnit 
                     * 
                     */
                    int64_t GetBoardXUnit() const;

                    /**
                     * 设置
                     * @param _boardXUnit 
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
                     * 获取
                     * @return BoardY 
                     * 
                     */
                    int64_t GetBoardY() const;

                    /**
                     * 设置
                     * @param _boardY 
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
                     * 获取
                     * @return BoardYUnit 
                     * 
                     */
                    int64_t GetBoardYUnit() const;

                    /**
                     * 设置
                     * @param _boardYUnit 
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
                     * 获取
                     * @return BoardWidth 
                     * 
                     */
                    int64_t GetBoardWidth() const;

                    /**
                     * 设置
                     * @param _boardWidth 
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
                     * 获取
                     * @return BoardWidthUnit 
                     * 
                     */
                    int64_t GetBoardWidthUnit() const;

                    /**
                     * 设置
                     * @param _boardWidthUnit 
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
                     * 获取
                     * @return BoardHeight 
                     * 
                     */
                    int64_t GetBoardHeight() const;

                    /**
                     * 设置
                     * @param _boardHeight 
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
                     * 获取
                     * @return BoardHeightUnit 
                     * 
                     */
                    int64_t GetBoardHeightUnit() const;

                    /**
                     * 设置
                     * @param _boardHeightUnit 
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
                     * 获取
                     * @return BoardColor 
                     * 
                     */
                    std::string GetBoardColor() const;

                    /**
                     * 设置
                     * @param _boardColor 
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
                     * 获取
                     * @return BoardAlpha 
                     * 
                     */
                    double GetBoardAlpha() const;

                    /**
                     * 设置
                     * @param _boardAlpha 
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
                     * 
                     */
                    int64_t m_subtitleBoardConfigSwitch;
                    bool m_subtitleBoardConfigSwitchHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_boardX;
                    bool m_boardXHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_boardXUnit;
                    bool m_boardXUnitHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_boardY;
                    bool m_boardYHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_boardYUnit;
                    bool m_boardYUnitHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_boardWidth;
                    bool m_boardWidthHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_boardWidthUnit;
                    bool m_boardWidthUnitHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_boardHeight;
                    bool m_boardHeightHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_boardHeightUnit;
                    bool m_boardHeightUnitHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_boardColor;
                    bool m_boardColorHasBeenSet;

                    /**
                     * 
                     */
                    double m_boardAlpha;
                    bool m_boardAlphaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSSUBTITLEBOARDCONFIG_H_
