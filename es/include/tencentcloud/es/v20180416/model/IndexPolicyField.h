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
                * Index lifecycle field
                */
                class IndexPolicyField : public AbstractModel
                {
                public:
                    IndexPolicyField();
                    ~IndexPolicyField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether the warm phase is enabled
                     * @return WarmEnable Whether the warm phase is enabled
                     * 
                     */
                    std::string GetWarmEnable() const;

                    /**
                     * 设置Whether the warm phase is enabled
                     * @param _warmEnable Whether the warm phase is enabled
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
                     * 获取Transfer time to the warm phase
                     * @return WarmMinAge Transfer time to the warm phase
                     * 
                     */
                    std::string GetWarmMinAge() const;

                    /**
                     * 设置Transfer time to the warm phase
                     * @param _warmMinAge Transfer time to the warm phase
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
                     * 获取Whether the cold phase is enabled
                     * @return ColdEnable Whether the cold phase is enabled
                     * 
                     */
                    std::string GetColdEnable() const;

                    /**
                     * 设置Whether the cold phase is enabled
                     * @param _coldEnable Whether the cold phase is enabled
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
                     * 获取Transfer time to the cold phase
                     * @return ColdMinAge Transfer time to the cold phase
                     * 
                     */
                    std::string GetColdMinAge() const;

                    /**
                     * 设置Transfer time to the cold phase
                     * @param _coldMinAge Transfer time to the cold phase
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
                     * 获取Whether the frozen phase is enabled
                     * @return FrozenEnable Whether the frozen phase is enabled
                     * 
                     */
                    std::string GetFrozenEnable() const;

                    /**
                     * 设置Whether the frozen phase is enabled
                     * @param _frozenEnable Whether the frozen phase is enabled
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
                     * 获取Time of transfer to the frozen stage
                     * @return FrozenMinAge Time of transfer to the frozen stage
                     * 
                     */
                    std::string GetFrozenMinAge() const;

                    /**
                     * 设置Time of transfer to the frozen stage
                     * @param _frozenMinAge Time of transfer to the frozen stage
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
                     * @return ColdAction /
                     * 
                     */
                    std::string GetColdAction() const;

                    /**
                     * 设置/
                     * @param _coldAction /
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
                     * Whether the warm phase is enabled
                     */
                    std::string m_warmEnable;
                    bool m_warmEnableHasBeenSet;

                    /**
                     * Transfer time to the warm phase
                     */
                    std::string m_warmMinAge;
                    bool m_warmMinAgeHasBeenSet;

                    /**
                     * Whether the cold phase is enabled
                     */
                    std::string m_coldEnable;
                    bool m_coldEnableHasBeenSet;

                    /**
                     * Transfer time to the cold phase
                     */
                    std::string m_coldMinAge;
                    bool m_coldMinAgeHasBeenSet;

                    /**
                     * Whether the frozen phase is enabled
                     */
                    std::string m_frozenEnable;
                    bool m_frozenEnableHasBeenSet;

                    /**
                     * Time of transfer to the frozen stage
                     */
                    std::string m_frozenMinAge;
                    bool m_frozenMinAgeHasBeenSet;

                    /**
                     * /
                     */
                    std::string m_coldAction;
                    bool m_coldActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_INDEXPOLICYFIELD_H_
