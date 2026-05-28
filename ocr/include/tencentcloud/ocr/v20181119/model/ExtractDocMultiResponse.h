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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_EXTRACTDOCMULTIRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_EXTRACTDOCMULTIRESPONSE_H_

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
                * ExtractDocMulti response structure.
                */
                class ExtractDocMultiResponse : public AbstractModel
                {
                public:
                    ExtractDocMultiResponse();
                    ~ExtractDocMultiResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Image rotation angle (angle system). the text's horizontal direction is 0. clockwise is positive; counterclockwise is negative.
                     * @return Angle Image rotation angle (angle system). the text's horizontal direction is 0. clockwise is positive; counterclockwise is negative.
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
                     * 获取Configures the structured text info.
                     * @return StructuralList Configures the structured text info.
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
                     * 获取Restore text information.
                     * @return WordList Restore text information.
                     * 
                     */
                    std::vector<WordItem> GetWordList() const;

                    /**
                     * 判断参数 WordList 是否已赋值
                     * @return WordList 是否已赋值
                     * 
                     */
                    bool WordListHasBeenSet() const;

                    /**
                     * 获取Number of sample identification fields.
                     * @return TokenNum Number of sample identification fields.
                     * 
                     */
                    int64_t GetTokenNum() const;

                    /**
                     * 判断参数 TokenNum 是否已赋值
                     * @return TokenNum 是否已赋值
                     * 
                     */
                    bool TokenNumHasBeenSet() const;

                private:

                    /**
                     * Image rotation angle (angle system). the text's horizontal direction is 0. clockwise is positive; counterclockwise is negative.
                     */
                    double m_angle;
                    bool m_angleHasBeenSet;

                    /**
                     * Configures the structured text info.
                     */
                    std::vector<GroupInfo> m_structuralList;
                    bool m_structuralListHasBeenSet;

                    /**
                     * Restore text information.
                     */
                    std::vector<WordItem> m_wordList;
                    bool m_wordListHasBeenSet;

                    /**
                     * Number of sample identification fields.
                     */
                    int64_t m_tokenNum;
                    bool m_tokenNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_EXTRACTDOCMULTIRESPONSE_H_
