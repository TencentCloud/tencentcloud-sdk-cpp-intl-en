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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_SMARTSTRUCTURALOCRV2RESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_SMARTSTRUCTURALOCRV2RESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/GroupInfo.h>
#include <tencentcloud/ocr/v20181119/model/WordItem.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * SmartStructuralOCRV2 response structure.
                */
                class SmartStructuralOCRV2Response : public AbstractModel
                {
                public:
                    SmartStructuralOCRV2Response();
                    ~SmartStructuralOCRV2Response() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The rotation angle (degrees) of the text on the image. 0: The text is horizontal. Positive value: The text is rotated clockwise. Negative value: The text is rotated counterclockwise.
                     * @return Angle The rotation angle (degrees) of the text on the image. 0: The text is horizontal. Positive value: The text is rotated clockwise. Negative value: The text is rotated counterclockwise.
                     * 
                     */
                    double GetAngle() const;

                    /**
                     * 判断参数 Angle 是否已赋值
                     * @return Angle 是否已赋值
                     * 
                     */
                    bool AngleHasBeenSet() const;

                    /**
                     * 获取The structural information (key-value).
                     * @return StructuralList The structural information (key-value).
                     * 
                     */
                    std::vector<GroupInfo> GetStructuralList() const;

                    /**
                     * 判断参数 StructuralList 是否已赋值
                     * @return StructuralList 是否已赋值
                     * 
                     */
                    bool StructuralListHasBeenSet() const;

                    /**
                     * 获取The recognized text information.
                     * @return WordList The recognized text information.
                     * 
                     */
                    std::vector<WordItem> GetWordList() const;

                    /**
                     * 判断参数 WordList 是否已赋值
                     * @return WordList 是否已赋值
                     * 
                     */
                    bool WordListHasBeenSet() const;

                private:

                    /**
                     * The rotation angle (degrees) of the text on the image. 0: The text is horizontal. Positive value: The text is rotated clockwise. Negative value: The text is rotated counterclockwise.
                     */
                    double m_angle;
                    bool m_angleHasBeenSet;

                    /**
                     * The structural information (key-value).
                     */
                    std::vector<GroupInfo> m_structuralList;
                    bool m_structuralListHasBeenSet;

                    /**
                     * The recognized text information.
                     */
                    std::vector<WordItem> m_wordList;
                    bool m_wordListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_SMARTSTRUCTURALOCRV2RESPONSE_H_
