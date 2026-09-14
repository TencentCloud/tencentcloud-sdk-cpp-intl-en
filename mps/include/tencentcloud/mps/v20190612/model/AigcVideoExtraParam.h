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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIGCVIDEOEXTRAPARAM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIGCVIDEOEXTRAPARAM_H_

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
                * 
                */
                class AigcVideoExtraParam : public AbstractModel
                {
                public:
                    AigcVideoExtraParam();
                    ~AigcVideoExtraParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Resolution 
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置
                     * @param _resolution 
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
                     * 获取
                     * @return AspectRatio 
                     * 
                     */
                    std::string GetAspectRatio() const;

                    /**
                     * 设置
                     * @param _aspectRatio 
                     * 
                     */
                    void SetAspectRatio(const std::string& _aspectRatio);

                    /**
                     * 判断参数 AspectRatio 是否已赋值
                     * @return AspectRatio 是否已赋值
                     * 
                     */
                    bool AspectRatioHasBeenSet() const;

                    /**
                     * 获取
                     * @return LogoAdd 
                     * 
                     */
                    int64_t GetLogoAdd() const;

                    /**
                     * 设置
                     * @param _logoAdd 
                     * 
                     */
                    void SetLogoAdd(const int64_t& _logoAdd);

                    /**
                     * 判断参数 LogoAdd 是否已赋值
                     * @return LogoAdd 是否已赋值
                     * 
                     */
                    bool LogoAddHasBeenSet() const;

                    /**
                     * 获取
                     * @return EnableAudio 
                     * 
                     */
                    bool GetEnableAudio() const;

                    /**
                     * 设置
                     * @param _enableAudio 
                     * 
                     */
                    void SetEnableAudio(const bool& _enableAudio);

                    /**
                     * 判断参数 EnableAudio 是否已赋值
                     * @return EnableAudio 是否已赋值
                     * 
                     */
                    bool EnableAudioHasBeenSet() const;

                    /**
                     * 获取
                     * @return OffPeak 
                     * 
                     */
                    bool GetOffPeak() const;

                    /**
                     * 设置
                     * @param _offPeak 
                     * 
                     */
                    void SetOffPeak(const bool& _offPeak);

                    /**
                     * 判断参数 OffPeak 是否已赋值
                     * @return OffPeak 是否已赋值
                     * 
                     */
                    bool OffPeakHasBeenSet() const;

                    /**
                     * 获取
                     * @return EnableBgm 
                     * 
                     */
                    bool GetEnableBgm() const;

                    /**
                     * 设置
                     * @param _enableBgm 
                     * 
                     */
                    void SetEnableBgm(const bool& _enableBgm);

                    /**
                     * 判断参数 EnableBgm 是否已赋值
                     * @return EnableBgm 是否已赋值
                     * 
                     */
                    bool EnableBgmHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_aspectRatio;
                    bool m_aspectRatioHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_logoAdd;
                    bool m_logoAddHasBeenSet;

                    /**
                     * 
                     */
                    bool m_enableAudio;
                    bool m_enableAudioHasBeenSet;

                    /**
                     * 
                     */
                    bool m_offPeak;
                    bool m_offPeakHasBeenSet;

                    /**
                     * 
                     */
                    bool m_enableBgm;
                    bool m_enableBgmHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIGCVIDEOEXTRAPARAM_H_
