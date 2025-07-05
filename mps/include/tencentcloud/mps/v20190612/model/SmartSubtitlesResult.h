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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLESRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLESRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SmartSubtitleTaskAsrFullTextResult.h>
#include <tencentcloud/mps/v20190612/model/SmartSubtitleTaskTransTextResult.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Smart subtitle task result.
                */
                class SmartSubtitlesResult : public AbstractModel
                {
                public:
                    SmartSubtitlesResult();
                    ~SmartSubtitlesResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task type. Valid values:
<Li>AsrFullTextRecognition: full speech recognition</li>
<Li>TransTextRecognition: speech translation</li>
                     * @return Type Task type. Valid values:
<Li>AsrFullTextRecognition: full speech recognition</li>
<Li>TransTextRecognition: speech translation</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Task type. Valid values:
<Li>AsrFullTextRecognition: full speech recognition</li>
<Li>TransTextRecognition: speech translation</li>
                     * @param _type Task type. Valid values:
<Li>AsrFullTextRecognition: full speech recognition</li>
<Li>TransTextRecognition: speech translation</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Full speech recognition result. When Type is
 set to AsrFullTextRecognition, this parameter takes effect.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AsrFullTextTask Full speech recognition result. When Type is
 set to AsrFullTextRecognition, this parameter takes effect.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    SmartSubtitleTaskAsrFullTextResult GetAsrFullTextTask() const;

                    /**
                     * 设置Full speech recognition result. When Type is
 set to AsrFullTextRecognition, this parameter takes effect.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _asrFullTextTask Full speech recognition result. When Type is
 set to AsrFullTextRecognition, this parameter takes effect.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAsrFullTextTask(const SmartSubtitleTaskAsrFullTextResult& _asrFullTextTask);

                    /**
                     * 判断参数 AsrFullTextTask 是否已赋值
                     * @return AsrFullTextTask 是否已赋值
                     * 
                     */
                    bool AsrFullTextTaskHasBeenSet() const;

                    /**
                     * 获取Translation result. When Type is

 set to TransTextRecognition, this parameter takes effect.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TransTextTask Translation result. When Type is

 set to TransTextRecognition, this parameter takes effect.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    SmartSubtitleTaskTransTextResult GetTransTextTask() const;

                    /**
                     * 设置Translation result. When Type is

 set to TransTextRecognition, this parameter takes effect.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _transTextTask Translation result. When Type is

 set to TransTextRecognition, this parameter takes effect.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTransTextTask(const SmartSubtitleTaskTransTextResult& _transTextTask);

                    /**
                     * 判断参数 TransTextTask 是否已赋值
                     * @return TransTextTask 是否已赋值
                     * 
                     */
                    bool TransTextTaskHasBeenSet() const;

                private:

                    /**
                     * Task type. Valid values:
<Li>AsrFullTextRecognition: full speech recognition</li>
<Li>TransTextRecognition: speech translation</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Full speech recognition result. When Type is
 set to AsrFullTextRecognition, this parameter takes effect.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    SmartSubtitleTaskAsrFullTextResult m_asrFullTextTask;
                    bool m_asrFullTextTaskHasBeenSet;

                    /**
                     * Translation result. When Type is

 set to TransTextRecognition, this parameter takes effect.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    SmartSubtitleTaskTransTextResult m_transTextTask;
                    bool m_transTextTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLESRESULT_H_
