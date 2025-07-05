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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_SEALOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_SEALOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/Rect.h>
#include <tencentcloud/ocr/v20181119/model/SealInfo.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * SealOCR response structure.
                */
                class SealOCRResponse : public AbstractModel
                {
                public:
                    SealOCRResponse();
                    ~SealOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Seal content
                     * @return SealBody Seal content
                     * 
                     */
                    std::string GetSealBody() const;

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
                     * 判断参数 OtherTexts 是否已赋值
                     * @return OtherTexts 是否已赋值
                     * 
                     */
                    bool OtherTextsHasBeenSet() const;

                    /**
                     * 获取All seal information
                     * @return SealInfos All seal information
                     * 
                     */
                    std::vector<SealInfo> GetSealInfos() const;

                    /**
                     * 判断参数 SealInfos 是否已赋值
                     * @return SealInfos 是否已赋值
                     * 
                     */
                    bool SealInfosHasBeenSet() const;

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
                     * 判断参数 SealShape 是否已赋值
                     * @return SealShape 是否已赋值
                     * 
                     */
                    bool SealShapeHasBeenSet() const;

                private:

                    /**
                     * Seal content
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
                     * All seal information
                     */
                    std::vector<SealInfo> m_sealInfos;
                    bool m_sealInfosHasBeenSet;

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

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_SEALOCRRESPONSE_H_
