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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_VIDEOCODECDETAIL_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_VIDEOCODECDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * 
                */
                class VideoCodecDetail : public AbstractModel
                {
                public:
                    VideoCodecDetail();
                    ~VideoCodecDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The three image quality levels of h264 include: BASELINE, HIGH, and MAIN. The default option is MAIN.
                     * @return Profile The three image quality levels of h264 include: BASELINE, HIGH, and MAIN. The default option is MAIN.
                     * 
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置The three image quality levels of h264 include: BASELINE, HIGH, and MAIN. The default option is MAIN.
                     * @param _profile The three image quality levels of h264 include: BASELINE, HIGH, and MAIN. The default option is MAIN.
                     * 
                     */
                    void SetProfile(const std::string& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                    /**
                     * 获取Profile corresponding codec performance, options include: 1, 1.1, 1.2, 1.3, 2, 2.1, 2.2, 2.3, 3, 3.1, 3.2, 4, 4.1, 4.2, 5, 5.1, AUTO. The default option is AUTO.
                     * @return Level Profile corresponding codec performance, options include: 1, 1.1, 1.2, 1.3, 2, 2.1, 2.2, 2.3, 3, 3.1, 3.2, 4, 4.1, 4.2, 5, 5.1, AUTO. The default option is AUTO.
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Profile corresponding codec performance, options include: 1, 1.1, 1.2, 1.3, 2, 2.1, 2.2, 2.3, 3, 3.1, 3.2, 4, 4.1, 4.2, 5, 5.1, AUTO. The default option is AUTO.
                     * @param _level Profile corresponding codec performance, options include: 1, 1.1, 1.2, 1.3, 2, 2.1, 2.2, 2.3, 3, 3.1, 3.2, 4, 4.1, 4.2, 5, 5.1, AUTO. The default option is AUTO.
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Codecs include entropy coding and lossless coding, and options include: CABAC and CAVLC. The default option is CABAC. .
                     * @return EntropyEncoding Codecs include entropy coding and lossless coding, and options include: CABAC and CAVLC. The default option is CABAC. .
                     * 
                     */
                    std::string GetEntropyEncoding() const;

                    /**
                     * 设置Codecs include entropy coding and lossless coding, and options include: CABAC and CAVLC. The default option is CABAC. .
                     * @param _entropyEncoding Codecs include entropy coding and lossless coding, and options include: CABAC and CAVLC. The default option is CABAC. .
                     * 
                     */
                    void SetEntropyEncoding(const std::string& _entropyEncoding);

                    /**
                     * 判断参数 EntropyEncoding 是否已赋值
                     * @return EntropyEncoding 是否已赋值
                     * 
                     */
                    bool EntropyEncodingHasBeenSet() const;

                    /**
                     * 获取Mode, options include: AUTO, HIGH, HIGHER, LOW, MAX, MEDIUM, OFF. The default option is: AUTO. .
                     * @return AdaptiveQuantization Mode, options include: AUTO, HIGH, HIGHER, LOW, MAX, MEDIUM, OFF. The default option is: AUTO. .
                     * 
                     */
                    std::string GetAdaptiveQuantization() const;

                    /**
                     * 设置Mode, options include: AUTO, HIGH, HIGHER, LOW, MAX, MEDIUM, OFF. The default option is: AUTO. .
                     * @param _adaptiveQuantization Mode, options include: AUTO, HIGH, HIGHER, LOW, MAX, MEDIUM, OFF. The default option is: AUTO. .
                     * 
                     */
                    void SetAdaptiveQuantization(const std::string& _adaptiveQuantization);

                    /**
                     * 判断参数 AdaptiveQuantization 是否已赋值
                     * @return AdaptiveQuantization 是否已赋值
                     * 
                     */
                    bool AdaptiveQuantizationHasBeenSet() const;

                    /**
                     * 获取Analyze subsequent encoded frames in advance, options include: HIGH, LOW, MEDIUM. The default option is: MEDIUM. .
                     * @return LookAheadRateControl Analyze subsequent encoded frames in advance, options include: HIGH, LOW, MEDIUM. The default option is: MEDIUM. .
                     * 
                     */
                    std::string GetLookAheadRateControl() const;

                    /**
                     * 设置Analyze subsequent encoded frames in advance, options include: HIGH, LOW, MEDIUM. The default option is: MEDIUM. .
                     * @param _lookAheadRateControl Analyze subsequent encoded frames in advance, options include: HIGH, LOW, MEDIUM. The default option is: MEDIUM. .
                     * 
                     */
                    void SetLookAheadRateControl(const std::string& _lookAheadRateControl);

                    /**
                     * 判断参数 LookAheadRateControl 是否已赋值
                     * @return LookAheadRateControl 是否已赋值
                     * 
                     */
                    bool LookAheadRateControlHasBeenSet() const;

                private:

                    /**
                     * The three image quality levels of h264 include: BASELINE, HIGH, and MAIN. The default option is MAIN.
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                    /**
                     * Profile corresponding codec performance, options include: 1, 1.1, 1.2, 1.3, 2, 2.1, 2.2, 2.3, 3, 3.1, 3.2, 4, 4.1, 4.2, 5, 5.1, AUTO. The default option is AUTO.
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Codecs include entropy coding and lossless coding, and options include: CABAC and CAVLC. The default option is CABAC. .
                     */
                    std::string m_entropyEncoding;
                    bool m_entropyEncodingHasBeenSet;

                    /**
                     * Mode, options include: AUTO, HIGH, HIGHER, LOW, MAX, MEDIUM, OFF. The default option is: AUTO. .
                     */
                    std::string m_adaptiveQuantization;
                    bool m_adaptiveQuantizationHasBeenSet;

                    /**
                     * Analyze subsequent encoded frames in advance, options include: HIGH, LOW, MEDIUM. The default option is: MEDIUM. .
                     */
                    std::string m_lookAheadRateControl;
                    bool m_lookAheadRateControlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_VIDEOCODECDETAIL_H_
