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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCREENPROTECTION_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCREENPROTECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Visualized attack and defense status on large screen
                */
                class ScreenProtection : public AbstractModel
                {
                public:
                    ScreenProtection();
                    ~ScreenProtection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Type value: virus scanning, brute force cracking, vulnerability scan, baseline check
                     * @return Name Type value: virus scanning, brute force cracking, vulnerability scan, baseline check
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Type value: virus scanning, brute force cracking, vulnerability scan, baseline check
                     * @param _name Type value: virus scanning, brute force cracking, vulnerability scan, baseline check
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
                     * 获取Virus scanning: 0: never scanned or asset not paid; 1: scanned and malicious files found; 2: scanned but isolation protection disabled; 3: scanned, protection enabled, and no risk found.
Brute force cracking: 0: protection disabled (asset not paid); 1: automatic blocking enabled.
Vulnerability scan: 0: never scanned or asset not paid; 1: vulnerability found; 2: no risk found.
Baseline check: 0: never checked or asset not paid; 1: baseline risks found; 2: no risk found.
                     * @return Status Virus scanning: 0: never scanned or asset not paid; 1: scanned and malicious files found; 2: scanned but isolation protection disabled; 3: scanned, protection enabled, and no risk found.
Brute force cracking: 0: protection disabled (asset not paid); 1: automatic blocking enabled.
Vulnerability scan: 0: never scanned or asset not paid; 1: vulnerability found; 2: no risk found.
Baseline check: 0: never checked or asset not paid; 1: baseline risks found; 2: no risk found.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Virus scanning: 0: never scanned or asset not paid; 1: scanned and malicious files found; 2: scanned but isolation protection disabled; 3: scanned, protection enabled, and no risk found.
Brute force cracking: 0: protection disabled (asset not paid); 1: automatic blocking enabled.
Vulnerability scan: 0: never scanned or asset not paid; 1: vulnerability found; 2: no risk found.
Baseline check: 0: never checked or asset not paid; 1: baseline risks found; 2: no risk found.
                     * @param _status Virus scanning: 0: never scanned or asset not paid; 1: scanned and malicious files found; 2: scanned but isolation protection disabled; 3: scanned, protection enabled, and no risk found.
Brute force cracking: 0: protection disabled (asset not paid); 1: automatic blocking enabled.
Vulnerability scan: 0: never scanned or asset not paid; 1: vulnerability found; 2: no risk found.
Baseline check: 0: never checked or asset not paid; 1: baseline risks found; 2: no risk found.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Type value: virus scanning, brute force cracking, vulnerability scan, baseline check
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Virus scanning: 0: never scanned or asset not paid; 1: scanned and malicious files found; 2: scanned but isolation protection disabled; 3: scanned, protection enabled, and no risk found.
Brute force cracking: 0: protection disabled (asset not paid); 1: automatic blocking enabled.
Vulnerability scan: 0: never scanned or asset not paid; 1: vulnerability found; 2: no risk found.
Baseline check: 0: never checked or asset not paid; 1: baseline risks found; 2: no risk found.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCREENPROTECTION_H_
