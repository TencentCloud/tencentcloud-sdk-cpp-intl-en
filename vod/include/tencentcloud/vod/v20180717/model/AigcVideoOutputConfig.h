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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOOUTPUTCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOOUTPUTCONFIG_H_

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
                class AigcVideoOutputConfig : public AbstractModel
                {
                public:
                    AigcVideoOutputConfig();
                    ~AigcVideoOutputConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return StorageMode 
                     * 
                     */
                    std::string GetStorageMode() const;

                    /**
                     * 设置
                     * @param _storageMode 
                     * 
                     */
                    void SetStorageMode(const std::string& _storageMode);

                    /**
                     * 判断参数 StorageMode 是否已赋值
                     * @return StorageMode 是否已赋值
                     * 
                     */
                    bool StorageModeHasBeenSet() const;

                    /**
                     * 获取
                     * @return MediaName 
                     * 
                     */
                    std::string GetMediaName() const;

                    /**
                     * 设置
                     * @param _mediaName 
                     * 
                     */
                    void SetMediaName(const std::string& _mediaName);

                    /**
                     * 判断参数 MediaName 是否已赋值
                     * @return MediaName 是否已赋值
                     * 
                     */
                    bool MediaNameHasBeenSet() const;

                    /**
                     * 获取
                     * @return ClassId 
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置
                     * @param _classId 
                     * 
                     */
                    void SetClassId(const int64_t& _classId);

                    /**
                     * 判断参数 ClassId 是否已赋值
                     * @return ClassId 是否已赋值
                     * 
                     */
                    bool ClassIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return ExpireTime 
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置
                     * @param _expireTime 
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Duration 
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置
                     * @param _duration 
                     * 
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

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
                     * @return AudioGeneration 
                     * 
                     */
                    std::string GetAudioGeneration() const;

                    /**
                     * 设置
                     * @param _audioGeneration 
                     * 
                     */
                    void SetAudioGeneration(const std::string& _audioGeneration);

                    /**
                     * 判断参数 AudioGeneration 是否已赋值
                     * @return AudioGeneration 是否已赋值
                     * 
                     */
                    bool AudioGenerationHasBeenSet() const;

                    /**
                     * 获取
                     * @return PersonGeneration 
                     * 
                     */
                    std::string GetPersonGeneration() const;

                    /**
                     * 设置
                     * @param _personGeneration 
                     * 
                     */
                    void SetPersonGeneration(const std::string& _personGeneration);

                    /**
                     * 判断参数 PersonGeneration 是否已赋值
                     * @return PersonGeneration 是否已赋值
                     * 
                     */
                    bool PersonGenerationHasBeenSet() const;

                    /**
                     * 获取
                     * @return InputComplianceCheck 
                     * 
                     */
                    std::string GetInputComplianceCheck() const;

                    /**
                     * 设置
                     * @param _inputComplianceCheck 
                     * 
                     */
                    void SetInputComplianceCheck(const std::string& _inputComplianceCheck);

                    /**
                     * 判断参数 InputComplianceCheck 是否已赋值
                     * @return InputComplianceCheck 是否已赋值
                     * 
                     */
                    bool InputComplianceCheckHasBeenSet() const;

                    /**
                     * 获取
                     * @return OutputComplianceCheck 
                     * 
                     */
                    std::string GetOutputComplianceCheck() const;

                    /**
                     * 设置
                     * @param _outputComplianceCheck 
                     * 
                     */
                    void SetOutputComplianceCheck(const std::string& _outputComplianceCheck);

                    /**
                     * 判断参数 OutputComplianceCheck 是否已赋值
                     * @return OutputComplianceCheck 是否已赋值
                     * 
                     */
                    bool OutputComplianceCheckHasBeenSet() const;

                    /**
                     * 获取
                     * @return EnhanceSwitch 
                     * 
                     */
                    std::string GetEnhanceSwitch() const;

                    /**
                     * 设置
                     * @param _enhanceSwitch 
                     * 
                     */
                    void SetEnhanceSwitch(const std::string& _enhanceSwitch);

                    /**
                     * 判断参数 EnhanceSwitch 是否已赋值
                     * @return EnhanceSwitch 是否已赋值
                     * 
                     */
                    bool EnhanceSwitchHasBeenSet() const;

                    /**
                     * 获取
                     * @return OffPeak 
                     * 
                     */
                    std::string GetOffPeak() const;

                    /**
                     * 设置
                     * @param _offPeak 
                     * 
                     */
                    void SetOffPeak(const std::string& _offPeak);

                    /**
                     * 判断参数 OffPeak 是否已赋值
                     * @return OffPeak 是否已赋值
                     * 
                     */
                    bool OffPeakHasBeenSet() const;

                    /**
                     * 获取
                     * @return FrameInterpolate 
                     * 
                     */
                    std::string GetFrameInterpolate() const;

                    /**
                     * 设置
                     * @param _frameInterpolate 
                     * 
                     */
                    void SetFrameInterpolate(const std::string& _frameInterpolate);

                    /**
                     * 判断参数 FrameInterpolate 是否已赋值
                     * @return FrameInterpolate 是否已赋值
                     * 
                     */
                    bool FrameInterpolateHasBeenSet() const;

                    /**
                     * 获取
                     * @return LogoAdd 
                     * 
                     */
                    std::string GetLogoAdd() const;

                    /**
                     * 设置
                     * @param _logoAdd 
                     * 
                     */
                    void SetLogoAdd(const std::string& _logoAdd);

                    /**
                     * 判断参数 LogoAdd 是否已赋值
                     * @return LogoAdd 是否已赋值
                     * 
                     */
                    bool LogoAddHasBeenSet() const;

                    /**
                     * 获取
                     * @return EnableBGM 
                     * 
                     */
                    std::string GetEnableBGM() const;

                    /**
                     * 设置
                     * @param _enableBGM 
                     * 
                     */
                    void SetEnableBGM(const std::string& _enableBGM);

                    /**
                     * 判断参数 EnableBGM 是否已赋值
                     * @return EnableBGM 是否已赋值
                     * 
                     */
                    bool EnableBGMHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_storageMode;
                    bool m_storageModeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_mediaName;
                    bool m_mediaNameHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

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
                    std::string m_audioGeneration;
                    bool m_audioGenerationHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_personGeneration;
                    bool m_personGenerationHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_inputComplianceCheck;
                    bool m_inputComplianceCheckHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_outputComplianceCheck;
                    bool m_outputComplianceCheckHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_enhanceSwitch;
                    bool m_enhanceSwitchHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_offPeak;
                    bool m_offPeakHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_frameInterpolate;
                    bool m_frameInterpolateHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_logoAdd;
                    bool m_logoAddHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_enableBGM;
                    bool m_enableBGMHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOOUTPUTCONFIG_H_
