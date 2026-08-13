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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_FISSIONTASKINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_FISSIONTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/CustomModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Product fission task info
                */
                class FissionTaskInfo : public AbstractModel
                {
                public:
                    FissionTaskInfo();
                    ~FissionTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Video output duration</p><p>Range: [1, 15]</p><p>Unit: seconds</p><p>Default value: 15</p>
                     * @return Duration <p>Video output duration</p><p>Range: [1, 15]</p><p>Unit: seconds</p><p>Default value: 15</p>
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置<p>Video output duration</p><p>Range: [1, 15]</p><p>Unit: seconds</p><p>Default value: 15</p>
                     * @param _duration <p>Video output duration</p><p>Range: [1, 15]</p><p>Unit: seconds</p><p>Default value: 15</p>
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取<p>Model gearbox</p><p>Enumeration value:</p><ul><li>standard: Standard version</li><li>flagship: Flagship edition</li></ul>
                     * @return ModelTier <p>Model gearbox</p><p>Enumeration value:</p><ul><li>standard: Standard version</li><li>flagship: Flagship edition</li></ul>
                     * 
                     */
                    std::string GetModelTier() const;

                    /**
                     * 设置<p>Model gearbox</p><p>Enumeration value:</p><ul><li>standard: Standard version</li><li>flagship: Flagship edition</li></ul>
                     * @param _modelTier <p>Model gearbox</p><p>Enumeration value:</p><ul><li>standard: Standard version</li><li>flagship: Flagship edition</li></ul>
                     * 
                     */
                    void SetModelTier(const std::string& _modelTier);

                    /**
                     * 判断参数 ModelTier 是否已赋值
                     * @return ModelTier 是否已赋值
                     * 
                     */
                    bool ModelTierHasBeenSet() const;

                    /**
                     * 获取<p>Video image ratio</p><p>Enumeration values:</p><ul><li>9:16: 9:16</li><li>16:9: 16:9</li><li>1:1: -1:1</li><li>3:4: 3:4</li><li>4:3: 4:3</li></ul>
                     * @return Ratio <p>Video image ratio</p><p>Enumeration values:</p><ul><li>9:16: 9:16</li><li>16:9: 16:9</li><li>1:1: -1:1</li><li>3:4: 3:4</li><li>4:3: 4:3</li></ul>
                     * 
                     */
                    std::string GetRatio() const;

                    /**
                     * 设置<p>Video image ratio</p><p>Enumeration values:</p><ul><li>9:16: 9:16</li><li>16:9: 16:9</li><li>1:1: -1:1</li><li>3:4: 3:4</li><li>4:3: 4:3</li></ul>
                     * @param _ratio <p>Video image ratio</p><p>Enumeration values:</p><ul><li>9:16: 9:16</li><li>16:9: 16:9</li><li>1:1: -1:1</li><li>3:4: 3:4</li><li>4:3: 4:3</li></ul>
                     * 
                     */
                    void SetRatio(const std::string& _ratio);

                    /**
                     * 判断参数 Ratio 是否已赋值
                     * @return Ratio 是否已赋值
                     * 
                     */
                    bool RatioHasBeenSet() const;

                    /**
                     * 获取<p>Output resolution</p><p>Enumeration values:</p><ul><li>720p: 720p</li><li>1080p: 1080p</li><li>2k: 2k</li><li>4k: 4k</li></ul>
                     * @return Resolution <p>Output resolution</p><p>Enumeration values:</p><ul><li>720p: 720p</li><li>1080p: 1080p</li><li>2k: 2k</li><li>4k: 4k</li></ul>
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置<p>Output resolution</p><p>Enumeration values:</p><ul><li>720p: 720p</li><li>1080p: 1080p</li><li>2k: 2k</li><li>4k: 4k</li></ul>
                     * @param _resolution <p>Output resolution</p><p>Enumeration values:</p><ul><li>720p: 720p</li><li>1080p: 1080p</li><li>2k: 2k</li><li>4k: 4k</li></ul>
                     * 
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取<p>Target market</p><p>Enumeration values:</p><ul><li>north_america: North America</li><li>europe: Europe</li><li>china: China</li><li>japan: Japan</li><li>korea: South Korea</li><li>southeast_asia: Southeast Asia</li><li>brazil: Brazil</li><li>global: Global</li><li>other: Other</li></ul><p>Impacts the default model ethnicity and localized style. When CustomModel is not specified, the ethnicity is automatically determined by the market.</p>
                     * @return Market <p>Target market</p><p>Enumeration values:</p><ul><li>north_america: North America</li><li>europe: Europe</li><li>china: China</li><li>japan: Japan</li><li>korea: South Korea</li><li>southeast_asia: Southeast Asia</li><li>brazil: Brazil</li><li>global: Global</li><li>other: Other</li></ul><p>Impacts the default model ethnicity and localized style. When CustomModel is not specified, the ethnicity is automatically determined by the market.</p>
                     * 
                     */
                    std::string GetMarket() const;

                    /**
                     * 设置<p>Target market</p><p>Enumeration values:</p><ul><li>north_america: North America</li><li>europe: Europe</li><li>china: China</li><li>japan: Japan</li><li>korea: South Korea</li><li>southeast_asia: Southeast Asia</li><li>brazil: Brazil</li><li>global: Global</li><li>other: Other</li></ul><p>Impacts the default model ethnicity and localized style. When CustomModel is not specified, the ethnicity is automatically determined by the market.</p>
                     * @param _market <p>Target market</p><p>Enumeration values:</p><ul><li>north_america: North America</li><li>europe: Europe</li><li>china: China</li><li>japan: Japan</li><li>korea: South Korea</li><li>southeast_asia: Southeast Asia</li><li>brazil: Brazil</li><li>global: Global</li><li>other: Other</li></ul><p>Impacts the default model ethnicity and localized style. When CustomModel is not specified, the ethnicity is automatically determined by the market.</p>
                     * 
                     */
                    void SetMarket(const std::string& _market);

                    /**
                     * 判断参数 Market 是否已赋值
                     * @return Market 是否已赋值
                     * 
                     */
                    bool MarketHasBeenSet() const;

                    /**
                     * 获取<p>Voiceover/subtitle language</p><p>Enumeration value:</p><ul><li>english: English</li><li>chinese: Chinese</li><li>japanese: Japanese</li><li>korean: Korean</li><li>spanish: Spanish</li><li>portuguese: Portuguese</li><li>music_only: Music only, no voiceover</li></ul>
                     * @return Language <p>Voiceover/subtitle language</p><p>Enumeration value:</p><ul><li>english: English</li><li>chinese: Chinese</li><li>japanese: Japanese</li><li>korean: Korean</li><li>spanish: Spanish</li><li>portuguese: Portuguese</li><li>music_only: Music only, no voiceover</li></ul>
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置<p>Voiceover/subtitle language</p><p>Enumeration value:</p><ul><li>english: English</li><li>chinese: Chinese</li><li>japanese: Japanese</li><li>korean: Korean</li><li>spanish: Spanish</li><li>portuguese: Portuguese</li><li>music_only: Music only, no voiceover</li></ul>
                     * @param _language <p>Voiceover/subtitle language</p><p>Enumeration value:</p><ul><li>english: English</li><li>chinese: Chinese</li><li>japanese: Japanese</li><li>korean: Korean</li><li>spanish: Spanish</li><li>portuguese: Portuguese</li><li>music_only: Music only, no voiceover</li></ul>
                     * 
                     */
                    void SetLanguage(const std::string& _language);

                    /**
                     * 判断参数 Language 是否已赋值
                     * @return Language 是否已赋值
                     * 
                     */
                    bool LanguageHasBeenSet() const;

                    /**
                     * 获取<p>Video type</p><p>Enumeration value:</p><ul><li>ugc: UGC seeding</li><li>talk: Product talk</li><li>display: Product display (product only, no voice)</li><li>unboxing: Out-of-the-box sharing</li><li>reaction: Reaction show</li></ul>
                     * @return VideoType <p>Video type</p><p>Enumeration value:</p><ul><li>ugc: UGC seeding</li><li>talk: Product talk</li><li>display: Product display (product only, no voice)</li><li>unboxing: Out-of-the-box sharing</li><li>reaction: Reaction show</li></ul>
                     * 
                     */
                    std::string GetVideoType() const;

                    /**
                     * 设置<p>Video type</p><p>Enumeration value:</p><ul><li>ugc: UGC seeding</li><li>talk: Product talk</li><li>display: Product display (product only, no voice)</li><li>unboxing: Out-of-the-box sharing</li><li>reaction: Reaction show</li></ul>
                     * @param _videoType <p>Video type</p><p>Enumeration value:</p><ul><li>ugc: UGC seeding</li><li>talk: Product talk</li><li>display: Product display (product only, no voice)</li><li>unboxing: Out-of-the-box sharing</li><li>reaction: Reaction show</li></ul>
                     * 
                     */
                    void SetVideoType(const std::string& _videoType);

                    /**
                     * 判断参数 VideoType 是否已赋值
                     * @return VideoType 是否已赋值
                     * 
                     */
                    bool VideoTypeHasBeenSet() const;

                    /**
                     * 获取<p>Fission count</p><p>Value ranges from 0 to 1</p><p>Unit: unit</p>
                     * @return SplitCount <p>Fission count</p><p>Value ranges from 0 to 1</p><p>Unit: unit</p>
                     * 
                     */
                    uint64_t GetSplitCount() const;

                    /**
                     * 设置<p>Fission count</p><p>Value ranges from 0 to 1</p><p>Unit: unit</p>
                     * @param _splitCount <p>Fission count</p><p>Value ranges from 0 to 1</p><p>Unit: unit</p>
                     * 
                     */
                    void SetSplitCount(const uint64_t& _splitCount);

                    /**
                     * 判断参数 SplitCount 是否已赋值
                     * @return SplitCount 是否已赋值
                     * 
                     */
                    bool SplitCountHasBeenSet() const;

                    /**
                     * 获取<p>Customize an on-camera model</p>
                     * @return CustomModel <p>Customize an on-camera model</p>
                     * 
                     */
                    CustomModel GetCustomModel() const;

                    /**
                     * 设置<p>Customize an on-camera model</p>
                     * @param _customModel <p>Customize an on-camera model</p>
                     * 
                     */
                    void SetCustomModel(const CustomModel& _customModel);

                    /**
                     * 判断参数 CustomModel 是否已赋值
                     * @return CustomModel 是否已赋值
                     * 
                     */
                    bool CustomModelHasBeenSet() const;

                private:

                    /**
                     * <p>Video output duration</p><p>Range: [1, 15]</p><p>Unit: seconds</p><p>Default value: 15</p>
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>Model gearbox</p><p>Enumeration value:</p><ul><li>standard: Standard version</li><li>flagship: Flagship edition</li></ul>
                     */
                    std::string m_modelTier;
                    bool m_modelTierHasBeenSet;

                    /**
                     * <p>Video image ratio</p><p>Enumeration values:</p><ul><li>9:16: 9:16</li><li>16:9: 16:9</li><li>1:1: -1:1</li><li>3:4: 3:4</li><li>4:3: 4:3</li></ul>
                     */
                    std::string m_ratio;
                    bool m_ratioHasBeenSet;

                    /**
                     * <p>Output resolution</p><p>Enumeration values:</p><ul><li>720p: 720p</li><li>1080p: 1080p</li><li>2k: 2k</li><li>4k: 4k</li></ul>
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * <p>Target market</p><p>Enumeration values:</p><ul><li>north_america: North America</li><li>europe: Europe</li><li>china: China</li><li>japan: Japan</li><li>korea: South Korea</li><li>southeast_asia: Southeast Asia</li><li>brazil: Brazil</li><li>global: Global</li><li>other: Other</li></ul><p>Impacts the default model ethnicity and localized style. When CustomModel is not specified, the ethnicity is automatically determined by the market.</p>
                     */
                    std::string m_market;
                    bool m_marketHasBeenSet;

                    /**
                     * <p>Voiceover/subtitle language</p><p>Enumeration value:</p><ul><li>english: English</li><li>chinese: Chinese</li><li>japanese: Japanese</li><li>korean: Korean</li><li>spanish: Spanish</li><li>portuguese: Portuguese</li><li>music_only: Music only, no voiceover</li></ul>
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * <p>Video type</p><p>Enumeration value:</p><ul><li>ugc: UGC seeding</li><li>talk: Product talk</li><li>display: Product display (product only, no voice)</li><li>unboxing: Out-of-the-box sharing</li><li>reaction: Reaction show</li></ul>
                     */
                    std::string m_videoType;
                    bool m_videoTypeHasBeenSet;

                    /**
                     * <p>Fission count</p><p>Value ranges from 0 to 1</p><p>Unit: unit</p>
                     */
                    uint64_t m_splitCount;
                    bool m_splitCountHasBeenSet;

                    /**
                     * <p>Customize an on-camera model</p>
                     */
                    CustomModel m_customModel;
                    bool m_customModelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_FISSIONTASKINFO_H_
