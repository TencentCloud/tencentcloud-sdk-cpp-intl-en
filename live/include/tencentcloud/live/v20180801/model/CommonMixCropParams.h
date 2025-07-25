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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_COMMONMIXCROPPARAMS_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_COMMONMIXCROPPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * General stream mix input crop parameter.
                */
                class CommonMixCropParams : public AbstractModel
                {
                public:
                    CommonMixCropParams();
                    ~CommonMixCropParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Crop width. Value range: [0,2000].
                     * @return CropWidth Crop width. Value range: [0,2000].
                     * 
                     */
                    double GetCropWidth() const;

                    /**
                     * 设置Crop width. Value range: [0,2000].
                     * @param _cropWidth Crop width. Value range: [0,2000].
                     * 
                     */
                    void SetCropWidth(const double& _cropWidth);

                    /**
                     * 判断参数 CropWidth 是否已赋值
                     * @return CropWidth 是否已赋值
                     * 
                     */
                    bool CropWidthHasBeenSet() const;

                    /**
                     * 获取Crop height. Value range: [0,2000].
                     * @return CropHeight Crop height. Value range: [0,2000].
                     * 
                     */
                    double GetCropHeight() const;

                    /**
                     * 设置Crop height. Value range: [0,2000].
                     * @param _cropHeight Crop height. Value range: [0,2000].
                     * 
                     */
                    void SetCropHeight(const double& _cropHeight);

                    /**
                     * 判断参数 CropHeight 是否已赋值
                     * @return CropHeight 是否已赋值
                     * 
                     */
                    bool CropHeightHasBeenSet() const;

                    /**
                     * 获取Starting crop X coordinate. Value range: [0,2000].
                     * @return CropStartLocationX Starting crop X coordinate. Value range: [0,2000].
                     * 
                     */
                    double GetCropStartLocationX() const;

                    /**
                     * 设置Starting crop X coordinate. Value range: [0,2000].
                     * @param _cropStartLocationX Starting crop X coordinate. Value range: [0,2000].
                     * 
                     */
                    void SetCropStartLocationX(const double& _cropStartLocationX);

                    /**
                     * 判断参数 CropStartLocationX 是否已赋值
                     * @return CropStartLocationX 是否已赋值
                     * 
                     */
                    bool CropStartLocationXHasBeenSet() const;

                    /**
                     * 获取Starting crop Y coordinate. Value range: [0,2000].
                     * @return CropStartLocationY Starting crop Y coordinate. Value range: [0,2000].
                     * 
                     */
                    double GetCropStartLocationY() const;

                    /**
                     * 设置Starting crop Y coordinate. Value range: [0,2000].
                     * @param _cropStartLocationY Starting crop Y coordinate. Value range: [0,2000].
                     * 
                     */
                    void SetCropStartLocationY(const double& _cropStartLocationY);

                    /**
                     * 判断参数 CropStartLocationY 是否已赋值
                     * @return CropStartLocationY 是否已赋值
                     * 
                     */
                    bool CropStartLocationYHasBeenSet() const;

                private:

                    /**
                     * Crop width. Value range: [0,2000].
                     */
                    double m_cropWidth;
                    bool m_cropWidthHasBeenSet;

                    /**
                     * Crop height. Value range: [0,2000].
                     */
                    double m_cropHeight;
                    bool m_cropHeightHasBeenSet;

                    /**
                     * Starting crop X coordinate. Value range: [0,2000].
                     */
                    double m_cropStartLocationX;
                    bool m_cropStartLocationXHasBeenSet;

                    /**
                     * Starting crop Y coordinate. Value range: [0,2000].
                     */
                    double m_cropStartLocationY;
                    bool m_cropStartLocationYHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_COMMONMIXCROPPARAMS_H_
