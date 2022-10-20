/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_WAFGROUPINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_WAFGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/WafGroupDetail.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * The managed rule
                */
                class WafGroupInfo : public AbstractModel
                {
                public:
                    WafGroupInfo();
                    ~WafGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of managed rule groups.
                     * @return WafGroupDetails List of managed rule groups.
                     */
                    std::vector<WafGroupDetail> GetWafGroupDetails() const;

                    /**
                     * 设置List of managed rule groups.
                     * @param WafGroupDetails List of managed rule groups.
                     */
                    void SetWafGroupDetails(const std::vector<WafGroupDetail>& _wafGroupDetails);

                    /**
                     * 判断参数 WafGroupDetails 是否已赋值
                     * @return WafGroupDetails 是否已赋值
                     */
                    bool WafGroupDetailsHasBeenSet() const;

                    /**
                     * 获取The level of the managed rule group
<li>`loose`: Loose</li>
<li>`normal`: Moderate</li>
<li>`strict`: Strict</li>
<li>`stricter`: Super strict</li>
                     * @return Level The level of the managed rule group
<li>`loose`: Loose</li>
<li>`normal`: Moderate</li>
<li>`strict`: Strict</li>
<li>`stricter`: Super strict</li>
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置The level of the managed rule group
<li>`loose`: Loose</li>
<li>`normal`: Moderate</li>
<li>`strict`: Strict</li>
<li>`stricter`: Super strict</li>
                     * @param Level The level of the managed rule group
<li>`loose`: Loose</li>
<li>`normal`: Moderate</li>
<li>`strict`: Strict</li>
<li>`stricter`: Super strict</li>
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Reserved field.
                     * @return Act Reserved field.
                     */
                    std::string GetAct() const;

                    /**
                     * 设置Reserved field.
                     * @param Act Reserved field.
                     */
                    void SetAct(const std::string& _act);

                    /**
                     * 判断参数 Act 是否已赋值
                     * @return Act 是否已赋值
                     */
                    bool ActHasBeenSet() const;

                    /**
                     * 获取The mode. Values:
<li>`block`: Block</li>
<li>`observe`: Observer</li>
                     * @return Mode The mode. Values:
<li>`block`: Block</li>
<li>`observe`: Observer</li>
                     */
                    std::string GetMode() const;

                    /**
                     * 设置The mode. Values:
<li>`block`: Block</li>
<li>`observe`: Observer</li>
                     * @param Mode The mode. Values:
<li>`block`: Block</li>
<li>`observe`: Observer</li>
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Switch. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * @return Switch Switch. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Switch. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * @param Switch Switch. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                private:

                    /**
                     * List of managed rule groups.
                     */
                    std::vector<WafGroupDetail> m_wafGroupDetails;
                    bool m_wafGroupDetailsHasBeenSet;

                    /**
                     * The level of the managed rule group
<li>`loose`: Loose</li>
<li>`normal`: Moderate</li>
<li>`strict`: Strict</li>
<li>`stricter`: Super strict</li>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Reserved field.
                     */
                    std::string m_act;
                    bool m_actHasBeenSet;

                    /**
                     * The mode. Values:
<li>`block`: Block</li>
<li>`observe`: Observer</li>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Switch. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_WAFGROUPINFO_H_
