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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_SEALINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_SEALINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/Rect.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * Seal information
                */
                class SealInfo : public AbstractModel
                {
                public:
                    SealInfo();
                    ~SealInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Seal body information
                     * @return SealBody Seal body information
                     * 
                     */
                    std::string GetSealBody() const;

                    /**
                     * 设置Seal body information
                     * @param _sealBody Seal body information
                     * 
                     */
                    void SetSealBody(const std::string& _sealBody);

                    /**
                     * 判断参数 SealBody 是否已赋值
                     * @return SealBody 是否已赋值
                     * 
                     */
                    bool SealBodyHasBeenSet() const;

                    /**
                     * 获取Seal coordinates
                     * @return Location Seal coordinates
                     * 
                     */
                    Rect GetLocation() const;

                    /**
                     * 设置Seal coordinates
                     * @param _location Seal coordinates
                     * 
                     */
                    void SetLocation(const Rect& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取Other text content
                     * @return OtherTexts Other text content
                     * 
                     */
                    std::vector<std::string> GetOtherTexts() const;

                    /**
                     * 设置Other text content
                     * @param _otherTexts Other text content
                     * 
                     */
                    void SetOtherTexts(const std::vector<std::string>& _otherTexts);

                    /**
                     * 判断参数 OtherTexts 是否已赋值
                     * @return OtherTexts 是否已赋值
                     * 
                     */
                    bool OtherTextsHasBeenSet() const;

                    /**
                     * 获取Seal shape. Valid values:
0: Round
1: Oval
2: Rectangle
3: Diamond
4: Triangle
                     * @return SealShape Seal shape. Valid values:
0: Round
1: Oval
2: Rectangle
3: Diamond
4: Triangle
                     * 
                     */
                    std::string GetSealShape() const;

                    /**
                     * 设置Seal shape. Valid values:
0: Round
1: Oval
2: Rectangle
3: Diamond
4: Triangle
                     * @param _sealShape Seal shape. Valid values:
0: Round
1: Oval
2: Rectangle
3: Diamond
4: Triangle
                     * 
                     */
                    void SetSealShape(const std::string& _sealShape);

                    /**
                     * 判断参数 SealShape 是否已赋值
                     * @return SealShape 是否已赋值
                     * 
                     */
                    bool SealShapeHasBeenSet() const;

                private:

                    /**
                     * Seal body information
                     */
                    std::string m_sealBody;
                    bool m_sealBodyHasBeenSet;

                    /**
                     * Seal coordinates
                     */
                    Rect m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * Other text content
                     */
                    std::vector<std::string> m_otherTexts;
                    bool m_otherTextsHasBeenSet;

                    /**
                     * Seal shape. Valid values:
0: Round
1: Oval
2: Rectangle
3: Diamond
4: Triangle
                     */
                    std::string m_sealShape;
                    bool m_sealShapeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_SEALINFO_H_
