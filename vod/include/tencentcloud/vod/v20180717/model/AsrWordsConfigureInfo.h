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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_ASRWORDSCONFIGUREINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_ASRWORDSCONFIGUREINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Speech keyword recognition control parameter.
                */
                class AsrWordsConfigureInfo : public AbstractModel
                {
                public:
                    AsrWordsConfigureInfo();
                    ~AsrWordsConfigureInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Switch of speech keyword recognition task. Valid values:
<li>ON: enables speech keyword recognition task;</li>
<li>OFF: disables speech keyword recognition task.</li>
                     * @return Switch Switch of speech keyword recognition task. Valid values:
<li>ON: enables speech keyword recognition task;</li>
<li>OFF: disables speech keyword recognition task.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Switch of speech keyword recognition task. Valid values:
<li>ON: enables speech keyword recognition task;</li>
<li>OFF: disables speech keyword recognition task.</li>
                     * @param _switch Switch of speech keyword recognition task. Valid values:
<li>ON: enables speech keyword recognition task;</li>
<li>OFF: disables speech keyword recognition task.</li>
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
                     * 获取Keyword filter tag, which specifies the keyword tag that needs to be returned. If this parameter is left empty, all results will be returned.
There can be up to 10 tags, each with a length limit of 16 characters.
                     * @return LabelSet Keyword filter tag, which specifies the keyword tag that needs to be returned. If this parameter is left empty, all results will be returned.
There can be up to 10 tags, each with a length limit of 16 characters.
                     * 
                     */
                    std::vector<std::string> GetLabelSet() const;

                    /**
                     * 设置Keyword filter tag, which specifies the keyword tag that needs to be returned. If this parameter is left empty, all results will be returned.
There can be up to 10 tags, each with a length limit of 16 characters.
                     * @param _labelSet Keyword filter tag, which specifies the keyword tag that needs to be returned. If this parameter is left empty, all results will be returned.
There can be up to 10 tags, each with a length limit of 16 characters.
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
                     * Switch of speech keyword recognition task. Valid values:
<li>ON: enables speech keyword recognition task;</li>
<li>OFF: disables speech keyword recognition task.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Keyword filter tag, which specifies the keyword tag that needs to be returned. If this parameter is left empty, all results will be returned.
There can be up to 10 tags, each with a length limit of 16 characters.
                     */
                    std::vector<std::string> m_labelSet;
                    bool m_labelSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ASRWORDSCONFIGUREINFO_H_
