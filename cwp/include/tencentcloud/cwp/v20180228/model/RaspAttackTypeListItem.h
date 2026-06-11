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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RASPATTACKTYPELISTITEM_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RASPATTACKTYPELISTITEM_H_

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
                * Application protection allowlist attack type list
                */
                class RaspAttackTypeListItem : public AbstractModel
                {
                public:
                    RaspAttackTypeListItem();
                    ~RaspAttackTypeListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Attack Type Name
                     * @return AttackTypeName Attack Type Name
                     * 
                     */
                    std::string GetAttackTypeName() const;

                    /**
                     * 设置Attack Type Name
                     * @param _attackTypeName Attack Type Name
                     * 
                     */
                    void SetAttackTypeName(const std::string& _attackTypeName);

                    /**
                     * 判断参数 AttackTypeName 是否已赋值
                     * @return AttackTypeName 是否已赋值
                     * 
                     */
                    bool AttackTypeNameHasBeenSet() const;

                    /**
                     * 获取Attack Type ID
                     * @return AttackTypeID Attack Type ID
                     * 
                     */
                    int64_t GetAttackTypeID() const;

                    /**
                     * 设置Attack Type ID
                     * @param _attackTypeID Attack Type ID
                     * 
                     */
                    void SetAttackTypeID(const int64_t& _attackTypeID);

                    /**
                     * 判断参数 AttackTypeID 是否已赋值
                     * @return AttackTypeID 是否已赋值
                     * 
                     */
                    bool AttackTypeIDHasBeenSet() const;

                    /**
                     * 获取Feature type of the vulnerability, rasp: vulnerability defense, memshell_inject: memory shell injection
                     * @return Source Feature type of the vulnerability, rasp: vulnerability defense, memshell_inject: memory shell injection
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Feature type of the vulnerability, rasp: vulnerability defense, memshell_inject: memory shell injection
                     * @param _source Feature type of the vulnerability, rasp: vulnerability defense, memshell_inject: memory shell injection
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                private:

                    /**
                     * Attack Type Name
                     */
                    std::string m_attackTypeName;
                    bool m_attackTypeNameHasBeenSet;

                    /**
                     * Attack Type ID
                     */
                    int64_t m_attackTypeID;
                    bool m_attackTypeIDHasBeenSet;

                    /**
                     * Feature type of the vulnerability, rasp: vulnerability defense, memshell_inject: memory shell injection
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RASPATTACKTYPELISTITEM_H_
