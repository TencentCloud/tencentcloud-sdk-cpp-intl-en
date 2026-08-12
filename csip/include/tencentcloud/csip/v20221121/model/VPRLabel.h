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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VPRLABEL_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VPRLABEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Vulnerability VPR tag
                */
                class VPRLabel : public AbstractModel
                {
                public:
                    VPRLabel();
                    ~VPRLabel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Tag name<br>Enumeration VALUE:<br>INTRUSION: Exploitation IN THE WILD<br>EXP: Has EXP<br>POC: Has POC<br>INTERNET_EXPOSED: Public network exposure<br>NO_RESTART: NO RESTART required<br>HIGH_VALUE_ASSET: Important ASSET<br>MALWARE_WEAPONIZED: Weaponization</p>
                     * @return Name <p>Tag name<br>Enumeration VALUE:<br>INTRUSION: Exploitation IN THE WILD<br>EXP: Has EXP<br>POC: Has POC<br>INTERNET_EXPOSED: Public network exposure<br>NO_RESTART: NO RESTART required<br>HIGH_VALUE_ASSET: Important ASSET<br>MALWARE_WEAPONIZED: Weaponization</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Tag name<br>Enumeration VALUE:<br>INTRUSION: Exploitation IN THE WILD<br>EXP: Has EXP<br>POC: Has POC<br>INTERNET_EXPOSED: Public network exposure<br>NO_RESTART: NO RESTART required<br>HIGH_VALUE_ASSET: Important ASSET<br>MALWARE_WEAPONIZED: Weaponization</p>
                     * @param _name <p>Tag name<br>Enumeration VALUE:<br>INTRUSION: Exploitation IN THE WILD<br>EXP: Has EXP<br>POC: Has POC<br>INTERNET_EXPOSED: Public network exposure<br>NO_RESTART: NO RESTART required<br>HIGH_VALUE_ASSET: Important ASSET<br>MALWARE_WEAPONIZED: Weaponization</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Tag severity<br>Enumeration value:<br>HIGH: High<br>MEDIUM: Medium<br>LOW: Low</p>
                     * @return Level <p>Tag severity<br>Enumeration value:<br>HIGH: High<br>MEDIUM: Medium<br>LOW: Low</p>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置<p>Tag severity<br>Enumeration value:<br>HIGH: High<br>MEDIUM: Medium<br>LOW: Low</p>
                     * @param _level <p>Tag severity<br>Enumeration value:<br>HIGH: High<br>MEDIUM: Medium<br>LOW: Low</p>
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取<p>Tag description</p>
                     * @return Remark <p>Tag description</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>Tag description</p>
                     * @param _remark <p>Tag description</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * <p>Tag name<br>Enumeration VALUE:<br>INTRUSION: Exploitation IN THE WILD<br>EXP: Has EXP<br>POC: Has POC<br>INTERNET_EXPOSED: Public network exposure<br>NO_RESTART: NO RESTART required<br>HIGH_VALUE_ASSET: Important ASSET<br>MALWARE_WEAPONIZED: Weaponization</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Tag severity<br>Enumeration value:<br>HIGH: High<br>MEDIUM: Medium<br>LOW: Low</p>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>Tag description</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VPRLABEL_H_
