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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLERESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLERESULT_H_

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
                * Smart subtitle task result.
                */
                class SubtitleResult : public AbstractModel
                {
                public:
                    SubtitleResult();
                    ~SubtitleResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Language of the subtitle file.
                     * @return Language Language of the subtitle file.
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置Language of the subtitle file.
                     * @param _language Language of the subtitle file.
                     * 
                     */
                    void SetLanguage(const std::string& _language);

                    /**
                     * 判断参数 Language 是否已赋值
                     * @return Language 是否已赋值
                     * 
                     */
                    bool LanguageHasBeenSet() const;

                    /**
                     * 获取Whether the processing is successful.
                     * @return Status Whether the processing is successful.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Whether the processing is successful.
                     * @param _status Whether the processing is successful.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Subtitle file URL.
                     * @return Path Subtitle file URL.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Subtitle file URL.
                     * @param _path Subtitle file URL.
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                private:

                    /**
                     * Language of the subtitle file.
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * Whether the processing is successful.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Subtitle file URL.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLERESULT_H_
