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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_OSNAME_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_OSNAME_H_

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
                * Operating System Information
                */
                class OsName : public AbstractModel
                {
                public:
                    OsName();
                    ~OsName() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>OS type ID</p>
                     * @return MachineOSType <p>OS type ID</p>
                     * 
                     */
                    int64_t GetMachineOSType() const;

                    /**
                     * 设置<p>OS type ID</p>
                     * @param _machineOSType <p>OS type ID</p>
                     * 
                     */
                    void SetMachineOSType(const int64_t& _machineOSType);

                    /**
                     * 判断参数 MachineOSType 是否已赋值
                     * @return MachineOSType 是否已赋值
                     * 
                     */
                    bool MachineOSTypeHasBeenSet() const;

                    /**
                     * 获取<p>OS name</p>
                     * @return Name <p>OS name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>OS name</p>
                     * @param _name <p>OS name</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * <p>OS type ID</p>
                     */
                    int64_t m_machineOSType;
                    bool m_machineOSTypeHasBeenSet;

                    /**
                     * <p>OS name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_OSNAME_H_
