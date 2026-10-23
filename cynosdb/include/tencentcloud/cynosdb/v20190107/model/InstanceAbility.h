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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCEABILITY_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCEABILITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Operation list allowed for the instance
                */
                class InstanceAbility : public AbstractModel
                {
                public:
                    InstanceAbility();
                    ~InstanceAbility() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether the instance supports forced reboot. Available values: yes: support, no: no support
                     * @return IsSupportForceRestart Whether the instance supports forced reboot. Available values: yes: support, no: no support
                     * 
                     */
                    std::string GetIsSupportForceRestart() const;

                    /**
                     * 设置Whether the instance supports forced reboot. Available values: yes: support, no: no support
                     * @param _isSupportForceRestart Whether the instance supports forced reboot. Available values: yes: support, no: no support
                     * 
                     */
                    void SetIsSupportForceRestart(const std::string& _isSupportForceRestart);

                    /**
                     * 判断参数 IsSupportForceRestart 是否已赋值
                     * @return IsSupportForceRestart 是否已赋值
                     * 
                     */
                    bool IsSupportForceRestartHasBeenSet() const;

                    /**
                     * 获取The causes for not supporting forced reboot
                     * @return NonsupportForceRestartReason The causes for not supporting forced reboot
                     * 
                     */
                    std::string GetNonsupportForceRestartReason() const;

                    /**
                     * 设置The causes for not supporting forced reboot
                     * @param _nonsupportForceRestartReason The causes for not supporting forced reboot
                     * 
                     */
                    void SetNonsupportForceRestartReason(const std::string& _nonsupportForceRestartReason);

                    /**
                     * 判断参数 NonsupportForceRestartReason 是否已赋值
                     * @return NonsupportForceRestartReason 是否已赋值
                     * 
                     */
                    bool NonsupportForceRestartReasonHasBeenSet() const;

                private:

                    /**
                     * Whether the instance supports forced reboot. Available values: yes: support, no: no support
                     */
                    std::string m_isSupportForceRestart;
                    bool m_isSupportForceRestartHasBeenSet;

                    /**
                     * The causes for not supporting forced reboot
                     */
                    std::string m_nonsupportForceRestartReason;
                    bool m_nonsupportForceRestartReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCEABILITY_H_
