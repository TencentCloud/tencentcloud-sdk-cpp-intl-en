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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ABILITY_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ABILITY_H_

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
                * Features supported by the cluster
                */
                class Ability : public AbstractModel
                {
                public:
                    Ability();
                    ~Ability() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether secondary AZ is supported
                     * @return IsSupportSlaveZone Whether secondary AZ is supported
                     */
                    std::string GetIsSupportSlaveZone() const;

                    /**
                     * 设置Whether secondary AZ is supported
                     * @param IsSupportSlaveZone Whether secondary AZ is supported
                     */
                    void SetIsSupportSlaveZone(const std::string& _isSupportSlaveZone);

                    /**
                     * 判断参数 IsSupportSlaveZone 是否已赋值
                     * @return IsSupportSlaveZone 是否已赋值
                     */
                    bool IsSupportSlaveZoneHasBeenSet() const;

                    /**
                     * 获取The reason why secondary AZ is not supported
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NonsupportSlaveZoneReason The reason why secondary AZ is not supported
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetNonsupportSlaveZoneReason() const;

                    /**
                     * 设置The reason why secondary AZ is not supported
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param NonsupportSlaveZoneReason The reason why secondary AZ is not supported
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetNonsupportSlaveZoneReason(const std::string& _nonsupportSlaveZoneReason);

                    /**
                     * 判断参数 NonsupportSlaveZoneReason 是否已赋值
                     * @return NonsupportSlaveZoneReason 是否已赋值
                     */
                    bool NonsupportSlaveZoneReasonHasBeenSet() const;

                    /**
                     * 获取Whether read-only instance is supported
                     * @return IsSupportRo Whether read-only instance is supported
                     */
                    std::string GetIsSupportRo() const;

                    /**
                     * 设置Whether read-only instance is supported
                     * @param IsSupportRo Whether read-only instance is supported
                     */
                    void SetIsSupportRo(const std::string& _isSupportRo);

                    /**
                     * 判断参数 IsSupportRo 是否已赋值
                     * @return IsSupportRo 是否已赋值
                     */
                    bool IsSupportRoHasBeenSet() const;

                    /**
                     * 获取The reason why read-only instance is not supported
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NonsupportRoReason The reason why read-only instance is not supported
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetNonsupportRoReason() const;

                    /**
                     * 设置The reason why read-only instance is not supported
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param NonsupportRoReason The reason why read-only instance is not supported
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetNonsupportRoReason(const std::string& _nonsupportRoReason);

                    /**
                     * 判断参数 NonsupportRoReason 是否已赋值
                     * @return NonsupportRoReason 是否已赋值
                     */
                    bool NonsupportRoReasonHasBeenSet() const;

                private:

                    /**
                     * Whether secondary AZ is supported
                     */
                    std::string m_isSupportSlaveZone;
                    bool m_isSupportSlaveZoneHasBeenSet;

                    /**
                     * The reason why secondary AZ is not supported
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nonsupportSlaveZoneReason;
                    bool m_nonsupportSlaveZoneReasonHasBeenSet;

                    /**
                     * Whether read-only instance is supported
                     */
                    std::string m_isSupportRo;
                    bool m_isSupportRoHasBeenSet;

                    /**
                     * The reason why read-only instance is not supported
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nonsupportRoReason;
                    bool m_nonsupportRoReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ABILITY_H_
