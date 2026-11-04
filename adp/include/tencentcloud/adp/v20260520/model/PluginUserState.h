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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINUSERSTATE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINUSERSTATE_H_

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
                * PluginUserState
                */
                class PluginUserState : public AbstractModel
                {
                public:
                    PluginUserState();
                    ~PluginUserState() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether the plug-in has been bookmarked
                     * @return IsFavorite Whether the plug-in has been bookmarked
                     * 
                     */
                    bool GetIsFavorite() const;

                    /**
                     * 设置Whether the plug-in has been bookmarked
                     * @param _isFavorite Whether the plug-in has been bookmarked
                     * 
                     */
                    void SetIsFavorite(const bool& _isFavorite);

                    /**
                     * 判断参数 IsFavorite 是否已赋值
                     * @return IsFavorite 是否已赋值
                     * 
                     */
                    bool IsFavoriteHasBeenSet() const;

                    /**
                     * 获取Whether it is in the plug-in allowlist
                     * @return IsInWhiteList Whether it is in the plug-in allowlist
                     * 
                     */
                    bool GetIsInWhiteList() const;

                    /**
                     * 设置Whether it is in the plug-in allowlist
                     * @param _isInWhiteList Whether it is in the plug-in allowlist
                     * 
                     */
                    void SetIsInWhiteList(const bool& _isInWhiteList);

                    /**
                     * 判断参数 IsInWhiteList 是否已赋值
                     * @return IsInWhiteList 是否已赋值
                     * 
                     */
                    bool IsInWhiteListHasBeenSet() const;

                    /**
                     * 获取<p>Allowlist type, used to represent whether the current user can use this plug-in directly.</p><p>Enumeration values:</p><ul><li>0: Not on the allowlist, fully available</li><li>1: Current user in allowlist</li><li>2: Current user not in allowlist, submit an application</li></ul>
                     * @return WhiteListType <p>Allowlist type, used to represent whether the current user can use this plug-in directly.</p><p>Enumeration values:</p><ul><li>0: Not on the allowlist, fully available</li><li>1: Current user in allowlist</li><li>2: Current user not in allowlist, submit an application</li></ul>
                     * 
                     */
                    int64_t GetWhiteListType() const;

                    /**
                     * 设置<p>Allowlist type, used to represent whether the current user can use this plug-in directly.</p><p>Enumeration values:</p><ul><li>0: Not on the allowlist, fully available</li><li>1: Current user in allowlist</li><li>2: Current user not in allowlist, submit an application</li></ul>
                     * @param _whiteListType <p>Allowlist type, used to represent whether the current user can use this plug-in directly.</p><p>Enumeration values:</p><ul><li>0: Not on the allowlist, fully available</li><li>1: Current user in allowlist</li><li>2: Current user not in allowlist, submit an application</li></ul>
                     * 
                     */
                    void SetWhiteListType(const int64_t& _whiteListType);

                    /**
                     * 判断参数 WhiteListType 是否已赋值
                     * @return WhiteListType 是否已赋值
                     * 
                     */
                    bool WhiteListTypeHasBeenSet() const;

                private:

                    /**
                     * Whether the plug-in has been bookmarked
                     */
                    bool m_isFavorite;
                    bool m_isFavoriteHasBeenSet;

                    /**
                     * Whether it is in the plug-in allowlist
                     */
                    bool m_isInWhiteList;
                    bool m_isInWhiteListHasBeenSet;

                    /**
                     * <p>Allowlist type, used to represent whether the current user can use this plug-in directly.</p><p>Enumeration values:</p><ul><li>0: Not on the allowlist, fully available</li><li>1: Current user in allowlist</li><li>2: Current user not in allowlist, submit an application</li></ul>
                     */
                    int64_t m_whiteListType;
                    bool m_whiteListTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINUSERSTATE_H_
