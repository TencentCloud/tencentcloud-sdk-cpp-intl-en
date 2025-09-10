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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_TONEWORDINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_TONEWORDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/ZHToneWordsInfo.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * Undertake filler word info.
                */
                class ToneWordInfo : public AbstractModel
                {
                public:
                    ToneWordInfo();
                    ~ToneWordInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the timeout period for the first request in seconds.
                     * @return FirstSentenceTimeout Specifies the timeout period for the first request in seconds.
                     * 
                     */
                    double GetFirstSentenceTimeout() const;

                    /**
                     * 设置Specifies the timeout period for the first request in seconds.
                     * @param _firstSentenceTimeout Specifies the timeout period for the first request in seconds.
                     * 
                     */
                    void SetFirstSentenceTimeout(const double& _firstSentenceTimeout);

                    /**
                     * 判断参数 FirstSentenceTimeout 是否已赋值
                     * @return FirstSentenceTimeout 是否已赋值
                     * 
                     */
                    bool FirstSentenceTimeoutHasBeenSet() const;

                    /**
                     * 获取Undertakes a modal particle.
                     * @return ZHToneWords Undertakes a modal particle.
                     * 
                     */
                    ZHToneWordsInfo GetZHToneWords() const;

                    /**
                     * 设置Undertakes a modal particle.
                     * @param _zHToneWords Undertakes a modal particle.
                     * 
                     */
                    void SetZHToneWords(const ZHToneWordsInfo& _zHToneWords);

                    /**
                     * 判断参数 ZHToneWords 是否已赋值
                     * @return ZHToneWords 是否已赋值
                     * 
                     */
                    bool ZHToneWordsHasBeenSet() const;

                private:

                    /**
                     * Specifies the timeout period for the first request in seconds.
                     */
                    double m_firstSentenceTimeout;
                    bool m_firstSentenceTimeoutHasBeenSet;

                    /**
                     * Undertakes a modal particle.
                     */
                    ZHToneWordsInfo m_zHToneWords;
                    bool m_zHToneWordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_TONEWORDINFO_H_
