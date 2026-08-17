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
                * Quality inspection exception item.
                */
                class QualityControlResult : public AbstractModel
                {
                public:
                    QualityControlResult();
                    ~QualityControlResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Exception type. Valid values:
Jitter: jitter.
Blur: blurry.
LowLighting: low light.
HighLighting: overexposure.
CrashScreen: screen glitch.
BlackWhiteEdge: Black and white edges
SolidColorScreen: solid color screen.
Noise: noise.
Mosaic: Mosaic
QRCode: QR code.
AppletCode: Mini program code.
BarCode: barcode.
LowVoice: bass.
HighVoice: high voice detection.
NoVoice: mute.
LowEvaluation: The video no-reference score (MOS) is below the threshold.
AudioEvaluation: The audio no-reference scoring (MOS) is below the threshold.
AudioNoise: Audio noise.
                     * @return Type Exception type. Valid values:
Jitter: jitter.
Blur: blurry.
LowLighting: low light.
HighLighting: overexposure.
CrashScreen: screen glitch.
BlackWhiteEdge: Black and white edges
SolidColorScreen: solid color screen.
Noise: noise.
Mosaic: Mosaic
QRCode: QR code.
AppletCode: Mini program code.
BarCode: barcode.
LowVoice: bass.
HighVoice: high voice detection.
NoVoice: mute.
LowEvaluation: The video no-reference score (MOS) is below the threshold.
AudioEvaluation: The audio no-reference scoring (MOS) is below the threshold.
AudioNoise: Audio noise.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Exception type. Valid values:
Jitter: jitter.
Blur: blurry.
LowLighting: low light.
HighLighting: overexposure.
CrashScreen: screen glitch.
BlackWhiteEdge: Black and white edges
SolidColorScreen: solid color screen.
Noise: noise.
Mosaic: Mosaic
QRCode: QR code.
AppletCode: Mini program code.
BarCode: barcode.
LowVoice: bass.
HighVoice: high voice detection.
NoVoice: mute.
LowEvaluation: The video no-reference score (MOS) is below the threshold.
AudioEvaluation: The audio no-reference scoring (MOS) is below the threshold.
AudioNoise: Audio noise.
                     * @param _type Exception type. Valid values:
Jitter: jitter.
Blur: blurry.
LowLighting: low light.
HighLighting: overexposure.
CrashScreen: screen glitch.
BlackWhiteEdge: Black and white edges
SolidColorScreen: solid color screen.
Noise: noise.
Mosaic: Mosaic
QRCode: QR code.
AppletCode: Mini program code.
BarCode: barcode.
LowVoice: bass.
HighVoice: high voice detection.
NoVoice: mute.
LowEvaluation: The video no-reference score (MOS) is below the threshold.
AudioEvaluation: The audio no-reference scoring (MOS) is below the threshold.
AudioNoise: Audio noise.
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
                     * 获取Quality inspection result item.
                     * @return QualityControlItems Quality inspection result item.
                     * 
                     */
                    std::vector<QualityControlItem> GetQualityControlItems() const;

                    /**
                     * 设置Quality inspection result item.
                     * @param _qualityControlItems Quality inspection result item.
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
                     * Exception type. Valid values:
Jitter: jitter.
Blur: blurry.
LowLighting: low light.
HighLighting: overexposure.
CrashScreen: screen glitch.
BlackWhiteEdge: Black and white edges
SolidColorScreen: solid color screen.
Noise: noise.
Mosaic: Mosaic
QRCode: QR code.
AppletCode: Mini program code.
BarCode: barcode.
LowVoice: bass.
HighVoice: high voice detection.
NoVoice: mute.
LowEvaluation: The video no-reference score (MOS) is below the threshold.
AudioEvaluation: The audio no-reference scoring (MOS) is below the threshold.
AudioNoise: Audio noise.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Quality inspection result item.
                     */
                    std::vector<QualityControlItem> m_qualityControlItems;
                    bool m_qualityControlItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_QUALITYCONTROLRESULT_H_
