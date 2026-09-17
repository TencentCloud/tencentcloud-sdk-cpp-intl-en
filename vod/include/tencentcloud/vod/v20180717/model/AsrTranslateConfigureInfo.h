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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_ASRTRANSLATECONFIGUREINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_ASRTRANSLATECONFIGUREINFO_H_

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
                * 
                */
                class AsrTranslateConfigureInfo : public AbstractModel
                {
                public:
                    AsrTranslateConfigureInfo();
                    ~AsrTranslateConfigureInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Switch 
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置
                     * @param _switch 
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
                     * 获取
                     * @return SrcLanguage 
                     * 
                     */
                    std::string GetSrcLanguage() const;

                    /**
                     * 设置
                     * @param _srcLanguage 
                     * 
                     */
                    void SetSrcLanguage(const std::string& _srcLanguage);

                    /**
                     * 判断参数 SrcLanguage 是否已赋值
                     * @return SrcLanguage 是否已赋值
                     * 
                     */
                    bool SrcLanguageHasBeenSet() const;

                    /**
                     * 获取
                     * @return DstLanguage 
                     * 
                     */
                    std::string GetDstLanguage() const;

                    /**
                     * 设置
                     * @param _dstLanguage 
                     * 
                     */
                    void SetDstLanguage(const std::string& _dstLanguage);

                    /**
                     * 判断参数 DstLanguage 是否已赋值
                     * @return DstLanguage 是否已赋值
                     * 
                     */
                    bool DstLanguageHasBeenSet() const;

                    /**
                     * 获取
                     * @return SubtitleFormats 
                     * 
                     */
                    std::vector<std::string> GetSubtitleFormats() const;

                    /**
                     * 设置
                     * @param _subtitleFormats 
                     * 
                     */
                    void SetSubtitleFormats(const std::vector<std::string>& _subtitleFormats);

                    /**
                     * 判断参数 SubtitleFormats 是否已赋值
                     * @return SubtitleFormats 是否已赋值
                     * 
                     */
                    bool SubtitleFormatsHasBeenSet() const;

                    /**
                     * 获取
                     * @return SubtitleName 
                     * 
                     */
                    std::string GetSubtitleName() const;

                    /**
                     * 设置
                     * @param _subtitleName 
                     * 
                     */
                    void SetSubtitleName(const std::string& _subtitleName);

                    /**
                     * 判断参数 SubtitleName 是否已赋值
                     * @return SubtitleName 是否已赋值
                     * 
                     */
                    bool SubtitleNameHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_srcLanguage;
                    bool m_srcLanguageHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_dstLanguage;
                    bool m_dstLanguageHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_subtitleFormats;
                    bool m_subtitleFormatsHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_subtitleName;
                    bool m_subtitleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ASRTRANSLATECONFIGUREINFO_H_
