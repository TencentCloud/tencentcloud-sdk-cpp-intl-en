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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_TASKATTACHINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_TASKATTACHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Some tasks in the task list support specific additional information
                */
                class TaskAttachInfo : public AbstractModel
                {
                public:
                    TaskAttachInfo();
                    ~TaskAttachInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Upgrade task
"FastUpgradeStatus": Indicates the upgrade type. 1 - in-place upgrade; 0 - normal upgrade.
                     * @return AttachKey Upgrade task
"FastUpgradeStatus": Indicates the upgrade type. 1 - in-place upgrade; 0 - normal upgrade.
                     * 
                     */
                    std::string GetAttachKey() const;

                    /**
                     * 设置Upgrade task
"FastUpgradeStatus": Indicates the upgrade type. 1 - in-place upgrade; 0 - normal upgrade.
                     * @param _attachKey Upgrade task
"FastUpgradeStatus": Indicates the upgrade type. 1 - in-place upgrade; 0 - normal upgrade.
                     * 
                     */
                    void SetAttachKey(const std::string& _attachKey);

                    /**
                     * 判断参数 AttachKey 是否已赋值
                     * @return AttachKey 是否已赋值
                     * 
                     */
                    bool AttachKeyHasBeenSet() const;

                    /**
                     * 获取Upgrade task
"FastUpgradeStatus": Indicates the upgrade type. 1 - In-place upgrade; 0 - Normal upgrade.
                     * @return AttachValue Upgrade task
"FastUpgradeStatus": Indicates the upgrade type. 1 - In-place upgrade; 0 - Normal upgrade.
                     * 
                     */
                    std::string GetAttachValue() const;

                    /**
                     * 设置Upgrade task
"FastUpgradeStatus": Indicates the upgrade type. 1 - In-place upgrade; 0 - Normal upgrade.
                     * @param _attachValue Upgrade task
"FastUpgradeStatus": Indicates the upgrade type. 1 - In-place upgrade; 0 - Normal upgrade.
                     * 
                     */
                    void SetAttachValue(const std::string& _attachValue);

                    /**
                     * 判断参数 AttachValue 是否已赋值
                     * @return AttachValue 是否已赋值
                     * 
                     */
                    bool AttachValueHasBeenSet() const;

                private:

                    /**
                     * Upgrade task
"FastUpgradeStatus": Indicates the upgrade type. 1 - in-place upgrade; 0 - normal upgrade.
                     */
                    std::string m_attachKey;
                    bool m_attachKeyHasBeenSet;

                    /**
                     * Upgrade task
"FastUpgradeStatus": Indicates the upgrade type. 1 - In-place upgrade; 0 - Normal upgrade.
                     */
                    std::string m_attachValue;
                    bool m_attachValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_TASKATTACHINFO_H_
