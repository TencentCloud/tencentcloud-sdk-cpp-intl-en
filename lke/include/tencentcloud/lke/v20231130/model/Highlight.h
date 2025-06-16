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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_HIGHLIGHT_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_HIGHLIGHT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Fragment highlight content.
                */
                class Highlight : public AbstractModel
                {
                public:
                    Highlight();
                    ~Highlight() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Highlight starting position.
                     * @return StartPos Highlight starting position.
                     * 
                     */
                    std::string GetStartPos() const;

                    /**
                     * 设置Highlight starting position.
                     * @param _startPos Highlight starting position.
                     * 
                     */
                    void SetStartPos(const std::string& _startPos);

                    /**
                     * 判断参数 StartPos 是否已赋值
                     * @return StartPos 是否已赋值
                     * 
                     */
                    bool StartPosHasBeenSet() const;

                    /**
                     * 获取Highlight end position.
                     * @return EndPos Highlight end position.
                     * 
                     */
                    std::string GetEndPos() const;

                    /**
                     * 设置Highlight end position.
                     * @param _endPos Highlight end position.
                     * 
                     */
                    void SetEndPos(const std::string& _endPos);

                    /**
                     * 判断参数 EndPos 是否已赋值
                     * @return EndPos 是否已赋值
                     * 
                     */
                    bool EndPosHasBeenSet() const;

                    /**
                     * 获取Highlight subtext.
                     * @return Text Highlight subtext.
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置Highlight subtext.
                     * @param _text Highlight subtext.
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                private:

                    /**
                     * Highlight starting position.
                     */
                    std::string m_startPos;
                    bool m_startPosHasBeenSet;

                    /**
                     * Highlight end position.
                     */
                    std::string m_endPos;
                    bool m_endPosHasBeenSet;

                    /**
                     * Highlight subtext.
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_HIGHLIGHT_H_
