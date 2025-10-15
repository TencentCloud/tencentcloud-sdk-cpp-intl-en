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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_QUALITYCONTROLRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_QUALITYCONTROLRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/QualityControlItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The issues detected by quality control.
                */
                class QualityControlResult : public AbstractModel
                {
                public:
                    QualityControlResult();
                    ~QualityControlResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Exception type. valid values:.
Jitter: jitter.
Blur: specifies the blur effect.
LowLighting: specifies low light.
HighLighting: overexposure.
CrashScreen: specifies screen glitch.
BlackWhiteEdge: specifies the black and white edges.
SolidColorScreen: specifies the solid color screen.
Noise: specifies the noise.
Mosaic: mosaic.
QRCode: specifies the qr code.
AppletCode: specifies the mini program code.
BarCode: specifies the barcode.
LowVoice: specifies the bass.
HighVoice: specifies high voice detection.
NoVoice: specifies mute.
LowEvaluation: specifies the video no-reference score (MOS) is below the threshold.
AudioEvaluation: specifies the audio no-reference scoring (MOS) is below the threshold.
AudioNoise: specifies the audio noise.
                     * @return Type Exception type. valid values:.
Jitter: jitter.
Blur: specifies the blur effect.
LowLighting: specifies low light.
HighLighting: overexposure.
CrashScreen: specifies screen glitch.
BlackWhiteEdge: specifies the black and white edges.
SolidColorScreen: specifies the solid color screen.
Noise: specifies the noise.
Mosaic: mosaic.
QRCode: specifies the qr code.
AppletCode: specifies the mini program code.
BarCode: specifies the barcode.
LowVoice: specifies the bass.
HighVoice: specifies high voice detection.
NoVoice: specifies mute.
LowEvaluation: specifies the video no-reference score (MOS) is below the threshold.
AudioEvaluation: specifies the audio no-reference scoring (MOS) is below the threshold.
AudioNoise: specifies the audio noise.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Exception type. valid values:.
Jitter: jitter.
Blur: specifies the blur effect.
LowLighting: specifies low light.
HighLighting: overexposure.
CrashScreen: specifies screen glitch.
BlackWhiteEdge: specifies the black and white edges.
SolidColorScreen: specifies the solid color screen.
Noise: specifies the noise.
Mosaic: mosaic.
QRCode: specifies the qr code.
AppletCode: specifies the mini program code.
BarCode: specifies the barcode.
LowVoice: specifies the bass.
HighVoice: specifies high voice detection.
NoVoice: specifies mute.
LowEvaluation: specifies the video no-reference score (MOS) is below the threshold.
AudioEvaluation: specifies the audio no-reference scoring (MOS) is below the threshold.
AudioNoise: specifies the audio noise.
                     * @param _type Exception type. valid values:.
Jitter: jitter.
Blur: specifies the blur effect.
LowLighting: specifies low light.
HighLighting: overexposure.
CrashScreen: specifies screen glitch.
BlackWhiteEdge: specifies the black and white edges.
SolidColorScreen: specifies the solid color screen.
Noise: specifies the noise.
Mosaic: mosaic.
QRCode: specifies the qr code.
AppletCode: specifies the mini program code.
BarCode: specifies the barcode.
LowVoice: specifies the bass.
HighVoice: specifies high voice detection.
NoVoice: specifies mute.
LowEvaluation: specifies the video no-reference score (MOS) is below the threshold.
AudioEvaluation: specifies the audio no-reference scoring (MOS) is below the threshold.
AudioNoise: specifies the audio noise.
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
                     * 获取The information of a checked segment in quality control.
                     * @return QualityControlItems The information of a checked segment in quality control.
                     * 
                     */
                    std::vector<QualityControlItem> GetQualityControlItems() const;

                    /**
                     * 设置The information of a checked segment in quality control.
                     * @param _qualityControlItems The information of a checked segment in quality control.
                     * 
                     */
                    void SetQualityControlItems(const std::vector<QualityControlItem>& _qualityControlItems);

                    /**
                     * 判断参数 QualityControlItems 是否已赋值
                     * @return QualityControlItems 是否已赋值
                     * 
                     */
                    bool QualityControlItemsHasBeenSet() const;

                private:

                    /**
                     * Exception type. valid values:.
Jitter: jitter.
Blur: specifies the blur effect.
LowLighting: specifies low light.
HighLighting: overexposure.
CrashScreen: specifies screen glitch.
BlackWhiteEdge: specifies the black and white edges.
SolidColorScreen: specifies the solid color screen.
Noise: specifies the noise.
Mosaic: mosaic.
QRCode: specifies the qr code.
AppletCode: specifies the mini program code.
BarCode: specifies the barcode.
LowVoice: specifies the bass.
HighVoice: specifies high voice detection.
NoVoice: specifies mute.
LowEvaluation: specifies the video no-reference score (MOS) is below the threshold.
AudioEvaluation: specifies the audio no-reference scoring (MOS) is below the threshold.
AudioNoise: specifies the audio noise.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The information of a checked segment in quality control.
                     */
                    std::vector<QualityControlItem> m_qualityControlItems;
                    bool m_qualityControlItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_QUALITYCONTROLRESULT_H_
