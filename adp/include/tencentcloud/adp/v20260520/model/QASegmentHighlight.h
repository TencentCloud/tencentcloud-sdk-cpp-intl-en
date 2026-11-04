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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_QASEGMENTHIGHLIGHT_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_QASEGMENTHIGHLIGHT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * QA fragment highlight info
                */
                class QASegmentHighlight : public AbstractModel
                {
                public:
                    QASegmentHighlight();
                    ~QASegmentHighlight() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Highlight end position</p>
                     * @return EndPos <p>Highlight end position</p>
                     * 
                     */
                    std::string GetEndPos() const;

                    /**
                     * 设置<p>Highlight end position</p>
                     * @param _endPos <p>Highlight end position</p>
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
                     * 获取<p>Highlight starting position</p>
                     * @return StartPos <p>Highlight starting position</p>
                     * 
                     */
                    std::string GetStartPos() const;

                    /**
                     * 设置<p>Highlight starting position</p>
                     * @param _startPos <p>Highlight starting position</p>
                     * 
                     */
                    void SetStartPos(const std::string& _startPos);

                    /**
                     * 判断参数 StartPos 是否已赋值
                     * @return StartPos 是否已赋值
                     * 
                     */
                    bool StartPosHasBeenSet() const;

                private:

                    /**
                     * <p>Highlight end position</p>
                     */
                    std::string m_endPos;
                    bool m_endPosHasBeenSet;

                    /**
                     * <p>Highlight starting position</p>
                     */
                    std::string m_startPos;
                    bool m_startPosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_QASEGMENTHIGHLIGHT_H_
