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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SKILLCORPSHARECONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SKILLCORPSHARECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/Identity.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Skill business shared configuration.
                */
                class SkillCorpShareConfig : public AbstractModel
                {
                public:
                    SkillCorpShareConfig();
                    ~SkillCorpShareConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>SHARE_SCOPE_TYPE_UNSPECIFIED</td> <td>0</td> <td></td> </tr> <tr> <td>SHARE_SCOPE_TYPE_ALL</td> <td>1</td> <td></td> </tr> <tr> <td>SHARE_SCOPE_TYPE_ACCOUNT</td> <td>2</td> <td></td> </tr> <tr> <td>SHARE_SCOPE_TYPE_SPACE</td> <td>3</td> <td></td> </tr> </tbody> </table> <p>Enumeration values:</p> <ul> <li>0: Unspecified</li> <li>1: Shared across the business</li> <li>3: Shared by space</li> </ul>
                     * @return ShareScope <table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>SHARE_SCOPE_TYPE_UNSPECIFIED</td> <td>0</td> <td></td> </tr> <tr> <td>SHARE_SCOPE_TYPE_ALL</td> <td>1</td> <td></td> </tr> <tr> <td>SHARE_SCOPE_TYPE_ACCOUNT</td> <td>2</td> <td></td> </tr> <tr> <td>SHARE_SCOPE_TYPE_SPACE</td> <td>3</td> <td></td> </tr> </tbody> </table> <p>Enumeration values:</p> <ul> <li>0: Unspecified</li> <li>1: Shared across the business</li> <li>3: Shared by space</li> </ul>
                     * 
                     */
                    int64_t GetShareScope() const;

                    /**
                     * 设置<table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>SHARE_SCOPE_TYPE_UNSPECIFIED</td> <td>0</td> <td></td> </tr> <tr> <td>SHARE_SCOPE_TYPE_ALL</td> <td>1</td> <td></td> </tr> <tr> <td>SHARE_SCOPE_TYPE_ACCOUNT</td> <td>2</td> <td></td> </tr> <tr> <td>SHARE_SCOPE_TYPE_SPACE</td> <td>3</td> <td></td> </tr> </tbody> </table> <p>Enumeration values:</p> <ul> <li>0: Unspecified</li> <li>1: Shared across the business</li> <li>3: Shared by space</li> </ul>
                     * @param _shareScope <table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>SHARE_SCOPE_TYPE_UNSPECIFIED</td> <td>0</td> <td></td> </tr> <tr> <td>SHARE_SCOPE_TYPE_ALL</td> <td>1</td> <td></td> </tr> <tr> <td>SHARE_SCOPE_TYPE_ACCOUNT</td> <td>2</td> <td></td> </tr> <tr> <td>SHARE_SCOPE_TYPE_SPACE</td> <td>3</td> <td></td> </tr> </tbody> </table> <p>Enumeration values:</p> <ul> <li>0: Unspecified</li> <li>1: Shared across the business</li> <li>3: Shared by space</li> </ul>
                     * 
                     */
                    void SetShareScope(const int64_t& _shareScope);

                    /**
                     * 判断参数 ShareScope 是否已赋值
                     * @return ShareScope 是否已赋值
                     * 
                     */
                    bool ShareScopeHasBeenSet() const;

                    /**
                     * 获取<p>Share range information. Only spaces are supported. StrId is the space ID, and Name is the space name.</p>
                     * @return ShareScopeList <p>Share range information. Only spaces are supported. StrId is the space ID, and Name is the space name.</p>
                     * 
                     */
                    std::vector<Identity> GetShareScopeList() const;

                    /**
                     * 设置<p>Share range information. Only spaces are supported. StrId is the space ID, and Name is the space name.</p>
                     * @param _shareScopeList <p>Share range information. Only spaces are supported. StrId is the space ID, and Name is the space name.</p>
                     * 
                     */
                    void SetShareScopeList(const std::vector<Identity>& _shareScopeList);

                    /**
                     * 判断参数 ShareScopeList 是否已赋值
                     * @return ShareScopeList 是否已赋值
                     * 
                     */
                    bool ShareScopeListHasBeenSet() const;

                private:

                    /**
                     * <table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>SHARE_SCOPE_TYPE_UNSPECIFIED</td> <td>0</td> <td></td> </tr> <tr> <td>SHARE_SCOPE_TYPE_ALL</td> <td>1</td> <td></td> </tr> <tr> <td>SHARE_SCOPE_TYPE_ACCOUNT</td> <td>2</td> <td></td> </tr> <tr> <td>SHARE_SCOPE_TYPE_SPACE</td> <td>3</td> <td></td> </tr> </tbody> </table> <p>Enumeration values:</p> <ul> <li>0: Unspecified</li> <li>1: Shared across the business</li> <li>3: Shared by space</li> </ul>
                     */
                    int64_t m_shareScope;
                    bool m_shareScopeHasBeenSet;

                    /**
                     * <p>Share range information. Only spaces are supported. StrId is the space ID, and Name is the space name.</p>
                     */
                    std::vector<Identity> m_shareScopeList;
                    bool m_shareScopeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SKILLCORPSHARECONFIG_H_
