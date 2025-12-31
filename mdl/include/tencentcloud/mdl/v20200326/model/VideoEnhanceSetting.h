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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_VIDEOENHANCESETTING_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_VIDEOENHANCESETTING_H_

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
                * VideoEnhanceSetting
                */
                class VideoEnhanceSetting : public AbstractModel
                {
                public:
                    VideoEnhanceSetting();
                    ~VideoEnhanceSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Video enhancement types, optional: "GameEnhance", "ColorEnhance", "Debur", "Comprehensive", "Denoising", "SR", "OutdoorSportsCompetitions", "IndoorSportsCompetitions", "ShowEnhance"
                     * @return Type Video enhancement types, optional: "GameEnhance", "ColorEnhance", "Debur", "Comprehensive", "Denoising", "SR", "OutdoorSportsCompetitions", "IndoorSportsCompetitions", "ShowEnhance"
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Video enhancement types, optional: "GameEnhance", "ColorEnhance", "Debur", "Comprehensive", "Denoising", "SR", "OutdoorSportsCompetitions", "IndoorSportsCompetitions", "ShowEnhance"
                     * @param _type Video enhancement types, optional: "GameEnhance", "ColorEnhance", "Debur", "Comprehensive", "Denoising", "SR", "OutdoorSportsCompetitions", "IndoorSportsCompetitions", "ShowEnhance"
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
                     * 获取Video enhancement intensity, 0-1.0, granularity 0.1
                     * @return Strength Video enhancement intensity, 0-1.0, granularity 0.1
                     * 
                     */
                    double GetStrength() const;

                    /**
                     * 设置Video enhancement intensity, 0-1.0, granularity 0.1
                     * @param _strength Video enhancement intensity, 0-1.0, granularity 0.1
                     * 
                     */
                    void SetStrength(const double& _strength);

                    /**
                     * 判断参数 Strength 是否已赋值
                     * @return Strength 是否已赋值
                     * 
                     */
                    bool StrengthHasBeenSet() const;

                private:

                    /**
                     * Video enhancement types, optional: "GameEnhance", "ColorEnhance", "Debur", "Comprehensive", "Denoising", "SR", "OutdoorSportsCompetitions", "IndoorSportsCompetitions", "ShowEnhance"
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Video enhancement intensity, 0-1.0, granularity 0.1
                     */
                    double m_strength;
                    bool m_strengthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_VIDEOENHANCESETTING_H_
