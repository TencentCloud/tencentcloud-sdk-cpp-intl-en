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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_INPUTSECURITYGROUPINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_INPUTSECURITYGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Input security group information.
                */
                class InputSecurityGroupInfo : public AbstractModel
                {
                public:
                    InputSecurityGroupInfo();
                    ~InputSecurityGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Input security group ID.
                     * @return Id Input security group ID.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Input security group ID.
                     * @param _id Input security group ID.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Input security group name.
                     * @return Name Input security group name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Input security group name.
                     * @param _name Input security group name.
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
                     * 获取List of allowlist entries.
                     * @return Whitelist List of allowlist entries.
                     * 
                     */
                    std::vector<std::string> GetWhitelist() const;

                    /**
                     * 设置List of allowlist entries.
                     * @param _whitelist List of allowlist entries.
                     * 
                     */
                    void SetWhitelist(const std::vector<std::string>& _whitelist);

                    /**
                     * 判断参数 Whitelist 是否已赋值
                     * @return Whitelist 是否已赋值
                     * 
                     */
                    bool WhitelistHasBeenSet() const;

                    /**
                     * 获取List of bound input streams.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OccupiedInputs List of bound input streams.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetOccupiedInputs() const;

                    /**
                     * 设置List of bound input streams.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _occupiedInputs List of bound input streams.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOccupiedInputs(const std::vector<std::string>& _occupiedInputs);

                    /**
                     * 判断参数 OccupiedInputs 是否已赋值
                     * @return OccupiedInputs 是否已赋值
                     * 
                     */
                    bool OccupiedInputsHasBeenSet() const;

                    /**
                     * 获取Input security group address.
                     * @return Region Input security group address.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Input security group address.
                     * @param _region Input security group address.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * Input security group ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Input security group name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * List of allowlist entries.
                     */
                    std::vector<std::string> m_whitelist;
                    bool m_whitelistHasBeenSet;

                    /**
                     * List of bound input streams.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_occupiedInputs;
                    bool m_occupiedInputsHasBeenSet;

                    /**
                     * Input security group address.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_INPUTSECURITYGROUPINFO_H_
