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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_OCRWORDSCONFIGUREINFOFORUPDATE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_OCRWORDSCONFIGUREINFOFORUPDATE_H_

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
                * Text keyword recognition control parameters.
                */
                class OcrWordsConfigureInfoForUpdate : public AbstractModel
                {
                public:
                    OcrWordsConfigureInfoForUpdate();
                    ~OcrWordsConfigureInfoForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task switch for text keyword recognition, available values:
<li>ON: Enable text keyword recognition task;</li>
<li>OFF: Disables the text keyword recognition task.</li>
                     * @return Switch Task switch for text keyword recognition, available values:
<li>ON: Enable text keyword recognition task;</li>
<li>OFF: Disables the text keyword recognition task.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Task switch for text keyword recognition, available values:
<li>ON: Enable text keyword recognition task;</li>
<li>OFF: Disables the text keyword recognition task.</li>
                     * @param _switch Task switch for text keyword recognition, available values:
<li>ON: Enable text keyword recognition task;</li>
<li>OFF: Disables the text keyword recognition task.</li>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Keyword-based filtering tag, specify the tag of the keyword that needs to be returned. If left blank or empty, all results are returned.
The number of tags is up to 10, and each tag can have up to 16 characters.
                     * @return LabelSet Keyword-based filtering tag, specify the tag of the keyword that needs to be returned. If left blank or empty, all results are returned.
The number of tags is up to 10, and each tag can have up to 16 characters.
                     * 
                     */
                    std::vector<std::string> GetLabelSet() const;

                    /**
                     * 设置Keyword-based filtering tag, specify the tag of the keyword that needs to be returned. If left blank or empty, all results are returned.
The number of tags is up to 10, and each tag can have up to 16 characters.
                     * @param _labelSet Keyword-based filtering tag, specify the tag of the keyword that needs to be returned. If left blank or empty, all results are returned.
The number of tags is up to 10, and each tag can have up to 16 characters.
                     * 
                     */
                    void SetLabelSet(const std::vector<std::string>& _labelSet);

                    /**
                     * 判断参数 LabelSet 是否已赋值
                     * @return LabelSet 是否已赋值
                     * 
                     */
                    bool LabelSetHasBeenSet() const;

                private:

                    /**
                     * Task switch for text keyword recognition, available values:
<li>ON: Enable text keyword recognition task;</li>
<li>OFF: Disables the text keyword recognition task.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Keyword-based filtering tag, specify the tag of the keyword that needs to be returned. If left blank or empty, all results are returned.
The number of tags is up to 10, and each tag can have up to 16 characters.
                     */
                    std::vector<std::string> m_labelSet;
                    bool m_labelSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_OCRWORDSCONFIGUREINFOFORUPDATE_H_
