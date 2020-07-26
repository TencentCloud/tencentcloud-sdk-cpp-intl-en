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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_RAWWATERMARKPARAMETER_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_RAWWATERMARKPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/RawImageWatermarkInput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Custom watermark specifications.
                */
                class RawWatermarkParameter : public AbstractModel
                {
                public:
                    RawWatermarkParameter();
                    ~RawWatermarkParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Type 
                     */
                    std::string GetType() const;

                    /**
                     * 设置
                     * @param Type 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return CoordinateOrigin 
                     */
                    std::string GetCoordinateOrigin() const;

                    /**
                     * 设置
                     * @param CoordinateOrigin 
                     */
                    void SetCoordinateOrigin(const std::string& _coordinateOrigin);

                    /**
                     * 判断参数 CoordinateOrigin 是否已赋值
                     * @return CoordinateOrigin 是否已赋值
                     */
                    bool CoordinateOriginHasBeenSet() const;

                    /**
                     * 获取
                     * @return XPos 
                     */
                    std::string GetXPos() const;

                    /**
                     * 设置
                     * @param XPos 
                     */
                    void SetXPos(const std::string& _xPos);

                    /**
                     * 判断参数 XPos 是否已赋值
                     * @return XPos 是否已赋值
                     */
                    bool XPosHasBeenSet() const;

                    /**
                     * 获取
                     * @return YPos 
                     */
                    std::string GetYPos() const;

                    /**
                     * 设置
                     * @param YPos 
                     */
                    void SetYPos(const std::string& _yPos);

                    /**
                     * 判断参数 YPos 是否已赋值
                     * @return YPos 是否已赋值
                     */
                    bool YPosHasBeenSet() const;

                    /**
                     * 获取
                     * @return ImageTemplate 
                     */
                    RawImageWatermarkInput GetImageTemplate() const;

                    /**
                     * 设置
                     * @param ImageTemplate 
                     */
                    void SetImageTemplate(const RawImageWatermarkInput& _imageTemplate);

                    /**
                     * 判断参数 ImageTemplate 是否已赋值
                     * @return ImageTemplate 是否已赋值
                     */
                    bool ImageTemplateHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_coordinateOrigin;
                    bool m_coordinateOriginHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_xPos;
                    bool m_xPosHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_yPos;
                    bool m_yPosHasBeenSet;

                    /**
                     * 
                     */
                    RawImageWatermarkInput m_imageTemplate;
                    bool m_imageTemplateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_RAWWATERMARKPARAMETER_H_
