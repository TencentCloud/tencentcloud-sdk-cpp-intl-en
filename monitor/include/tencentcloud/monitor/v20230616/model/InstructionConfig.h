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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_INSTRUCTIONCONFIG_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_INSTRUCTIONCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * Clone prompt configuration
                */
                class InstructionConfig : public AbstractModel
                {
                public:
                    InstructionConfig();
                    ~InstructionConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Role definition</p>
                     * @return RolePosition <p>Role definition</p>
                     * 
                     */
                    std::string GetRolePosition() const;

                    /**
                     * 设置<p>Role definition</p>
                     * @param _rolePosition <p>Role definition</p>
                     * 
                     */
                    void SetRolePosition(const std::string& _rolePosition);

                    /**
                     * 判断参数 RolePosition 是否已赋值
                     * @return RolePosition 是否已赋值
                     * 
                     */
                    bool RolePositionHasBeenSet() const;

                    /**
                     * 获取<p>Core responsibility</p>
                     * @return CoreDuty <p>Core responsibility</p>
                     * 
                     */
                    std::string GetCoreDuty() const;

                    /**
                     * 设置<p>Core responsibility</p>
                     * @param _coreDuty <p>Core responsibility</p>
                     * 
                     */
                    void SetCoreDuty(const std::string& _coreDuty);

                    /**
                     * 判断参数 CoreDuty 是否已赋值
                     * @return CoreDuty 是否已赋值
                     * 
                     */
                    bool CoreDutyHasBeenSet() const;

                    /**
                     * 获取<p>Core principle</p>
                     * @return CoreTruths <p>Core principle</p>
                     * 
                     */
                    std::string GetCoreTruths() const;

                    /**
                     * 设置<p>Core principle</p>
                     * @param _coreTruths <p>Core principle</p>
                     * 
                     */
                    void SetCoreTruths(const std::string& _coreTruths);

                    /**
                     * 判断参数 CoreTruths 是否已赋值
                     * @return CoreTruths 是否已赋值
                     * 
                     */
                    bool CoreTruthsHasBeenSet() const;

                    /**
                     * 获取<p>Style constraints</p>
                     * @return Vibe <p>Style constraints</p>
                     * 
                     */
                    std::string GetVibe() const;

                    /**
                     * 设置<p>Style constraints</p>
                     * @param _vibe <p>Style constraints</p>
                     * 
                     */
                    void SetVibe(const std::string& _vibe);

                    /**
                     * 判断参数 Vibe 是否已赋值
                     * @return Vibe 是否已赋值
                     * 
                     */
                    bool VibeHasBeenSet() const;

                    /**
                     * 获取<p>Notes</p>
                     * @return Boundaries <p>Notes</p>
                     * 
                     */
                    std::string GetBoundaries() const;

                    /**
                     * 设置<p>Notes</p>
                     * @param _boundaries <p>Notes</p>
                     * 
                     */
                    void SetBoundaries(const std::string& _boundaries);

                    /**
                     * 判断参数 Boundaries 是否已赋值
                     * @return Boundaries 是否已赋值
                     * 
                     */
                    bool BoundariesHasBeenSet() const;

                private:

                    /**
                     * <p>Role definition</p>
                     */
                    std::string m_rolePosition;
                    bool m_rolePositionHasBeenSet;

                    /**
                     * <p>Core responsibility</p>
                     */
                    std::string m_coreDuty;
                    bool m_coreDutyHasBeenSet;

                    /**
                     * <p>Core principle</p>
                     */
                    std::string m_coreTruths;
                    bool m_coreTruthsHasBeenSet;

                    /**
                     * <p>Style constraints</p>
                     */
                    std::string m_vibe;
                    bool m_vibeHasBeenSet;

                    /**
                     * <p>Notes</p>
                     */
                    std::string m_boundaries;
                    bool m_boundariesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_INSTRUCTIONCONFIG_H_
