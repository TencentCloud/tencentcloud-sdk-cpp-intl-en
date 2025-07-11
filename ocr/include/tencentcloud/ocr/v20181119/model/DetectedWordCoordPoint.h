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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_DETECTEDWORDCOORDPOINT_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_DETECTEDWORDCOORDPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/Coord.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * Coordinates of a word’s four corners in a clockwise order on the input image, starting from the upper-left corner
                */
                class DetectedWordCoordPoint : public AbstractModel
                {
                public:
                    DetectedWordCoordPoint();
                    ~DetectedWordCoordPoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Coordinates of a word’s four corners in a clockwise order on the input image, starting from the upper-left corner
                     * @return WordCoordinate Coordinates of a word’s four corners in a clockwise order on the input image, starting from the upper-left corner
                     * 
                     */
                    std::vector<Coord> GetWordCoordinate() const;

                    /**
                     * 设置Coordinates of a word’s four corners in a clockwise order on the input image, starting from the upper-left corner
                     * @param _wordCoordinate Coordinates of a word’s four corners in a clockwise order on the input image, starting from the upper-left corner
                     * 
                     */
                    void SetWordCoordinate(const std::vector<Coord>& _wordCoordinate);

                    /**
                     * 判断参数 WordCoordinate 是否已赋值
                     * @return WordCoordinate 是否已赋值
                     * 
                     */
                    bool WordCoordinateHasBeenSet() const;

                private:

                    /**
                     * Coordinates of a word’s four corners in a clockwise order on the input image, starting from the upper-left corner
                     */
                    std::vector<Coord> m_wordCoordinate;
                    bool m_wordCoordinateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_DETECTEDWORDCOORDPOINT_H_
