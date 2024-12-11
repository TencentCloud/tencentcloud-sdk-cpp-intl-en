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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_WORDRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_WORDRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Word information.
                */
                class WordResult : public AbstractModel
                {
                public:
                    WordResult();
                    ~WordResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Word text.
                     * @return Word Word text.
                     * 
                     */
                    std::string GetWord() const;

                    /**
                     * 设置Word text.
                     * @param _word Word text.
                     * 
                     */
                    void SetWord(const std::string& _word);

                    /**
                     * 判断参数 Word 是否已赋值
                     * @return Word 是否已赋值
                     * 
                     */
                    bool WordHasBeenSet() const;

                    /**
                     * 获取Word start timestamp, in seconds.
                     * @return Start Word start timestamp, in seconds.
                     * 
                     */
                    double GetStart() const;

                    /**
                     * 设置Word start timestamp, in seconds.
                     * @param _start Word start timestamp, in seconds.
                     * 
                     */
                    void SetStart(const double& _start);

                    /**
                     * 判断参数 Start 是否已赋值
                     * @return Start 是否已赋值
                     * 
                     */
                    bool StartHasBeenSet() const;

                    /**
                     * 获取Word end timestamp, in seconds.
                     * @return End Word end timestamp, in seconds.
                     * 
                     */
                    double GetEnd() const;

                    /**
                     * 设置Word end timestamp, in seconds.
                     * @param _end Word end timestamp, in seconds.
                     * 
                     */
                    void SetEnd(const double& _end);

                    /**
                     * 判断参数 End 是否已赋值
                     * @return End 是否已赋值
                     * 
                     */
                    bool EndHasBeenSet() const;

                private:

                    /**
                     * Word text.
                     */
                    std::string m_word;
                    bool m_wordHasBeenSet;

                    /**
                     * Word start timestamp, in seconds.
                     */
                    double m_start;
                    bool m_startHasBeenSet;

                    /**
                     * Word end timestamp, in seconds.
                     */
                    double m_end;
                    bool m_endHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_WORDRESULT_H_
