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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_MNPDETAILI18NVO_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_MNPDETAILI18NVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * The mini program name and description in multiple languages.
                */
                class MNPDetailI18nVO : public AbstractModel
                {
                public:
                    MNPDetailI18nVO();
                    ~MNPDetailI18nVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Language ID.
                     * @return ID Language ID.
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置Language ID.
                     * @param _iD Language ID.
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Language type. Valid values: en-US: English; zh-CN: Simplified Chinese; zh-Hant: Traditional Chinese; fr-FR: French; ar-SA: Arabic; id-ID: Indonesian; vi-VN: Vietnamese. Default value: en-US.
                     * @return Lang Language type. Valid values: en-US: English; zh-CN: Simplified Chinese; zh-Hant: Traditional Chinese; fr-FR: French; ar-SA: Arabic; id-ID: Indonesian; vi-VN: Vietnamese. Default value: en-US.
                     * 
                     */
                    std::string GetLang() const;

                    /**
                     * 设置Language type. Valid values: en-US: English; zh-CN: Simplified Chinese; zh-Hant: Traditional Chinese; fr-FR: French; ar-SA: Arabic; id-ID: Indonesian; vi-VN: Vietnamese. Default value: en-US.
                     * @param _lang Language type. Valid values: en-US: English; zh-CN: Simplified Chinese; zh-Hant: Traditional Chinese; fr-FR: French; ar-SA: Arabic; id-ID: Indonesian; vi-VN: Vietnamese. Default value: en-US.
                     * 
                     */
                    void SetLang(const std::string& _lang);

                    /**
                     * 判断参数 Lang 是否已赋值
                     * @return Lang 是否已赋值
                     * 
                     */
                    bool LangHasBeenSet() const;

                    /**
                     * 获取Whether this is the default language. Valid values: 0: No; 1: Yes. Default value: 0.
                     * @return IsDefault Whether this is the default language. Valid values: 0: No; 1: Yes. Default value: 0.
                     * 
                     */
                    int64_t GetIsDefault() const;

                    /**
                     * 设置Whether this is the default language. Valid values: 0: No; 1: Yes. Default value: 0.
                     * @param _isDefault Whether this is the default language. Valid values: 0: No; 1: Yes. Default value: 0.
                     * 
                     */
                    void SetIsDefault(const int64_t& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取Mini program name.
                     * @return MNPName Mini program name.
                     * 
                     */
                    std::string GetMNPName() const;

                    /**
                     * 设置Mini program name.
                     * @param _mNPName Mini program name.
                     * 
                     */
                    void SetMNPName(const std::string& _mNPName);

                    /**
                     * 判断参数 MNPName 是否已赋值
                     * @return MNPName 是否已赋值
                     * 
                     */
                    bool MNPNameHasBeenSet() const;

                    /**
                     * 获取Mini program introduction.
                     * @return MNPIntro Mini program introduction.
                     * 
                     */
                    std::string GetMNPIntro() const;

                    /**
                     * 设置Mini program introduction.
                     * @param _mNPIntro Mini program introduction.
                     * 
                     */
                    void SetMNPIntro(const std::string& _mNPIntro);

                    /**
                     * 判断参数 MNPIntro 是否已赋值
                     * @return MNPIntro 是否已赋值
                     * 
                     */
                    bool MNPIntroHasBeenSet() const;

                private:

                    /**
                     * Language ID.
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Language type. Valid values: en-US: English; zh-CN: Simplified Chinese; zh-Hant: Traditional Chinese; fr-FR: French; ar-SA: Arabic; id-ID: Indonesian; vi-VN: Vietnamese. Default value: en-US.
                     */
                    std::string m_lang;
                    bool m_langHasBeenSet;

                    /**
                     * Whether this is the default language. Valid values: 0: No; 1: Yes. Default value: 0.
                     */
                    int64_t m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * Mini program name.
                     */
                    std::string m_mNPName;
                    bool m_mNPNameHasBeenSet;

                    /**
                     * Mini program introduction.
                     */
                    std::string m_mNPIntro;
                    bool m_mNPIntroHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_MNPDETAILI18NVO_H_
