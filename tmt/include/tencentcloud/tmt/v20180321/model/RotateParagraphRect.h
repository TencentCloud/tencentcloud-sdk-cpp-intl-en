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

#ifndef TENCENTCLOUD_TMT_V20180321_MODEL_ROTATEPARAGRAPHRECT_H_
#define TENCENTCLOUD_TMT_V20180321_MODEL_ROTATEPARAGRAPHRECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tmt/v20180321/model/Coord.h>


namespace TencentCloud
{
    namespace Tmt
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * Paragraph text rotation information
                */
                class RotateParagraphRect : public AbstractModel
                {
                public:
                    RotateParagraphRect();
                    ~RotateParagraphRect() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Paragraph text coordinates
                     * @return Coord Paragraph text coordinates
                     * 
                     */
                    std::vector<Coord> GetCoord() const;

                    /**
                     * 设置Paragraph text coordinates
                     * @param _coord Paragraph text coordinates
                     * 
                     */
                    void SetCoord(const std::vector<Coord>& _coord);

                    /**
                     * 判断参数 Coord 是否已赋值
                     * @return Coord 是否已赋值
                     * 
                     */
                    bool CoordHasBeenSet() const;

                    /**
                     * 获取Rotation angle
                     * @return TiltAngle Rotation angle
                     * 
                     */
                    double GetTiltAngle() const;

                    /**
                     * 设置Rotation angle
                     * @param _tiltAngle Rotation angle
                     * 
                     */
                    void SetTiltAngle(const double& _tiltAngle);

                    /**
                     * 判断参数 TiltAngle 是否已赋值
                     * @return TiltAngle 是否已赋值
                     * 
                     */
                    bool TiltAngleHasBeenSet() const;

                    /**
                     * 获取Whether the paragraph text information is valid
                     * @return Valid Whether the paragraph text information is valid
                     * 
                     */
                    bool GetValid() const;

                    /**
                     * 设置Whether the paragraph text information is valid
                     * @param _valid Whether the paragraph text information is valid
                     * 
                     */
                    void SetValid(const bool& _valid);

                    /**
                     * 判断参数 Valid 是否已赋值
                     * @return Valid 是否已赋值
                     * 
                     */
                    bool ValidHasBeenSet() const;

                private:

                    /**
                     * Paragraph text coordinates
                     */
                    std::vector<Coord> m_coord;
                    bool m_coordHasBeenSet;

                    /**
                     * Rotation angle
                     */
                    double m_tiltAngle;
                    bool m_tiltAngleHasBeenSet;

                    /**
                     * Whether the paragraph text information is valid
                     */
                    bool m_valid;
                    bool m_validHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMT_V20180321_MODEL_ROTATEPARAGRAPHRECT_H_
