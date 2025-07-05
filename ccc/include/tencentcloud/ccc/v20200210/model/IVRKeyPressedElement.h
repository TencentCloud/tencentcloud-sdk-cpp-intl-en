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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_IVRKEYPRESSEDELEMENT_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_IVRKEYPRESSEDELEMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * IVR Key Information.
                */
                class IVRKeyPressedElement : public AbstractModel
                {
                public:
                    IVRKeyPressedElement();
                    ~IVRKeyPressedElement() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Hit keyword or press.
                     * @return Key Hit keyword or press.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Hit keyword or press.
                     * @param _key Hit keyword or press.
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Tag associated with the key.
                     * @return Label Tag associated with the key.
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Tag associated with the key.
                     * @param _label Tag associated with the key.
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取UNIX millisecond timestamp.
                     * @return Timestamp UNIX millisecond timestamp.
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置UNIX millisecond timestamp.
                     * @param _timestamp UNIX millisecond timestamp.
                     * 
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取Node tags.
                     * @return NodeLabel Node tags.
                     * 
                     */
                    std::string GetNodeLabel() const;

                    /**
                     * 设置Node tags.
                     * @param _nodeLabel Node tags.
                     * 
                     */
                    void SetNodeLabel(const std::string& _nodeLabel);

                    /**
                     * 判断参数 NodeLabel 是否已赋值
                     * @return NodeLabel 是否已赋值
                     * 
                     */
                    bool NodeLabelHasBeenSet() const;

                    /**
                     * 获取User'S original input.
                     * @return OriginalContent User'S original input.
                     * 
                     */
                    std::string GetOriginalContent() const;

                    /**
                     * 设置User'S original input.
                     * @param _originalContent User'S original input.
                     * 
                     */
                    void SetOriginalContent(const std::string& _originalContent);

                    /**
                     * 判断参数 OriginalContent 是否已赋值
                     * @return OriginalContent 是否已赋值
                     * 
                     */
                    bool OriginalContentHasBeenSet() const;

                    /**
                     * 获取TTS prompt content.
                     * @return TTSPrompt TTS prompt content.
                     * 
                     */
                    std::string GetTTSPrompt() const;

                    /**
                     * 设置TTS prompt content.
                     * @param _tTSPrompt TTS prompt content.
                     * 
                     */
                    void SetTTSPrompt(const std::string& _tTSPrompt);

                    /**
                     * 判断参数 TTSPrompt 是否已赋值
                     * @return TTSPrompt 是否已赋值
                     * 
                     */
                    bool TTSPromptHasBeenSet() const;

                private:

                    /**
                     * Hit keyword or press.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Tag associated with the key.
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * UNIX millisecond timestamp.
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * Node tags.
                     */
                    std::string m_nodeLabel;
                    bool m_nodeLabelHasBeenSet;

                    /**
                     * User'S original input.
                     */
                    std::string m_originalContent;
                    bool m_originalContentHasBeenSet;

                    /**
                     * TTS prompt content.
                     */
                    std::string m_tTSPrompt;
                    bool m_tTSPromptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_IVRKEYPRESSEDELEMENT_H_
