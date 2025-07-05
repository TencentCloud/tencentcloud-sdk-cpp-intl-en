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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_MIGRATEDBITEM_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_MIGRATEDBITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Object in the migration task instance list
                */
                class MigrateDBItem : public AbstractModel
                {
                public:
                    MigrateDBItem();
                    ~MigrateDBItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance name
                     * @return InstanceName Instance name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param _instanceName Instance name
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Instance VIP
                     * @return Vip Instance VIP
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Instance VIP
                     * @param _vip Instance VIP
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Instance Vport
                     * @return Vport Instance Vport
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置Instance Vport
                     * @param _vport Instance Vport
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取Whether the instance can be migrated. Valid values: `1 (yes); `0` (no).
                     * @return Usable Whether the instance can be migrated. Valid values: `1 (yes); `0` (no).
                     * 
                     */
                    int64_t GetUsable() const;

                    /**
                     * 设置Whether the instance can be migrated. Valid values: `1 (yes); `0` (no).
                     * @param _usable Whether the instance can be migrated. Valid values: `1 (yes); `0` (no).
                     * 
                     */
                    void SetUsable(const int64_t& _usable);

                    /**
                     * 判断参数 Usable 是否已赋值
                     * @return Usable 是否已赋值
                     * 
                     */
                    bool UsableHasBeenSet() const;

                    /**
                     * 获取The cause why the instance cannot be migrated
                     * @return Hint The cause why the instance cannot be migrated
                     * 
                     */
                    std::string GetHint() const;

                    /**
                     * 设置The cause why the instance cannot be migrated
                     * @param _hint The cause why the instance cannot be migrated
                     * 
                     */
                    void SetHint(const std::string& _hint);

                    /**
                     * 判断参数 Hint 是否已赋值
                     * @return Hint 是否已赋值
                     * 
                     */
                    bool HintHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Instance VIP
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Instance Vport
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Whether the instance can be migrated. Valid values: `1 (yes); `0` (no).
                     */
                    int64_t m_usable;
                    bool m_usableHasBeenSet;

                    /**
                     * The cause why the instance cannot be migrated
                     */
                    std::string m_hint;
                    bool m_hintHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_MIGRATEDBITEM_H_
