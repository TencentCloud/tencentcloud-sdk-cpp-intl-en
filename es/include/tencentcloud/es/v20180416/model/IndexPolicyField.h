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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_INDEXPOLICYFIELD_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_INDEXPOLICYFIELD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Index lifecycle policy field
                */
                class IndexPolicyField : public AbstractModel
                {
                public:
                    IndexPolicyField();
                    ~IndexPolicyField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable the warm phase
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return WarmEnable Whether to enable the warm phase
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetWarmEnable() const;

                    /**
                     * 设置Whether to enable the warm phase
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _warmEnable Whether to enable the warm phase
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetWarmEnable(const std::string& _warmEnable);

                    /**
                     * 判断参数 WarmEnable 是否已赋值
                     * @return WarmEnable 是否已赋值
                     * 
                     */
                    bool WarmEnableHasBeenSet() const;

                    /**
                     * 获取Min age before data transitions to the warm phase
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return WarmMinAge Min age before data transitions to the warm phase
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetWarmMinAge() const;

                    /**
                     * 设置Min age before data transitions to the warm phase
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _warmMinAge Min age before data transitions to the warm phase
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetWarmMinAge(const std::string& _warmMinAge);

                    /**
                     * 判断参数 WarmMinAge 是否已赋值
                     * @return WarmMinAge 是否已赋值
                     * 
                     */
                    bool WarmMinAgeHasBeenSet() const;

                    /**
                     * 获取Whether to enable the cold phase
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ColdEnable Whether to enable the cold phase
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetColdEnable() const;

                    /**
                     * 设置Whether to enable the cold phase
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _coldEnable Whether to enable the cold phase
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetColdEnable(const std::string& _coldEnable);

                    /**
                     * 判断参数 ColdEnable 是否已赋值
                     * @return ColdEnable 是否已赋值
                     * 
                     */
                    bool ColdEnableHasBeenSet() const;

                    /**
                     * 获取Min age before data transitions to the cold phase
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ColdMinAge Min age before data transitions to the cold phase
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetColdMinAge() const;

                    /**
                     * 设置Min age before data transitions to the cold phase
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _coldMinAge Min age before data transitions to the cold phase
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetColdMinAge(const std::string& _coldMinAge);

                    /**
                     * 判断参数 ColdMinAge 是否已赋值
                     * @return ColdMinAge 是否已赋值
                     * 
                     */
                    bool ColdMinAgeHasBeenSet() const;

                    /**
                     * 获取Whether to enable the frozen phase
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return FrozenEnable Whether to enable the frozen phase
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFrozenEnable() const;

                    /**
                     * 设置Whether to enable the frozen phase
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _frozenEnable Whether to enable the frozen phase
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFrozenEnable(const std::string& _frozenEnable);

                    /**
                     * 判断参数 FrozenEnable 是否已赋值
                     * @return FrozenEnable 是否已赋值
                     * 
                     */
                    bool FrozenEnableHasBeenSet() const;

                    /**
                     * 获取Min age before data transitions to the frozen phase
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return FrozenMinAge Min age before data transitions to the frozen phase
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFrozenMinAge() const;

                    /**
                     * 设置Min age before data transitions to the frozen phase
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _frozenMinAge Min age before data transitions to the frozen phase
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFrozenMinAge(const std::string& _frozenMinAge);

                    /**
                     * 判断参数 FrozenMinAge 是否已赋值
                     * @return FrozenMinAge 是否已赋值
                     * 
                     */
                    bool FrozenMinAgeHasBeenSet() const;

                    /**
                     * 获取/
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ColdAction /
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetColdAction() const;

                    /**
                     * 设置/
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _coldAction /
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetColdAction(const std::string& _coldAction);

                    /**
                     * 判断参数 ColdAction 是否已赋值
                     * @return ColdAction 是否已赋值
                     * 
                     */
                    bool ColdActionHasBeenSet() const;

                private:

                    /**
                     * Whether to enable the warm phase
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_warmEnable;
                    bool m_warmEnableHasBeenSet;

                    /**
                     * Min age before data transitions to the warm phase
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_warmMinAge;
                    bool m_warmMinAgeHasBeenSet;

                    /**
                     * Whether to enable the cold phase
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_coldEnable;
                    bool m_coldEnableHasBeenSet;

                    /**
                     * Min age before data transitions to the cold phase
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_coldMinAge;
                    bool m_coldMinAgeHasBeenSet;

                    /**
                     * Whether to enable the frozen phase
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_frozenEnable;
                    bool m_frozenEnableHasBeenSet;

                    /**
                     * Min age before data transitions to the frozen phase
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_frozenMinAge;
                    bool m_frozenMinAgeHasBeenSet;

                    /**
                     * /
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_coldAction;
                    bool m_coldActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_INDEXPOLICYFIELD_H_
