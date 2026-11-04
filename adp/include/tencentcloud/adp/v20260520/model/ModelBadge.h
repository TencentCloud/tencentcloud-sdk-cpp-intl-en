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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODELBADGE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODELBADGE_H_

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
                * <p>Model badge (external, visible on the user end): ALL copywriting has been rendered as final displayed content, without exposing template parameters</p>
                */
                class ModelBadge : public AbstractModel
                {
                public:
                    ModelBadge();
                    ~ModelBadge() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Display copy (rendered as final copy)</p>
                     * @return Text <p>Display copy (rendered as final copy)</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>Display copy (rendered as final copy)</p>
                     * @param _text <p>Display copy (rendered as final copy)</p>
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取<p>Style theme</p><table><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>MODEL_BADGE_THEME_UNSPECIFIED</td><td>0</td><td>Unspecified</td></tr><tr><td>MODEL_BADGE_THEME_INFO</td><td>1</td><td>Info (blue)</td></tr><tr><td>MODEL_BADGE_THEME_SUCCESS</td><td>2</td><td>Success (green)</td></tr><tr><td>MODEL_BADGE_THEME_WARNING</td><td>3</td><td>Warning (orange)</td></tr><tr><td>MODEL_BADGE_THEME_DANGER</td><td>4</td><td>Danger (red)</td></tr></table>
                     * @return Theme <p>Style theme</p><table><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>MODEL_BADGE_THEME_UNSPECIFIED</td><td>0</td><td>Unspecified</td></tr><tr><td>MODEL_BADGE_THEME_INFO</td><td>1</td><td>Info (blue)</td></tr><tr><td>MODEL_BADGE_THEME_SUCCESS</td><td>2</td><td>Success (green)</td></tr><tr><td>MODEL_BADGE_THEME_WARNING</td><td>3</td><td>Warning (orange)</td></tr><tr><td>MODEL_BADGE_THEME_DANGER</td><td>4</td><td>Danger (red)</td></tr></table>
                     * 
                     */
                    int64_t GetTheme() const;

                    /**
                     * 设置<p>Style theme</p><table><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>MODEL_BADGE_THEME_UNSPECIFIED</td><td>0</td><td>Unspecified</td></tr><tr><td>MODEL_BADGE_THEME_INFO</td><td>1</td><td>Info (blue)</td></tr><tr><td>MODEL_BADGE_THEME_SUCCESS</td><td>2</td><td>Success (green)</td></tr><tr><td>MODEL_BADGE_THEME_WARNING</td><td>3</td><td>Warning (orange)</td></tr><tr><td>MODEL_BADGE_THEME_DANGER</td><td>4</td><td>Danger (red)</td></tr></table>
                     * @param _theme <p>Style theme</p><table><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>MODEL_BADGE_THEME_UNSPECIFIED</td><td>0</td><td>Unspecified</td></tr><tr><td>MODEL_BADGE_THEME_INFO</td><td>1</td><td>Info (blue)</td></tr><tr><td>MODEL_BADGE_THEME_SUCCESS</td><td>2</td><td>Success (green)</td></tr><tr><td>MODEL_BADGE_THEME_WARNING</td><td>3</td><td>Warning (orange)</td></tr><tr><td>MODEL_BADGE_THEME_DANGER</td><td>4</td><td>Danger (red)</td></tr></table>
                     * 
                     */
                    void SetTheme(const int64_t& _theme);

                    /**
                     * 判断参数 Theme 是否已赋值
                     * @return Theme 是否已赋值
                     * 
                     */
                    bool ThemeHasBeenSet() const;

                    /**
                     * 获取<p>tooltip copywriting (rendered as final copywriting). If it is empty, it is not displayed.</p>
                     * @return Tips <p>tooltip copywriting (rendered as final copywriting). If it is empty, it is not displayed.</p>
                     * 
                     */
                    std::string GetTips() const;

                    /**
                     * 设置<p>tooltip copywriting (rendered as final copywriting). If it is empty, it is not displayed.</p>
                     * @param _tips <p>tooltip copywriting (rendered as final copywriting). If it is empty, it is not displayed.</p>
                     * 
                     */
                    void SetTips(const std::string& _tips);

                    /**
                     * 判断参数 Tips 是否已赋值
                     * @return Tips 是否已赋值
                     * 
                     */
                    bool TipsHasBeenSet() const;

                    /**
                     * 获取<p>Badge type</p><table><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>MODEL_BADGE_TYPE_UNSPECIFIED</td><td>0</td><td>Unspecified</td></tr><tr><td>MODEL_BADGE_TYPE_FREE_TRIAL</td><td>1</td><td>Limited-time free</td></tr><tr><td>MODEL_BADGE_TYPE_DEPRECATING</td><td>2</td><td>About to go offline</td></tr><tr><td>MODEL_BADGE_TYPE_NEW</td><td>3</td><td>New model</td></tr><tr><td>MODEL_BADGE_TYPE_HOT</td><td>4</td><td>Popular</td></tr></table>
                     * @return Type <p>Badge type</p><table><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>MODEL_BADGE_TYPE_UNSPECIFIED</td><td>0</td><td>Unspecified</td></tr><tr><td>MODEL_BADGE_TYPE_FREE_TRIAL</td><td>1</td><td>Limited-time free</td></tr><tr><td>MODEL_BADGE_TYPE_DEPRECATING</td><td>2</td><td>About to go offline</td></tr><tr><td>MODEL_BADGE_TYPE_NEW</td><td>3</td><td>New model</td></tr><tr><td>MODEL_BADGE_TYPE_HOT</td><td>4</td><td>Popular</td></tr></table>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>Badge type</p><table><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>MODEL_BADGE_TYPE_UNSPECIFIED</td><td>0</td><td>Unspecified</td></tr><tr><td>MODEL_BADGE_TYPE_FREE_TRIAL</td><td>1</td><td>Limited-time free</td></tr><tr><td>MODEL_BADGE_TYPE_DEPRECATING</td><td>2</td><td>About to go offline</td></tr><tr><td>MODEL_BADGE_TYPE_NEW</td><td>3</td><td>New model</td></tr><tr><td>MODEL_BADGE_TYPE_HOT</td><td>4</td><td>Popular</td></tr></table>
                     * @param _type <p>Badge type</p><table><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>MODEL_BADGE_TYPE_UNSPECIFIED</td><td>0</td><td>Unspecified</td></tr><tr><td>MODEL_BADGE_TYPE_FREE_TRIAL</td><td>1</td><td>Limited-time free</td></tr><tr><td>MODEL_BADGE_TYPE_DEPRECATING</td><td>2</td><td>About to go offline</td></tr><tr><td>MODEL_BADGE_TYPE_NEW</td><td>3</td><td>New model</td></tr><tr><td>MODEL_BADGE_TYPE_HOT</td><td>4</td><td>Popular</td></tr></table>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * <p>Display copy (rendered as final copy)</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>Style theme</p><table><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>MODEL_BADGE_THEME_UNSPECIFIED</td><td>0</td><td>Unspecified</td></tr><tr><td>MODEL_BADGE_THEME_INFO</td><td>1</td><td>Info (blue)</td></tr><tr><td>MODEL_BADGE_THEME_SUCCESS</td><td>2</td><td>Success (green)</td></tr><tr><td>MODEL_BADGE_THEME_WARNING</td><td>3</td><td>Warning (orange)</td></tr><tr><td>MODEL_BADGE_THEME_DANGER</td><td>4</td><td>Danger (red)</td></tr></table>
                     */
                    int64_t m_theme;
                    bool m_themeHasBeenSet;

                    /**
                     * <p>tooltip copywriting (rendered as final copywriting). If it is empty, it is not displayed.</p>
                     */
                    std::string m_tips;
                    bool m_tipsHasBeenSet;

                    /**
                     * <p>Badge type</p><table><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>MODEL_BADGE_TYPE_UNSPECIFIED</td><td>0</td><td>Unspecified</td></tr><tr><td>MODEL_BADGE_TYPE_FREE_TRIAL</td><td>1</td><td>Limited-time free</td></tr><tr><td>MODEL_BADGE_TYPE_DEPRECATING</td><td>2</td><td>About to go offline</td></tr><tr><td>MODEL_BADGE_TYPE_NEW</td><td>3</td><td>New model</td></tr><tr><td>MODEL_BADGE_TYPE_HOT</td><td>4</td><td>Popular</td></tr></table>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODELBADGE_H_
